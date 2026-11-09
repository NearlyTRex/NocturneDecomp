// Name: core_setcolid.cpp_FUN_005578b0
// Address: 005578b0
// Address Range: [[005578b0, 00557da1]]
// Convention: unknown
// Signature: float core_setcolid_cpp_FUN_005578b0(CDemonSet *param_1,float param_2,float *param_3,float *param_4,float param_5)

#include "nocturne.h"

float core_setcolid_cpp_FUN_005578b0(CDemonSet *param_1,float param_2,float *param_3,float *param_4,float param_5)

{
  CDemonActor *actor;
  float fVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  float afStackY_10a0 [987];
  CBoundingBox3D *this_ptr;
  CVector3f *point;
  float fStack_118;
  SCollisionInfo local_114;
  uint uStack_ec;
  uint uStack_e8;
  uint uStack_e4;
  uint uStack_e0;
  uint uStack_d4;
  byte local_d0 [8];
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float fStack_b8;
  float afStack_b4 [4];
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float fStack_88;
  float afStack_84 [4];
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float afStack_54 [4];
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float local_24;
  int local_20;
  CDemonSet *local_1c;
  uint *local_18;
  float fStack_14;
  
  bVar4 = 0;
  *(uint *)&param_1->field_0x14d148 = 0xffffffff;
  *(uint *)&param_1->field_0x14d14c = 0xffffffff;
  *(uint *)&param_1->field_0x14d144 = 0;
  if (-1 < *(int *)&param_1->field_0x15f6ac) {
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
    afStack_b4[2] = *param_4 - *param_3;
    afStack_b4[3] = param_4[1] - param_3[1];
    local_a4 = param_4[2] - param_3[2];
    local_94 = afStack_b4[2] * local_24;
    local_90 = afStack_b4[3] * local_24;
    local_8c = local_a4 * local_24;
    if ((float *)local_d0 != param_3) {
      local_d0._0_4_ = *param_3;
      local_d0._4_4_ = param_3[1];
      local_c8 = param_3[2];
    }
    if (&local_c4 != param_3) {
      local_c4 = *param_3;
      local_c0 = param_3[1];
      local_bc = param_3[2];
    }
    afStack_84[2] = *param_3 + local_94;
    afStack_84[3] = param_3[1] + local_90;
    local_74 = param_3[2] + local_8c;
    local_a0 = afStack_b4[2];
    local_9c = afStack_b4[3];
    local_98 = local_a4;
    local_70 = local_94;
    local_6c = local_90;
    local_68 = local_8c;
    local_64 = afStack_84[2];
    fStack_60 = afStack_84[3];
    fStack_5c = local_74;
    core_box_cpp_CBoundingBox3D_expand_FUN_00420500
              ((CBoundingBox3D *)local_d0,(CVector3f *)&local_64);
    core_setcolid_cpp_SCollisionInfo_ctor_FUN_005593c0(&local_114);
    local_114._0_4_ = *(uint *)&param_1->field_0x15f698;
    local_114._4_4_ = *(uint *)&param_1->field_0x15f69c;
    local_114._8_4_ = *(uint *)&param_1->field_0x15f6a0;
    local_114._12_4_ = *(uint *)&param_1->field_0x15f6a4;
    local_114._16_4_ = *(uint *)&param_1->field_0x15f6a8;
    local_20 = 0;
    if (0 < *(int *)&param_1->field_0x156db8) {
      local_18 = (uint *)&param_1->field_0x14d128;
      local_1c = param_1;
      do {
        actor = *(CDemonActor **)&local_1c->field_0x156dbc;
        iVar2 = core_setcolid_cpp_CDemonSet_isActorIgnored_FUN_00557db0(param_1,actor);
        if (iVar2 == 0) {
          local_114._32_4_ = iVar2;
          local_114._36_4_ = iVar2;
          iVar2 = (**(code **)(*(int *)&actor->field_0x154 + 0x3c))(actor,&local_114);
          if (iVar2 != 0) {
            fStack_118 = (float)core_actor_cpp_FUN_00409170
                                          (actor,param_3,&local_70,&uStack_ec,&local_114,iVar2,
                                           local_d0);
            fStack_14 = fStack_118;
            if (((fStack_118 <= 1.0) &&
                (fVar1 = fStack_118 * local_24, fStack_118 = fVar1, fVar1 < param_5)) &&
               (param_2 < fVar1)) {
              if (&uStack_ec != local_18) {
                *local_18 = uStack_ec;
                local_18[1] = uStack_e8;
                local_18[2] = uStack_e4;
              }
              *(CDemonActor **)&param_1->field_0x14d144 = actor;
              *(uint *)&param_1->field_0x14d148 = uStack_e0;
              *(uint *)&param_1->field_0x14d14c = uStack_d4;
              local_24 = fVar1;
              afStack_54[2] = *param_4 - *param_3;
              afStack_54[3] = param_4[1] - param_3[1];
              fStack_44 = param_4[2] - param_3[2];
              fStack_34 = *param_4 - *param_3;
              afStack_54[(uint)bVar4 * -2 + 9] = afStack_54[(uint)bVar4 * -2 + 3];
              afStack_54[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10] =
                   afStack_54[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
              fStack_b8 = fStack_34 * fVar1;
              afStack_b4[0] = fStack_30 * fVar1;
              afStack_b4[1] = fStack_2c * fVar1;
              fStack_40 = fStack_34 * fVar1;
              afStack_54[(uint)bVar4 * -2 + 6] = afStack_b4[(uint)bVar4 * -2];
              afStack_54[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7] =
                   afStack_b4[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
              if (&local_70 != afStack_54 + 5) {
                local_70 = fStack_40;
                local_6c = fStack_3c;
                local_68 = fStack_38;
              }
              if ((float *)local_d0 != param_3) {
                local_d0._0_4_ = *param_3;
                local_d0._4_4_ = param_3[1];
                local_c8 = param_3[2];
              }
              if (&local_c4 != param_3) {
                local_c4 = *param_3;
                local_c0 = param_3[1];
                local_bc = param_3[2];
              }
              point = (CVector3f *)&fStack_88;
              fStack_58 = *param_3 + local_70;
              afStack_54[0] = param_3[1] + local_6c;
              this_ptr = (CBoundingBox3D *)local_d0;
              afStack_54[1] = param_3[2] + local_68;
              fStack_88 = *param_3 + local_70;
              afStack_84[(uint)bVar4 * -2] = afStack_54[(uint)bVar4 * -2];
              afStack_84[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
                   afStack_54[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
              core_box_cpp_CBoundingBox3D_expand_FUN_00420500(this_ptr,point);
              param_5 = fVar1;
            }
          }
        }
        local_1c = (CDemonSet *)&local_1c->field_0x4;
        local_20 = local_20 + 1;
      } while (local_20 < *(int *)&param_1->field_0x156db8);
    }
    iVar2 = *(int *)&param_1->field_0x14d144;
    if (iVar2 != 0) {
      uVar3 = (**(code **)(*(int *)(iVar2 + 0x154) + 0x44))(iVar2);
      *(uint *)&param_1->field_0x14d134 = uVar3;
    }
  }
  return param_5;
}
