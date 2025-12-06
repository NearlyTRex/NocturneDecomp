// Name: core_setutil.cpp_readAndParseLine_FUN_00585290
// Address: 00585290
// Address Range: [[00585290, 0058530b]]
// Convention: __cdecl
// Signature: void core_setutil.cpp_readAndParseLine_FUN_00585290(FILE * file_handle, char * output_buffer, int max_length)

#include "nocturne.h"

void __cdecl
core_setutil_cpp_readAndParseLine_FUN_00585290(FILE *file_handle,char *output_buffer,int max_length)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  BADSPACEBASE *in_ESP;
  char *pcVar4;
  char *pcVar5;
  byte bVar6;
  int in_stack_00000010;
  char local_108 [2];
  char acStack_106 [254];
  
  bVar6 = 0;
  crt_stdio_c_fgets_FUN_005fefd0(local_108,0xff,file_handle);
  pcVar4 = acStack_106 + 2;
  uVar2 = 0xffffffff;
  pcVar5 = acStack_106 + 2;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + (uint)bVar6 * -2 + 1;
  } while (cVar1 != '\0');
  if (0 < (int)(~uVar2 - 1)) {
    acStack_106[~uVar2] = '\0';
  }
  iVar3 = -1;
  pcVar5 = acStack_106 + 2;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + (uint)bVar6 * -2 + 1;
  } while (cVar1 != '\0');
  acStack_106[in_stack_00000010 + 2] = '\0';
  do {
    cVar1 = *pcVar4;
    *(char *)max_length = cVar1;
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    *(char *)(max_length + 1) = cVar1;
    max_length = max_length + 2;
  } while (cVar1 != '\0');
  return;
}
