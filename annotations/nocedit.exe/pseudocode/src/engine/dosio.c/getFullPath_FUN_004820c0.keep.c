// Name: engine_dosio.c_getFullPath_FUN_004820c0
// Address: 004820c0
// MANUAL RECONSTRUCTION
// Address Range: [[004820c0, 00482103]]
// Convention: __cdecl
// Signature: int __cdecl engine_dosio_c_getFullPath_FUN_004820c0(char *output_path,char *input_path)

#include "nocturne.h"

int __cdecl engine_dosio_c_getFullPath_FUN_004820c0(char *output_path,char *input_path)

{
  char *pcVar2;

  pcVar2 = _fullpath(output_path,input_path,0x100);
  if (pcVar2 == output_path) {
    return 1;
  }
  strcpy(output_path, input_path);
  return 0;
}
