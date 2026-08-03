// Name: crt_math.c_pow_FUN_00565ad6
// Address: 00565ad6
// Address Range: [[00565ad6, 00565c11]]
// Convention: __fpustack_safe
// Signature: float10 __fpustack_safe crt_math_c_pow_FUN_00565ad6(float10 base,float10 exp)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x00565bfd) */
/* WARNING: Removing unreachable block (ram,0x00565c03) */
/* WARNING: Removing unreachable block (ram,0x00565c05) */

float10 __fpustack_safe pow(float10 base,float10 exp)

{
  double dVar1;
  float10 fVar2;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  double dVar3;
  uint in_stack_ffffffe0;
  ushort uStack_e;
  short local_c;
  short sStack_a;
  short sStack_8;
  ushort uStack_6;
  
  dVar3 = (double)base;
  if (base != (float10)0) {
    if ((float10)0 <= base) {
      if (ROUND(exp) == exp) goto LAB_00565b61;
LAB_00565be8:
      in_stack_ffffffe0 = 0x565bf9;
      exp((float10)0.6931471805599453 * exp * ABS(base));
    }
    else if (ROUND(exp) == exp) {
LAB_00565b61:
      uStack_e = (ushort)((ulonglong)(double)exp >> 0x30);
      if (0xff < (ushort)((uStack_e & 0x7ff0) + 0xc010)) goto LAB_00565be8;
      uStack_6 = (ushort)((uint)(int)ROUND(exp) >> 0x10);
      if (uStack_6 == 0) {
        in_stack_ffffffe0 = 0x565b91;
        integer_power();
        fVar2 = extraout_ST0;
      }
      else {
        if ((uStack_6 != -1) || (sStack_8 = (short)(int)ROUND(exp), sStack_8 == 0))
        goto LAB_00565be8;
        in_stack_ffffffe0 = 0x565ba5;
        integer_power();
        if ((DAT_005c1d98 & 1) == 0) {
          fVar2 = (float10)1 / extraout_ST0_00;
        }
        else {
          exp = extraout_ST0_00;
          fVar2 = function_dispatch(0xf);
        }
      }
      dVar1 = (double)fVar2;
      local_c = SUB82(__BITCAST_UINT64(dVar1),0);
      sStack_a = (short)((ulonglong)dVar1 >> 0x10);
      sStack_8 = (short)((ulonglong)dVar1 >> 0x20);
      if (((local_c != 0 || sStack_a != 0) || sStack_8 != 0) ||
         (uStack_6 = (ushort)((ulonglong)dVar1 >> 0x30), (uStack_6 & 0x7fff) != 0x7ff0))
      goto LAB_00565c07;
    }
  }
  dVar3 = math_domain_error
                    (__BITCAST_DOUBLE(CONCAT44(SUB84(__BITCAST_UINT64(dVar3),0),in_stack_ffffffe0)),
                     __BITCAST_DOUBLE(CONCAT44(SUB84(__BITCAST_UINT64((double)exp),0),(int)((ulonglong)dVar3 >> 0x20))),
                     (uchar)((ulonglong)(double)exp >> 0x20));
  fVar2 = (float10)dVar3;
LAB_00565c07:
  return (float10)(double)fVar2;
}
