// Name: engine_texture.cpp_FUN_0056a8f0
// Address: 0056a8f0
// Address Range: [[0056a8f0, 0056a958]]
// Convention: unknown
// Signature: void engine_texture_cpp_FUN_0056a8f0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_texture_cpp_FUN_0056a8f0(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x18004)) {
    pcVar5 = (char *)(param_1 + 8);
    pcVar6 = (char *)0x2cfd088;
    iVar2 = iVar3;
    pcVar4 = pcVar5;
LAB_0056a915:
    do {
      _DAT_02cfd084 = iVar2;
      cVar1 = *pcVar5;
      *pcVar6 = cVar1;
      if (cVar1 != '\0') {
        cVar1 = pcVar5[1];
        pcVar5 = pcVar5 + 2;
        pcVar6[1] = cVar1;
        pcVar6 = pcVar6 + 2;
        iVar2 = _DAT_02cfd084;
        if (cVar1 != '\0') goto LAB_0056a915;
      }
      engine_texture_cpp_FUN_0056a130(param_1,0x2cfd080,1);
      iVar3 = iVar3 + 1;
      pcVar5 = pcVar4 + 0x60;
      pcVar6 = (char *)0x2cfd088;
      iVar2 = iVar3;
      pcVar4 = pcVar5;
    } while (iVar3 < *(int *)(param_1 + 0x18004));
  }
  return;
}
