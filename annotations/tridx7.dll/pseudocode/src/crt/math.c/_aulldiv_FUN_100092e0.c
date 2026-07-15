// Name: crt_math.c__aulldiv_FUN_100092e0
// Address: 100092e0
// Address Range: [[100092e0, 10009347]]
// Convention: __cdecl
// Signature: double __cdecl crt_math_c__aulldiv_FUN_100092e0(uint dividend_lo,uint dividend_hi,uint divisor_lo,uint divisor_hi)

#include "nocturne.h"

double __cdecl _aulldiv(uint dividend_lo,uint dividend_hi,uint divisor_lo,uint divisor_hi)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar3 = dividend_lo;
  uVar8 = divisor_hi;
  uVar6 = dividend_hi;
  uVar9 = divisor_lo;
  if (divisor_hi == 0) {
    uVar3 = dividend_hi / divisor_lo;
    iVar4 = (int)(((ulonglong)dividend_hi % (ulonglong)divisor_lo << 0x20 | (ulonglong)dividend_lo)
                 / (ulonglong)divisor_lo);
  }
  else {
    do {
      uVar5 = uVar8 >> 1;
      uVar9 = uVar9 >> 1 | (uint)((uVar8 & 1) != 0) << 0x1f;
      uVar7 = uVar6 >> 1;
      uVar3 = uVar3 >> 1 | (uint)((uVar6 & 1) != 0) << 0x1f;
      uVar8 = uVar5;
      uVar6 = uVar7;
    } while (uVar5 != 0);
    uVar1 = CONCAT44(uVar7,uVar3) / (ulonglong)uVar9;
    iVar4 = (int)uVar1;
    lVar2 = (ulonglong)divisor_lo * (uVar1 & 0xffffffff);
    uVar3 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar8 = uVar3 + iVar4 * divisor_hi;
    if (((CARRY4(uVar3,iVar4 * divisor_hi)) || (dividend_hi < uVar8)) ||
       ((dividend_hi <= uVar8 && (dividend_lo < (uint)lVar2)))) {
      iVar4 = iVar4 + -1;
    }
    uVar3 = 0;
  }
  return __BITCAST_DOUBLE(CONCAT44(uVar3,iVar4));
}
