// Name: core_haystack.cpp_CHaystack_FUN_004f13f0
// Address: 004f13f0
// Address Range: [[004f13f0, 004f1943]]
// Convention: __cdecl
// Signature: void __cdecl core_haystack_cpp_CHaystack_FUN_004f13f0(CHaystack *this_ptr)

#include "nocturne.h"

void __cdecl core_haystack_cpp_CHaystack_FUN_004f13f0(CHaystack *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  bool bVar1;
  CHero *pCVar2;
  CVector3f *pCVar3;
  SMotion *pSVar4;
  CPathMap *this_ptr_01;
  CPathMap *extraout_EAX;
  int iVar5;
  float fVar6;
  CHero *pCVar7;
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
  memset(&(this_ptr->base).action_bindings,0,0x2c);
  if ((this_ptr->base).ai_task != 0) {
    pCVar2 = g_HeroActors[g_LocalHeroIndex];
    local_48._0_4_ =
         (this_ptr->base).base.base.location.position.x - (pCVar2->base).base.location.position.x;
    local_48._4_4_ =
         (this_ptr->base).base.base.location.position.y - (pCVar2->base).base.location.position.y;
    local_40 = (this_ptr->base).base.base.location.position.z -
               (pCVar2->base).base.location.position.z;
    CStack_38.z = SQRT(local_40 * local_40 +
                       (float)local_48._0_4_ * (float)local_48._0_4_ +
                       (float)local_48._4_4_ * (float)local_48._4_4_);
    if ((((this_ptr->base).ai_task == 3) || (CStack_38.z < 20.0f)) &&
       ((iVar5 = (this_ptr->base).ai_task, iVar5 == 2 || (iVar5 == 3)))) {
      pCVar2 = (CHero *)core_hero_cpp_CHero_FUN_004f3960(&this_ptr->base);
      if ((pCVar2 == (CHero *)0x0) || ((float)20 <= 9999.9)) {
        if (*(int *)this_ptr->unk != 0) {
          (this_ptr->base).action_bindings.draw_key = 1;
        }
      }
      else {
        bVar1 = true;
        pCVar7 = pCVar2;
      }
    }
    local_80.z = (pCVar7->base).base.location.position.x -
                 (this_ptr->base).base.base.location.position.x;
    local_74 = (pCVar7->base).base.location.position.y -
               (this_ptr->base).base.base.location.position.y;
    local_70 = (pCVar7->base).base.location.position.z -
               (this_ptr->base).base.base.location.position.z;
    if ((float *)local_48 != &local_80.z) {
      local_48._0_4_ = local_80.z;
      local_48._4_4_ = local_74;
      local_40 = local_70;
    }
    local_18 = SQRT(local_40 * local_40 +
                    (float)local_48._0_4_ * (float)local_48._0_4_ +
                    (float)local_48._4_4_ * (float)local_48._4_4_);
    if ((float)6 <= local_18) {
      this_ptr_01 = (CPathMap *)0x0;
      if (!bVar1) {
        this_ptr_01 = (*((g_HeroActors[g_LocalHeroIndex]->base).base.vtable._ub)->getPathMap)
                                ((CDemonActor *)g_HeroActors[g_LocalHeroIndex]);
      }
      if (this_ptr_01 == (CPathMap *)0x0) {
        core_path_cpp_FUN_00548500();
        this_ptr_01 = extraout_EAX;
      }
      iVar5 = core_path_cpp_CPathMap_findPathWithRetry_FUN_00547d00
                        (this_ptr_01,&(this_ptr->base).base.base.location.position,&local_80,
                         (this_ptr->base).base.base.unk1);
      if (iVar5 != 0) {
        fVar6 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                          (local_80.y - (this_ptr->base).base.base.orient.bank);
        fVar6 = fVar6 * (float)0.31830988619288902 * (float)4;
        local_20 = -local_18;
        *(float *)((this_ptr->base).unk2 + 4) = fVar6;
        if (fVar6 < local_20) {
          *(float *)((this_ptr->base).unk2 + 4) = local_20;
        }
        if (local_18 < *(float *)((this_ptr->base).unk2 + 4)) {
          *(float *)((this_ptr->base).unk2 + 4) = local_18;
        }
        if (((float)10 <= local_8c) || (bVar1)) {
          (this_ptr->base).action_bindings.run_key = 1;
          (this_ptr->base).action_bindings.walk_key = 1;
        }
        else {
          (this_ptr->base).action_bindings.walk_key = 1;
        }
      }
    }
    else {
      this_ptr_00 = &(this_ptr->base).base.model;
      if (bVar1) {
        if (*(int *)this_ptr->unk == 0) {
          (this_ptr->base).action_bindings.draw_key = 1;
        }
        else {
          pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                             (&this_ptr_00->motion_controller);
          if ((pSVar4->state_index != 2) && (pSVar4->state_index != 1)) {
            (this_ptr->base).action_bindings.fire_key = 1;
          }
        }
      }
      else {
        pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                           (&this_ptr_00->motion_controller);
        if ((pSVar4->state_index == 10) && (*(int *)this_ptr->unk != 0)) {
          (this_ptr->base).action_bindings.draw_key = 1;
        }
      }
      if (bVar1) {
        pCVar3 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                           (&local_60,(CVector3f *)local_48);
        local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                             (pCVar3->y - (this_ptr->base).base.base.orient.bank);
        fVar6 = local_14 * (float)0.31830988619288902 * (float)4;
        local_28 = -local_1c;
        *(float *)((this_ptr->base).unk2 + 4) = fVar6;
        if (fVar6 < local_28) {
          *(float *)((this_ptr->base).unk2 + 4) = local_28;
        }
        if (local_1c < *(float *)((this_ptr->base).unk2 + 4)) {
          *(float *)((this_ptr->base).unk2 + 4) = local_1c;
        }
        fVar6 = *(float *)((this_ptr->base).unk2 + 4);
        if ((((float)-0.25 < fVar6) && ((double)fVar6 < 0.25)) &&
           ((this_ptr->base).action_bindings.fire_key != 0)) {
          (this_ptr->base).unk2[4] = '\0';
          (this_ptr->base).unk2[5] = '\0';
          (this_ptr->base).unk2[6] = '\0';
          (this_ptr->base).unk2[7] = '\0';
        }
      }
    }
    local_68 = (pCVar7->base).base.location.position.x -
               (this_ptr->base).base.base.location.position.x;
    local_64 = (pCVar7->base).base.location.position.y -
               (this_ptr->base).base.base.location.position.y;
    local_60.x = (pCVar7->base).base.location.position.z -
                 (this_ptr->base).base.base.location.position.z;
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
                          (local_40 - (this_ptr->base).base.base.orient.bank);
    if (local_1c < fStack_4c) {
      fStack_4c = local_1c;
    }
    if (fStack_4c < -local_1c) {
      fStack_4c = -local_1c;
    }
    local_88 = fStack_4c - *(float *)(this_ptr->unk + 0xc);
    if (in_stack_00000008 * (float)3.1415926535000001 < local_88) {
      local_88 = in_stack_00000008 * (float)3.1415926535000001;
    }
    if (local_88 < in_stack_00000008 * (float)-3.1415926535000001) {
      local_88 = in_stack_00000008 * (float)-3.1415926535000001;
    }
    *(float *)(this_ptr->unk + 0xc) = *(float *)(this_ptr->unk + 0xc) + local_88;
  }
  return;
}
