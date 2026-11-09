// Name: core_fldnotes.cpp_FUN_004a9f30
// Address: 004a9f30
// Address Range: [[004a9f30, 004aa0ae]]
// Convention: unknown
// Signature: int core_fldnotes_cpp_FUN_004a9f30(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int core_fldnotes_cpp_FUN_004a9f30(int param_1)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  byte bVar9;
  
  bVar9 = 0;
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d460
            ((CAlphaBitmap *)(param_1 + 0x70),(char *)(param_1 + 4),*(int *)(param_1 + 0x68),
             *(int *)(param_1 + 0x6c));
  pvVar1 = realloc
                     (*(void **)(param_1 + 0x84),*(int *)(param_1 + 0x7c) * *(int *)(param_1 + 0x80)
                     );
  *(void **)(param_1 + 0x84) = pvVar1;
  if (pvVar1 == (void *)0x0) {
    _DAT_01d71de0 = "..\\core\\fldnotes.cpp";
    _DAT_01d71de4 = 0x77a;
    core_main_c_FUN_004e4330("Out of memory!");
  }
  uVar4 = *(int *)(param_1 + 0x80) * *(int *)(param_1 + 0x7c);
  puVar7 = *(uint **)(param_1 + 0x74);
  puVar8 = *(uint **)(param_1 + 0x84);
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
    puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(byte *)puVar8 = *(byte *)puVar7;
    puVar7 = (uint *)((int)puVar7 + (uint)bVar9 * -2 + 1);
    puVar8 = (uint *)((int)puVar8 + (uint)bVar9 * -2 + 1);
  }
  iVar2 = *(int *)(param_1 + 0x68) / 2;
  iVar3 = *(int *)(param_1 + 0x6c) / 2;
  if (iVar2 < 1) {
    iVar2 = 1;
  }
  if (iVar3 < 1) {
    iVar3 = 1;
  }
  engine_alphabit_cpp_FUN_0040d320(param_1 + 0x88,iVar2,iVar3);
  iVar2 = engine_alphabit_cpp_FUN_0040dbb0(param_1 + 0x88,0);
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x9c)) {
    iVar6 = param_1 + 0xa0;
    do {
      iVar2 = *(int *)(param_1 + 0x68) * *(int *)(param_1 + 0x6c);
      iVar3 = iVar3 + 1;
      *(float *)(iVar6 + 0x84) =
           SQRT(((float)(*(int *)(param_1 + 0x94) * *(int *)(param_1 + 0x98)) *
                (ABS((float)((*(int *)(iVar6 + 100) - *(int *)(iVar6 + 0x6c)) *
                            (*(int *)(iVar6 + 0x68) - *(int *)(iVar6 + 0x70)))) /
                ABS((*(float *)(iVar6 + 0x78) - *(float *)(iVar6 + 0x80)) *
                    (*(float *)(iVar6 + 0x74) - *(float *)(iVar6 + 0x7c))))) / (float)iVar2);
      iVar6 = iVar6 + 0x88;
    } while (iVar3 < *(int *)(param_1 + 0x9c));
  }
  return iVar2;
}
