// Name: engine_dosio.c_changeFileExtension_FUN_00482050
// Address: 00482050
// Address Range: [[00482050, 004820b2]]
// Convention: __cdecl
// Signature: void engine_dosio.c_changeFileExtension_FUN_00482050(char * source_path, char * destination_buffer, char * new_extension)

#include "nocturne.h"

void __cdecl
engine_dosio_c_changeFileExtension_FUN_00482050
          (char *source_path,char *destination_buffer,char *new_extension)

{
  char local_208 [256];
  char local_108 [256];
  char local_8 [4];
  
  engine_dosio_c_splitPath_FUN_00481f20(source_path,local_8,local_108,local_208,(char *)0x0);
  engine_dosio_c_makePath_FUN_00481f50(source_path,local_8,local_108,local_208,destination_buffer);
  return;
}
