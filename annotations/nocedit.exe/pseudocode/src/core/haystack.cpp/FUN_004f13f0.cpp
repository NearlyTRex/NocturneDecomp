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
  BADSPACEBASE *in_ESP;
  float unaff_EBP;
  CHero *pCVar7;
  int in_stack_00000004;
  float in_stack_00000008;
  float local_88;
  CVector3f local_84;
  float local_78;
  float local_74;
  float local_70;
  float local_64;
  float local_60;
  float fStack_5c;
  CVector3f CStack_58;
  float local_48;
  float local_44;
  byte local_40 [8];
  float fStack_38;
  CVector3f CStack_34;
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
    local_48 = *(float *)(in_stack_00000004 + 0x20) -
               (pCVar2->base_character).base_actor.location.position.x;
    local_44 = *(float *)(in_stack_00000004 + 0x24) -
               (pCVar2->base_character).base_actor.location.position.y;
    local_40._0_4_ =
         *(float *)(in_stack_00000004 + 0x28) -
         (pCVar2->base_character).base_actor.location.position.z;
    CStack_34.y = SQRT((float)local_40._0_4_ * (float)local_40._0_4_ +
                       local_48 * local_48 + local_44 * local_44);
    if (((*(int *)(in_stack_00000004 + 130000) == 3) || (CStack_34.y < 20f)) &&
       ((*(int *)(in_stack_00000004 + 130000) == 2 || (*(int *)(in_stack_00000004 + 130000) == 3))))
    {
      local_88 = 9999.9;
      pCVar2 = (CHero *)core_hero_cpp_FUN_004f3960();
      if ((pCVar2 == (CHero *)0x0) || ((float)20 <= local_84.x)) {
        if (*(int *)(in_stack_00000004 + 0x1fbd4) != 0) {
          *(uint *)(in_stack_00000004 + 0xbe44) = 1;
        }
      }
      else {
        bVar1 = true;
        pCVar7 = pCVar2;
      }
    }
    local_78 = (pCVar7->base_character).base_actor.location.position.x -
               *(float *)(in_stack_00000004 + 0x20);
    local_74 = (pCVar7->base_character).base_actor.location.position.y -
               *(float *)(in_stack_00000004 + 0x24);
    local_70 = (pCVar7->base_character).base_actor.location.position.z -
               *(float *)(in_stack_00000004 + 0x28);
    if (&local_48 != &local_78) {
      local_48 = local_78;
      local_44 = local_74;
      local_40._0_4_ = local_70;
    }
    local_18 = SQRT((float)local_40._0_4_ * (float)local_40._0_4_ +
                    local_48 * local_48 + local_44 * local_44);
    if ((float)6 <= local_18) {
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
        fVar4 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                          (local_84.z - *(float *)(in_stack_00000004 + 0x34));
        fVar4 = fVar4 * (float)0.31830988619288902 * (float)4;
        local_1c = -local_14;
        *(float *)(in_stack_00000004 + 0xbe50) = fVar4;
        if (fVar4 < local_1c) {
          *(float *)(in_stack_00000004 + 0xbe50) = local_1c;
        }
        if (local_14 < *(float *)(in_stack_00000004 + 0xbe50)) {
          *(float *)(in_stack_00000004 + 0xbe50) = local_14;
        }
        if (((float)10 <= local_88) || (bVar1)) {
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
                             ((CMotionController *)0x4f17e6);
          if ((pSVar5->state_index != 2) && (pSVar5->state_index != 1)) {
            *(uint *)(in_stack_00000004 + 0xbe38) = 1;
          }
        }
      }
      else {
        pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                           ((CMotionController *)0x4f180e);
        if ((pSVar5->state_index == 10) && (*(int *)(in_stack_00000004 + 0x1fbd4) != 0)) {
          *(uint *)(in_stack_00000004 + 0xbe44) = 1;
        }
      }
      if (bVar1) {
        pCVar3 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                           (&CStack_58,(CVector3f *)local_40);
        fVar4 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                          (pCVar3->y - *(float *)(in_stack_00000004 + 0x34));
        fVar4 = fVar4 * (float)0.31830988619288902 * (float)4;
        local_20 = -local_14;
        *(float *)(in_stack_00000004 + 0xbe50) = fVar4;
        if (fVar4 < local_20) {
          *(float *)(in_stack_00000004 + 0xbe50) = local_20;
        }
        if (local_14 < *(float *)(in_stack_00000004 + 0xbe50)) {
          *(float *)(in_stack_00000004 + 0xbe50) = local_14;
        }
        if ((((float)-0.25 < *(float *)(in_stack_00000004 + 0xbe50)) &&
            ((double)*(float *)(in_stack_00000004 + 0xbe50) < 0.25)) &&
           (*(int *)(in_stack_00000004 + 0xbe38) != 0)) {
          *(uint *)(in_stack_00000004 + 0xbe50) = 0;
        }
      }
    }
    local_64 = (pCVar7->base_character).base_actor.location.position.x -
               *(float *)(in_stack_00000004 + 0x20);
    local_60 = (pCVar7->base_character).base_actor.location.position.y -
               *(float *)(in_stack_00000004 + 0x24);
    fStack_5c = (pCVar7->base_character).base_actor.location.position.z -
                *(float *)(in_stack_00000004 + 0x28);
    if ((float *)local_40 != &local_64) {
      local_40._0_4_ = local_64;
      local_40._4_4_ = local_60;
      fStack_38 = fStack_5c;
    }
    pCVar3 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                       (&CStack_34,(CVector3f *)local_40);
    if ((CVector3f *)(local_40 + 4) != pCVar3) {
      local_40._4_4_ = pCVar3->x;
      fStack_38 = pCVar3->y;
      CStack_34.x = pCVar3->z;
    }
    local_40._0_4_ =
         core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                   (fStack_38 - *(float *)(in_stack_00000004 + 0x34));
    if (unaff_EBP < (float)local_40._0_4_) {
      local_40._0_4_ = unaff_EBP;
    }
    if ((float)local_40._0_4_ < -unaff_EBP) {
      local_40._0_4_ = -unaff_EBP;
    }
    local_84.z = (float)local_40._0_4_ - *(float *)(in_stack_00000004 + 0x1fbe0);
    if (in_stack_00000008 * (float)3.1415926535000001 < local_84.z) {
      local_84.z = in_stack_00000008 * (float)3.1415926535000001;
    }
    if (local_84.z < in_stack_00000008 * (float)-3.1415926535000001) {
      local_84.z = in_stack_00000008 * (float)-3.1415926535000001;
    }
    *(float *)(in_stack_00000004 + 0x1fbe0) = *(float *)(in_stack_00000004 + 0x1fbe0) + local_84.z;
  }
  return;
}
