using System;
using System.Diagnostics.Metrics;
using System.Reflection.Metadata.Ecma335;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;

class Program
{

    struct Person {

        public string name;
        public int age;
        public int birthMonth;
        public int birthYear;


        public Person(string name, int age, int birthMonth, int birthYear) {

            this.name = name;
            this.age = age;
            this.birthMonth = birthMonth;
            this.birthYear = birthYear;
        }
    }

    static void Main(String[] args)
    {
        Person person = ReturnPerson();
        Console.WriteLine($"Name is {person.name} , age is {person.name} , month is {person.birthMonth} and the year is {person.birthYear}");
    }

    static Person ReturnPerson()
    {
        Console.WriteLine("Enter the name : ");
        string name = (Console.ReadLine());

        Console.WriteLine("Enter the age : ");
        int age = Convert.ToInt32(Console.ReadLine());

        Console.WriteLine("Enter the month : ");
        int birthMonth = Convert.ToInt32(Console.ReadLine());

        Console.WriteLine("Enter the year: ");
        int birthYear = Convert.ToInt32(Console.ReadLine());

        return new Person(name, age, birthMonth, birthYear);


    }
}
            
             

