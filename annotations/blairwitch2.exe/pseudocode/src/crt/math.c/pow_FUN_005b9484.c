// Name: crt_math.c_pow_FUN_005b9484
// Address: 005b9484
// Address Range: [[005b9484, 005b95bf]]
// Convention: __fpustack_safe
// Signature: float10 __fpustack_safe crt_math_c_pow_FUN_005b9484(float10 base,float10 exp)

#include "nocturne.h"

float10 __fpustack_safe pow(float10 base,float10 exp)

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
  dVar9 = (double)base;
  if (base == fVar6) {
    uVar3 = 0;
  }
  else {
    fVar7 = ROUND(exp);
    uVar10 = (ulonglong)(base < fVar6) << 8;
    if (base < fVar6) {
      uVar3 = 1;
      if (fVar7 != exp) goto LAB_005b949b;
      bVar4 = 0;
      if ((!NAN(fVar7) && !NAN(exp)) &&
         (bVar4 = 0, exp - (exp / (float10)2) * (float10)2 != (float10)0)) {
        bVar4 = 1;
      }
      uVar10 = (ulonglong)bVar4 << 8;
LAB_005b950f:
      if (0xff < (ushort)(((ushort)((ulonglong)(double)exp >> 0x30) & 0x7ff0) + 0xc010))
      goto LAB_005b9596;
      iVar1 = (int)ROUND(exp);
      uVar10 = CONCAT44(iVar1,(int)uVar10);
      sVar11 = (short)((uint)iVar1 >> 0x10);
      if (sVar11 == 0) {
        FUN_005b95c0();
        uVar5 = extraout_EDX;
        fVar6 = base;
      }
      else {
        if ((sVar11 != -1) || ((short)iVar1 == 0)) goto LAB_005b9596;
        FUN_005b95c0();
        fVar6 = (float10)1;
        if ((DAT_0061f458 & 1) == 0) {
          fVar6 = fVar6 / base;
          uVar5 = extraout_EDX_00;
        }
        else {
          FUN_005bf4f3();
          uVar5 = extraout_EDX_01;
          exp = base;
        }
      }
      dVar2 = (double)fVar6;
      if (((SUB82(__BITCAST_UINT64(dVar2),0) != 0 || (short)((ulonglong)dVar2 >> 0x10) != 0) ||
           (short)((ulonglong)dVar2 >> 0x20) != 0) ||
         (lVar8 = (ulonglong)uVar5 << 0x20, ((ushort)((ulonglong)dVar2 >> 0x30) & 0x7fff) != 0x7ff0)
         ) goto LAB_005b95b5;
    }
    else {
      if (fVar7 == exp) goto LAB_005b950f;
LAB_005b9596:
      fVar6 = (float10)0.6931471805599453 * exp * ABS(base);
      lVar8 = FUN_005bf360(dVar9);
      if ((char)lVar8 == '\0') {
        if ((uVar10 & 0x100) != 0) {
          fVar6 = -fVar6;
        }
        goto LAB_005b95b5;
      }
    }
    in_EDX = (uint)((ulonglong)lVar8 >> 0x20);
    uVar3 = 2;
  }
LAB_005b949b:
  dVar9 = (double)FUN_005bf2b0(dVar9,(double)exp,uVar3,in_EDX);
  fVar6 = (float10)dVar9;
LAB_005b95b5:
  return (float10)(double)fVar6;
}
