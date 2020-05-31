# Zadanie2A - Obliczanie pola kwadratu i szescianu
## ver: 0.0.2
## created: 29.05.2020
## updated: 31.05.2020
## Krotki opis:
### Program ma za zadanie zapytac uzytkownika o liczbe, w zamian program policzy pole kwadratu podanej wartosci typu double  pole powierzchni calkowitej szescianu oraz objetosc danego  szescianu.

### Skompilowany program powinnien w folderze /include posiadac bibiloteke wspodzielona .la jak i statyczna .a. Utworzono 3 pliki Makefile w celu poprawnego zainicjonowania i polaczenia bibliotek miedzy soba. Plik configure.ac z ustawionymi opcjami libtool automake. 

### Dodano branch "issue" dot. biblioteki wspodzielonej i statycznej

### Quick steps how to use program:
1. Sprawdz czy zostaly zainstalowane funkcje automake 
```diff
! W celu instalacji potrzebnych pakietow musisz przejsc w tryb root, poczym 
sudo apt-get install autoconf
sudo apt-get install automake
sudo apt-get install libtool
```
2. W terminalu wprowadz ``autoreconf -i``
```diff
! W tym etapie moga pojawic sie komuniakty o braku zainstalowanych funkcji typu aclocal, aby program zadzialal nalezy dodac funkcje wpisujac polecenie aclocal
```
3. Nastepnie ``autoconf`` po czym ``automake`` 
```diff
! W tym miesjcu trzeba zaznaczyc, ze aby doszlo do kompilacji potrzebujemy kompilatora sprawdzamy to komenda gcc -v, po kompletnej instalacji ponownie probujemy ./configure i make 
```
4. Kompilujemy ``./configure``,po przekompilowaniu wpisujemy ``make``
5. W tym momencie nasz program jest kompilowany
6. W celu uruchomienia naszego programu wpisujemy ``./src/main``
7. Program powininen wyswietlic zadanie wpisania danej liczby oraz wyswietlic wyniki dotyczace pola kwadratu, pola calkowitego szescianu oraz objetosci szescianu.




