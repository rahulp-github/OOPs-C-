# Encapsulation

> Why should we use encapsulation when it is much easier to access and change properties if we don't?

The answer is because we don't want to allow other developers to change and access everything they want, but we want to expose only properties that they should be able to see and change, and they can use them only if they obey the rules that we define. In that way, our data stays safe from outside misuse, because if you allow someone to have full permissions and do whatever he/she wants, it's just a matter of time when that person will wander off the intended way of building that system, create some complex overkill logic that is hard to understand, make things very dependent on one another, write duplicated code, etc.
So there are many benefits related to encapsulation: easier to maintain the code, hides the data, easier to test, reusable...

Let me give you one simple example of an application that can be used only by people that are 18+ years old. When the user registers, he enters his age, and there you have to check if his age is greater than 18.
If it is, he should be able to use the app, but if it is not, throw him an error.

Imagine also that the mentioned application has the option to edit user data. That means that the user can change his age after registration as well, so you would have to check again if age greater than 18 and behave accordingly, so writing the same code once more.

And then, if all of a sudden someone decides that the app will be for people who are  21+ only, you have two places where you need to make that change. (This is a simple example, changing 18 with 21 is easy, and having two places where you need to do that is easy, imagine having some complex logic that you need to change in 20 places)

What you can do instead is you can do the "age greater than 18" logic in the setter, and save the user's age if he is older than 18, and then write an error is he is not. That way each time that you want to set a value for the Age property, the same logic is executed, and each time that you have to change something, you do that in one place only.
