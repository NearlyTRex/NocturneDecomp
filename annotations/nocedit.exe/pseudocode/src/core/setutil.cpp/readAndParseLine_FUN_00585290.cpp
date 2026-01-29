// Name: core_setutil.cpp_readAndParseLine_FUN_00585290
// Address: 00585290
// Address Range: [[00585290, 0058530b]]
// Convention: __cdecl
// Signature: void __cdecl core_setutil_cpp_readAndParseLine_FUN_00585290 (_FILE *file_handle,char *output_buffer,int max_length)

#include "nocturne.h"

void __cdecl
core_setutil_cpp_readAndParseLine_FUN_00585290
          (_FILE *file_handle,char *output_buffer,int max_length)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  byte bVar6;
  char local_108 [256];
  
  bVar6 = 0;
  _fgets(local_108,0xff,file_handle);
  pcVar4 = local_108;
  uVar2 = 0xffffffff;
  pcVar5 = local_108;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + (uint)bVar6 * -2 + 1;
  } while (cVar1 != '\0');
  if (0 < (int)(~uVar2 - 1)) {
    local_108[~uVar2 - 2] = '\0';
  }
  iVar3 = -1;
  pcVar5 = local_108;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + (uint)bVar6 * -2 + 1;
  } while (cVar1 != '\0');
  local_108[max_length] = '\0';
  do {
    cVar1 = *pcVar4;
    *output_buffer = cVar1;
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    output_buffer[1] = cVar1;
    output_buffer = output_buffer + 2;
  } while (cVar1 != '\0');
  return;
}
