// Name: crt_math.c_pow_FUN_005ffd76
// Address: 005ffd76
// Address Range: [[005ffd76, 005ffeb1]]
// Convention: __cdecl
// Signature: float10 crt_math.c_pow_FUN_005ffd76(float10 x, float10 y)

#include "nocturne.h"

float10 __cdecl crt_math_c_pow_FUN_005ffd76(float10 x,float10 y)

{
  int iVar1;
  double dVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  char extraout_AL;
  byte bVar5;
  float10 fVar6;
  float10 fVar7;
  float10 extraout_ST0;
  uint uVar8;
  undefined6 uVar9;
  ushort uStack_e;
  ushort exponent;
  uint local_c;
  short sStack_a;
  uint uStack_8;
  
  fVar6 = (float10)0;
  uVar8 = (uint)((ulonglong)(double)x >> 0x20);
  if ((x == fVar6) == 0) {
    fVar7 = ROUND(y);
    _local_c = (ulonglong)
               (ushort)((ushort)(x < fVar6) << 8 | (ushort)(NAN(x) || NAN(fVar6)) << 10 |
                       (ushort)(x == fVar6) << 0xe);
    if (x < fVar6) {
      if (fVar7 == y) {
        bVar5 = 0;
        if ((!NAN(fVar7) && !NAN(y)) && (bVar5 = 0, y - (y / (float10)2) * (float10)2 != (float10)0)
           ) {
          bVar5 = 1;
        }
        _local_c = (ulonglong)bVar5 << 8;
LAB_005ffe01:
        uVar3 = _local_c;
        uVar9 = SUB86 /* extract 2-byte value */((double)y,0);
        uStack_e = (ushort)((ulonglong)(double)y >> 0x30);
        uVar4 = _local_c;
        if (0xff < (ushort)((uStack_e & 0x7ff0) + 0xc010)) goto LAB_005ffe88;
        iVar1 = (int)ROUND(y);
        _local_c = CONCAT44 /* combine 2-byte values */(iVar1,local_c);
        uVar4 = _local_c;
        uStack_8._2_2_ = (ushort)((uint)iVar1 >> 0x10);
        exponent = (ushort)uVar3;
        if (uStack_8._2_2_ == 0) {
          fVar6 = crt_math_c_integer_power_FUN_005ffeb2((float10)CONCAT64 /* combine 2-byte values */(uVar9,uVar8),exponent);
        }
        else {
          if ((uStack_8._2_2_ != -1) || (uStack_8._0_2_ = (short)iVar1, (short)uStack_8 == 0))
          goto LAB_005ffe88;
          fVar6 = crt_math_c_integer_power_FUN_005ffeb2((float10)CONCAT64 /* combine 2-byte values */(uVar9,uVar8),exponent);
          if ((g_UseSoftwareMath & 1) == 0) {
            fVar6 = (float10)1 / fVar6;
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
           (uStack_8._2_2_ = (ushort)((ulonglong)dVar2 >> 0x30), (uStack_8._2_2_ & 0x7fff) != 0x7ff0
           )) goto LAB_005ffea7;
      }
    }
    else {
      uVar4 = _local_c;
      if (fVar7 == y) goto LAB_005ffe01;
LAB_005ffe88:
      _local_c = uVar4;
      fVar6 = crt_math_c_exp_FUN_006068e2((float10)0.6931471805599453 * y * ABS(x));
      if (extraout_AL == '\0') {
        if ((_local_c & 0x100) != 0) {
          fVar6 = -fVar6;
        }
        goto LAB_005ffea7;
      }
    }
  }
  dVar2 = (double)crt_unknown_c_FUN_00606832();
  fVar6 = (float10)dVar2;
LAB_005ffea7:
  return (float10)(double)fVar6;
}
