// Name: core_skeledit.cpp_FUN_0058b9b0
// Address: 0058b9b0
// Address Range: [[0058b9b0, 0058bc30]]
// Convention: __cdecl
// Signature: int __cdecl core_skeledit_cpp_FUN_0058b9b0(void)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

int __cdecl core_skeledit_cpp_FUN_0058b9b0(void)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  ushort *puVar5;
  int iVar6;
  int extraout_EBX;
  float unaff_EBP;
  int iVar7;
  int iVar8;
  double dVar9;
  double dVar10;
  int in_stack_00000004;
  _FILE *in_stack_00000008;
  float local_54 [4];
  byte local_44 [4];
  float local_40;
  byte local_3c [4];
  uint local_38;
  uint local_34;
  int local_30;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  int local_14;
  
  __STK(0x88);
  iVar7 = 1;
  do {
    iVar3 = _fgetc(in_stack_00000008);
    if (iVar3 < 0) break;
  } while ((iVar3 != 10) || (iVar7 = iVar7 + -1, 0 < iVar7));
  iVar7 = 0;
  if (0 < *(int *)(in_stack_00000004 + 0x54)) {
    iVar3 = 0;
    iVar8 = 0;
    do {
      iVar4 = _fscanf(in_stack_00000008,"%d,%d,%f,%f,%d,%f,%f,%d,%f,%f\n",&local_28,local_3c,
                         local_54 + 3,local_54,&local_38,local_44,local_54 + 1,&local_34,&local_40,
                         local_54 + 2);
      if (iVar4 != 10) {
        return 0;
      }
      local_24 = local_54[3];
      local_1c = 4.0;
      iVar4 = 4;
      local_18 = local_54[0];
      do {
        if (*(float *)(local_44 + iVar4 + -4) < local_24) {
          local_24 = *(float *)(local_44 + iVar4 + -4);
        }
        if (*(float *)((int)local_54 + iVar4) < local_18) {
          local_18 = *(float *)((int)local_54 + iVar4);
        }
        iVar4 = iVar4 + 4;
      } while (iVar4 != 0xc);
      dVar9 = floor((double)((local_24 + 4.0) * (float)0.00390625));
      local_34 = SUB84(dVar9,0);
      local_30 = (int)((ulonglong)dVar9 >> 0x20);
      local_28 = (float)((float10)dVar9 * (float10)256);
      dVar9 = floor
                        ((double)((local_1c + local_20) * (float)0.00390625));
      local_38 = SUB84(dVar9,0);
      local_34 = (uint)((ulonglong)dVar9 >> 0x20);
      local_20 = (float)((float10)dVar9 * (float10)256);
      if (local_30 < 0) {
        local_30 = 0;
      }
      if (*(int *)(extraout_EBX + 0xbc) <= local_30) {
        local_30 = 0;
      }
      iVar4 = *(int *)(extraout_EBX + 0x7c);
      *(int *)(*(int *)(extraout_EBX + 0x90) + iVar3) = local_30;
      iVar6 = 0;
      puVar5 = (ushort *)(iVar4 + iVar8);
      do {
        *puVar5 = *(ushort *)((int)&local_34 + iVar6);
        fVar1 = *(float *)((int)local_54 + iVar6 + 8U) - unaff_EBP;
        fVar2 = (float)256;
        local_54[1] = 8.148736e-39;
        dVar9 = round
                          ((double)((*(float *)(local_3c + iVar6 + -4) - local_1c) * fVar2));
        local_54[0] = 8.148745e-39;
        dVar10 = round((double)(fVar1 * fVar2));
        local_20 = (float)(int)ROUND(dVar9);
        local_14 = (int)ROUND(dVar10);
        if ((int)local_20 < 0) {
          local_20 = 0.0;
        }
        else if (0xffff < (int)local_20) {
          local_20 = 9.18341e-41;
        }
        if (local_14 < 0) {
          local_14 = 0;
        }
        else if (0xffff < local_14) {
          local_14 = 0xffff;
        }
        puVar5[3] = SUB42(local_20,0);
        iVar6 = iVar6 + 4;
        puVar5[6] = (short)local_14;
        puVar5 = puVar5 + 1;
      } while (iVar6 != 0xc);
      iVar3 = iVar3 + 4;
      iVar7 = iVar7 + 1;
      iVar8 = iVar8 + 0x12;
    } while (iVar7 < *(int *)(extraout_EBX + 0x54));
  }
  core_skeledit_cpp_FUN_0058ede0();
  return 1;
}
