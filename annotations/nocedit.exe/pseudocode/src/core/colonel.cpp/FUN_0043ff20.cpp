// Name: core_colonel.cpp_FUN_0043ff20
// Address: 0043ff20
// Address Range: [[0043ff20, 00440423]]
// Convention: unknown
// Signature: undefined core_colonel.cpp_FUN_0043ff20()

#include "nocturne.h"

/* Signature: byte actors_hero_colonel.cpp_FUN_0043ff20(uint param_1, uint
   param_2) */

void core_colonel_cpp_FUN_0043ff20(void)

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
  float local_70;
  float local_6c;
  float fStack_68;
  CVector3f CStack_64;
  float local_58;
  float local_54;
  float local_50;
  byte local_4c [8];
  float local_44;
  float fStack_40;
  CVector3f CStack_34;
  float local_20;
  uint local_1c;
  float local_14;
  
  bVar1 = false;
  local_1c = 0x3e800000;
  local_20 = 0.7853982;
  pCVar7 = g_HeroActors[g_LocalHeroIndex];
  crt_memory_c_memset_FUN_005fde40((void *)(in_stack_00000004 + 0xbe2c),0,0x2c);
  if (*(int *)(in_stack_00000004 + 130000) != 0) {
    pCVar2 = g_HeroActors[g_LocalHeroIndex];
    local_54 = *(float *)(in_stack_00000004 + 0x20) -
               (pCVar2->base_character).base_actor.location.position.x;
    local_50 = *(float *)(in_stack_00000004 + 0x24) -
               (pCVar2->base_character).base_actor.location.position.y;
    local_4c._0_4_ =
         *(float *)(in_stack_00000004 + 0x28) -
         (pCVar2->base_character).base_actor.location.position.z;
    CStack_34.z = SQRT((float)local_4c._0_4_ * (float)local_4c._0_4_ +
                       local_54 * local_54 + local_50 * local_50);
    if ((((*(int *)(in_stack_00000004 + 130000) == 3) || (CStack_34.z < 20f)) &&
        ((*(int *)(in_stack_00000004 + 130000) == 2 || (*(int *)(in_stack_00000004 + 130000) == 3)))
        ) && ((pCVar2 = (CHero *)core_hero_cpp_FUN_004f3960(), pCVar2 != (CHero *)0x0 &&
              (local_84.x < (float)20)))) {
      bVar1 = true;
      pCVar7 = pCVar2;
    }
    CStack_64.y = (pCVar7->base_character).base_actor.location.position.x -
                  *(float *)(in_stack_00000004 + 0x20);
    CStack_64.z = (pCVar7->base_character).base_actor.location.position.y -
                  *(float *)(in_stack_00000004 + 0x24);
    local_58 = (pCVar7->base_character).base_actor.location.position.z -
               *(float *)(in_stack_00000004 + 0x28);
    if (&local_54 != &CStack_64.y) {
      local_54 = CStack_64.y;
      local_50 = CStack_64.z;
      local_4c._0_4_ = local_58;
    }
    CStack_34.y = SQRT((float)local_4c._0_4_ * (float)local_4c._0_4_ +
                       local_54 * local_54 + local_50 * local_50);
    if ((float)6 <= CStack_34.y) {
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
        local_20 = -local_14;
        *(float *)(in_stack_00000004 + 0xbe50) = fVar4;
        if (fVar4 < local_20) {
          *(float *)(in_stack_00000004 + 0xbe50) = local_20;
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
                             ((CMotionController *)0x4402e9);
          if ((pSVar5->state_index != 2) && (pSVar5->state_index != 1)) {
            *(uint *)(in_stack_00000004 + 0xbe38) = 1;
          }
        }
      }
      else {
        core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                  ((CMotionController *)0x440311);
      }
      if (bVar1) {
        pCVar3 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                           (&CStack_34,(CVector3f *)local_4c);
        fVar4 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                          (pCVar3->y - *(float *)(in_stack_00000004 + 0x34));
        fVar4 = fVar4 * (float)0.31830988619288902 * (float)4;
        unaff_EBP = -local_14;
        *(float *)(in_stack_00000004 + 0xbe50) = fVar4;
        if (fVar4 < unaff_EBP) {
          *(float *)(in_stack_00000004 + 0xbe50) = unaff_EBP;
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
    local_70 = (pCVar7->base_character).base_actor.location.position.x -
               *(float *)(in_stack_00000004 + 0x20);
    local_6c = (pCVar7->base_character).base_actor.location.position.y -
               *(float *)(in_stack_00000004 + 0x24);
    fStack_68 = (pCVar7->base_character).base_actor.location.position.z -
                *(float *)(in_stack_00000004 + 0x28);
    if ((float *)local_4c != &local_70) {
      local_4c._0_4_ = local_70;
      local_4c._4_4_ = local_6c;
      local_44 = fStack_68;
    }
    pCVar3 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                       (&CStack_64,(CVector3f *)local_4c);
    if ((CVector3f *)(local_4c + 4) != pCVar3) {
      local_4c._4_4_ = pCVar3->x;
      local_44 = pCVar3->y;
      fStack_40 = pCVar3->z;
    }
    CStack_34.x = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                            (local_44 - *(float *)(in_stack_00000004 + 0x34));
    if (unaff_EBP < CStack_34.x) {
      CStack_34.x = unaff_EBP;
    }
    if (CStack_34.x < -unaff_EBP) {
      CStack_34.x = -unaff_EBP;
    }
    local_84.z = CStack_34.x - *(float *)(in_stack_00000004 + 0x1fbe0);
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
