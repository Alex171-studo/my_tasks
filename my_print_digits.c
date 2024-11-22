int my_print_digits (void) {
  int  i;
  for(i = 0; i <= 9; i++ ){
    my_putchar (i + '0' );
    my_putchar (' ');
  }
  return 0;
}
