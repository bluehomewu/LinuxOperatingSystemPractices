# include <stdio.h>
int main() {
  char ch ;
  while ( ( ch = getchar() ) != EOF )  // How does this expression work?
    putchar( ch ) ;
} // main()