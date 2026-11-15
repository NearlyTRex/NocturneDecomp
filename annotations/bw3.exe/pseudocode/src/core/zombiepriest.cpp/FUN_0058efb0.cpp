// Name: core_zombiepriest.cpp_FUN_0058efb0
// Address: 0058efb0
// Address Range: [[0058efb0, 0058f497]]
// Convention: unknown
// Signature: undefined4 core_zombiepriest_cpp_FUN_0058efb0(CCharacter *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_zombiepriest_cpp_FUN_0058efb0(CCharacter *param_1,float param_2)

{
  CDemonActor *pCVar1;
  CDemonActor *pCVar2;
  int iVar3;
  int iVar4;
  CLocation *pCVar5;
  uint *puVar6;
  uint *puVar7;
  byte bVar8;
  float afStackY_1098 [988];
  CPathMap *path_map;
  CVector3f *pCVar9;
  CBoundingBox3D *out_box;
  float fVar10;
  float fVar11;
  float fStack_10c;
  byte auStack_e0 [8];
  float fStack_d8;
  byte auStack_d4 [12];
  uint auStack_c8 [6];
  uint uStack_b0;
  float afStack_ac [4];
  float fStack_9c;
  float fStack_94;
  float fStack_90;
  CVector3f CStack_8c;
  CVector3f CStack_80;
  float fStack_70;
  float afStack_6c [4];
  float afStack_5c [3];
  CVector3f CStack_50;
  CVector3f CStack_44;
  uint uStack_30;
  int local_2c;
  CLocation *local_28;
  float *local_24;
  int local_20;
  int local_1c;
  float local_18;
  
  bVar8 = 0;
  if (*(int *)(param_1[1].base.actor_name + 0xc) == 0) {
    fVar10 = param_1[1].model.bone_origins[0x12].y - param_2;
    param_1[1].model.bone_origins[0x12].y = fVar10;
    if (0.0 < fVar10) {
      param_1[1].model.bone_origins[0x12].x =
           (float)((int)param_1[1].model.bone_origins[0x12].x + 1);
      local_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(5.0,10.0);
      param_1[1].model.bone_origins[0x12].y = local_18;
    }
    if (((param_1->model).part_data.visibility_flags[param_1->carry_hands[1].secondary_bone_index]
         != 0) && (param_1->carry_hands[1].carry_actor == (CDemonActor *)0x0)) {
      if (0.0 < param_1[1].model.bone_origins[0x12].z) {
        param_2 = param_1[1].model.bone_origins[0x12].z - param_2;
        param_1[1].model.bone_origins[0x12].z = param_2;
        if (param_2 < 0.0) {
          param_1[1].model.bone_origins[0x12].z = 0.0;
          return 0;
        }
      }
      else {
        fVar10 = param_1[1].model.bone_origins[0x13].x;
        pCVar5 = &(param_1->base).location;
        if (fVar10 == 0.0) {
          local_2c = 0;
          local_24 = (float *)0x0;
          local_20 = 0;
          local_1c = 0;
          local_28 = pCVar5;
          while ((int)local_24 < g_CDemonSetPtr->actor_count) {
            pCVar1 = *(CDemonActor **)((int)g_CDemonSetPtr->actors + local_20);
            pCVar2 = (*((pCVar1->vtable)._ub)->getCarrier)(pCVar1);
            if ((pCVar2 == (CDemonActor *)0x0) &&
               (iVar4 = core_actor_cpp_isOfClass_FUN_0040c790(pCVar1,"CTommyGun"),
               iVar4 != 0)) {
              fStack_70 = (pCVar1->location).position.x - *local_24;
              afStack_6c[0] = (pCVar1->location).position.y - local_24[1];
              afStack_6c[1] = (pCVar1->location).position.z - local_24[2];
              fStack_94 = fStack_70;
              afStack_ac[(uint)bVar8 * -2 + 7] = afStack_6c[(uint)bVar8 * -2];
              *(float *)((int)&CStack_8c + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
                   afStack_6c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
              fStack_90 = fStack_90 * fStack_90 * fStack_90 * fStack_90;
              fStack_10c = SQRT(CStack_8c.x * CStack_8c.x +
                                fStack_94 * fStack_94 + fStack_90 * fStack_90);
              if (((float)_DAT_005d8c40 <= fStack_10c) && ((int)fStack_10c < 0x41700001)) {
                *(CDemonActor **)(&stack0xfffffefc + (int)local_18) = pCVar1;
                local_18 = (float)((int)local_18 + 4);
                local_28 = (CLocation *)((int)&(local_28->position).x + 1);
                if (0x27 < (int)local_18) break;
              }
            }
            local_20 = local_20 + 1;
            local_1c = local_1c + 4;
          }
          if (0 < local_2c) {
            iVar4 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,local_2c + -1);
            fVar10 = *(float *)(&stack0xfffffef8 + iVar4 * 4);
            param_1[1].model.bone_origins[0x12].z = -40.0;
            fVar11 = param_1[1].model.bone_origins[0x12].x;
            param_1[1].model.bone_origins[0x13].x = fVar10;
            param_1[1].model.bone_origins[0x12].x = (float)((int)fVar11 + 1);
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                      (&(param_1->model).base,1,1);
            return 1;
          }
        }
        else {
          iVar4 = (**(code **)(*(int *)((int)fVar10 + 0x154) + 0x94))(fVar10);
          if (iVar4 != 0) {
            param_1[1].model.bone_origins[0x13].x = 0.0;
            param_1[1].model.bone_origins[0x12].z = 0.0;
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                      (&(param_1->model).base,1,1);
            return 0;
          }
          fVar10 = param_1[1].model.bone_origins[0x13].x;
          fVar11 = (pCVar5->position).x - *(float *)((int)fVar10 + 0x20);
          fVar10 = (param_1->base).location.position.z - *(float *)((int)fVar10 + 0x28);
          fStack_10c = (float)_DAT_005d8c40 -
                       SQRT(fVar10 * fVar10 + fVar11 * fVar11) * (float)_DAT_005d8c38;
          if (fStack_10c < 1.0) {
            fStack_10c = 1.0;
          }
          fVar10 = param_2 * fStack_10c + param_1[1].model.bone_origins[0x12].z;
          iVar4 = -1;
          param_1[1].model.bone_origins[0x12].z = fVar10;
          if (fVar10 < 0.0) {
            out_box = (CBoundingBox3D *)param_1[1].model.bone_origins[0x13].x;
            iVar3 = (**(code **)((int)out_box[0xe].min.y + 0x84))(out_box,param_1);
            if (iVar3 == 3) {
              pCVar1 = (CDemonActor *)param_1[1].model.bone_origins[0x13].x;
              (*((pCVar1->vtable)._ub)->getBoundingBox)(pCVar1,out_box);
              puVar6 = auStack_c8;
              puVar7 = (uint *)&stack0xffffff18;
              for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
                *puVar7 = *puVar6;
                puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
                puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
              }
              uStack_30 = 0x3f000000;
              core_bodypart_cpp_FUN_00416c50(auStack_e0,auStack_d4,&uStack_30);
              afStack_5c[0] = (float)uStack_b0;
              afStack_6c[(uint)bVar8 * -2 + 5] = afStack_ac[(uint)bVar8 * -2];
              afStack_6c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 6] =
                   afStack_ac[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
              core_bodypart_cpp_FUN_00416bd0(afStack_6c + 4);
              pCVar9 = &CStack_44;
              afStack_ac[2] = afStack_6c[1];
              afStack_ac[(uint)bVar8 * -2 + 3] = afStack_6c[(uint)bVar8 * -2 + 2];
              afStack_ac[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
                   afStack_6c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 3];
              fStack_9c = fStack_d8 + (float)_DAT_005d8c48;
              CStack_44.x = afStack_ac[2];
              *(float *)((int)&CStack_44 + (uint)bVar8 * -8 + 4) = afStack_ac[(uint)bVar8 * -2 + 3];
              *(float *)((int)&CStack_44 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
                   afStack_ac[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4];
              core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80(pCVar1,pCVar9,&CStack_50);
              fVar11 = 0.034906585;
              fVar10 = 0.3;
              CStack_8c.y = 0.0;
              CStack_8c.z = 0.0;
              pCVar9 = &CStack_8c;
              path_map = (CPathMap *)0x0;
              CStack_80.x = CStack_50.x;
              *(uint *)((int)&CStack_80 + (uint)bVar8 * -8 + 4) =
                   *(uint *)((int)&CStack_50 + (uint)bVar8 * -8 + 4);
              *(uint *)((int)&CStack_80 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
                   *(uint *)((int)&CStack_50 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
              CStack_8c.x = 1.5;
              iVar4 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0
                                (param_1,&CStack_80,path_map,pCVar9,fVar10,fVar11);
            }
          }
          if (-1 < iVar4) {
            if (iVar4 < 1) {
              return 1;
            }
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                      (&(param_1->model).base,7,1);
            return 1;
          }
          param_1[1].model.bone_origins[0x13].x = 0.0;
          param_1[1].model.bone_origins[0x12].z = 20.0;
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&(param_1->model).base,1,1)
          ;
        }
      }
    }
  }
  return 0;
}
