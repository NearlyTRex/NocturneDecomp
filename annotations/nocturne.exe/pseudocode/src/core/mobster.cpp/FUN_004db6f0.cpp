// Name: FUN_004db6f0
// Address: 004db6f0
// Address Range: [[004db6f0, 004dba4d]]
// Convention: unknown
// Signature: void FUN_004db6f0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004db6f0(int param_1,float param_2)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  float *pfVar4;
  byte bVar5;
  float afStackY_185c [1519];
  uint uVar6;
  byte *puVar7;
  float local_88;
  float local_84;
  uint local_80;
  uint local_70;
  uint local_60;
  byte local_50 [12];
  byte local_44 [12];
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_20;
  float local_1c;
  float local_18;
  
  bVar5 = 0;
  if (*(int *)(param_1 + 0x24f0) == 0) {
    *(uint *)(param_1 + 0xbdf4) = 0;
  }
  else {
    if (*(int *)(param_1 + 0xbca4) != 0) {
      iVar2 = FUN_00479ab0(param_1,*(int *)(param_1 + 0xbca4));
      if ((iVar2 == 0) && (*(int *)(param_1 + 0xbd50) == 0)) {
        *(uint *)(param_1 + 0xbdf4) = 0;
        return;
      }
      iVar2 = FUN_0040d890(*(uint *)(param_1 + 0x24f0),_DAT_02ddf9a8);
      if (iVar2 == 0) {
        _DAT_01cc4800 = "@@..\\core\\mobster.cpp" + 2;
        _DAT_01cc4804 = 0x323;
        FUN_004c8440("CMobster::aimTommyGun - I'm not carrying one!");
      }
      local_88 = 0.7853982;
      if (*(int *)(param_1 + 0xbd48) != 0) {
        local_88 = 1.5707964;
      }
      uVar3 = FUN_0055a8b0(local_50,&DAT_02dd1184,param_1 + 0xfd0 + _DAT_01ccdbb0 * 0x30);
      pfVar4 = (float *)FUN_0040a240(param_1,local_44,uVar3);
      iVar2 = *(int *)(param_1 + 0xbca4);
      local_38 = *(float *)(iVar2 + 0x20) - *pfVar4;
      local_34 = *(float *)(iVar2 + 0x24) - pfVar4[1];
      local_30 = *(float *)(iVar2 + 0x28) - pfVar4[2];
      iVar2 = FUN_0040d890(*(uint *)(param_1 + 0xbca4),_DAT_01cae124);
      fVar1 = _DAT_0058a3a5;
      if (iVar2 != 0) {
        fVar1 = _DAT_0058a3a9;
      }
      local_34 = local_34 + fVar1;
      FUN_0054e4a0(&local_2c,&local_38);
      local_18 = (float)FUN_0040df00(local_28 - *(float *)(param_1 + 0x34));
      local_84 = SQRT(local_30 * local_30 + local_38 * local_38 + local_34 * local_34);
      if ((local_88 <= ABS(local_18)) || (local_84 <= (float)_DAT_0058a3b1)) {
        param_2 = *(float *)(param_1 + 0xbdf4) - param_2;
        *(float *)(param_1 + 0xbdf4) = param_2;
        if (param_2 < 0.0) {
          *(uint *)(param_1 + 0xbdf4) = 0;
        }
      }
      else {
        param_2 = *(float *)(param_1 + 0xbdf4) + param_2;
        *(float *)(param_1 + 0xbdf4) = param_2;
        if (1.0 < param_2) {
          *(uint *)(param_1 + 0xbdf4) = 0x3f800000;
        }
      }
      local_1c = -local_88;
      if (local_2c < local_1c) {
        local_2c = local_1c;
      }
      if (local_88 < local_2c) {
        local_2c = local_88;
      }
      local_20 = -local_88;
      local_28 = local_18;
      if (local_18 < local_20) {
        local_28 = local_20;
      }
      if (local_88 < local_28) {
        local_28 = local_88;
      }
      if (*(int *)(param_1 + 0x24ac) == 0) {
        uVar3 = *(uint *)(param_1 + 0xbdf4);
        uVar6 = 2;
      }
      else {
        uVar3 = *(uint *)(param_1 + 0xbdf4);
        uVar6 = 6;
      }
      FUN_0051c3d0(param_1 + 0x150,uVar6,0x40c00000,uVar3,_DAT_01ccdbd0,&LAB_0051b650);
      FUN_0055d4a0(local_2c);
      local_80 = local_60;
      *(uint *)((int)&stack0xffffff84 + (uint)bVar5 * 0xfffffffe * 4) =
           *(uint *)(local_44 + (uint)bVar5 * -8 + -0x18);
      *(uint *)(&stack0xffffff88 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
           *(uint *)(&stack0xffffffa8 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
      *(uint *)
       ((int)(&stack0xffffff88 + (uint)bVar5 * -8 + (uint)bVar5 * -8) + ((uint)bVar5 * -2 + 1) * 4)
           = *(uint *)
              ((int)(&stack0xffffffa8 + (uint)bVar5 * -8 + (uint)bVar5 * -8) +
              ((uint)bVar5 * -2 + 1) * 4);
      local_18 = (float)(param_1 + 0x150);
      FUN_0051d7a0(local_18,&stack0xffffff80,*(uint *)(param_1 + 0xbdf4),_DAT_01ccdbd0,
                   &LAB_0051b650);
      FUN_0055d4e0(local_28);
      puVar7 = &LAB_0051b650;
      local_80 = local_70;
      *(uint *)((int)&stack0xffffff84 + (uint)bVar5 * 0xfffffffe * 4) =
           *(uint *)(local_50 + (uint)bVar5 * -8 + -0x1c);
      uVar3 = _DAT_01ccdbd0;
      *(uint *)(&stack0xffffff88 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
           *(uint *)(local_50 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + -0x18);
      *(uint *)
       ((int)(&stack0xffffff88 + (uint)bVar5 * -8 + (uint)bVar5 * -8) + ((uint)bVar5 * -2 + 1) * 4)
           = *(uint *)
              ((int)(local_50 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + -0x18) +
              ((uint)bVar5 * -2 + 1) * 4);
      FUN_0051d7a0(local_18,&stack0xffffff80,*(uint *)(param_1 + 0xbdf4),uVar3,puVar7);
      return;
    }
    *(uint *)(param_1 + 0xbdf4) = 0;
  }
  return;
}
