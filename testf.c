#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include "filtres.h"

int main( int argc, char *argv[]  )
{
  int fd;
  if ( argc < 3  ){
    printf("Error: faltan parámetros\n");
    exit(1);

  }
  if ((fd = open( argv[1], O_RDONLY  )) == -1){
    perror("Archivo:");
    exit(2);
  }
  fs_head( fd  );
  fs_wc( fd  );
  fs_nl( fd  );
  fs_cut( fd, atoi( argv[2]  )  );
  close( fd  );
  return 0;
}
