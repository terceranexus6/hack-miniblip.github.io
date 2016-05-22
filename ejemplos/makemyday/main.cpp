// miniblip led matrix demo

#include "mbed.h"
#include "neopixel.h"

// Matrix led output pin
#define DATA_PIN P0_9

DigitalIn pushbutton(P0_23);

void void_matrix(neopixel::Pixel* aux, int tam=25){
    
    for(int i=0;i<tam;i++){
        aux[i].red=0;
        aux[i].green=0;
        aux[i].blue=0;
    }
}

//Si color = 1 --> rojo. Si color = 2 --> azul Si color = 3 --> azul
void encenderLed(neopixel::Pixel* aux,int posicion,int color){
    
    if(color == 3){
        aux[posicion].red = 0x11;
        aux[posicion].blue = 0x00;
        aux[posicion].green = 0x00;
    }else if(color == 2){
        aux[posicion].red = 0x00;
        aux[posicion].blue = 0x11;
        aux[posicion].green = 0x00;
    }else if(color == 1){
        aux[posicion].red = 0x00;
        aux[posicion].blue = 0x00;
        aux[posicion].green = 0x11;        
    }else if(color == 4){
        aux[posicion].red = 0x00;
        aux[posicion].blue = 0x00;
        aux[posicion].green = 0x00; 
        
    }
}

//Si color = 1 --> rojo. Si color = 2 --> azul Si color = 3 --> azul

void normal(neopixel::Pixel* aux){
    
    void_matrix(aux);
    encenderLed(aux,8,1);
    encenderLed(aux,6,1);    
    encenderLed(aux,12,1);    
    encenderLed(aux,18,1);
    encenderLed(aux,16,1);    
    }


void M(neopixel::Pixel* aux){
    
    void_matrix(aux);
    encenderLed(aux,24,1);
    encenderLed(aux,19,1);    
    encenderLed(aux,14,1);    
    encenderLed(aux,9,1);
    encenderLed(aux,4,1);    
    encenderLed(aux,8,1); 
    encenderLed(aux,12,1);
    encenderLed(aux,6,1);
    encenderLed(aux,0,1);
    encenderLed(aux,5,1);
    encenderLed(aux,10,1);
    encenderLed(aux,15,1);
    encenderLed(aux,20,1);
    }
    
    
void A(neopixel::Pixel* aux){
    
    void_matrix(aux);
    encenderLed(aux,23,1);
    encenderLed(aux,18,1);    
    encenderLed(aux,13,1);    
    encenderLed(aux,8,1);
    encenderLed(aux,3,1);  
    encenderLed(aux,12,1);  
    encenderLed(aux,2,1); 
    encenderLed(aux,1,1);
    encenderLed(aux,6,1);
    encenderLed(aux,11,1);
    encenderLed(aux,16,1);
    encenderLed(aux,21,1);
    }
    
void K(neopixel::Pixel* aux){
    
    void_matrix(aux);
    encenderLed(aux,4,1);
    encenderLed(aux,9,1);    
    encenderLed(aux,14,1);    
    encenderLed(aux,19,1);
    encenderLed(aux,24,1);    
    encenderLed(aux,18,1); 
    encenderLed(aux,13,1);
    encenderLed(aux,12,1);
    encenderLed(aux,17,1);
    encenderLed(aux,6,1);
    encenderLed(aux,0,1);
    encenderLed(aux,21,1);
    encenderLed(aux,20,1);
    }
    
void E(neopixel::Pixel* aux){
    
    void_matrix(aux);
    encenderLed(aux,4,1);
    encenderLed(aux,9,1);    
    encenderLed(aux,14,1);    
    encenderLed(aux,19,1);
    encenderLed(aux,24,1); 
    
    encenderLed(aux,3,1);
    encenderLed(aux,2,1);
    encenderLed(aux,1,1);
    encenderLed(aux,0,1);
    encenderLed(aux,23,1);
    encenderLed(aux,20,1);
    encenderLed(aux,22,1);
    encenderLed(aux,21,1);
    encenderLed(aux,13,1);
    encenderLed(aux,12,1);    
    encenderLed(aux,11,1);    
    
    }
    
    
void Y(neopixel::Pixel* aux){
    
    void_matrix(aux);
    encenderLed(aux,4,1);
    encenderLed(aux,8,1);    
    encenderLed(aux,12,1);    
    encenderLed(aux,6,1);
    encenderLed(aux,0,1);    
    encenderLed(aux,17,1); 
    encenderLed(aux,22,1);

    }

void D(neopixel::Pixel* aux){
    
    void_matrix(aux);
    encenderLed(aux,4,1);
    encenderLed(aux,9,1);    
    encenderLed(aux,14,1);    
    encenderLed(aux,19,1);
    encenderLed(aux,24,1); 
    
    encenderLed(aux,3,1);
    encenderLed(aux,2,1);    
    encenderLed(aux,6,1);    
    encenderLed(aux,11,1);
    encenderLed(aux,16,1);
    encenderLed(aux,23,1);
    encenderLed(aux,22,1);    
      
    }
    

    
    

int main() {
    
    neopixel::Pixel vector[25];
    
    neopixel::PixelArray array(DATA_PIN);
    
    int contador = 0;
    while(true){
        
        normal(vector);
        array.update(vector,25);
        
        if(pushbutton){
            M(vector);
            array.update(vector,25);            
            wait_ms(500);
                 
            A(vector);
            array.update(vector,25);
            wait_ms(500);
            
            K(vector);
            array.update(vector,25);
            wait_ms(500);
            
            E(vector);
            array.update(vector,25);    
            wait_ms(500);
            
            M(vector);
            array.update(vector,25);    
            wait_ms(500);
            
            Y(vector);
            array.update(vector,25);    
            wait_ms(500);
            
            D(vector);
            array.update(vector,25);    
            wait_ms(500);
            
            A(vector);
            array.update(vector,25);    
            wait_ms(500);
            
            Y(vector);
            array.update(vector,25);    
            wait_ms(500);
        //++contador;
    
        }else{
    
        normal(vector);
        array.update(vector,25);    
    
    }
    
    }
    
    
    
    
    
}
