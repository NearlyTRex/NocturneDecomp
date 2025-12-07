// Name: crt_math.c_pow_FUN_005ffd76
// Address: 005ffd76
// Address Range: [[005ffd76, 005ffeb1]]
// Convention: __fpureg
// Signature: double crt_math.c_pow_FUN_005ffd76(double x, double y)

#include "nocturne.h"

double __fpureg crt_math_c_pow_FUN_005ffd76(double x,double y)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uchar error_type;
  char extraout_AL;
  byte bVar4;
  ushort in_ST0h;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 extraout_ST0;
  ushort in_ST1h;
  float10 fVar8;
  double dVar9;
  double dVar10;
  uint uVar11;
  undefined6 uVar12;
  ushort exponent;
  uint local_c;
  short sStack_a;
  uint uStack_8;
  
  fVar8 = (float10)CONCAT28 /* combine 2-byte values */(in_ST1h,y);
  fVar7 = (float10)CONCAT28 /* combine 2-byte values */(in_ST0h,x);
  fVar5 = (float10)0;
  dVar9 = (double)fVar7;
  uVar11 = (uint)((ulonglong)dVar9 >> 0x20);
  if ((fVar7 == fVar5) == 0) {
    fVar6 = ROUND(fVar8);
    _local_c = (ulonglong)
               (ushort)((ushort)(fVar7 < fVar5) << 8 | (ushort)(NAN(fVar7) || NAN(fVar5)) << 10 |
                       (ushort)(fVar7 == fVar5) << 0xe);
    if (fVar7 < fVar5) {
      error_type = '\x01';
      if (fVar6 != fVar8) goto LAB_005ffd8d;
      bVar4 = 0;
      if ((!NAN(fVar6) && !NAN(fVar8)) &&
         (bVar4 = 0, fVar8 - (fVar8 / (float10)2) * (float10)2 != (float10)0)) {
        bVar4 = 1;
      }
      _local_c = (ulonglong)bVar4 << 8;
LAB_005ffe01:
      uVar2 = _local_c;
      uVar12 = SUB86 /* extract 2-byte value */((double)fVar8,0);
      uVar3 = _local_c;
      if (0xff < (ushort)(((ushort)((ulonglong)(double)fVar8 >> 0x30) & 0x7ff0) + 0xc010))
      goto LAB_005ffe88;
      iVar1 = (int)ROUND(fVar8);
      _local_c = CONCAT44 /* combine 2-byte values */(iVar1,local_c);
      uVar3 = _local_c;
      uStack_8._2_2_ = (ushort)((uint)iVar1 >> 0x10);
      exponent = (ushort)uVar2;
      if (uStack_8._2_2_ == 0) {
        fVar5 = crt_math_c_integer_power_FUN_005ffeb2((float10)CONCAT64 /* combine 2-byte values */(uVar12,uVar11),exponent);
        fVar7 = fVar8;
      }
      else {
        if ((uStack_8._2_2_ != -1) || (uStack_8._0_2_ = (short)iVar1, (short)uStack_8 == 0))
        goto LAB_005ffe88;
        fVar7 = crt_math_c_integer_power_FUN_005ffeb2((float10)CONCAT64 /* combine 2-byte values */(uVar12,uVar11),exponent);
        if (((byte)g_UseSoftwareMath & 1) == 0) {
          fVar5 = (float10)1 / fVar7;
          fVar7 = fVar8;
        }
        else {
          crt_math_c_function_dispatch_FUN_00606a77(0xf);
          fVar5 = extraout_ST0;
        }
      }
      dVar10 = (double)fVar5;
      exponent = SUB82 /* extract 2-byte value */(dVar10,0);
      sStack_a = (short)((ulonglong)dVar10 >> 0x10);
      uStack_8._0_2_ = (short)((ulonglong)dVar10 >> 0x20);
      if (((exponent != 0 || sStack_a != 0) || (short)uStack_8 != 0) ||
         (uStack_8._2_2_ = (ushort)((ulonglong)dVar10 >> 0x30), fVar8 = fVar7,
         (uStack_8._2_2_ & 0x7fff) != 0x7ff0)) goto LAB_005ffea7;
    }
    else {
      uVar3 = _local_c;
      if (fVar6 == fVar8) goto LAB_005ffe01;
LAB_005ffe88:
      _local_c = uVar3;
      dVar10 = crt_math_c_exp_FUN_006068e2
                         (SUB108 /* extract 3-byte value */((float10)0.6931471805599453 * fVar8 * ABS(fVar7),0));
      fVar5 = (float10)dVar10;
      if (extraout_AL == '\0') {
        if ((_local_c & 0x100) != 0) {
          fVar5 = -fVar5;
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
  dVar9 = crt_math_c_math_domain_error_FUN_00606832(dVar9,(double)fVar8,error_type);
  fVar5 = (float10)dVar9;
LAB_005ffea7:
  return (double)fVar5;
}
