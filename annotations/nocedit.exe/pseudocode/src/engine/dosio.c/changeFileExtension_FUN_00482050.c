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
  BADSPACEBASE *in_ESP;
  char acStack_204 [252];
  char local_108 [4];
  char acStack_104 [252];
  char local_8 [4];
  
  engine_dosio_c_splitPath_FUN_00481f20(source_path,local_8,local_108,&stack0xfffffdf8,(char *)0x0);
  engine_dosio_c_makePath_FUN_00481f50
            (destination_buffer,&stack0xfffffffc,acStack_104,acStack_204,new_extension);
  return;
}
