// Name: core_setcolid.cpp_CDemonSet_raycastAgainstActors_FUN_0050ffe0
// Address: 0050ffe0
// Address Range: [[0050ffe0, 005103e6]]
// Convention: unknown
// Signature: float core_setcolid_cpp_CDemonSet_raycastAgainstActors_FUN_0050ffe0(int param_1,float param_2,float *param_3,float *param_4,float param_5)

#include "nocturne.h"

float core_setcolid_cpp_CDemonSet_raycastAgainstActors_FUN_0050ffe0(int param_1,float param_2,float *param_3,float *param_4,float param_5)

{
  int iVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  uint local_cc;
  uint local_c8;
  uint local_c4;
  uint local_c0;
  uint local_bc;
  int local_ac;
  int local_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  uint uStack_98;
  uint uStack_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float local_4c;
  float local_48;
  float local_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float local_24;
  int local_20;
  int local_1c;
  uint *local_18;
  float fStack_14;
  
  *(uint *)(param_1 + 0x14cd60) = 0xffffffff;
  *(uint *)(param_1 + 0x14cd64) = 0xffffffff;
  *(uint *)(param_1 + 0x14cd5c) = 0;
  if (-1 < *(int *)(param_1 + 0x15f2ac)) {
    if (param_5 <= 0.0) {
      return 0.0;
    }
    if (param_2 < 0.0) {
      param_2 = 0.0;
    }
    local_24 = param_5;
    if (1.0 < param_5) {
      local_24 = 1.0;
    }
    local_70 = *param_4 - *param_3;
    local_6c = param_4[1] - param_3[1];
    local_64 = local_70 * local_24;
    local_68 = param_4[2] - param_3[2];
    local_60 = local_6c * local_24;
    local_5c = local_68 * local_24;
    if (&local_88 != param_3) {
      local_88 = *param_3;
      local_84 = param_3[1];
      local_80 = param_3[2];
    }
    if (&local_7c != param_3) {
      local_7c = *param_3;
      local_78 = param_3[1];
      local_74 = param_3[2];
    }
    local_4c = *param_3 + local_64;
    local_48 = param_3[1] + local_60;
    local_44 = param_3[2] + local_5c;
    core_box_cpp_CBoundingBox3D_expand_FUN_0041cc00(&local_88,&local_4c);
    core_setcolid_cpp_SCollisionInfo_ctor_FUN_00511990(&local_cc);
    local_cc = *(uint *)(param_1 + 0x15f298);
    local_c8 = *(uint *)(param_1 + 0x15f29c);
    local_c4 = *(uint *)(param_1 + 0x15f2a0);
    local_c0 = *(uint *)(param_1 + 0x15f2a4);
    local_bc = *(uint *)(param_1 + 0x15f2a8);
    local_1c = 0;
    if (0 < *(int *)(param_1 + 0x1569c0)) {
      local_18 = (uint *)(param_1 + 0x14cd40);
      local_20 = param_1;
      do {
        iVar1 = *(int *)(local_20 + 0x1569c4);
        iVar3 = core_setcolid_cpp_CDemonSet_isActorIgnored_FUN_005103f0(param_1,iVar1);
        if (iVar3 == 0) {
          local_ac = iVar3;
          local_a8 = iVar3;
          iVar3 = (**(code **)(*(int *)(iVar1 + 0x14c) + 0x34))(iVar1,&local_cc);
          if (iVar3 != 0) {
            fStack_14 = (float)core_actor_cpp_CDemonActor_rayIntersect_FUN_0040a740
                                         (iVar1,param_3,&local_64,&uStack_a4,&local_cc,iVar3,
                                          &local_88);
            if (((fStack_14 <= 1.0) && (fVar2 = fStack_14 * local_24, fVar2 < param_5)) &&
               (param_2 < fVar2)) {
              if (&uStack_a4 != local_18) {
                *local_18 = uStack_a4;
                local_18[1] = uStack_a0;
                local_18[2] = uStack_9c;
              }
              *(int *)(param_1 + 0x14cd5c) = iVar1;
              *(uint *)(param_1 + 0x14cd60) = uStack_98;
              *(uint *)(param_1 + 0x14cd64) = uStack_8c;
              fStack_40 = *param_4 - *param_3;
              fStack_3c = param_4[1] - param_3[1];
              fStack_58 = fStack_40 * fVar2;
              fStack_38 = param_4[2] - param_3[2];
              fStack_54 = fStack_3c * fVar2;
              fStack_50 = fStack_38 * fVar2;
              if (&local_64 != &fStack_58) {
                local_64 = fStack_58;
                local_60 = fStack_54;
                local_5c = fStack_50;
              }
              if (&local_88 != param_3) {
                local_88 = *param_3;
                local_84 = param_3[1];
                local_80 = param_3[2];
              }
              if (&local_7c != param_3) {
                local_7c = *param_3;
                local_78 = param_3[1];
                local_74 = param_3[2];
              }
              fStack_34 = *param_3 + local_64;
              fStack_30 = param_3[1] + local_60;
              fStack_2c = param_3[2] + local_5c;
              local_24 = fVar2;
              core_box_cpp_CBoundingBox3D_expand_FUN_0041cc00(&local_88,&fStack_34);
              param_5 = fVar2;
            }
          }
        }
        local_20 = local_20 + 4;
        local_1c = local_1c + 1;
      } while (local_1c < *(int *)(param_1 + 0x1569c0));
    }
    iVar1 = *(int *)(param_1 + 0x14cd5c);
    if (iVar1 != 0) {
      uVar4 = (**(code **)(*(int *)(iVar1 + 0x14c) + 0x3c))(iVar1);
      *(uint *)(param_1 + 0x14cd4c) = uVar4;
    }
  }
  return param_5;
}
