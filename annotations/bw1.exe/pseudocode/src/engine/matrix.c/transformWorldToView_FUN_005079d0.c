// Name: engine_matrix.c_transformWorldToView_FUN_005079d0
// Address: 005079d0
// Address Range: [[005079d0, 00507a9c]]
// Convention: unknown
// Signature: void engine_matrix_c_transformWorldToView_FUN_005079d0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void engine_matrix_c_transformWorldToView_FUN_005079d0(void)

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
  int *in_stack_00000004;
  
  iVar9 = *in_stack_00000004 - _DAT_01c51d2c;
  iVar8 = in_stack_00000004[2] - _DAT_01c51d34;
  iVar7 = in_stack_00000004[1] - _DAT_01c51d30;
  lVar1 = (longlong)_DAT_01c51d60;
  lVar2 = (longlong)_DAT_01c51d6c;
  lVar3 = (longlong)_DAT_01c51d78;
  lVar4 = (longlong)_DAT_01c51d64;
  lVar5 = (longlong)_DAT_01c51d70;
  lVar6 = (longlong)_DAT_01c51d7c;
  *unaff_ESI = ((uint)((longlong)_DAT_01c51d5c * (longlong)iVar9) >> 0x10 |
               (int)((ulonglong)((longlong)_DAT_01c51d5c * (longlong)iVar9) >> 0x20) << 0x10) +
               ((uint)((longlong)_DAT_01c51d68 * (longlong)iVar7) >> 0x10 |
               (int)((ulonglong)((longlong)_DAT_01c51d68 * (longlong)iVar7) >> 0x20) << 0x10) +
               ((uint)((longlong)_DAT_01c51d74 * (longlong)iVar8) >> 0x10 |
               (int)((ulonglong)((longlong)_DAT_01c51d74 * (longlong)iVar8) >> 0x20) << 0x10);
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
