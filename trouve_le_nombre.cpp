#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main () {
    srand(time(0));
    int nombre_secret = rand () % 20 + 1;
    int guess;
    int compteur = 0;

    cout << "devine le nombre entre 1 et 20" << endl;
    while (true)
    {
        cout << " entre ton nombre : " << endl;
        cin >> guess;

        compteur ++;

        if (guess > nombre_secret)
        {
            cout << "trop grand : " << endl;
        }
        else if (guess < nombre_secret)
        {
            cout << "trop petit : " << endl;
        }
        else{
            cout << "bravo tu as trouver en " << compteur << " essais" << endl;
            break;
        }
    }
    return 0;
    
}
