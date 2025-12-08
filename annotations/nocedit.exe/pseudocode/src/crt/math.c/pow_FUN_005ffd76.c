// Name: crt_math.c_pow_FUN_005ffd76
// Address: 005ffd76
// Address Range: [[005ffd76, 005ffeb1]]
// Convention: __fpustack
// Signature: float10 crt_math.c_pow_FUN_005ffd76(float10 base, float10 exp)

#include "nocturne.h"

float10 __fpustack crt_math_c_pow_FUN_005ffd76(float10 base,float10 exp)

{
  int iVar1;
  double dVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uchar error_type;
  char extraout_AL;
  byte bVar5;
  float10 fVar6;
  float10 fVar7;
  float10 extraout_ST0;
  double dVar8;
  uint uVar9;
  undefined6 uVar10;
  ushort exponent;
  uint local_c;
  short sStack_a;
  uint uStack_8;
  
  fVar6 = (float10)0;
  dVar8 = (double)base;
  uVar9 = (uint)((ulonglong)dVar8 >> 0x20);
  if ((base == fVar6) == 0) {
    fVar7 = ROUND(exp);
    _local_c = (ulonglong)
               (ushort)((ushort)(base < fVar6) << 8 | (ushort)(NAN(base) || NAN(fVar6)) << 10 |
                       (ushort)(base == fVar6) << 0xe);
    if (base < fVar6) {
      error_type = '\x01';
      if (fVar7 != exp) goto LAB_005ffd8d;
      bVar5 = 0;
      if ((!NAN(fVar7) && !NAN(exp)) &&
         (bVar5 = 0, exp - (exp / (float10)2) * (float10)2 != (float10)0)) {
        bVar5 = 1;
      }
      _local_c = (ulonglong)bVar5 << 8;
LAB_005ffe01:
      uVar3 = _local_c;
      uVar10 = SUB86 /* extract 2-byte value */((double)exp,0);
      uVar4 = _local_c;
      if (0xff < (ushort)(((ushort)((ulonglong)(double)exp >> 0x30) & 0x7ff0) + 0xc010))
      goto LAB_005ffe88;
      iVar1 = (int)ROUND(exp);
      _local_c = CONCAT44 /* combine 2-byte values */(iVar1,local_c);
      uVar4 = _local_c;
      uStack_8._2_2_ = (ushort)((uint)iVar1 >> 0x10);
      exponent = (ushort)uVar3;
      if (uStack_8._2_2_ == 0) {
        fVar6 = crt_math_c_integer_power_FUN_005ffeb2((float10)CONCAT64 /* combine 2-byte values */(uVar10,uVar9),exponent);
        fVar7 = exp;
      }
      else {
        if ((uStack_8._2_2_ != -1) || (uStack_8._0_2_ = (short)iVar1, (short)uStack_8 == 0))
        goto LAB_005ffe88;
        fVar7 = crt_math_c_integer_power_FUN_005ffeb2((float10)CONCAT64 /* combine 2-byte values */(uVar10,uVar9),exponent);
        if (((byte)g_UseSoftwareMath & 1) == 0) {
          fVar6 = (float10)1 / fVar7;
          fVar7 = exp;
        }
        else {
          crt_math_c_function_dispatch_FUN_00606a77(0xf);
          fVar6 = extraout_ST0;
        }
      }
      dVar2 = (double)fVar6;
      exponent = SUB82 /* extract 2-byte value */(dVar2,0);
      sStack_a = (short)((ulonglong)dVar2 >> 0x10);
      uStack_8._0_2_ = (short)((ulonglong)dVar2 >> 0x20);
      if (((exponent != 0 || sStack_a != 0) || (short)uStack_8 != 0) ||
         (uStack_8._2_2_ = (ushort)((ulonglong)dVar2 >> 0x30), exp = fVar7,
         (uStack_8._2_2_ & 0x7fff) != 0x7ff0)) goto LAB_005ffea7;
    }
    else {
      uVar4 = _local_c;
      if (fVar7 == exp) goto LAB_005ffe01;
LAB_005ffe88:
      _local_c = uVar4;
      fVar6 = crt_math_c_exp_FUN_006068e2((float10)0.6931471805599453 * exp * ABS(base));
      if (extraout_AL == '\0') {
        if ((_local_c & 0x100) != 0) {
          fVar6 = -fVar6;
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
  dVar8 = crt_math_c_math_domain_error_FUN_00606832(dVar8,(double)exp,error_type);
  fVar6 = (float10)dVar8;
LAB_005ffea7:
  return (float10)(double)fVar6;
}
