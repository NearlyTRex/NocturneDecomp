// Name: FUN_00454830
// Address: 00454830
// Address Range: [[00454830, 004548e9]]
// Convention: unknown
// Signature: void FUN_00454830(undefined4 param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00454830(uint param_1,int param_2)

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
  fVar3 = (float10)((float)param_2 * (float)_DAT_005d7a0f);
  fVar4 = (float10)_DAT_005d7a17;
  do {
    fVar5 = (float10)iVar2 * fVar4;
    fVar6 = fVar4;
    fVar4 = fVar3;
    FUN_005c18f4();
    fVar5 = fVar5 * fVar4;
    fVar4 = fVar3;
    fVar3 = fVar6;
    FUN_005c03a0();
    uVar1 = (uint)ROUND(fVar5);
    iVar2 = extraout_EDX + 1;
    *(uint *)(&DAT_00b8189c + extraout_ECX) = uVar1 << 0x18 | uVar1 << 0x10 | uVar1 << 8 | uVar1;
  } while (iVar2 < 0x100);
  FUN_005828e0(*(uint *)(&DAT_00b8189c + DAT_00611230 * 4) & 0xff,
               *(uint *)(&DAT_00b8189c + DAT_00611234 * 4) & 0xff,
               *(uint *)(&DAT_00b8189c + DAT_00611238 * 4) & 0xff);
  return;
}
