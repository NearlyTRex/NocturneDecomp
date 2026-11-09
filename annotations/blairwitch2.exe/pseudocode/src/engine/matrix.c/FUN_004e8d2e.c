// Name: engine_matrix.c_FUN_004e8d2e
// Address: 004e8d2e
// Address Range: [[004e8d2e, 004e8dfc]]
// Convention: unknown
// Signature: void engine_matrix_c_FUN_004e8d2e(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_matrix_c_FUN_004e8d2e(int *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int *unaff_ESI;
  int iVar9;
  
  iVar9 = *param_1 - _DAT_01c38b6c;
  iVar8 = param_1[2] - _DAT_01c38b74;
  iVar7 = param_1[1] - _DAT_01c38b70;
  lVar1 = (longlong)_DAT_01c38ba0;
  lVar2 = (longlong)_DAT_01c38bac;
  lVar3 = (longlong)_DAT_01c38bb8;
  lVar4 = (longlong)_DAT_01c38ba4;
  lVar5 = (longlong)_DAT_01c38bb0;
  lVar6 = (longlong)_DAT_01c38bbc;
  *unaff_ESI = ((uint)((longlong)_DAT_01c38b9c * (longlong)iVar9) >> 0x10 |
               (int)((ulonglong)((longlong)_DAT_01c38b9c * (longlong)iVar9) >> 0x20) << 0x10) +
               ((uint)((longlong)_DAT_01c38ba8 * (longlong)iVar7) >> 0x10 |
               (int)((ulonglong)((longlong)_DAT_01c38ba8 * (longlong)iVar7) >> 0x20) << 0x10) +
               ((uint)((longlong)_DAT_01c38bb4 * (longlong)iVar8) >> 0x10 |
               (int)((ulonglong)((longlong)_DAT_01c38bb4 * (longlong)iVar8) >> 0x20) << 0x10);
  unaff_ESI[1] = ((uint)(lVar1 * iVar9) >> 0x10 | (int)((ulonglong)(lVar1 * iVar9) >> 0x20) << 0x10)
                 + ((uint)(lVar2 * iVar7) >> 0x10 |
                   (int)((ulonglong)(lVar2 * iVar7) >> 0x20) << 0x10) +
                 ((uint)(lVar3 * iVar8) >> 0x10 | (int)((ulonglong)(lVar3 * iVar8) >> 0x20) << 0x10)
  ;
  unaff_ESI[2] = ((uint)(lVar4 * iVar9) >> 0x10 | (int)((ulonglong)(lVar4 * iVar9) >> 0x20) << 0x10)
                 + ((uint)(lVar5 * iVar7) >> 0x10 |
                   (int)((ulonglong)(lVar5 * iVar7) >> 0x20) << 0x10) +
                 ((uint)(lVar6 * iVar8) >> 0x10 | (int)((ulonglong)(lVar6 * iVar8) >> 0x20) << 0x10)
  ;
  return;
}
