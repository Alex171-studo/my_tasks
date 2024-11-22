    int my_print_comb2(void){
    int i,j;
    for(i = 0; i <= 8; i++ ) {
        for ( j = i + 1 ; j <= 9; j++ ) {
	  my_putchar (0 + '0' );
	  my_putchar (0 + '0' );
	  my_putchar (' ' );
	  my_putchar (i + '0' );
	  my_putchar ( j + '0') ;
	  my_putchar ( ',' );
	  my_putchar (' ' );
    }
    }	
     return 0;
     }
      
