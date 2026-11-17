// Name: crt_math.c_pow_FUN_005a4764
// Address: 005a4764
// Address Range: [[005a4764, 005a489f]]
// Convention: __fpustack_safe
// Signature: float10 __fpustack_safe crt_math_c_pow_FUN_005a4764(float10 base,float10 exp)

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
      if (fVar7 != exp) goto LAB_005a477b;
      bVar4 = 0;
      if ((!NAN(fVar7) && !NAN(exp)) &&
         (bVar4 = 0, exp - (exp / (float10)2) * (float10)2 != (float10)0)) {
        bVar4 = 1;
      }
      uVar10 = (ulonglong)bVar4 << 8;
LAB_005a47ef:
      if (0xff < (ushort)(((ushort)((ulonglong)(double)exp >> 0x30) & 0x7ff0) + 0xc010))
      goto LAB_005a4876;
      iVar1 = (int)ROUND(exp);
      uVar10 = CONCAT44(iVar1,(int)uVar10);
      sVar11 = (short)((uint)iVar1 >> 0x10);
      if (sVar11 == 0) {
        FUN_005a48a0();
        uVar5 = extraout_EDX;
        fVar6 = base;
      }
      else {
        if ((sVar11 != -1) || ((short)iVar1 == 0)) goto LAB_005a4876;
        FUN_005a48a0();
        fVar6 = (float10)1;
        if ((g_UseSoftwareMath & 1) == 0) {
          fVar6 = fVar6 / base;
          uVar5 = extraout_EDX_00;
        }
        else {
          FUN_005aa623();
          uVar5 = extraout_EDX_01;
          exp = base;
        }
      }
      dVar2 = (double)fVar6;
      if (((SUB82(__BITCAST_UINT64(dVar2),0) != 0 || (short)((ulonglong)dVar2 >> 0x10) != 0) ||
           (short)((ulonglong)dVar2 >> 0x20) != 0) ||
         (lVar8 = (ulonglong)uVar5 << 0x20, ((ushort)((ulonglong)dVar2 >> 0x30) & 0x7fff) != 0x7ff0)
         ) goto LAB_005a4895;
    }
    else {
      if (fVar7 == exp) goto LAB_005a47ef;
LAB_005a4876:
      fVar6 = (float10)0.6931471805599453 * exp * ABS(base);
      lVar8 = FUN_005aa490(dVar9);
      if ((char)lVar8 == '\0') {
        if ((uVar10 & 0x100) != 0) {
          fVar6 = -fVar6;
        }
        goto LAB_005a4895;
      }
    }
    in_EDX = (uint)((ulonglong)lVar8 >> 0x20);
    uVar3 = 2;
  }
LAB_005a477b:
  dVar9 = (double)FUN_005aa3e0(dVar9,(double)exp,uVar3,in_EDX);
  fVar6 = (float10)dVar9;
LAB_005a4895:
  return (float10)(double)fVar6;
}
