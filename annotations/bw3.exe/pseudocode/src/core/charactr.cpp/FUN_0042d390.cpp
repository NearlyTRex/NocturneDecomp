// Name: core_charactr.cpp_FUN_0042d390
// Address: 0042d390
// Address Range: [[0042d390, 0042d4f8]]
// Convention: unknown
// Signature: void core_charactr_cpp_FUN_0042d390(int *param_1,int param_2,int param_3)

#include "nocturne.h"

void core_charactr_cpp_FUN_0042d390(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  short *psVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  short *psVar10;
  int *local_28;
  int local_24;
  int local_20;
  int local_14;
  
  local_28 = param_1 + param_2 * 0x18;
  local_20 = 0;
  for (local_24 = 0; local_24 < *param_1; local_24 = local_24 + 1) {
    iVar4 = 0;
    iVar7 = 0;
    iVar2 = local_28[0x309];
    iVar8 = local_20 + (int)param_1;
    if (0 < param_2) {
      do {
        piVar1 = (int *)(iVar8 + 0xc24);
        iVar8 = iVar8 + 0x60;
        iVar7 = iVar7 + 1;
        iVar4 = iVar4 + *piVar1;
      } while (iVar7 < param_2);
    }
    iVar7 = *(int *)((int)param_1 + local_20 + 0x7c);
    iVar3 = *(int *)((int)param_1 + local_20 + param_3 * 0x60 + 0xc24);
    iVar9 = 0;
    iVar5 = 0;
    iVar8 = local_20 + (int)param_1;
    if (0 < param_3) {
      do {
        piVar1 = (int *)(iVar8 + 0xc24);
        iVar8 = iVar8 + 0x60;
        iVar9 = iVar9 + 1;
        iVar5 = iVar5 + *piVar1;
      } while (iVar9 < param_3);
    }
    psVar10 = (short *)(*(int *)((int)param_1 + local_20 + 0x7c) + iVar5 * 0x12);
    local_14 = 0;
    if (0 < iVar3) {
      do {
        iVar8 = 0;
        psVar6 = (short *)(iVar7 + iVar4 * 0x12);
        if (0 < iVar2) {
          do {
            if (((*psVar10 == *psVar6) && (psVar10[1] == psVar6[1])) && (psVar10[2] == psVar6[2])) {
              *(uint *)psVar6 = *(uint *)psVar10;
              *(uint *)(psVar6 + 2) = *(uint *)(psVar10 + 2);
              *(uint *)(psVar6 + 4) = *(uint *)(psVar10 + 4);
              *(uint *)(psVar6 + 6) = *(uint *)(psVar10 + 6);
              psVar6[8] = psVar10[8];
            }
            iVar8 = iVar8 + 1;
            psVar6 = psVar6 + 9;
          } while (iVar8 < iVar2);
        }
        local_14 = local_14 + 1;
        psVar10 = psVar10 + 9;
      } while (local_14 < iVar3);
    }
    local_20 = local_20 + 4;
    local_28 = local_28 + 1;
  }
  return;
}
