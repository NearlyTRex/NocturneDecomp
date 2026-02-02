// Name: core_colonel.cpp_FUN_0043ff20
// Address: 0043ff20
// Address Range: [[0043ff20, 00440423]]
// Convention: __cdecl
// Signature: void __cdecl core_colonel_cpp_FUN_0043ff20(void)

#include "nocturne.h"

/* Signature: byte actors_hero_colonel.cpp_FUN_0043ff20(uint param_1, uint
   param_2) */

void __cdecl core_colonel_cpp_FUN_0043ff20(void)

{
  CDeformableModelInstance *this_ptr;
  bool bVar1;
  CHero *pCVar2;
  CVector3f *pCVar3;
  SMotion *pSVar4;
  CPathMap *this_ptr_00;
  CPathMap *extraout_EAX;
  int iVar5;
  float fVar6;
  CHero *pCVar7;
  CHero *in_stack_00000004;
  float in_stack_00000008;
  float local_8c;
  float local_88;
  CVector3f local_80;
  float local_74;
  float local_70;
  float local_6c;
  CVector3f CStack_68;
  float local_5c;
  float local_58;
  byte local_54 [8];
  float local_4c;
  float fStack_48;
  float fStack_40;
  CVector3f local_3c;
  float local_30;
  float local_2c;
  float local_24;
  uint local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  bVar1 = false;
  local_1c = 0.25;
  local_20 = 0x3f490fdb;
  pCVar7 = g_HeroActors[g_LocalHeroIndex];
  memset(&in_stack_00000004->action_bindings,0,0x2c);
  if (in_stack_00000004->ai_task != 0) {
    pCVar2 = g_HeroActors[g_LocalHeroIndex];
    local_54._0_4_ =
         (in_stack_00000004->base).base.location.position.x -
         (pCVar2->base).base.location.position.x;
    local_54._4_4_ =
         (in_stack_00000004->base).base.location.position.y -
         (pCVar2->base).base.location.position.y;
    local_4c = (in_stack_00000004->base).base.location.position.z -
               (pCVar2->base).base.location.position.z;
    local_2c = SQRT(local_4c * local_4c +
                    (float)local_54._0_4_ * (float)local_54._0_4_ +
                    (float)local_54._4_4_ * (float)local_54._4_4_);
    if ((((in_stack_00000004->ai_task == 3) || (local_2c < 20.0f)) &&
        ((in_stack_00000004->ai_task == 2 || (in_stack_00000004->ai_task == 3)))) &&
       ((pCVar2 = (CHero *)core_hero_cpp_CHero_FUN_004f3960(in_stack_00000004),
        pCVar2 != (CHero *)0x0 && (local_88 < (float)20)))) {
      bVar1 = true;
      pCVar7 = pCVar2;
    }
    CStack_68.z = (pCVar7->base).base.location.position.x -
                  (in_stack_00000004->base).base.location.position.x;
    local_5c = (pCVar7->base).base.location.position.y -
               (in_stack_00000004->base).base.location.position.y;
    local_58 = (pCVar7->base).base.location.position.z -
               (in_stack_00000004->base).base.location.position.z;
    if ((float *)local_54 != &CStack_68.z) {
      local_54._0_4_ = CStack_68.z;
      local_54._4_4_ = local_5c;
      local_4c = local_58;
    }
    local_30 = SQRT(local_4c * local_4c +
                    (float)local_54._0_4_ * (float)local_54._0_4_ +
                    (float)local_54._4_4_ * (float)local_54._4_4_);
    if ((float)6 <= local_30) {
      this_ptr_00 = (CPathMap *)0x0;
      if (!bVar1) {
        this_ptr_00 = (*((g_HeroActors[g_LocalHeroIndex]->base).base.vtable._ub)->getPathMap)
                                ((CDemonActor *)g_HeroActors[g_LocalHeroIndex]);
      }
      if (this_ptr_00 == (CPathMap *)0x0) {
        core_path_cpp_FUN_00548500();
        this_ptr_00 = extraout_EAX;
      }
      iVar5 = core_path_cpp_CPathMap_findPathWithRetry_FUN_00547d00
                        (this_ptr_00,&(in_stack_00000004->base).base.location.position,&local_80,
                         (in_stack_00000004->base).base.unk1);
      if (iVar5 != 0) {
        fVar6 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                          (local_80.y - (in_stack_00000004->base).base.orient.bank);
        fVar6 = fVar6 * (float)0.31830988619288902 * (float)4;
        local_24 = -local_18;
        *(float *)(in_stack_00000004->unk2 + 4) = fVar6;
        if (fVar6 < local_24) {
          *(float *)(in_stack_00000004->unk2 + 4) = local_24;
        }
        if (local_18 < *(float *)(in_stack_00000004->unk2 + 4)) {
          *(float *)(in_stack_00000004->unk2 + 4) = local_18;
        }
        if (((float)10 <= local_8c) || (bVar1)) {
          (in_stack_00000004->action_bindings).run_key = 1;
          (in_stack_00000004->action_bindings).walk_key = 1;
        }
        else {
          (in_stack_00000004->action_bindings).walk_key = 1;
        }
      }
    }
    else {
      this_ptr = &(in_stack_00000004->base).model;
      if (bVar1) {
        if (*(int *)in_stack_00000004[1].base.base.actor_name == 0) {
          (in_stack_00000004->action_bindings).draw_key = 1;
        }
        else {
          pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                             (&this_ptr->motion_controller);
          if ((pSVar4->state_index != 2) && (pSVar4->state_index != 1)) {
            (in_stack_00000004->action_bindings).fire_key = 1;
          }
        }
      }
      else {
        core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                  (&this_ptr->motion_controller);
      }
      if (bVar1) {
        pCVar3 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                           (&local_3c,(CVector3f *)local_54);
        local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                             (pCVar3->y - (in_stack_00000004->base).base.orient.bank);
        fVar6 = local_14 * (float)0.31830988619288902 * (float)4;
        local_18 = -local_1c;
        *(float *)(in_stack_00000004->unk2 + 4) = fVar6;
        if (fVar6 < local_18) {
          *(float *)(in_stack_00000004->unk2 + 4) = local_18;
        }
        if (local_1c < *(float *)(in_stack_00000004->unk2 + 4)) {
          *(float *)(in_stack_00000004->unk2 + 4) = local_1c;
        }
        if ((((float)-0.25 < *(float *)(in_stack_00000004->unk2 + 4)) &&
            ((double)*(float *)(in_stack_00000004->unk2 + 4) < 0.25)) &&
           ((in_stack_00000004->action_bindings).fire_key != 0)) {
          in_stack_00000004->unk2[4] = '\0';
          in_stack_00000004->unk2[5] = '\0';
          in_stack_00000004->unk2[6] = '\0';
          in_stack_00000004->unk2[7] = '\0';
        }
      }
    }
    local_74 = (pCVar7->base).base.location.position.x -
               (in_stack_00000004->base).base.location.position.x;
    local_70 = (pCVar7->base).base.location.position.y -
               (in_stack_00000004->base).base.location.position.y;
    local_6c = (pCVar7->base).base.location.position.z -
               (in_stack_00000004->base).base.location.position.z;
    if ((float *)(local_54 + 4) != &local_74) {
      local_54._4_4_ = local_74;
      local_4c = local_70;
      fStack_48 = local_6c;
    }
    pCVar3 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                       (&CStack_68,(CVector3f *)(local_54 + 4));
    if ((CVector3f *)(local_54 + 4) != pCVar3) {
      local_54._4_4_ = pCVar3->x;
      local_4c = pCVar3->y;
      fStack_48 = pCVar3->z;
    }
    fStack_40 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                          (local_4c - (in_stack_00000004->base).base.orient.bank);
    if (local_1c < fStack_40) {
      fStack_40 = local_1c;
    }
    if (fStack_40 < -local_1c) {
      fStack_40 = -local_1c;
    }
    local_88 = fStack_40 - *(float *)(in_stack_00000004[1].base.base.actor_name + 0xc);
    if (in_stack_00000008 * (float)3.1415926535000001 < local_88) {
      local_88 = in_stack_00000008 * (float)3.1415926535000001;
    }
    if (local_88 < in_stack_00000008 * (float)-3.1415926535000001) {
      local_88 = in_stack_00000008 * (float)-3.1415926535000001;
    }
    *(float *)(in_stack_00000004[1].base.base.actor_name + 0xc) =
         *(float *)(in_stack_00000004[1].base.base.actor_name + 0xc) + local_88;
  }
  return;
}
