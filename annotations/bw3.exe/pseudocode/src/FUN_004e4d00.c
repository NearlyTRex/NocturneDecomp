// Name: FUN_004e4d00
// Address: 004e4d00
// Address Range: [[004e4d00, 004e4d7f]]
// Convention: unknown
// Signature: undefined8 FUN_004e4d00(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_004e4d00(void)

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
  fVar2 = (float10)_DAT_005c6ec2;
  fVar3 = (float10)_DAT_005c6ebe;
  fVar4 = (float10)_DAT_005c6eba;
  do {
    fVar5 = (float10)iVar1 * fVar4 * fVar3;
    fVar6 = (float10)fsin(fVar5);
    fVar5 = (float10)fcos(fVar5);
    fVar6 = fVar6 * fVar2;
    fVar5 = fVar5 * fVar2;
    FUN_005a3120();
    FUN_005a3120();
    *(int *)(extraout_ECX + 0x1d71e38) = (int)ROUND(fVar6);
    iVar1 = extraout_EDX + 1;
    *(int *)(extraout_ECX + 0x1d7223c) = (int)ROUND(fVar5);
  } while (iVar1 < 0x101);
  return CONCAT44(iVar1,(int)ROUND(fVar5));
}
