// Name: FUN_004cc9d0
// Address: 004cc9d0
// Address Range: [[004cc9d0, 004cca4f]]
// Convention: unknown
// Signature: int FUN_004cc9d0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004cc9d0(void)

{
  int iVar1;
  int extraout_ECX;
  int extraout_EDX;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  
  iVar1 = 0;
  fVar2 = (float10)_DAT_005881d3;
  fVar3 = (float10)_DAT_005881cb;
  fVar4 = (float10)_DAT_005881c3;
  do {
    fVar5 = (float10)iVar1 * fVar4 * fVar3;
    fVar6 = (float10)fsin(fVar5);
    fVar5 = (float10)fcos(fVar5);
    fVar6 = fVar6 * fVar2;
    fVar5 = fVar5 * fVar2;
    FUN_00563a30();
    FUN_00563a30();
    *(int *)(extraout_EDX + 0x1cc490c) = (int)ROUND(fVar6);
    iVar1 = extraout_ECX + 1;
    *(int *)(extraout_EDX + 0x1cc4d10) = (int)ROUND(fVar5);
  } while (iVar1 < 0x101);
  return (int)ROUND(fVar5);
}
