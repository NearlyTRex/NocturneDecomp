// Name: FUN_004e8620
// Address: 004e8620
// Address Range: [[004e8620, 004e869f]]
// Convention: unknown
// Signature: undefined8 FUN_004e8620(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_004e8620(void)

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
  fVar2 = (float10)_DAT_005dc786;
  fVar3 = (float10)_DAT_005dc782;
  fVar4 = (float10)_DAT_005dc77e;
  do {
    fVar5 = (float10)iVar1 * fVar4 * fVar3;
    fVar6 = (float10)fsin(fVar5);
    fVar5 = (float10)fcos(fVar5);
    fVar6 = fVar6 * fVar2;
    fVar5 = fVar5 * fVar2;
    FUN_005b7ff0();
    FUN_005b7ff0();
    *(int *)(extraout_ECX + 0x1d047ac) = (int)ROUND(fVar6);
    iVar1 = extraout_EDX + 1;
    *(int *)(extraout_ECX + 0x1d04bb0) = (int)ROUND(fVar5);
  } while (iVar1 < 0x101);
  return CONCAT44(iVar1,(int)ROUND(fVar5));
}
