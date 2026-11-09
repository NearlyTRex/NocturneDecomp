// Name: unkafter_trisock.cpp_FUN_0059f1a0
// Address: 0059f1a0
// Address Range: [[0059f1a0, 0059f221]]
// Convention: unknown
// Signature: undefined4 unkafter_trisock_cpp_FUN_0059f1a0(char *param_1,char *param_2)

#include "nocturne.h"

uint unkafter_trisock_cpp_FUN_0059f1a0(char *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint unaff_EBX;
  char *pcVar4;
  
  iVar2 = support_trisock_cpp_parseIPComponents_FUN_0059c5d0((uint *)&stack0xfffffff4,param_1);
  if (iVar2 == 0) {
    gethostbyname(param_1);
    uVar3 = unkafter_trisock_cpp_FUN_0059efd0();
    return uVar3;
  }
  memset(param_2,0,0x2b8);
  pcVar4 = param_2;
  do {
    cVar1 = *param_1;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = param_1[1];
    param_1 = param_1 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  param_2[0x284] = '\x01';
  param_2[0x285] = '\0';
  param_2[0x286] = '\0';
  param_2[0x287] = '\0';
  *(uint *)(param_2 + 0x288) = unaff_EBX;
  return 1;
}
