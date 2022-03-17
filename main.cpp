#include <iostream>
void tabDisplayer(int *tab, int size){
    for (int i = 0; i<size; i++){
        std::cout<<tab[i] << " ";
    }
}
void tabExpander(int *&values, int &size, int element){
    //tabDisplayer(values, size);
    int *tab = NULL;
    int *newTab = NULL;
    size++;
    newTab = (int *) realloc(tab, size * sizeof(int));
    for (int i = 0; i<size-1; i++){
        newTab[i] = values[i];
    }
    newTab[size-1] = element;
    values = newTab;
    tabDisplayer(values,size);
    std::cout<<std::endl;
    delete []tab;
}
int main() {
    int values[] = {4, 5, 8, 3, 8, 2};
    int size = sizeof(values)/sizeof(int);
    int * tab = (int *) values;
    tabExpander(tab,size,69);
    tabDisplayer(tab,7);
    std::cout<<std::endl<<size <<std::endl;

    return 0;
}
