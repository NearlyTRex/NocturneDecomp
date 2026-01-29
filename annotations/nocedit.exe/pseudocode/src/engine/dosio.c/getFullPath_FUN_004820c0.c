// Name: engine_dosio.c_getFullPath_FUN_004820c0
// Address: 004820c0
// Address Range: [[004820c0, 00482103]]
// Convention: __cdecl
// Signature: int __cdecl engine_dosio_c_getFullPath_FUN_004820c0(char *output_path,char *input_path)

#include "nocturne.h"

int __cdecl engine_dosio_c_getFullPath_FUN_004820c0(char *output_path,char *input_path)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = _fullpath(output_path,input_path,0x100);
  if (pcVar2 == output_path) {
    return 1;
  }
  do {
    cVar1 = *input_path;
    *output_path = cVar1;
    if (cVar1 == '\0') {
      return 0;
    }
    cVar1 = input_path[1];
    input_path = input_path + 2;
    output_path[1] = cVar1;
    output_path = output_path + 2;
  } while (cVar1 != '\0');
  return 0;
}
