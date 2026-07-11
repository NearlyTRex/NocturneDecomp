// Name: FUN_00447a70
// Address: 00447a70
// Address Range: [[00447a70, 00447b29]]
// Convention: unknown
// Signature: void FUN_00447a70(undefined4 param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00447a70(uint param_1,int param_2)

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
  fVar3 = (float10)((float)param_2 * (float)_DAT_0057bafb);
  fVar4 = (float10)_DAT_0057bb03;
  do {
    fVar5 = (float10)iVar2 * fVar4;
    fVar6 = fVar4;
    fVar4 = fVar3;
    FUN_00565ad6();
    fVar5 = fVar5 * fVar4;
    fVar4 = fVar3;
    fVar3 = fVar6;
    FUN_00563a30();
    uVar1 = (uint)ROUND(fVar5);
    iVar2 = extraout_EDX + 1;
    *(uint *)(&DAT_00b0e1fc + extraout_ECX) = uVar1 << 0x18 | uVar1 << 0x10 | uVar1 << 8 | uVar1;
  } while (iVar2 < 0x100);
  FUN_00532af0(*(uint *)(&DAT_00b0e1fc + DAT_005ad450 * 4) & 0xff,
               *(uint *)(&DAT_00b0e1fc + DAT_005ad454 * 4) & 0xff,
               *(uint *)(&DAT_00b0e1fc + DAT_005ad458 * 4) & 0xff);
  return;
}
