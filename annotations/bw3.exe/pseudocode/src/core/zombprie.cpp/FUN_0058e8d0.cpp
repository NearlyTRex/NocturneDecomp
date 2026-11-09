// Name: core_zombprie.cpp_FUN_0058e8d0
// Address: 0058e8d0
// Address Range: [[0058e8d0, 0058ec91]]
// Convention: unknown
// Signature: void core_zombprie_cpp_FUN_0058e8d0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_zombprie_cpp_FUN_0058e8d0(int param_1,float param_2)

{
  int iVar1;
  byte bVar2;
  float afStackY_188c [1519];
  float fVar3;
  float *pfVar4;
  code *pcVar5;
  float local_b8;
  float local_b4;
  uint local_b0;
  uint local_a0;
  float afStack_9c [7];
  float local_80;
  float local_7c;
  float local_74;
  uint local_68;
  float local_5c [3];
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_20;
  float local_1c;
  CDeformableModelInstance *local_18;
  
  bVar2 = 0;
  if (*(int *)(param_1 + 0x25b0) == 0) {
    *(uint *)(param_1 + 0xd10c) = 0;
  }
  else {
    if (*(int *)(param_1 + 0xcde4) != 0) {
      iVar1 = core_enemy_cpp_FUN_00489600(param_1,*(int *)(param_1 + 0xcde4));
      if ((iVar1 == 0) && (*(int *)(param_1 + 0xd06c) == 0)) {
        *(uint *)(param_1 + 0xd10c) = 0;
        return;
      }
      iVar1 = core_actor_cpp_castToClassHash_FUN_0040c840
                        (*(uint *)(param_1 + 0x25b0),g_CWeaponClassInfo.name_hash);
      if (iVar1 == 0) {
        _DAT_01d71de0 = "..\\core\\zombiepriest.cpp";
        _DAT_01d71de4 = 0x2aa;
        core_main_c_FUN_004e4330("CZombiePriest::Aim Burning Cross - I'm not carrying one!");
      }
      local_b4 = 0.7853982;
      core_xform_cpp_FUN_00583260(&DAT_02cfd900,param_1 + 0xfd8 + _DAT_02d24978 * 0x30);
      pfVar4 = afStack_9c + 0x10;
      local_5c[0] = (float)local_68;
      afStack_9c[(uint)bVar2 * -2 + 0x11] = afStack_9c[(uint)bVar2 * -2 + 0xe];
      afStack_9c[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 0x12] =
           afStack_9c[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 0xf];
      core_actor_cpp_FUN_00408b80(param_1,pfVar4);
      local_50 = local_2c;
      afStack_9c[(uint)bVar2 * -2 + 0x14] = afStack_9c[(uint)bVar2 * -2 + 0x1d];
      afStack_9c[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 0x15] =
           afStack_9c[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 0x1e];
      iVar1 = *(int *)(param_1 + 0xcde4);
      local_38 = *(float *)(iVar1 + 0x20) - local_50;
      local_34 = *(float *)(iVar1 + 0x24) - local_4c;
      local_30 = *(float *)(iVar1 + 0x28) - local_48;
      local_44 = local_38;
      afStack_9c[(uint)bVar2 * -2 + 0x17] = afStack_9c[(uint)bVar2 * -2 + 0x1a];
      afStack_9c[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 0x18] =
           afStack_9c[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 0x1b];
      iVar1 = core_actor_cpp_castToClassHash_FUN_0040c840
                        (*(uint *)(param_1 + 0xcde4),g_CHeroClassInfo.name_hash);
      fVar3 = _DAT_005d8c0c;
      if (iVar1 != 0) {
        fVar3 = _DAT_005d8c10;
      }
      local_40 = local_40 + fVar3;
      core_vecdir_cpp_FUN_00576250(afStack_9c + 0x16);
      local_80 = local_74;
      afStack_9c[(uint)bVar2 * -2 + 8] = afStack_9c[(uint)bVar2 * -2 + 0xb];
      afStack_9c[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 9] =
           afStack_9c[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 0xc];
      local_18 = (CDeformableModelInstance *)
                 core_actor_cpp_FUN_0040cfa0(local_7c - *(float *)(param_1 + 0x34));
      local_b8 = SQRT(local_3c * local_3c + local_44 * local_44 + local_40 * local_40);
      if ((local_b4 <= ABS((float)local_18)) || (local_b8 <= (float)_DAT_005d8c18)) {
        param_2 = *(float *)(param_1 + 0xd10c) - param_2;
        *(float *)(param_1 + 0xd10c) = param_2;
        if (param_2 < 0.0) {
          *(uint *)(param_1 + 0xd10c) = 0;
        }
      }
      else {
        param_2 = *(float *)(param_1 + 0xd10c) + param_2;
        *(float *)(param_1 + 0xd10c) = param_2;
        if (1.0 < param_2) {
          *(uint *)(param_1 + 0xd10c) = 0x3f800000;
        }
      }
      local_1c = -local_b4;
      if (local_80 < local_1c) {
        local_80 = local_1c;
      }
      if (local_b4 < local_80) {
        local_80 = local_b4;
      }
      local_20 = -local_b4;
      local_7c = (float)local_18;
      if ((float)local_18 < local_20) {
        local_7c = local_20;
      }
      if (local_b4 < local_7c) {
        local_7c = local_b4;
      }
      if (*(int *)(param_1 + 0x2628) == 0) {
        fVar3 = *(float *)(param_1 + 0xd10c);
        iVar1 = 2;
      }
      else {
        fVar3 = *(float *)(param_1 + 0xd10c);
        iVar1 = 6;
      }
      core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0054cc90
                ((CDeformableModelInstance *)(param_1 + 0x158),iVar1,6.0,fVar3,_DAT_02d24998,
                 core_skeleton_cpp_FUN_0054bef0);
      core_xform_cpp_quaternionFromAngleX_FUN_00585cd0(local_80);
      pcVar5 = core_skeleton_cpp_FUN_0054bef0;
      local_a0 = afStack_9c[3];
      afStack_9c[(uint)bVar2 * -2] = afStack_9c[(uint)bVar2 * -2 + 4];
      iVar1 = _DAT_02d24998;
      afStack_9c[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1] =
           afStack_9c[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 5];
      (afStack_9c + (uint)bVar2 * -2 + (uint)bVar2 * -2 + 1)[(uint)bVar2 * -2 + 1] =
           (afStack_9c + (uint)bVar2 * -2 + (uint)bVar2 * -2 + 5)[(uint)bVar2 * -2 + 1];
      local_18 = (CDeformableModelInstance *)(param_1 + 0x158);
      core_skeleton_cpp_FUN_0054e170
                (local_18,(CQuaternion4f *)&local_a0,*(float *)(param_1 + 0xd10c),iVar1,pcVar5);
      core_xform_cpp_quaternionFromAngleY_FUN_00585d10(local_7c + (float)_DAT_005d8c20);
      pcVar5 = core_skeleton_cpp_FUN_0054bef0;
      local_a0 = local_b0;
      afStack_9c[(uint)bVar2 * -2] = *(float *)(&stack0xffffff54 + (uint)bVar2 * -8);
      iVar1 = _DAT_02d24998;
      afStack_9c[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1] =
           *(float *)(&stack0xffffff58 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
      (afStack_9c + (uint)bVar2 * -2 + (uint)bVar2 * -2 + 1)[(uint)bVar2 * -2 + 1] =
           *(float *)((int)(&stack0xffffff58 + (uint)bVar2 * -8 + (uint)bVar2 * -8) +
                     ((uint)bVar2 * -2 + 1) * 4);
      core_skeleton_cpp_FUN_0054e170
                (local_18,(CQuaternion4f *)&local_a0,*(float *)(param_1 + 0xd10c),iVar1,pcVar5);
      return;
    }
    *(uint *)(param_1 + 0xd10c) = 0;
  }
  return;
}
