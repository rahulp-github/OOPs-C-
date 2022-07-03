// https://www.youtube.com/watch?v=-W-TYjL0aFE&list=PL43pGnjiVwgTJg7uz8KUGdXRdGKE0W_jN&index=4

#include <iostream>
#include <list>
using namespace std;

// Base Class
class YouTubeChannel {

// Accessible only in the YouTubeChannel Class
private:
	string Name;
	int SubscribersCount;
	list<string> PublishedVideoTitles;

// Accessible in current class and derived class
protected:
    string OwnerName;

// Publicly exposed can be used anywhere
public:
	YouTubeChannel(string name, string ownerName) {
		Name = name;
		OwnerName = ownerName;
		SubscribersCount = 0;
	}
	void GetInfo() {
		cout << "Name: " << Name << endl;
		cout << "OwnerName: " << OwnerName << endl;
		cout << "SubscribersCount: " << SubscribersCount << endl;
		cout << "Videos: " << endl;
		for (string videoTitle : PublishedVideoTitles) {
			cout << videoTitle << endl;
		}
	}
	void Subscribe() {
		SubscribersCount++;
	}
	void Unsubscribe() {
		if (SubscribersCount > 0)
			SubscribersCount--;
	}
	void PublishVideo(string title) {
		PublishedVideoTitles.push_back(title);
	}
};

// Derived class from base Class i.e YouTubeChannel
class CookingYoutubeChannel :public YouTubeChannel {
    public:  
        CookingYoutubeChannel(string name,string ownerName): YouTubeChannel(name,ownerName){

        }
    
    // Only Accessible to Derived Class i.e CookingYoutubeChannel
    void GetDescription(){
        cout << OwnerName << " Cooking Channel !";
    }
};

int main()
{
    CookingYoutubeChannel yt1("Dummy1","Rahul1");
    CookingYoutubeChannel yt2("Dummy2","Rahul2");
    yt1.Subscribe();
    yt1.Subscribe();
    yt2.Subscribe();
    yt1.GetInfo();
    yt2.GetInfo();
    yt1.GetDescription();
}