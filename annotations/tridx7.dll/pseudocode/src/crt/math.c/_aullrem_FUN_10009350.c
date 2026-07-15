// Name: crt_math.c__aullrem_FUN_10009350
// Address: 10009350
// Address Range: [[10009350, 100093c4]]
// Convention: __cdecl
// Signature: double __cdecl crt_math_c__aullrem_FUN_10009350(uint dividend_lo,uint dividend_hi,uint divisor_lo,uint divisor_hi)

#include "nocturne.h"

double __cdecl _aullrem(uint dividend_lo,uint dividend_hi,uint divisor_lo,uint divisor_hi)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  
  uVar3 = dividend_lo;
  uVar4 = divisor_hi;
  uVar9 = dividend_hi;
  uVar10 = divisor_lo;
  if (divisor_hi == 0) {
    iVar6 = (int)(((ulonglong)dividend_hi % (ulonglong)divisor_lo << 0x20 | (ulonglong)dividend_lo)
                 % (ulonglong)divisor_lo);
    iVar7 = 0;
  }
  else {
    do {
      uVar5 = uVar4 >> 1;
      uVar10 = uVar10 >> 1 | (uint)((uVar4 & 1) != 0) << 0x1f;
      uVar8 = uVar9 >> 1;
      uVar3 = uVar3 >> 1 | (uint)((uVar9 & 1) != 0) << 0x1f;
      uVar4 = uVar5;
      uVar9 = uVar8;
    } while (uVar5 != 0);
    uVar1 = CONCAT44(uVar8,uVar3) / (ulonglong)uVar10;
    uVar3 = (int)uVar1 * divisor_hi;
    lVar2 = (uVar1 & 0xffffffff) * (ulonglong)divisor_lo;
    uVar9 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar4 = (uint)lVar2;
    uVar10 = uVar9 + uVar3;
    if (((CARRY4(uVar9,uVar3)) || (dividend_hi < uVar10)) ||
       ((dividend_hi <= uVar10 && (dividend_lo < uVar4)))) {
      bVar11 = uVar4 < divisor_lo;
      uVar4 = uVar4 - divisor_lo;
      uVar10 = (uVar10 - divisor_hi) - (uint)bVar11;
    }
    iVar6 = -(uVar4 - dividend_lo);
    iVar7 = -(uint)(uVar4 - dividend_lo != 0) -
            ((uVar10 - dividend_hi) - (uint)(uVar4 < dividend_lo));
  }
  return __BITCAST_DOUBLE(CONCAT44(iVar7,iVar6));
}
