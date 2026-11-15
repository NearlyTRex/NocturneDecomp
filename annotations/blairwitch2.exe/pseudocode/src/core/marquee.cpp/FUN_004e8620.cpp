// Name: core_marquee.cpp_FUN_004e8620
// Address: 004e8620
// Address Range: [[004e8620, 004e869f]]
// Convention: unknown
// Signature: undefined8 core_marquee_cpp_FUN_004e8620(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong core_marquee_cpp_FUN_004e8620(void)

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
  fVar3 = (float10)_DAT_005dc786;
  fVar4 = (float10)_DAT_005dc782;
  fVar5 = (float10)_DAT_005dc77e;
  iVar1 = 0;
  do {
    fVar6 = (float10)iVar2 * fVar5 * fVar4;
    fVar7 = (float10)fsin(fVar6);
    fVar6 = (float10)fcos(fVar6);
    round((double)(fVar7 * fVar3));
    dVar8 = round((double)(fVar6 * fVar3));
    *(uint *)(iVar1 + 0x1d047b0) = 0x4e8668;
    iVar2 = iVar2 + 1;
    *(int *)(iVar1 + 0x1d04bb4) = (int)ROUND(dVar8);
    iVar1 = iVar1 + 4;
  } while (iVar2 < 0x101);
  return CONCAT44(iVar2,(int)ROUND(dVar8));
}
