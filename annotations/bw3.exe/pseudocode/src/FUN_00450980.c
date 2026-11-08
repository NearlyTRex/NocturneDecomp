// Name: FUN_00450980
// Address: 00450980
// Address Range: [[00450980, 00450a39]]
// Convention: unknown
// Signature: void FUN_00450980(undefined4 param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00450980(uint param_1,int param_2)

{
  uint uVar1;
  int extraout_ECX;
  int iVar2;
  int extraout_EDX;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  
  iVar2 = 0;
  fVar3 = (float10)((float)param_2 * (float)_DAT_005ba076);
  fVar4 = (float10)_DAT_005ba07e;
  do {
    fVar5 = (float10)iVar2 * fVar4;
    fVar6 = fVar4;
    fVar4 = fVar3;
    FUN_005a4764();
    fVar5 = fVar5 * fVar4;
    fVar4 = fVar3;
    fVar3 = fVar6;
    FUN_005a3120();
    uVar1 = (uint)ROUND(fVar5);
    iVar2 = extraout_EDX + 1;
    *(uint *)(&DAT_00b9e14c + extraout_ECX) = uVar1 << 0x18 | uVar1 << 0x10 | uVar1 << 8 | uVar1;
  } while (iVar2 < 0x100);
  FUN_005661b0(*(uint *)(&DAT_00b9e14c + DAT_005f17e4 * 4) & 0xff,
               *(uint *)(&DAT_00b9e14c + DAT_005f17e8 * 4) & 0xff,
               *(uint *)(&DAT_00b9e14c + DAT_005f17ec * 4) & 0xff);
  return;
}
