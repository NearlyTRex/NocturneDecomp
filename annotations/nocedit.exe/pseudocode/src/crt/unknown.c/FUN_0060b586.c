// Name: crt_unknown.c_FUN_0060b586
// Address: 0060b586
// Address Range: [[0060b586, 0060b5e7]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_0060b586(byte *param_1,undefined8 *param_2)

#include "nocturne.h"

/* Signature: void FUN_0060b586(uint param_1, ulonglong* param_2, char* param_3) */

void crt_unknown_c_FUN_0060b586(byte *param_1,ulonglong *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  ulonglong uVar16;
  
  iVar11 = 0;
  uVar6 = 0;
  uVar12 = 0;
  for (; *param_1 != 0; param_1 = param_1 + 1) {
    bVar13 = CARRY4(uVar12,uVar12);
    bVar14 = CARRY4(uVar6,uVar6);
    uVar5 = uVar6 * 2;
    uVar7 = uVar5 + bVar13;
    uVar1 = (uint)CARRY4(uVar12 * 2,uVar12 * 2);
    uVar8 = uVar7 * 2 + uVar1;
    uVar2 = (uint)CARRY4(uVar12 * 4,uVar12);
    bVar15 = CARRY4(uVar8,uVar6);
    uVar8 = uVar8 + uVar6;
    uVar9 = uVar8 + uVar2;
    uVar6 = uVar12 * 10;
    uVar3 = (uint)CARRY4(uVar12 * 5,uVar12 * 5);
    uVar10 = uVar9 * 2 + uVar3;
    uVar12 = uVar6 + (*param_1 & 0xffffff0f);
    uVar4 = (uint)CARRY4(uVar6,*param_1 & 0xffffff0f);
    uVar6 = uVar10 + uVar4;
    iVar11 = (iVar11 * 5 + (uint)(bVar14 || CARRY4(uVar5,(uint)bVar13)) * 2 +
              (uint)(CARRY4(uVar7,uVar7) || CARRY4(uVar7 * 2,uVar1)) +
             (uint)(bVar15 || CARRY4(uVar8,uVar2))) * 2 +
             (uint)(CARRY4(uVar9,uVar9) || CARRY4(uVar9 * 2,uVar3)) + (uint)CARRY4(uVar10,uVar4);
  }
  uVar16 = crt_unknown_c_FUN_0060b5e8(uVar6,iVar11);
  *param_2 = uVar16;
  *(short *)(param_2 + 1) = (short)param_1;
  return;
}
