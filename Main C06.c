#include <unistd.h>

void    ft_putchar(char c){
    write(1,&c,1);
}
int main(){
	char x = 's';
	ft_putchar(char x);
	}





void ft_print_alphabet(void){
    char xx = 'a';
    while(xx <= 'z'){
        write(1, &xx, 1);
        xx++;
    }
}
int main(){
	ft_print_alphabet();
	}
	
	
	
	
	
#include <unistd.h>

void ft_print_reverse_alphabet(void){
    char xx = 'z';
    while(xx >= 'a'){
        write(1, &xx, 1);
        xx--;
    }
}
int main(){
	ft_print_reverse_alphabet();
	}
	




#include <unistd.h>

void ft_print_numbers(void){
    int x = '0';
    while (x < '9'){
        write(1, &x, 1);
        x++;
    }
    
}
    
}
int main(){
	ft_print_numbers();
	}
	



	
#include <unistd.h>

void ft_is_negative(int n){

    if(n >= 0){
        write(1,"P",1);
    }
    else{
        write(1,"N",1);
    }

}	
int main(){
	ft_is_negative();
	}




