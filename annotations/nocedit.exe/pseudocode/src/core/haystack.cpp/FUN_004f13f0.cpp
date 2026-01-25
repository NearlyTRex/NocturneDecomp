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
  SMotion *pSVar4;
  CPathMap *this_ptr;
  int iVar5;
  float fVar6;
  CHero *pCVar7;
  int in_stack_00000004;
  float in_stack_00000008;
  float local_8c;
  float local_88;
  CVector3f local_80;
  float local_74;
  float local_70;
  float local_68;
  float local_64;
  CVector3f local_60;
  float fStack_4c;
  byte local_48 [8];
  float local_40;
  float local_3c;
  CVector3f CStack_38;
  float local_28;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  bVar1 = false;
  local_1c = 0.25;
  local_20 = 0.7853982;
  pCVar7 = g_HeroActors[g_LocalHeroIndex];
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
    CStack_38.z = SQRT(local_40 * local_40 +
                       (float)local_48._0_4_ * (float)local_48._0_4_ +
                       (float)local_48._4_4_ * (float)local_48._4_4_);
    if (((*(int *)(in_stack_00000004 + 130000) == 3) || (CStack_38.z < 20.0f)) &&
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
        pCVar7 = pCVar2;
      }
    }
    local_80.z = (pCVar7->base_character).base_actor.location.position.x -
                 *(float *)(in_stack_00000004 + 0x20);
    local_74 = (pCVar7->base_character).base_actor.location.position.y -
               *(float *)(in_stack_00000004 + 0x24);
    local_70 = (pCVar7->base_character).base_actor.location.position.z -
               *(float *)(in_stack_00000004 + 0x28);
    if ((float *)local_48 != &local_80.z) {
      local_48._0_4_ = local_80.z;
      local_48._4_4_ = local_74;
      local_40 = local_70;
    }
    local_18 = SQRT(local_40 * local_40 +
                    (float)local_48._0_4_ * (float)local_48._0_4_ +
                    (float)local_48._4_4_ * (float)local_48._4_4_);
    if ((float)6 <= local_18) {
      this_ptr = (CPathMap *)0x0;
      if (!bVar1) {
        this_ptr = (*((g_HeroActors[g_LocalHeroIndex]->base_character).base_actor.vtable._ub)->
                     getPathMap)((CDemonActor *)g_HeroActors[g_LocalHeroIndex]);
      }
      if (this_ptr == (CPathMap *)0x0) {
        this_ptr = (CPathMap *)core_path_cpp_FUN_00548500();
      }
      iVar5 = core_path_cpp_CPathMap_findPathWithRetry_FUN_00547d00
                        (this_ptr,(CVector3f *)(in_stack_00000004 + 0x20),&local_80,
                         *(int *)(in_stack_00000004 + 0x6c));
      if (iVar5 != 0) {
        fVar6 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                          (local_80.y - *(float *)(in_stack_00000004 + 0x34));
        fVar6 = fVar6 * (float)0.31830988619288902 * (float)4;
        local_20 = -local_18;
        *(float *)(in_stack_00000004 + 0xbe50) = fVar6;
        if (fVar6 < local_20) {
          *(float *)(in_stack_00000004 + 0xbe50) = local_20;
        }
        if (local_18 < *(float *)(in_stack_00000004 + 0xbe50)) {
          *(float *)(in_stack_00000004 + 0xbe50) = local_18;
        }
        if (((float)10 <= local_8c) || (bVar1)) {
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
          pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                             ((CMotionController *)(in_stack_00000004 + 0x158));
          if ((pSVar4->state_index != 2) && (pSVar4->state_index != 1)) {
            *(uint *)(in_stack_00000004 + 0xbe38) = 1;
          }
        }
      }
      else {
        pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                           ((CMotionController *)(in_stack_00000004 + 0x158));
        if ((pSVar4->state_index == 10) && (*(int *)(in_stack_00000004 + 0x1fbd4) != 0)) {
          *(uint *)(in_stack_00000004 + 0xbe44) = 1;
        }
      }
      if (bVar1) {
        pCVar3 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                           (&local_60,(CVector3f *)local_48);
        local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                             (pCVar3->y - *(float *)(in_stack_00000004 + 0x34));
        fVar6 = local_14 * (float)0.31830988619288902 * (float)4;
        local_28 = -local_1c;
        *(float *)(in_stack_00000004 + 0xbe50) = fVar6;
        if (fVar6 < local_28) {
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
    local_68 = (pCVar7->base_character).base_actor.location.position.x -
               *(float *)(in_stack_00000004 + 0x20);
    local_64 = (pCVar7->base_character).base_actor.location.position.y -
               *(float *)(in_stack_00000004 + 0x24);
    local_60.x = (pCVar7->base_character).base_actor.location.position.z -
                 *(float *)(in_stack_00000004 + 0x28);
    if ((float *)(local_48 + 4) != &local_68) {
      local_48._4_4_ = local_68;
      local_40 = local_64;
      local_3c = local_60.x;
    }
    pCVar3 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                       (&CStack_38,(CVector3f *)(local_48 + 4));
    if ((CVector3f *)(local_48 + 4) != pCVar3) {
      local_48._4_4_ = pCVar3->x;
      local_40 = pCVar3->y;
      local_3c = pCVar3->z;
    }
    fStack_4c = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                          (local_40 - *(float *)(in_stack_00000004 + 0x34));
    if (local_1c < fStack_4c) {
      fStack_4c = local_1c;
    }
    if (fStack_4c < -local_1c) {
      fStack_4c = -local_1c;
    }
    local_88 = fStack_4c - *(float *)(in_stack_00000004 + 0x1fbe0);
    if (in_stack_00000008 * (float)3.1415926535000001 < local_88) {
      local_88 = in_stack_00000008 * (float)3.1415926535000001;
    }
    if (local_88 < in_stack_00000008 * (float)-3.1415926535000001) {
      local_88 = in_stack_00000008 * (float)-3.1415926535000001;
    }
    *(float *)(in_stack_00000004 + 0x1fbe0) = *(float *)(in_stack_00000004 + 0x1fbe0) + local_88;
  }
  return;
}
