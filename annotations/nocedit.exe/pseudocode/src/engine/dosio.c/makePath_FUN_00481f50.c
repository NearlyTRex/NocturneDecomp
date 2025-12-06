// Name: engine_dosio.c_makePath_FUN_00481f50
// Address: 00481f50
// Address Range: [[00481f50, 00481f77]]
// Convention: __cdecl
// Signature: void engine_dosio.c_makePath_FUN_00481f50(char * full_path, char * drive, char * directory, char * filename, char * extension)

#include "nocturne.h"

void __cdecl
engine_dosio_c_makePath_FUN_00481f50
          (char *full_path,char *drive,char *directory,char *filename,char *extension)

{
  crt_file_c_makepath_FUN_005febfc(full_path,drive,directory,filename,extension);
  return;
}
