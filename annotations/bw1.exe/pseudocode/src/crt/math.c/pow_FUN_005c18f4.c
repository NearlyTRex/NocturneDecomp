// Name: crt_math.c_pow_FUN_005c18f4
// Address: 005c18f4
// Address Range: [[005c18f4, 005c1a2f]]
// Convention: unknown
// Signature: void crt_math_c_pow_FUN_005c18f4(void)

#include "nocturne.h"

void pow(void)

{
  double dVar1;
  uint uVar2;
  uint in_EDX;
  uint extraout_EDX;
  uint extraout_EDX_00;
  uint extraout_EDX_01;
  uint uVar3;
  float10 in_ST0;
  float10 in_ST1;
  float10 fVar4;
  longlong lVar5;
  double dVar6;
  short sVar7;
  
  dVar6 = (double)in_ST0;
  if (in_ST0 == (float10)0) {
    uVar2 = 0;
    goto LAB_005c190b;
  }
  if ((float10)0 <= in_ST0) {
    if (ROUND(in_ST1) == in_ST1) goto LAB_005c197f;
LAB_005c1a06:
    lVar5 = FUN_005c7620(dVar6);
    if ((char)lVar5 == '\0') {
      return;
    }
  }
  else {
    uVar2 = 1;
    if (ROUND(in_ST1) != in_ST1) goto LAB_005c190b;
LAB_005c197f:
    if (0xff < (ushort)(((ushort)((ulonglong)(double)in_ST1 >> 0x30) & 0x7ff0) + 0xc010))
    goto LAB_005c1a06;
    sVar7 = (short)((uint)(int)ROUND(in_ST1) >> 0x10);
    if (sVar7 == 0) {
      FUN_005c1a30();
      uVar3 = extraout_EDX;
      fVar4 = in_ST0;
      in_ST0 = in_ST1;
    }
    else {
      if ((sVar7 != -1) || ((short)(int)ROUND(in_ST1) == 0)) goto LAB_005c1a06;
      FUN_005c1a30();
      fVar4 = (float10)1;
      if ((DAT_006267b8 & 1) == 0) {
        fVar4 = fVar4 / in_ST0;
        uVar3 = extraout_EDX_00;
        in_ST0 = in_ST1;
      }
      else {
        FUN_005c77b3();
        uVar3 = extraout_EDX_01;
      }
    }
    dVar1 = (double)fVar4;
    if ((SUB82(__BITCAST_UINT64(dVar1),0) != 0 || (short)((ulonglong)dVar1 >> 0x10) != 0) ||
        (short)((ulonglong)dVar1 >> 0x20) != 0) {
      return;
    }
    lVar5 = (ulonglong)uVar3 << 0x20;
    in_ST1 = in_ST0;
    if (((ushort)((ulonglong)dVar1 >> 0x30) & 0x7fff) != 0x7ff0) {
      return;
    }
  }
  in_EDX = (uint)((ulonglong)lVar5 >> 0x20);
  uVar2 = 2;
LAB_005c190b:
  FUN_005c7570(dVar6,(double)in_ST1,uVar2,in_EDX);
  return;
}
