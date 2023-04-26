# include <stdio.h>
# include <string.h>

int main() {

  printf( "There are %d characters in the string \"123\\n45\", which is printed as >>%s<<.\n", strlen( "123\n45" ), "123\n45" ) ;
  printf( "There are %d characters in the string \"123\\n\\t45\", which is printed as >>%s<<.\n", strlen( "123\n\t45" ), "123\n\t45" ) ;
  printf( "There are %d characters in the string \"123\\n\\t\\a45\", which is printed as >>%s<<.\n", strlen( "123\n\t\a45" ), "123\n\t\a45" ) ;
  printf( "There are %d characters in the string \"123\\n\\t\\a\\b45\", which is printed as >>%s<<.\n", strlen( "123\n\t\a\b45" ), "123\n\t\a\b45" ) ;

} // main()