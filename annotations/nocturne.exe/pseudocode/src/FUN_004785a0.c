// Name: FUN_004785a0
// Address: 004785a0
// Address Range: [[004785a0, 00478763]]
// Convention: unknown
// Signature: void FUN_004785a0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004785a0(int param_1)

{
  float fVar1;
  int iVar2;
  unkbyte10 Var3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  double local_3c;
  float local_18;
  float local_14;
  float local_10;
  
  iVar2 = FUN_004b4500((float *)(param_1 + 0x20));
  local_60 = *(float *)(iVar2 + 0x20) - *(float *)(param_1 + 0x20);
  local_5c = *(float *)(iVar2 + 0x24) - *(float *)(param_1 + 0x24);
  local_58 = *(float *)(iVar2 + 0x28) - *(float *)(param_1 + 0x28);
  if (&local_6c != &local_60) {
    local_6c = local_60;
    local_68 = local_5c;
    local_64 = local_58;
  }
  local_68 = local_68 + _DAT_0057f1ac;
  local_10 = (float)FUN_0040dda0(0xc1000000,0x41000000);
  local_6c = local_10 + local_6c;
  local_10 = (float)FUN_0040dda0(0xc1000000,0x41000000);
  Var3 = fsin((float10)_DAT_0057f1b4);
  fVar4 = (float10)fptan((float10)_DAT_0057f1c4);
  fVar5 = (float10)local_10 + (float10)local_64;
  local_64 = (float)fVar5;
  fVar6 = (float10)local_6c;
  FUN_00566c81();
  fVar1 = SQRT(local_6c * local_6c + local_64 * local_64);
  fVar7 = (float10)fcos(Var3);
  fVar8 = (float10)fsin(fVar6);
  fVar6 = (float10)fcos(fVar6);
  local_3c = (double)fVar1;
  local_18 = fVar1 * (float)_DAT_0057f1bc * fVar1;
  fVar5 = fVar7 * (float10)_DAT_0057f1cc * fVar7 * (fVar5 * (float10)fVar1 - (float10)local_68);
  local_44 = (float)-fVar4;
  local_48 = (float)(fVar8 * fVar7);
  local_40 = (float)(fVar6 * fVar7);
  if ((float10)0 < fVar5) {
    local_14 = SQRT(local_18 / (float)fVar5);
    local_54 = local_48 * local_14;
    local_50 = local_44 * local_14;
    local_4c = local_40 * local_14;
    if (&local_48 != &local_54) {
      local_48 = local_54;
      local_44 = local_50;
      local_40 = local_4c;
    }
    FUN_0048b270(0x01C08D04,param_1 + 0x20,&local_48,0,0);
  }
  return;
}
