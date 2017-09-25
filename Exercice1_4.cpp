/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Exercice1_4.cpp
 * Author: czeller-heig
 *
 * Created on September 25, 2017, 3:07 PM
 */

#include <cstdlib>
#include <string>

using namespace std;

/*
 * 
 */
int main() {
    
    string name_first;
    int age;
    int current_year = 2017;
    
    cout << "Hi,\nWhat's your name ? " << endl; 
    getline(cin, name_first);
    
    cout << "How old are u? " << endl;
    cin >> age;
    
    cout << "Hello " << name_first << endl;
    cout << "You're " << age << "years old, and born in " << current_year-age << ".";
    return 0;
}

