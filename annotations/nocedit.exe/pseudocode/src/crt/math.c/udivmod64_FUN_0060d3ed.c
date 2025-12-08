// Name: crt_math.c_udivmod64_FUN_0060d3ed
// Address: 0060d3ed
// Address Range: [[0060d3ed, 0060d47a]]
// Convention: __watcallRegister
// Signature: ulonglong crt_math.c_udivmod64_FUN_0060d3ed(ulonglong dividend, ulonglong divisor)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x0060d441) */

ulonglong crt_math_c_udivmod64_FUN_0060d3ed(ulonglong dividend,ulonglong divisor)

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
      uVar2 = 0;
      if (uVar9 <= uVar5) {
        uVar2 = (uint)((ulonglong)uVar5 / (divisor & 0xffffffff));
        uVar5 = (uint)((ulonglong)uVar5 % (divisor & 0xffffffff));
      }
      dividend = CONCAT44 /* combine 2-byte values */(uVar2,(int)(CONCAT44 /* combine 2-byte values */(uVar5,(uint)dividend) / (divisor & 0xffffffff)));
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
    uVar4 = (uint)(divisor >> 0x20);
    uVar8 = (uint)divisor;
    uVar9 = uVar8 * 2;
    bVar12 = CARRY4(uVar4,uVar4) || CARRY4(uVar4 * 2,(uint)CARRY4(uVar8,uVar8));
    uVar4 = uVar4 * 2 + (uint)CARRY4(uVar8,uVar8);
    divisor = CONCAT44 /* combine 2-byte values */(uVar4,uVar9);
    if (bVar12) goto LAB_0060d44d;
    iVar10 = iVar10 + 1;
  } while (CONCAT44 /* combine 2-byte values */(uVar4,uVar9) <= dividend);
  bVar12 = false;
  while( true ) {
    bVar13 = CARRY4(uVar11,uVar11);
    uVar8 = uVar11 * 2;
    uVar11 = uVar8 + bVar12;
    uVar8 = (uint)(bVar13 || CARRY4(uVar8,(uint)bVar12));
    bVar12 = CARRY4(uVar5,uVar5) || CARRY4(uVar5 * 2,uVar8);
    uVar5 = uVar5 * 2 + uVar8;
    iVar10 = iVar10 + -1;
    if (iVar10 < 0) break;
LAB_0060d44d:
    uVar6 = (uint)(dividend >> 0x20);
    uVar8 = uVar4 & 1;
    uVar4 = uVar4 >> 1 | (uint)bVar12 << 0x1f;
    uVar9 = uVar9 >> 1 | (uint)(uVar8 != 0) << 0x1f;
    uVar3 = (uint)dividend - uVar9;
    uVar8 = (uint)((uint)dividend < uVar9);
    uVar1 = uVar6 - uVar4;
    uVar7 = uVar1 - uVar8;
    dividend = CONCAT44 /* combine 2-byte values */(uVar7,uVar3);
    bVar12 = uVar4 <= uVar6 && uVar8 <= uVar1;
    if (uVar4 > uVar6 || uVar8 > uVar1) {
      do {
        bVar12 = CARRY4(uVar11,uVar11);
        uVar11 = uVar11 * 2;
        uVar5 = uVar5 * 2 + (uint)bVar12;
        iVar10 = iVar10 + -1;
        if (iVar10 < 0) goto LAB_0060d46f;
        uVar8 = uVar4 & 1;
        uVar4 = uVar4 >> 1;
        uVar9 = uVar9 >> 1 | (uint)(uVar8 != 0) << 0x1f;
        bVar12 = CARRY4(uVar3,uVar9);
        uVar3 = uVar3 + uVar9;
        uVar8 = (uint)bVar12;
        bVar13 = CARRY4(uVar7,uVar4);
        uVar1 = uVar7 + uVar4;
        bVar12 = bVar13 || CARRY4(uVar1,uVar8);
        uVar7 = uVar1 + uVar8;
        dividend = CONCAT44 /* combine 2-byte values */(uVar7,uVar3);
      } while (!bVar13 && !CARRY4(uVar1,uVar8));
    }
  }
LAB_0060d46f:
  return CONCAT44 /* combine 2-byte values */(uVar5,uVar11);
}
