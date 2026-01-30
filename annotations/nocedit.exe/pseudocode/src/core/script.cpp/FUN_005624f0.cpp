// Name: core_script.cpp_FUN_005624f0
// Address: 005624f0
// Address Range: [[005624f0, 00562615]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_FUN_005624f0(int param_1,char *param_2)

#include "nocturne.h"

void __cdecl core_script_cpp_FUN_005624f0(int param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  
  pcVar4 = (char *)(param_1 + 4);
  pcVar5 = param_2;
  do {
    cVar1 = *pcVar4;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  pcVar4 = (char *)(param_1 + 0x68);
  iVar2 = -1;
  pcVar5 = param_2;
  do {
    pcVar6 = pcVar5;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar6 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar6;
  } while (cVar1 != '\0');
  pcVar6 = pcVar6 + -1;
  do {
    cVar1 = *pcVar4;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0xcc)) {
    pcVar5 = (char *)(param_1 + 0x134);
    do {
      pcVar6 = (char *)(iVar2 * 0x328 + param_1 + 0xd0);
      iVar3 = -1;
      pcVar4 = param_2;
      do {
        pcVar7 = pcVar4;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar7 = pcVar4 + 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar7;
      } while (cVar1 != '\0');
      pcVar7 = pcVar7 + -1;
      do {
        cVar1 = *pcVar6;
        *pcVar7 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        pcVar7[1] = cVar1;
        pcVar7 = pcVar7 + 2;
      } while (cVar1 != '\0');
      iVar3 = -1;
      pcVar4 = param_2;
      do {
        pcVar6 = pcVar4;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar6 = pcVar4 + 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar6;
      } while (cVar1 != '\0');
      pcVar6 = pcVar6 + -1;
      pcVar4 = pcVar5;
      do {
        cVar1 = *pcVar4;
        *pcVar6 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar6[1] = cVar1;
        pcVar6 = pcVar6 + 2;
      } while (cVar1 != '\0');
      iVar2 = iVar2 + 1;
      pcVar5 = pcVar5 + 0x328;
    } while (iVar2 < *(int *)(param_1 + 0xcc));
  }
  pcVar5 = (char *)(param_1 + 0x2060);
  iVar2 = -1;
  do {
    pcVar4 = param_2;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar4 = param_2 + 1;
    cVar1 = *param_2;
    param_2 = pcVar4;
  } while (cVar1 != '\0');
  pcVar4 = pcVar4 + -1;
  do {
    cVar1 = *pcVar5;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  return;
}
