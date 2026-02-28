// Name: crt_math.c_pow_FUN_005ffd76
// Address: 005ffd76
// Address Range: [[005ffd76, 005ffeb1]]
// Convention: __fpustack
// Signature: float10 __fpustack crt_math_c_pow_FUN_005ffd76(float10 base,float10 exp)

#include "nocturne.h"

float10 __fpustack pow(float10 base,float10 exp)

{
  double dVar1;
  uchar error_type;
  char extraout_AL;
  byte bVar2;
  ushort exponent;
  float10 fVar3;
  float10 fVar4;
  float10 extraout_ST0;
  double dVar5;
  uint uVar6;
  undefined6 uVar7;
  short sStack_a;
  short sStack_8;
  ushort uStack_6;
  
  fVar3 = (float10)0;
  exponent = (ushort)(base < fVar3) << 8 | (ushort)(NAN(base) || NAN(fVar3)) << 10 |
             (ushort)(base == fVar3) << 0xe;
  dVar5 = (double)base;
  uVar6 = (uint)((ulonglong)dVar5 >> 0x20);
  if ((base == fVar3) == 0) {
    fVar4 = ROUND(exp);
    if (base < fVar3) {
      error_type = '\x01';
      if (fVar4 != exp) goto LAB_005ffd8d;
      bVar2 = 0;
      if ((!NAN(fVar4) && !NAN(exp)) &&
         (bVar2 = 0, exp - (exp / (float10)2) * (float10)2 != (float10)0)) {
        bVar2 = 1;
      }
      exponent = (ushort)bVar2 << 8;
LAB_005ffe01:
      uVar7 = SUB86(__BITCAST_UINT64((double)exp),0);
      if (0xff < (ushort)(((ushort)((ulonglong)(double)exp >> 0x30) & 0x7ff0) + 0xc010))
      goto LAB_005ffe88;
      uStack_6 = (ushort)((uint)(int)ROUND(exp) >> 0x10);
      if (uStack_6 == 0) {
        fVar3 = integer_power((float10)CONCAT64(uVar7,uVar6),exponent);
        fVar4 = exp;
      }
      else {
        if ((uStack_6 != -1) || (sStack_8 = (short)(int)ROUND(exp), sStack_8 == 0))
        goto LAB_005ffe88;
        fVar4 = integer_power((float10)CONCAT64(uVar7,uVar6),exponent);
        if ((g_UseSoftwareMath & 1) == 0) {
          fVar3 = (float10)1 / fVar4;
          fVar4 = exp;
        }
        else {
          function_dispatch(0xf);
          fVar3 = extraout_ST0;
        }
      }
      dVar1 = (double)fVar3;
      sStack_a = (short)((ulonglong)dVar1 >> 0x10);
      sStack_8 = (short)((ulonglong)dVar1 >> 0x20);
      if (((SUB82(__BITCAST_UINT64(dVar1),0) != 0 || sStack_a != 0) || sStack_8 != 0) ||
         (uStack_6 = (ushort)((ulonglong)dVar1 >> 0x30), exp = fVar4, (uStack_6 & 0x7fff) != 0x7ff0)
         ) goto LAB_005ffea7;
    }
    else {
      if (fVar4 == exp) goto LAB_005ffe01;
LAB_005ffe88:
      fVar3 = exp((float10)0.6931471805599453 * exp * ABS(base));
      if (extraout_AL == '\0') {
        if ((exponent & 0x100) != 0) {
          fVar3 = -fVar3;
        }
        goto LAB_005ffea7;
      }
    }
    error_type = '\x02';
  }
  else {
    error_type = '\0';
  }
LAB_005ffd8d:
  dVar5 = math_domain_error(dVar5,(double)exp,error_type);
  fVar3 = (float10)dVar5;
LAB_005ffea7:
  return (float10)(double)fVar3;
}
