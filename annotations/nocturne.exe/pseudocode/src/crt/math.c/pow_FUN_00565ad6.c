// Name: crt_math.c_pow_FUN_00565ad6
// Address: 00565ad6
// Address Range: [[00565ad6, 00565c11]]
// Convention: __fpustack_safe
// Signature: float10 __fpustack_safe crt_math_c_pow_FUN_00565ad6(float10 param_1,float10 param_2)

#include "nocturne.h"

float10 __fpustack_safe pow(float10 param_1,float10 param_2)

{
  int iVar1;
  double dVar2;
  byte bVar4;
  uint uVar3;
  uint in_EDX;
  uint extraout_EDX;
  uint extraout_EDX_00;
  uint extraout_EDX_01;
  uint uVar5;
  float10 fVar6;
  float10 fVar7;
  longlong lVar8;
  double dVar9;
  ulonglong uVar10;
  short sVar11;
  
  fVar6 = (float10)0;
  dVar9 = (double)param_1;
  if (param_1 == fVar6) {
    uVar3 = 0;
  }
  else {
    fVar7 = ROUND(param_2);
    uVar10 = (ulonglong)(param_1 < fVar6) << 8;
    if (param_1 < fVar6) {
      uVar3 = 1;
      if (fVar7 != param_2) goto LAB_00565aed;
      bVar4 = 0;
      if ((!NAN(fVar7) && !NAN(param_2)) &&
         (bVar4 = 0, param_2 - (param_2 / (float10)2) * (float10)2 != (float10)0)) {
        bVar4 = 1;
      }
      uVar10 = (ulonglong)bVar4 << 8;
LAB_00565b61:
      if (0xff < (ushort)(((ushort)((ulonglong)(double)param_2 >> 0x30) & 0x7ff0) + 0xc010))
      goto LAB_00565be8;
      iVar1 = (int)ROUND(param_2);
      uVar10 = CONCAT44(iVar1,(int)uVar10);
      sVar11 = (short)((uint)iVar1 >> 0x10);
      if (sVar11 == 0) {
        FUN_00565c12();
        uVar5 = extraout_EDX;
        fVar6 = param_1;
        param_1 = param_2;
      }
      else {
        if ((sVar11 != -1) || ((short)iVar1 == 0)) goto LAB_00565be8;
        FUN_00565c12();
        fVar6 = (float10)1;
        if ((DAT_005c1d98 & 1) == 0) {
          fVar6 = fVar6 / param_1;
          uVar5 = extraout_EDX_00;
          param_1 = param_2;
        }
        else {
          FUN_0056bf67();
          uVar5 = extraout_EDX_01;
        }
      }
      dVar2 = (double)fVar6;
      if (((SUB82(__BITCAST_UINT64(dVar2),0) != 0 || (short)((ulonglong)dVar2 >> 0x10) != 0) ||
           (short)((ulonglong)dVar2 >> 0x20) != 0) ||
         (lVar8 = (ulonglong)uVar5 << 0x20, param_2 = param_1,
         ((ushort)((ulonglong)dVar2 >> 0x30) & 0x7fff) != 0x7ff0)) goto LAB_00565c07;
    }
    else {
      if (fVar7 == param_2) goto LAB_00565b61;
LAB_00565be8:
      fVar6 = (float10)0.6931471805599453 * param_2 * ABS(param_1);
      lVar8 = FUN_0056bdd2(dVar9);
      if ((char)lVar8 == '\0') {
        if ((uVar10 & 0x100) != 0) {
          fVar6 = -fVar6;
        }
        goto LAB_00565c07;
      }
    }
    in_EDX = (uint)((ulonglong)lVar8 >> 0x20);
    uVar3 = 2;
  }
LAB_00565aed:
  dVar9 = (double)FUN_0056bd22(dVar9,(double)param_2,uVar3,in_EDX);
  fVar6 = (float10)dVar9;
LAB_00565c07:
  return (float10)(double)fVar6;
}
