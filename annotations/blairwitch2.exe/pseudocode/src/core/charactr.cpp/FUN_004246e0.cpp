// Name: core_charactr.cpp_FUN_004246e0
// Address: 004246e0
// Address Range: [[004246e0, 004247e0]]
// Convention: unknown
// Signature: void core_charactr_cpp_FUN_004246e0(int param_1,int param_2,int param_3)

#include "nocturne.h"

void core_charactr_cpp_FUN_004246e0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  short *psVar9;
  int local_14;
  
  iVar7 = 0;
  iVar1 = *(int *)(param_1 + 0xc24 + param_2 * 0x60);
  iVar2 = 0;
  iVar5 = param_1;
  if (0 < param_2) {
    do {
      iVar2 = iVar2 + 1;
      iVar7 = iVar7 + *(int *)(iVar5 + 0xc24);
      iVar5 = iVar5 + 0x60;
    } while (iVar2 < param_2);
  }
  iVar5 = *(int *)(param_1 + 0x7c);
  iVar2 = *(int *)(param_1 + 0xc24 + param_3 * 0x60);
  iVar8 = 0;
  iVar3 = 0;
  iVar6 = param_1;
  if (0 < param_3) {
    do {
      iVar3 = iVar3 + 1;
      iVar8 = iVar8 + *(int *)(iVar6 + 0xc24);
      iVar6 = iVar6 + 0x60;
    } while (iVar3 < param_3);
  }
  local_14 = 0;
  psVar9 = (short *)(*(int *)(param_1 + 0x7c) + iVar8 * 0x12);
  if (0 < iVar2) {
    do {
      iVar6 = 0;
      psVar4 = (short *)(iVar5 + iVar7 * 0x12);
      if (0 < iVar1) {
        do {
          if (((*psVar9 == *psVar4) && (psVar9[1] == psVar4[1])) && (psVar9[2] == psVar4[2])) {
            *(uint *)psVar4 = *(uint *)psVar9;
            *(uint *)(psVar4 + 2) = *(uint *)(psVar9 + 2);
            *(uint *)(psVar4 + 4) = *(uint *)(psVar9 + 4);
            *(uint *)(psVar4 + 6) = *(uint *)(psVar9 + 6);
            psVar4[8] = psVar9[8];
          }
          iVar6 = iVar6 + 1;
          psVar4 = psVar4 + 9;
        } while (iVar6 < iVar1);
      }
      local_14 = local_14 + 1;
      psVar9 = psVar9 + 9;
    } while (local_14 < iVar2);
  }
  return;
}
