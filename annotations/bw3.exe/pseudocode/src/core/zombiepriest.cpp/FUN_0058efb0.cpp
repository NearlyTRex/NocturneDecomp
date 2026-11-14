// Name: core_zombiepriest.cpp_FUN_0058efb0
// Address: 0058efb0
// Address Range: [[0058efb0, 0058f497]]
// Convention: unknown
// Signature: undefined4 core_zombiepriest_cpp_FUN_0058efb0(CCharacter *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_zombiepriest_cpp_FUN_0058efb0(CCharacter *param_1,float param_2)

{
  CDemonActor *this_ptr;
  CDemonActor *pCVar1;
  int iVar2;
  int iVar3;
  CLocation *pCVar4;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
  float afStackY_1098 [988];
  CPathMap *path_map;
  CVector3f *direction;
  float fVar8;
  float *pfVar9;
  float fVar10;
  float fStack_110;
  float fStack_10c;
  uint auStack_e0 [2];
  float fStack_d8;
  byte auStack_d4 [12];
  uint auStack_c8 [6];
  uint uStack_b0;
  float afStack_ac [4];
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  CVector3f CStack_8c;
  CVector3f CStack_80;
  float fStack_74;
  float afStack_70 [5];
  float afStack_5c [3];
  float fStack_50;
  float afStack_44 [5];
  float fStack_30;
  int local_2c;
  CLocation *local_28;
  int local_24;
  int local_20;
  int local_1c;
  float local_18;
  
  bVar7 = 0;
  if (*(int *)(param_1[1].base.actor_name + 0xc) == 0) {
    fVar8 = param_1[1].model.bone_origins[0x12].y - param_2;
    param_1[1].model.bone_origins[0x12].y = fVar8;
    if (0.0 < fVar8) {
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
        fVar8 = param_1[1].model.bone_origins[0x13].x;
        pCVar4 = &(param_1->base).location;
        if (fVar8 == 0.0) {
          local_2c = 0;
          local_20 = 0;
          local_1c = 0;
          local_28 = pCVar4;
          for (local_24 = 0; local_24 < g_CDemonSetPtr->actor_count; local_24 = local_24 + 1) {
            this_ptr = *(CDemonActor **)((int)g_CDemonSetPtr->actors + local_20);
            pCVar1 = (*((this_ptr->vtable)._ub)->getCarrier)(this_ptr);
            if ((pCVar1 == (CDemonActor *)0x0) &&
               (iVar3 = core_actor_cpp_isOfClass_FUN_0040c790(this_ptr,"CTommyGun"),
               iVar3 != 0)) {
              fStack_74 = (this_ptr->location).position.x - (local_28->position).x;
              afStack_70[0] = (this_ptr->location).position.y - (local_28->position).y;
              afStack_70[1] = (this_ptr->location).position.z - (local_28->position).z;
              fStack_98 = fStack_74;
              afStack_ac[(uint)bVar7 * -2 + 6] = afStack_70[(uint)bVar7 * -2];
              afStack_ac[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
                   afStack_70[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
              fStack_94 = fStack_94 * fStack_94 * fStack_94 * fStack_94;
              fStack_110 = SQRT(fStack_90 * fStack_90 +
                                fStack_98 * fStack_98 + fStack_94 * fStack_94);
              if (((float)_DAT_005d8c40 <= fStack_110) && ((int)fStack_110 < 0x41700001)) {
                *(CDemonActor **)(&stack0xfffffef8 + local_1c) = this_ptr;
                local_1c = local_1c + 4;
                local_2c = local_2c + 1;
                if (0x27 < local_1c) break;
              }
            }
            local_20 = local_20 + 4;
          }
          if (0 < local_2c) {
            iVar3 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,local_2c + -1);
            fVar8 = *(float *)(&stack0xfffffef8 + iVar3 * 4);
            param_1[1].model.bone_origins[0x12].z = -40.0;
            fVar10 = param_1[1].model.bone_origins[0x12].x;
            param_1[1].model.bone_origins[0x13].x = fVar8;
            param_1[1].model.bone_origins[0x12].x = (float)((int)fVar10 + 1);
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                      (&(param_1->model).base,1,1);
            return 1;
          }
        }
        else {
          iVar3 = (**(code **)(*(int *)((int)fVar8 + 0x154) + 0x94))(fVar8);
          if (iVar3 != 0) {
            param_1[1].model.bone_origins[0x13].x = 0.0;
            param_1[1].model.bone_origins[0x12].z = 0.0;
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                      (&(param_1->model).base,1,1);
            return 0;
          }
          fVar8 = param_1[1].model.bone_origins[0x13].x;
          fVar10 = (pCVar4->position).x - *(float *)((int)fVar8 + 0x20);
          fVar8 = (param_1->base).location.position.z - *(float *)((int)fVar8 + 0x28);
          fStack_10c = (float)_DAT_005d8c40 -
                       SQRT(fVar8 * fVar8 + fVar10 * fVar10) * (float)_DAT_005d8c38;
          if (fStack_10c < 1.0) {
            fStack_10c = 1.0;
          }
          fVar8 = param_2 * fStack_10c + param_1[1].model.bone_origins[0x12].z;
          iVar3 = -1;
          param_1[1].model.bone_origins[0x12].z = fVar8;
          if ((fVar8 < 0.0) &&
             (fVar8 = param_1[1].model.bone_origins[0x13].x,
             iVar2 = (**(code **)(*(int *)((int)fVar8 + 0x154) + 0x84))(fVar8,param_1), iVar2 == 3))
          {
            fVar8 = param_1[1].model.bone_origins[0x13].x;
            (**(code **)(*(int *)((int)fVar8 + 0x154) + 0x1c))(fVar8);
            puVar5 = auStack_c8;
            puVar6 = auStack_e0;
            for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
              *puVar6 = *puVar5;
              puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
              puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
            }
            fStack_30 = 0.5;
            core_bodypart_cpp_FUN_00416c50(auStack_e0,auStack_d4,afStack_70 + 0x10);
            afStack_5c[0] = (float)uStack_b0;
            afStack_70[(uint)bVar7 * -2 + 6] = afStack_ac[(uint)bVar7 * -2];
            afStack_70[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
                 afStack_ac[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
            core_bodypart_cpp_FUN_00416bd0(afStack_70 + 5);
            pfVar9 = afStack_70 + 0xb;
            afStack_ac[2] = afStack_70[2];
            afStack_ac[(uint)bVar7 * -2 + 3] = afStack_70[(uint)bVar7 * -2 + 3];
            afStack_ac[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
                 afStack_70[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
            fStack_9c = fStack_d8 + (float)_DAT_005d8c48;
            afStack_44[0] = afStack_ac[2];
            afStack_70[(uint)bVar7 * -2 + 0xc] = afStack_ac[(uint)bVar7 * -2 + 3];
            afStack_70[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd] =
                 afStack_ac[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
            core_actor_cpp_FUN_00408b80(fVar8,pfVar9);
            fVar10 = 0.034906585;
            fVar8 = 0.3;
            CStack_8c.y = 0.0;
            CStack_8c.z = 0.0;
            direction = &CStack_8c;
            path_map = (CPathMap *)0x0;
            CStack_80.x = fStack_50;
            *(float *)((int)&CStack_80 + (uint)bVar7 * -8 + 4) = afStack_70[(uint)bVar7 * -2 + 9];
            *(float *)((int)&CStack_80 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
                 afStack_70[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10];
            CStack_8c.x = 1.5;
            iVar3 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0
                              (param_1,&CStack_80,path_map,direction,fVar8,fVar10);
          }
          if (-1 < iVar3) {
            if (iVar3 < 1) {
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
