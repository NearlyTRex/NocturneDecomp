// Name: FUN_004b2430
// Address: 004b2430
// Address Range: [[004b2430, 004b26ff]]
// Convention: unknown
// Signature: void FUN_004b2430(int *param_1,uint param_2,uint param_3)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void FUN_004b2430(int *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int *unaff_ESI;
  int *piVar7;
  uint uVar8;
  byte bVar9;
  int aiStackY_1024 [1008];
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  byte auStack_30 [12];
  int iStack_24;
  int iStack_20;
  uint uStack_1c;
  uint uStack_18;
  int iStack_14;
  int iStack_10;
  
  bVar9 = 0;
  uVar3 = (ulonglong)(int)(param_1[7] * 0x100 - 1U & param_3);
  iStack_14 = (int)((longlong)
                    (((uVar3 & 0xffffffffffff) >> 0x10) << 0x20 | uVar3 * 0x10000 & 0xffffffff) /
                   (longlong)(param_1[7] * 0x100));
  uVar3 = (ulonglong)(int)(param_1[7] * 0x100 - 1U & param_2);
  iStack_10 = (int)((longlong)
                    (((uVar3 & 0xffffffffffff) >> 0x10) << 0x20 | uVar3 * 0x10000 & 0xffffffff) /
                   (longlong)(param_1[7] * 0x100));
  uVar8 = param_1[2] & param_3 / (uint)(param_1[7] << 8);
  uVar4 = param_2 / (uint)(param_1[7] << 8) & param_1[3];
  uStack_1c = uVar4 & 1;
  uVar1 = uVar4 + 1;
  uVar2 = uVar8 + 1;
  if ((uVar8 & 1) == uStack_1c) {
    if (iStack_10 < iStack_14) {
      uStack_1c = *param_1 * uVar4;
      iVar5 = param_1[9];
      iStack_24 = (int)*(short *)(iVar5 + (uStack_1c + uVar8) * 4) * param_1[8];
      iStack_34 = (int)*(short *)(iVar5 + ((param_1[2] & uVar2) + uStack_1c) * 4) * param_1[8];
      iStack_3c = iStack_24 - iStack_34;
      iStack_38 = param_1[7] << 8;
      iStack_34 = iStack_34 -
                  param_1[8] *
                  (int)*(short *)(iVar5 + ((uVar2 & param_1[3]) + (uVar1 & param_1[3]) * *param_1) *
                                          4);
      engine_matrix_c_normalizeVector3DFloat_FUN_004cde90(&stack0xffffffc4);
      piVar7 = (int *)&stack0xffffffac;
    }
    else {
      uStack_1c = param_1[9];
      iStack_24 = (int)*(short *)((uVar4 * *param_1 + uVar8) * 4 + uStack_1c) * param_1[8];
      iVar5 = (param_1[3] & uVar1) * *param_1;
      iStack_34 = (int)*(short *)((iVar5 + uVar8) * 4 + uStack_1c) * param_1[8];
      iStack_3c = iStack_34 -
                  param_1[8] * (int)*(short *)(((uVar2 & param_1[2]) + iVar5) * 4 + uStack_1c);
      iStack_38 = param_1[7] << 8;
      iStack_34 = iStack_24 - iStack_34;
      engine_matrix_c_normalizeVector3DFloat_FUN_004cde90(&stack0xffffffc4);
      piVar7 = (int *)auStack_30;
    }
  }
  else if (iStack_10 < 0x10000 - iStack_14) {
    uStack_1c = *param_1 * uVar4;
    uStack_18 = param_1[9];
    iStack_34 = param_1[8] * (int)*(short *)((uStack_1c + uVar8) * 4 + uStack_18);
    iStack_20 = (int)*(short *)(((uVar2 & param_1[2]) + uStack_1c) * 4 + uStack_18) * param_1[8];
    iStack_3c = iStack_34 - iStack_20;
    iStack_38 = param_1[7] << 8;
    iStack_34 = iStack_34 -
                param_1[8] *
                (int)*(short *)((uVar8 + (uVar1 & param_1[3]) * *param_1) * 4 + uStack_18);
    engine_matrix_c_normalizeVector3DFloat_FUN_004cde90(&stack0xffffffc4);
    piVar7 = (int *)&stack0xffffffa0;
  }
  else {
    uStack_18 = param_1[2] & uVar2;
    iVar5 = param_1[9];
    iStack_20 = param_1[8] * (int)*(short *)((uVar4 * *param_1 + uStack_18) * 4 + iVar5);
    iVar6 = (uVar1 & param_1[3]) * *param_1;
    iStack_34 = (int)*(short *)(iVar5 + (uStack_18 + iVar6) * 4) * param_1[8];
    iStack_3c = (int)*(short *)(iVar5 + (iVar6 + uVar8) * 4) * param_1[8] - iStack_34;
    iStack_38 = param_1[7] << 8;
    iStack_34 = iStack_20 - iStack_34;
    engine_matrix_c_normalizeVector3DFloat_FUN_004cde90(&stack0xffffffc4);
    piVar7 = (int *)&stack0xffffffb8;
  }
  iStack_3c = *piVar7;
  (&stack0xffffffc8)[(uint)bVar9 * 0xfffffffe] = piVar7[(uint)bVar9 * -2 + 1];
  *(int *)((int)&stack0xffffffcc + (uint)bVar9 * -8 + (uint)bVar9 * -8) =
       (piVar7 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1];
  *unaff_ESI = iStack_3c;
  unaff_ESI[(uint)bVar9 * -2 + 1] = (&stack0xffffffc8)[(uint)bVar9 * 0xfffffffe];
  (unaff_ESI + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1] =
       *(int *)((int)&stack0xffffffcc + (uint)bVar9 * -8 + (uint)bVar9 * -8);
  return;
}
