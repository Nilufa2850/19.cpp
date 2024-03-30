/*3.Define a class Actor with name, age as instance variables and setter, getters as
instance methods. 

# Define a class TVActor as a derived class of Actor with instance variable to store 
number of TV projects done or running and define setter, getter.
Also define setTVActor() and showTVActor(). 

# Define a class MovieActor as a derived class of Actor with instance variable to 
store number of movies doe or running and define setter, getter.
Also define setMovieActor() and showMovieActor().

# Derive a class AllScreenActor from TVActor and MovieActor. Define a method to
setActorData() and showActorData().*/

#include<iostream>
#include<string.h>
using namespace std ;

class Actor
{
    private : 
        char name[30] ;
        int age ;
    public :
        void setName (char name[]) { strcpy(this->name,name) ; }
        void setAge  (int age) { this->age = age ; }
        char* getName (){ return name ; }
        int   getAge  (){ return age ; }
} ;

class TVActor : public Actor
{
    private :
        int TVPCount ;
    public :
        void setTVPCount(int c) { TVPCount = c ; }
        int  getTVPCount ()     { return TVPCount ; }

        void setTvActor (char name[], int age , int count)
        {
            setName(name) ;
            setAge(age) ;
            TVPCount = count ;
        }
        void showTvActor ()
        {
            cout<<"\nName = "<<getName() <<endl ;
            cout<<"Age    = "<<getAge() <<endl ;
            cout<<"Tv Projects = "<<TVPCount<<endl ;
        }
} ;

class MovieActor : public Actor
{
    private :
        int Movie_count ;
    public :
        void setMoive_count(int count) { Movie_count = count ; }
        int getMovie_count () { return Movie_count ; }

        void setMovieActor(char name[] , int age , int count)
        {
            setName(name) ;
            setAge(age) ;
            Movie_count = count ;
        }
        void showMovieActor()
        {
            cout<<"\nName = "<<getName() <<endl ;
            cout<<"Age    = "<<getAge() <<endl ;
            cout<<"No of Movies = "<<Movie_count<<endl ;
        }
} ;

class AllScreenActor : virtual public TVActor ,virtual public MovieActor 
{
    public :
        void setActorData(char name[] , int age , int count1 , int count2)
        {
            setName(name) ;
            setAge(age) ;
            setTVPCount(count1) ;
            setMoive_count(count2) ;
        }
        void showActorData()
        {
            cout<<"\nName = "<<getName() <<endl ;
            cout<<"Age    = "<<getAge() <<endl ;
            cout<<"Tv Projects = "<<getTVPCount()<<endl ;
            cout<<"No of Movies = "<<getMovie_count()<<endl ;
            cout<<"\nThank You\n" ;
        }
} ;

int main ()
{
    char name[30] = "Nilufa Yasmin" ;

    AllScreenActor x ;
    x.setActorData(name,20,15,10) ;
    x.showActorData() ;
    return 0 ;
}

