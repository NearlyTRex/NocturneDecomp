// Name: core_haystack.cpp_FUN_004f13f0
// Address: 004f13f0
// Address Range: [[004f13f0, 004f1943]]
// Convention: unknown
// Signature: undefined core_haystack.cpp_FUN_004f13f0()

#include "nocturne.h"

/* Signature: byte actors_hero_haystack.cpp_FUN_004f13f0(uint param_1, uint
   param_2) */

void core_haystack_cpp_FUN_004f13f0(void)

{
  bool bVar1;
  CHero *pCVar2;
  CVector3f *pCVar3;
  float fVar4;
  SMotion *pSVar5;
  CPathMap *this_ptr;
  int iVar6;
  float fVar7;
  BADSPACEBASE *in_ESP;
  CHero *pCVar8;
  int in_stack_00000004;
  float in_stack_00000008;
  float local_8c;
  CVector3f local_84;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  CVector3f local_60;
  float local_50;
  byte local_48 [8];
  float local_40;
  CVector3f local_3c;
  float local_30;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  
  bVar1 = false;
  local_1c = 0.25;
  local_20 = 0.7853982;
  pCVar8 = g_HeroActors[g_LocalHeroIndex];
  crt_memory_c_memset_FUN_005fde40((void *)(in_stack_00000004 + 0xbe2c),0,0x2c);
  if (*(int *)(in_stack_00000004 + 130000) != 0) {
    pCVar2 = g_HeroActors[g_LocalHeroIndex];
    local_48._0_4_ =
         *(float *)(in_stack_00000004 + 0x20) -
         (pCVar2->base_character).base_actor.location.position.x;
    local_48._4_4_ =
         *(float *)(in_stack_00000004 + 0x24) -
         (pCVar2->base_character).base_actor.location.position.y;
    local_40 = *(float *)(in_stack_00000004 + 0x28) -
               (pCVar2->base_character).base_actor.location.position.z;
    local_30 = SQRT(local_40 * local_40 +
                    (float)local_48._0_4_ * (float)local_48._0_4_ +
                    (float)local_48._4_4_ * (float)local_48._4_4_);
    if (((*(int *)(in_stack_00000004 + 130000) == 3) || (local_30 < 20f)) &&
       ((*(int *)(in_stack_00000004 + 130000) == 2 || (*(int *)(in_stack_00000004 + 130000) == 3))))
    {
      pCVar2 = (CHero *)core_hero_cpp_FUN_004f3960();
      if ((pCVar2 == (CHero *)0x0) || ((float)20 <= 9999.9)) {
        if (*(int *)(in_stack_00000004 + 0x1fbd4) != 0) {
          *(uint *)(in_stack_00000004 + 0xbe44) = 1;
        }
      }
      else {
        bVar1 = true;
        pCVar8 = pCVar2;
      }
    }
    local_78 = (pCVar8->base_character).base_actor.location.position.x -
               *(float *)(in_stack_00000004 + 0x20);
    local_74 = (pCVar8->base_character).base_actor.location.position.y -
               *(float *)(in_stack_00000004 + 0x24);
    local_70 = (pCVar8->base_character).base_actor.location.position.z -
               *(float *)(in_stack_00000004 + 0x28);
    if ((float *)local_48 != &local_78) {
      local_48._0_4_ = local_78;
      local_48._4_4_ = local_74;
      local_40 = local_70;
    }
    fVar4 = SQRT(local_40 * local_40 +
                 (float)local_48._0_4_ * (float)local_48._0_4_ +
                 (float)local_48._4_4_ * (float)local_48._4_4_);
    local_18 = fVar4;
    if ((float)6 <= fVar4) {
      this_ptr = (CPathMap *)0x0;
      if (!bVar1) {
        this_ptr = (*((g_HeroActors[g_LocalHeroIndex]->base_character).base_actor.vtable)->
                     getPathMap)((CDemonActor *)g_HeroActors[g_LocalHeroIndex]);
      }
      if (this_ptr == (CPathMap *)0x0) {
        this_ptr = (CPathMap *)core_path_cpp_FUN_00548500();
      }
      iVar6 = core_path_cpp_CPathMap_findPathWithRetry_FUN_00547d00
                        (this_ptr,(CVector3f *)(in_stack_00000004 + 0x20),&local_84,
                         *(int *)(in_stack_00000004 + 0x6c));
      if (iVar6 != 0) {
        fVar7 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                          (local_84.y - *(float *)(in_stack_00000004 + 0x34));
        fVar7 = fVar7 * (float)0.31830988619288902 * (float)4;
        local_24 = -local_1c;
        *(float *)(in_stack_00000004 + 0xbe50) = fVar7;
        if (fVar7 < local_24) {
          *(float *)(in_stack_00000004 + 0xbe50) = local_24;
        }
        if (local_1c < *(float *)(in_stack_00000004 + 0xbe50)) {
          *(float *)(in_stack_00000004 + 0xbe50) = local_1c;
        }
        if (((float)10 <= fVar4) || (bVar1)) {
          *(uint *)(in_stack_00000004 + 0xbe34) = 1;
          *(uint *)(in_stack_00000004 + 0xbe2c) = 1;
        }
        else {
          *(uint *)(in_stack_00000004 + 0xbe2c) = 1;
        }
      }
    }
    else {
      if (bVar1) {
        if (*(int *)(in_stack_00000004 + 0x1fbd4) == 0) {
          *(uint *)(in_stack_00000004 + 0xbe44) = 1;
        }
        else {
          pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                             ((CMotionController *)(in_stack_00000004 + 0x158));
          if ((pSVar5->state_index != 2) && (pSVar5->state_index != 1)) {
            *(uint *)(in_stack_00000004 + 0xbe38) = 1;
          }
        }
      }
      else {
        pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                           ((CMotionController *)(in_stack_00000004 + 0x158));
        if ((pSVar5->state_index == 10) && (*(int *)(in_stack_00000004 + 0x1fbd4) != 0)) {
          *(uint *)(in_stack_00000004 + 0xbe44) = 1;
        }
      }
      if (bVar1) {
        pCVar3 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                           (&local_60,(CVector3f *)local_48);
        fVar4 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                          (pCVar3->y - *(float *)(in_stack_00000004 + 0x34));
        fVar4 = fVar4 * (float)0.31830988619288902 * (float)4;
        local_28 = -local_1c;
        *(float *)(in_stack_00000004 + 0xbe50) = fVar4;
        if (fVar4 < local_28) {
          *(float *)(in_stack_00000004 + 0xbe50) = local_28;
        }
        if (local_1c < *(float *)(in_stack_00000004 + 0xbe50)) {
          *(float *)(in_stack_00000004 + 0xbe50) = local_1c;
        }
        if ((((float)-0.25 < *(float *)(in_stack_00000004 + 0xbe50)) &&
            ((double)*(float *)(in_stack_00000004 + 0xbe50) < 0.25)) &&
           (*(int *)(in_stack_00000004 + 0xbe38) != 0)) {
          *(uint *)(in_stack_00000004 + 0xbe50) = 0;
        }
      }
    }
    local_6c = (pCVar8->base_character).base_actor.location.position.x -
               *(float *)(in_stack_00000004 + 0x20);
    local_68 = (pCVar8->base_character).base_actor.location.position.y -
               *(float *)(in_stack_00000004 + 0x24);
    local_64 = (pCVar8->base_character).base_actor.location.position.z -
               *(float *)(in_stack_00000004 + 0x28);
    if ((float *)local_48 != &local_6c) {
      local_48._0_4_ = local_6c;
      local_48._4_4_ = local_68;
      local_40 = local_64;
    }
    pCVar3 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                       (&local_3c,(CVector3f *)local_48);
    if ((CVector3f *)(local_48 + 4) != pCVar3) {
      local_48._0_4_ = pCVar3->x;
      local_48._4_4_ = pCVar3->y;
      local_40 = pCVar3->z;
    }
    local_50 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                         ((float)local_48._4_4_ - *(float *)(in_stack_00000004 + 0x34));
    if (local_20 < local_50) {
      local_50 = local_20;
    }
    if (local_50 < -local_20) {
      local_50 = -local_20;
    }
    local_8c = local_50 - *(float *)(in_stack_00000004 + 0x1fbe0);
    if (in_stack_00000008 * (float)3.1415926535000001 < local_8c) {
      local_8c = in_stack_00000008 * (float)3.1415926535000001;
    }
    if (local_8c < in_stack_00000008 * (float)-3.1415926535000001) {
      local_8c = in_stack_00000008 * (float)-3.1415926535000001;
    }
    *(float *)(in_stack_00000004 + 0x1fbe0) = *(float *)(in_stack_00000004 + 0x1fbe0) + local_8c;
  }
  return;
}
