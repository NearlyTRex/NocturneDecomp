// Name: core_gabriela.cpp_CGabriella_findAndPickupNearbyObject_FUN_004983f0
// Address: 004983f0
// Address Range: [[004983f0, 0049878e]]
// Convention: __cdecl
// Signature: undefined4 __cdecl core_gabriela_cpp_CGabriella_findAndPickupNearbyObject_FUN_004983f0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl core_gabriela_cpp_CGabriella_findAndPickupNearbyObject_FUN_004983f0(int param_1)

{
  int iVar1;
  float fVar2;
  float *pfVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  float local_bc [4];
  float local_ac;
  float local_a8;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  uint local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  uint local_88;
  uint local_84;
  byte local_80 [12];
  byte local_74 [12];
  float fStack_68;
  float fStack_64;
  float fStack_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  byte local_38 [12];
  int local_2c;
  uint uStack_28;
  float local_24;
  uint uStack_20;
  float fStack_1c;
  int local_18;
  
  *(uint *)(param_1 + 0x1fa08) = 0;
  __arrinit(local_bc,4,&DAT_005993b0);
  local_5c = 0xbda3d70a;
  local_58 = 0x3ee147ae;
  local_54 = 0x3ff5c28f;
  pfVar3 = (float *)core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                              (param_1,local_74,&local_5c);
  if (local_bc + 3 != pfVar3) {
    local_bc[3] = *pfVar3;
    local_ac = pfVar3[1];
    local_a8 = pfVar3[2];
  }
  local_4c = 0;
  local_50 = 0xbf266666;
  local_48 = 0x4007ae14;
  puVar4 = (uint *)
           core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_1,local_38,&local_50);
  if (&local_a4 != puVar4) {
    local_a4 = *puVar4;
    local_a0 = puVar4[1];
    local_9c = puVar4[2];
  }
  local_8c = 0;
  local_88 = 0;
  local_84 = 0x40000000;
  puVar4 = (uint *)
           core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_1,local_80,&local_8c);
  if (&local_98 != puVar4) {
    local_98 = *puVar4;
    local_94 = puVar4[1];
    local_90 = puVar4[2];
  }
  iVar6 = 0;
  local_24 = 4.0;
  local_2c = param_1 + 0x20;
  for (local_18 = 0; local_18 < *(int *)(0x01E57284 + 0x14cd6c); local_18 = local_18 + 1) {
    iVar1 = *(int *)(iVar6 + 0x14cd70 + 0x01E57284);
    iVar5 = (**(code **)(*(int *)(iVar1 + 0x14c) + 0x8c))(iVar1);
    if (iVar5 == 0) {
      uStack_20 = (**(code **)(*(int *)(iVar1 + 0x14c) + 0x7c))(iVar1,param_1);
      if (uStack_20 < 2) {
        if ((uStack_20 == 1) && (*(int *)(param_1 + 0x24ac) == 0)) {
          core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290(iVar1,&fStack_68,local_2c);
          fVar2 = SQRT(fStack_60 * fStack_60 + fStack_68 * fStack_68 + fStack_64 * fStack_64);
          if (fVar2 <= 0.0) {
            fStack_64 = 0.0;
            fStack_68 = 0.0;
            fStack_60 = 0.0;
          }
          else {
            fVar2 = 1.0 / fVar2;
            fStack_68 = fStack_68 * fVar2;
            fStack_64 = fStack_64 * fVar2;
            fStack_60 = fStack_60 * fVar2;
          }
          if (fStack_60 <= (float)_DAT_00582172) goto LAB_00498579;
        }
      }
      else if (((uStack_20 < 3) || (uStack_20 == 3)) && (*(int *)(param_1 + 0x24ac) == 0)) {
LAB_00498579:
        fStack_44 = *(float *)(iVar1 + 0x20) - local_bc[uStack_20 * 3];
        fStack_40 = *(float *)(iVar1 + 0x24) - local_bc[uStack_20 * 3 + 1];
        fStack_3c = *(float *)(iVar1 + 0x28) - local_bc[uStack_20 * 3 + 2];
        if (ABS(fStack_40) <= (float)_DAT_0058217a) {
          fStack_1c = fStack_44 * fStack_44 + fStack_3c * fStack_3c;
          if (fStack_1c <= local_24) {
            local_24 = fStack_1c;
            *(int *)(param_1 + 0x1fa08) = iVar1;
            uStack_28 = uStack_20;
          }
        }
      }
    }
    iVar6 = iVar6 + 4;
  }
  if (*(int *)(param_1 + 0x1fa08) == 0) {
    return 0;
  }
  *(float *)(param_1 + 0x20) =
       (*(float *)(*(int *)(param_1 + 0x1fa08) + 0x20) - local_bc[uStack_28 * 3]) +
       *(float *)(param_1 + 0x20);
  *(float *)(param_1 + 0x28) =
       (*(float *)(*(int *)(param_1 + 0x1fa08) + 0x28) - local_bc[uStack_28 * 3 + 2]) +
       *(float *)(param_1 + 0x28);
  if (uStack_28 < 2) {
    if (uStack_28 != 1) {
LAB_00498759:
      _DAT_01cc4800 = "..\\core\\gabriela.cpp";
      _DAT_01cc4804 = 0x638;
      FUN_004c8440("Hell froze - invalid pickUpType: %d",uStack_28);
      return 1;
    }
    uVar7 = 0xe;
  }
  else if (uStack_28 < 3) {
    uVar7 = 0xf;
  }
  else {
    if (uStack_28 != 3) goto LAB_00498759;
    uVar7 = 4;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,uVar7,1);
  return 1;
}
