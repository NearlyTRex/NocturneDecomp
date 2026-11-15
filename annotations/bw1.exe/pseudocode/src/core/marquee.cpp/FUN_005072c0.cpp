// Name: core_marquee.cpp_FUN_005072c0
// Address: 005072c0
// Address Range: [[005072c0, 0050733f]]
// Convention: unknown
// Signature: undefined8 core_marquee_cpp_FUN_005072c0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong core_marquee_cpp_FUN_005072c0(void)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  double dVar8;
  
  iVar2 = 0;
  fVar3 = (float10)_DAT_005e76d6;
  fVar4 = (float10)_DAT_005e76d2;
  fVar5 = (float10)_DAT_005e76ce;
  iVar1 = 0;
  do {
    fVar6 = (float10)iVar2 * fVar5 * fVar4;
    fVar7 = (float10)fsin(fVar6);
    fVar6 = (float10)fcos(fVar6);
    round((double)(fVar7 * fVar3));
    dVar8 = round((double)(fVar6 * fVar3));
    *(uint *)(iVar1 + 0x1d1d510) = 0x507308;
    iVar2 = iVar2 + 1;
    *(int *)(iVar1 + 0x1d1d914) = (int)ROUND(dVar8);
    iVar1 = iVar1 + 4;
  } while (iVar2 < 0x101);
  return CONCAT44(iVar2,(int)ROUND(dVar8));
}
