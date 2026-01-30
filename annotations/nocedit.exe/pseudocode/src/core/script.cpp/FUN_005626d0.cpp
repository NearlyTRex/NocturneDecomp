// Name: core_script.cpp_FUN_005626d0
// Address: 005626d0
// Address Range: [[005626d0, 00562758]]
// Convention: __cdecl
// Signature: int __cdecl core_script_cpp_FUN_005626d0(int param_1,int param_2)

#include "nocturne.h"

int __cdecl core_script_cpp_FUN_005626d0(int param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  
  uVar2 = 0xffffffff;
  pcVar6 = (char *)(param_1 + 4);
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  uVar3 = 0xffffffff;
  pcVar6 = (char *)(param_1 + 0x68);
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  iVar4 = ~uVar2 + (~uVar3 - 2);
  if (*(int *)(param_1 + 0xcc) < param_2) {
    param_2 = *(int *)(param_1 + 0xcc);
  }
  iVar5 = 0;
  if (0 < param_2) {
    pcVar6 = (char *)(param_1 + 0x134);
    do {
      uVar2 = 0xffffffff;
      pcVar7 = (char *)(iVar5 * 0x328 + param_1 + 0xd0);
      do {
        if (uVar2 == 0) break;
        uVar2 = uVar2 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      iVar5 = iVar5 + 1;
      uVar3 = 0xffffffff;
      pcVar7 = pcVar6;
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      pcVar6 = pcVar6 + 0x328;
      iVar4 = iVar4 + ~uVar2 + (~uVar3 - 2);
    } while (iVar5 < param_2);
  }
  return iVar4;
}
