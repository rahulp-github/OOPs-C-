// https://www.youtube.com/watch?v=a8ZB-TPB6EU&list=PL43pGnjiVwgTJg7uz8KUGdXRdGKE0W_jN&index=3

#include <iostream>
#include <list>
using namespace std;

class YouTubeChannel {
private:
	string Name;
	string OwnerName;
	int SubscribersCount;
	list<string> PublishedVideoTitles;

public:
	YouTubeChannel(string name, string ownerName) {
		Name = name;
		OwnerName = ownerName;
		SubscribersCount = 0;
	}

	void Subscribe(){
		SubscribersCount++;
	}

	void Unsubscribe(){
		if(SubscribersCount > 0)
			SubscribersCount--;
	}

	void PublishVideo(string title){
		PublishedVideoTitles.push_back(title);
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
};

int main()
{
	YouTubeChannel ytChannel("CodeBeauty", "Saldina");
	ytChannel.Subscribe();
	ytChannel.Subscribe();
	ytChannel.Subscribe();
	ytChannel.Unsubscribe();
	ytChannel.PublishVideo("Video 1");
	ytChannel.GetInfo();
}