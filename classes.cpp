using System;
using System.Diagnostics.Metrics;
using System.Reflection.Metadata.Ecma335;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;

class Program
{
    class person
    {
        public string name;
        public int age;
        public person(string name, int age)
        {
            this.name = name;
            this.age = age;
        }

        static void Main(string[] args)
        {
            Console.Write("Enter the name : ");
            string name = Console.ReadLine();

            Console.Write("Enter the age : ");
            int age = Convert.ToInt32(Console.ReadLine());

            person person = new person(name, age);

            Console.WriteLine(person.name);
            Console.WriteLine(person.age);
        }
    }
}
