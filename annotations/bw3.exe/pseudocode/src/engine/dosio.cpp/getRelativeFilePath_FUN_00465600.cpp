// Name: engine_dosio.cpp_getRelativeFilePath_FUN_00465600
// Address: 00465600
// Address Range: [[00465600, 00465646]]
// Convention: __cdecl
// Signature: void __cdecl engine_dosio_cpp_getRelativeFilePath_FUN_00465600(char *dest_path,char *directory,char *filename)

#include "nocturne.h"

void __cdecl engine_dosio_cpp_getRelativeFilePath_FUN_00465600(char *dest_path,char *directory,char *filename)

{
  char cVar1;
  
  if ((directory != (char *)0x0) && (*directory != '\0')) {
    FUN_005a28c0(dest_path,"%s\\%s",directory,filename);
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
