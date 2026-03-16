// Name: crt_math.c_pow_FUN_005ffd76
// Address: 005ffd76
// Address Range: [[005ffd76, 005ffeb1]]
// Convention: __fpustack_safe
// Signature: float10 __fpustack_safe crt_math_c_pow_FUN_005ffd76(float10 base,float10 exp)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x005ffe9d) */
/* WARNING: Removing unreachable block (ram,0x005ffea3) */
/* WARNING: Removing unreachable block (ram,0x005ffea5) */

float10 __fpustack_safe pow(float10 base,float10 exp)

{
  double dVar2;
  uchar error_type;
  byte bVar2;
  ushort exponent;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  double dVar5;
  uint in_stack_ffffffe0;
  double dVar6;
  byte uVar7;
  byte uVar8;
  ushort uStack_e;
  short sStack_a;
  short sStack_8;
  ushort uStack_6;
  double dVar1;
  uint uVar6;
  
  fVar5 = (float10)0;
  exponent = (ushort)(base < fVar5) << 8 | (ushort)(NAN(base) || NAN(fVar5)) << 10 |
             (ushort)(base == fVar5) << 0xe;
  dVar6 = (double)base;
  uVar6 = (uint)((ulonglong)dVar6 >> 0x20);
  if ((base == fVar5) == 0) {
    fVar4 = ROUND(exp);
    if (base < fVar5) {
      if (fVar4 == exp) {
        bVar2 = 0;
        if ((!NAN(fVar4) && !NAN(exp)) &&
           (bVar2 = 0, exp - (exp / (float10)2) * (float10)2 != (float10)0)) {
          bVar2 = 1;
        }
        exponent = (ushort)bVar2 << 8;
LAB_005ffe01:
        dVar2 = (double)exp;
        uVar7 = (byte)((ulonglong)dVar2 >> 0x20);
        uVar8 = (byte)((ulonglong)dVar2 >> 0x28);
        uStack_e = (ushort)((ulonglong)dVar2 >> 0x30);
        if (0xff < (ushort)((uStack_e & 0x7ff0) + 0xc010)) goto LAB_005ffe88;
        uStack_6 = (ushort)((uint)(int)ROUND(exp) >> 0x10);
        if (uStack_6 == 0) {
          in_stack_ffffffe0 = 0x5ffe31;
          fVar3 = integer_power
                            ((float10)CONCAT19(uVar8,CONCAT18(uVar7,CONCAT44(SUB84(__BITCAST_UINT64(dVar2),0),uVar6)))
                             ,exponent);
          fVar5 = exp;
        }
        else {
          if ((uStack_6 != 0xffff) || (sStack_8 = (short)(int)ROUND(exp), sStack_8 == 0))
          goto LAB_005ffe88;
          in_stack_ffffffe0 = 0x5ffe45;
          fVar5 = integer_power
                            ((float10)CONCAT19(uVar8,CONCAT18(uVar7,CONCAT44(SUB84(__BITCAST_UINT64(dVar2),0),uVar6)))
                             ,exponent);
          if ((g_UseSoftwareMath & 1) == 0) {
            fVar3 = (float10)1 / fVar5;
            fVar5 = exp;
          }
          else {
            fVar3 = function_dispatch(0xf);
          }
        }
        dVar1 = (double)fVar3;
        sStack_a = (short)((ulonglong)dVar1 >> 0x10);
        sStack_8 = (short)((ulonglong)dVar1 >> 0x20);
        if (((SUB82(__BITCAST_UINT64(dVar1),0) != 0 || sStack_a != 0) || sStack_8 != 0) ||
           (uStack_6 = (ushort)((ulonglong)dVar1 >> 0x30), exp = fVar5,
           (uStack_6 & 0x7fff) != 0x7ff0)) goto LAB_005ffea7;
      }
    }
    else {
      if (fVar4 == exp) goto LAB_005ffe01;
LAB_005ffe88:
      in_stack_ffffffe0 = 0x5ffe99;
      exp((float10)0.6931471805599453 * exp * ABS(base));
    }
  }
  dVar5 = math_domain_error
                    (__BITCAST_DOUBLE(CONCAT44(SUB84(__BITCAST_UINT64(dVar6),0),in_stack_ffffffe0)),
                     __BITCAST_DOUBLE(CONCAT44(SUB84(__BITCAST_UINT64((double)exp),0),(int)((ulonglong)dVar6 >> 0x20))),
                     (uchar)((ulonglong)(double)exp >> 0x20));
  fVar3 = (float10)dVar5;
LAB_005ffea7:
  return (float10)(double)fVar3;
}
