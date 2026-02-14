// Name: engine_dosio.c_getRelativeFilePath_FUN_004816c0
// Address: 004816c0
// Address Range: [[004816c0, 00481706]]
// Convention: __cdecl
// Signature: void __cdecl engine_dosio_c_getRelativeFilePath_FUN_004816c0(char *dest_path,char *directory,char *filename)

#include "nocturne.h"

void __cdecl engine_dosio_c_getRelativeFilePath_FUN_004816c0(char *dest_path,char *directory,char *filename)

{
  char cVar1;
  
  if ((directory != (char *)0x0) && (*directory != '\0')) {
    _sprintf(dest_path,"%s\\%s",directory,filename);
    return;
  }
  do {
    cVar1 = *filename;
    *dest_path = cVar1;
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = filename[1];
    filename = filename + 2;
    dest_path[1] = cVar1;
    dest_path = dest_path + 2;
  } while (cVar1 != '\0');
  return;
}
