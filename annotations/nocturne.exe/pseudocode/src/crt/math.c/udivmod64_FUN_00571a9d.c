// Name: crt_math.c_udivmod64_FUN_00571a9d
// Address: 00571a9d
// Address Range: [[00571a9d, 00571b2a]]
// Convention: __watcallRegister
// Signature: ulonglong __watcallRegister crt_math_c_udivmod64_FUN_00571a9d(ulonglong dividend,ulonglong divisor)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x00571af1) */

ulonglong __watcallRegister udivmod64(ulonglong dividend,ulonglong divisor)

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
  int iVar10;
  uint uVar11;
  bool bVar12;
  bool bVar13;
  
  uVar11 = (uint)(divisor >> 0x20);
  uVar9 = (uint)divisor;
  uVar5 = (uint)(dividend >> 0x20);
  if (uVar11 == 0) {
    if (uVar9 != 1) {
      uVar1 = 0;
      if (uVar9 <= uVar5) {
        uVar1 = (uint)((ulonglong)uVar5 / (divisor & 0xffffffff));
        uVar5 = (uint)((ulonglong)uVar5 % (divisor & 0xffffffff));
      }
      dividend = CONCAT44(uVar1,(int)(CONCAT44(uVar5,(uint)dividend) / (divisor & 0xffffffff)));
    }
    return dividend;
  }
  if (uVar5 <= uVar11) {
    if ((uVar11 == uVar5) && (uVar9 <= (uint)dividend)) {
      return 1;
    }
    return 0;
  }
  uVar11 = 0;
  uVar5 = 0;
  iVar10 = 0;
  do {
    uVar3 = (uint)(divisor >> 0x20);
    uVar8 = (uint)divisor;
    uVar9 = uVar8 * 2;
    uVar4 = uVar3 * 2 + (uint)CARRY4(uVar8,uVar8);
    divisor = CONCAT44(uVar4,uVar9);
    bVar12 = true;
    if (CARRY4(uVar3,uVar3) || CARRY4(uVar3 * 2,(uint)CARRY4(uVar8,uVar8))) goto LAB_00571afd;
    iVar10 = iVar10 + 1;
  } while (CONCAT44(uVar4,uVar9) <= dividend);
  bVar12 = false;
  while( true ) {
    bVar13 = CARRY4(uVar11,uVar11);
    uVar3 = uVar11 * 2;
    uVar11 = uVar3 + bVar12;
    uVar3 = (uint)(bVar13 || CARRY4(uVar3,(uint)bVar12));
    bVar12 = CARRY4(uVar5,uVar5) || CARRY4(uVar5 * 2,uVar3);
    uVar5 = uVar5 * 2 + uVar3;
    iVar10 = iVar10 + -1;
    if (iVar10 < 0) break;
LAB_00571afd:
    uVar6 = (uint)(dividend >> 0x20);
    uVar3 = uVar4 & 1;
    uVar4 = uVar4 >> 1 | (uint)bVar12 << 0x1f;
    uVar9 = uVar9 >> 1 | (uint)(uVar3 != 0) << 0x1f;
    uVar2 = (uint)dividend - uVar9;
    uVar3 = (uint)((uint)dividend < uVar9);
    uVar8 = uVar6 - uVar4;
    uVar7 = uVar8 - uVar3;
    dividend = CONCAT44(uVar7,uVar2);
    bVar12 = true;
    if (uVar6 < uVar4 || uVar8 < uVar3) {
      do {
        bVar12 = CARRY4(uVar11,uVar11);
        uVar11 = uVar11 * 2;
        uVar5 = uVar5 * 2 + (uint)bVar12;
        iVar10 = iVar10 + -1;
        if (iVar10 < 0) goto LAB_00571b1f;
        uVar3 = uVar4 & 1;
        uVar4 = uVar4 >> 1;
        uVar9 = uVar9 >> 1 | (uint)(uVar3 != 0) << 0x1f;
        bVar12 = CARRY4(uVar2,uVar9);
        uVar2 = uVar2 + uVar9;
        uVar3 = (uint)bVar12;
        bVar13 = CARRY4(uVar7,uVar4);
        uVar8 = uVar7 + uVar4;
        bVar12 = bVar13 || CARRY4(uVar8,uVar3);
        uVar7 = uVar8 + uVar3;
        dividend = CONCAT44(uVar7,uVar2);
      } while (!bVar13 && !CARRY4(uVar8,uVar3));
    }
  }
LAB_00571b1f:
  return CONCAT44(uVar5,uVar11);
}
