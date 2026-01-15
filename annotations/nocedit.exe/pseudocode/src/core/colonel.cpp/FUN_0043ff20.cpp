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
  float fVar1;
  bool bVar2;
  float fVar3;
  CHero *pCVar4;
  CVector3f *pCVar5;
  SMotion *pSVar6;
  CPathMap *this_ptr;
  int iVar7;
  CHero *pCVar8;
  int in_stack_00000004;
  float in_stack_00000008;
  float local_8c;
  float local_88;
  CVector3f local_84;
  CVector3f local_78;
  CVector3f local_6c;
  CVector3f local_60;
  CVector3f local_54;
  float local_44;
  CVector3f local_3c;
  float local_30;
  float local_2c;
  float local_28;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  bVar2 = false;
  local_1c = 0.25;
  local_20 = 0.7853982;
  pCVar8 = g_HeroActors[g_LocalHeroIndex];
  crt_memory_c_memset_FUN_005fde40((void *)(in_stack_00000004 + 0xbe2c),0,0x2c);
  if (*(int *)(in_stack_00000004 + 130000) != 0) {
    pCVar4 = g_HeroActors[g_LocalHeroIndex];
    local_54.x = *(float *)(in_stack_00000004 + 0x20) -
                 (pCVar4->base_character).base_actor.location.position.x;
    local_54.y = *(float *)(in_stack_00000004 + 0x24) -
                 (pCVar4->base_character).base_actor.location.position.y;
    local_54.z = *(float *)(in_stack_00000004 + 0x28) -
                 (pCVar4->base_character).base_actor.location.position.z;
    local_2c = SQRT(local_54.z * local_54.z + local_54.x * local_54.x + local_54.y * local_54.y);
    if ((((*(int *)(in_stack_00000004 + 130000) == 3) || (local_2c < 20f)) &&
        ((*(int *)(in_stack_00000004 + 130000) == 2 || (*(int *)(in_stack_00000004 + 130000) == 3)))
        ) && ((pCVar4 = (CHero *)core_hero_cpp_FUN_004f3960(), pCVar4 != (CHero *)0x0 &&
              (local_88 < (float)20)))) {
      bVar2 = true;
      pCVar8 = pCVar4;
    }
    local_60.x = (pCVar8->base_character).base_actor.location.position.x -
                 *(float *)(in_stack_00000004 + 0x20);
    local_60.y = (pCVar8->base_character).base_actor.location.position.y -
                 *(float *)(in_stack_00000004 + 0x24);
    local_60.z = (pCVar8->base_character).base_actor.location.position.z -
                 *(float *)(in_stack_00000004 + 0x28);
    if (&local_54 != &local_60) {
      local_54.x = local_60.x;
      local_54.y = local_60.y;
      local_54.z = local_60.z;
    }
    fVar1 = SQRT(local_54.z * local_54.z + local_54.x * local_54.x + local_54.y * local_54.y);
    local_30 = fVar1;
    if ((float)6 <= fVar1) {
      this_ptr = (CPathMap *)0x0;
      if (!bVar2) {
        this_ptr = (*((g_HeroActors[g_LocalHeroIndex]->base_character).base_actor.vtable)->
                     getPathMap)((CDemonActor *)g_HeroActors[g_LocalHeroIndex]);
      }
      if (this_ptr == (CPathMap *)0x0) {
        this_ptr = (CPathMap *)core_path_cpp_FUN_00548500();
      }
      iVar7 = core_path_cpp_CPathMap_findPathWithRetry_FUN_00547d00
                        (this_ptr,(CVector3f *)(in_stack_00000004 + 0x20),&local_84,
                         *(int *)(in_stack_00000004 + 0x6c));
      if (iVar7 != 0) {
        local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                             (local_84.y - *(float *)(in_stack_00000004 + 0x34));
        fVar3 = local_14 * (float)0.31830988619288902 * (float)4;
        local_28 = -local_1c;
        *(float *)(in_stack_00000004 + 0xbe50) = fVar3;
        if (fVar3 < local_28) {
          *(float *)(in_stack_00000004 + 0xbe50) = local_28;
        }
        if (local_1c < *(float *)(in_stack_00000004 + 0xbe50)) {
          *(float *)(in_stack_00000004 + 0xbe50) = local_1c;
        }
        if (((float)10 <= fVar1) || (bVar2)) {
          *(uint *)(in_stack_00000004 + 0xbe34) = 1;
          *(uint *)(in_stack_00000004 + 0xbe2c) = 1;
        }
        else {
          *(uint *)(in_stack_00000004 + 0xbe2c) = 1;
        }
      }
    }
    else {
      if (bVar2) {
        if (*(int *)(in_stack_00000004 + 0x1fbd4) == 0) {
          *(uint *)(in_stack_00000004 + 0xbe44) = 1;
        }
        else {
          pSVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                             ((CMotionController *)(in_stack_00000004 + 0x158));
          if ((pSVar6->state_index != 2) && (pSVar6->state_index != 1)) {
            *(uint *)(in_stack_00000004 + 0xbe38) = 1;
          }
        }
      }
      else {
        core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                  ((CMotionController *)(in_stack_00000004 + 0x158));
      }
      if (bVar2) {
        pCVar5 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                           (&local_3c,&local_54);
        local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                             (pCVar5->y - *(float *)(in_stack_00000004 + 0x34));
        fVar1 = local_14 * (float)0.31830988619288902 * (float)4;
        local_18 = -local_1c;
        *(float *)(in_stack_00000004 + 0xbe50) = fVar1;
        if (fVar1 < local_18) {
          *(float *)(in_stack_00000004 + 0xbe50) = local_18;
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
    local_78.x = (pCVar8->base_character).base_actor.location.position.x -
                 *(float *)(in_stack_00000004 + 0x20);
    local_78.y = (pCVar8->base_character).base_actor.location.position.y -
                 *(float *)(in_stack_00000004 + 0x24);
    local_78.z = (pCVar8->base_character).base_actor.location.position.z -
                 *(float *)(in_stack_00000004 + 0x28);
    if (&local_54 != &local_78) {
      local_54.x = local_78.x;
      local_54.y = local_78.y;
      local_54.z = local_78.z;
    }
    pCVar5 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_6c,&local_54);
    if (&local_54 != pCVar5) {
      local_54.x = pCVar5->x;
      local_54.y = pCVar5->y;
      local_54.z = pCVar5->z;
    }
    local_44 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                         (local_54.y - *(float *)(in_stack_00000004 + 0x34));
    if (local_20 < local_44) {
      local_44 = local_20;
    }
    if (local_44 < -local_20) {
      local_44 = -local_20;
    }
    local_8c = local_44 - *(float *)(in_stack_00000004 + 0x1fbe0);
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
