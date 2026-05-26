// Name: core_setutil.cpp_readAndParseLine_FUN_00585290
// Address: 00585290
// MANUAL RECONSTRUCTION
// Address Range: [[00585290, 0058530b]]
// Convention: __cdecl
// Signature: void __cdecl core_setutil_cpp_readAndParseLine_FUN_00585290(_FILE *file_handle,char *output_buffer,int max_length)

#include "nocturne.h"

void __cdecl core_setutil_cpp_readAndParseLine_FUN_00585290(_FILE *file_handle,char *output_buffer,int max_length)

{
  int iVar3;
  char local_108 [256];

  _fgets(local_108,0xff,file_handle);
  iVar3 = strlen(local_108);
  if (0 < iVar3) {
    local_108[iVar3 - 1] = '\0';
  }
  local_108[max_length] = '\0';
  strcpy(output_buffer,local_108);
  return;
}
