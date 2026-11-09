// Name: unkafter_marquee.cpp_FUN_005072c0
// Address: 005072c0
// Address Range: [[005072c0, 0050733f]]
// Convention: unknown
// Signature: undefined8 unkafter_marquee_cpp_FUN_005072c0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong unkafter_marquee_cpp_FUN_005072c0(void)

{
  int extraout_ECX;
  int iVar1;
  int extraout_EDX;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  
  iVar1 = 0;
  fVar2 = (float10)_DAT_005e76d6;
  fVar3 = (float10)_DAT_005e76d2;
  fVar4 = (float10)_DAT_005e76ce;
  do {
    fVar5 = (float10)iVar1 * fVar4 * fVar3;
    fVar6 = (float10)fsin(fVar5);
    fVar5 = (float10)fcos(fVar5);
    fVar6 = fVar6 * fVar2;
    fVar5 = fVar5 * fVar2;
    round();
    round();
    *(int *)(g_CMarqueeClassInfo.class_name + extraout_ECX + 0x38) = (int)ROUND(fVar6);
    iVar1 = extraout_EDX + 1;
    *(int *)(extraout_ECX + 0x1d1d910) = (int)ROUND(fVar5);
  } while (iVar1 < 0x101);
  return CONCAT44(iVar1,(int)ROUND(fVar5));
}
