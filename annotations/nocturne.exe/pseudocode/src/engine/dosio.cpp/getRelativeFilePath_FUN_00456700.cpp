// Name: engine_dosio.cpp_getRelativeFilePath_FUN_00456700
// Address: 00456700
// Address Range: [[00456700, 00456746]]
// Convention: __cdecl
// Signature: void __cdecl engine_dosio_cpp_getRelativeFilePath_FUN_00456700(char *dest_path,char *directory,char *filename)

#include "nocturne.h"

void __cdecl engine_dosio_cpp_getRelativeFilePath_FUN_00456700(char *dest_path,char *directory,char *filename)

{
  char cVar1;
  
  if ((directory != (char *)0x0) && (*directory != '\0')) {
    _sprintf(dest_path,"%s\\%s");
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
