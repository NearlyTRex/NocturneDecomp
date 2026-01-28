// Name: engine_dosio.c_removeFileExtension_FUN_00482040
// Address: 00482040
// Address Range: [[00482040, 0048204f]]
// Convention: __cdecl
// Signature: void __cdecl engine_dosio_c_removeFileExtension_FUN_00482040(char *source_path,char *destination_buffer)

#include "nocturne.h"

void __cdecl
engine_dosio_c_removeFileExtension_FUN_00482040(char *source_path,char *destination_buffer)

{
  char *unaff_retaddr;
  
  engine_dosio_c_changeFileExtension_FUN_00482050(source_path,(char *)0x0,unaff_retaddr);
  return;
}
