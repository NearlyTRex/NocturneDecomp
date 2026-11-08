// Name: FUN_004301e0
// Address: 004301e0
// Address Range: [[004301e0, 004303bf]]
// Convention: unknown
// Signature: undefined4 FUN_004301e0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004301e0(int param_1)

{
  bool bVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  float10 fVar6;
  float10 fVar7;
  uint local_74 [6];
  uint local_5c [6];
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_18;
  float local_14;
  
  bVar5 = 0;
  if ((DAT_007c61c0 & 1) == 0) {
    DAT_007c61c0 = DAT_007c61c0 | 1;
  }
  bVar1 = false;
  if ((*(int *)(param_1 + 0x27a8) != 0) && (*(int *)(param_1 + 0x2e64) == 0)) {
    fVar6 = (float10)_DAT_007c6340 + (float10)_DAT_005d5a33;
    _DAT_007c6340 = (float)fVar6;
    fVar7 = (float10)fsin(fVar6);
    fVar6 = (float10)fcos(fVar6);
    local_40 = 3.0;
    local_14 = (float)fVar7;
    local_18 = (float)fVar6;
    local_38 = local_14 + *(float *)(param_1 + 0x20);
    local_30 = local_18 + *(float *)(param_1 + 0x28);
    local_34 = *(float *)(param_1 + 0x24) + _DAT_005d5a37;
    local_44 = local_14;
    local_3c = local_18;
    if (&local_44 != &local_38) {
      local_44 = local_38;
      local_40 = local_34;
      local_3c = local_30;
    }
    local_2c = local_38;
    local_28 = local_34;
    local_24 = local_30;
    FUN_0045e970(&DAT_007c6180,&local_44);
    _DAT_007c61bc = 45000;
    DAT_007c619c = 0x2b;
    FUN_0045e9c0(&DAT_007c6180,0x40400000);
    _DAT_007c61a0 = 0;
    bVar1 = true;
    FUN_00551960(0x01E82168,&DAT_007c6180);
  }
  FUN_004087b0(param_1);
  (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1,0);
  puVar3 = local_74;
  puVar4 = local_5c;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  iVar2 = FUN_004207b0(local_5c);
  if (iVar2 != 0) {
    *(uint *)(param_1 + 0x27bc) = 1;
    FUN_0042e960(param_1);
  }
  FUN_004087f0(param_1);
  if (bVar1) {
    FUN_00551990(0x01E82168,&DAT_007c6180);
  }
  if ((0 < *(int *)(param_1 + 0x3120)) && (*(int *)(param_1 + 0x27bc) != 0)) {
    FUN_004303c0(param_1);
    return *(uint *)(param_1 + 0x27bc);
  }
  return *(uint *)(param_1 + 0x27bc);
}
