// Name: core_icepick.cpp_CIcePick_FUN_004f8c70
// Address: 004f8c70
// Address Range: [[004f8c70, 004f9378]]
// Convention: __cdecl
// Signature: void __cdecl core_icepick_cpp_CIcePick_FUN_004f8c70(CIcePick *this_ptr)

#include "nocturne.h"

void __cdecl core_icepick_cpp_CIcePick_FUN_004f8c70(CIcePick *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  bool bVar1;
  int iVar2;
  CHero *pCVar3;
  CVector3f *pCVar4;
  float fVar5;
  SMotion *pSVar6;
  uint uVar7;
  CPathMap *extraout_EAX;
  float unaff_EBP;
  CHero *pCVar8;
  float in_stack_00000008;
  float fStack_8c;
  float fStack_88;
  CPathMap *pCStack_80;
  CVector3f CStack_78;
  float local_6c;
  float local_68;
  float local_64;
  CVector3f CStack_60;
  CVector3f CStack_54;
  CVector3f CStack_48;
  CVector3f CStack_3c;
  float local_30;
  float fStack_2c;
  float local_28;
  float local_24;
  uint local_1c;
  CPathMap *pCStack_18;
  CPathMap *pCStack_14;
  
  bVar1 = false;
  local_1c = 0x3e800000;
  local_24 = 0.7853982;
  pCVar8 = g_HeroActors[g_LocalHeroIndex];
  memset(&(this_ptr->base).action_bindings,0,0x2c);
  if ((this_ptr->base).ai_task != 0) {
    pCVar3 = g_HeroActors[g_LocalHeroIndex];
    local_6c = (this_ptr->base).base.base.location.position.x -
               (pCVar3->base).base.location.position.x;
    local_68 = (this_ptr->base).base.base.location.position.y -
               (pCVar3->base).base.location.position.y;
    local_64 = (this_ptr->base).base.base.location.position.z -
               (pCVar3->base).base.location.position.z;
    local_30 = SQRT(local_64 * local_64 + local_6c * local_6c + local_68 * local_68);
    if ((this_ptr->base).ai_task == 3) {
      local_30 = 0.0;
    }
    local_28 = 20.0;
    iVar2 = (*(((g_HeroActors[g_LocalHeroIndex]->base).base.vtable._ue)->_ue).randomize)
                      ((CEnemy *)g_HeroActors[g_LocalHeroIndex]);
    if (iVar2 != 0) {
      local_24 = 30.0;
    }
    if ((fStack_2c < local_24) && ((iVar2 = (this_ptr->base).ai_task, iVar2 == 2 || (iVar2 == 3))))
    {
      CStack_3c.y = 9999.9;
      pCVar3 = (CHero *)core_hero_cpp_CHero_FUN_004f3960(&this_ptr->base);
      if ((pCVar3 == (CHero *)0x0) || (local_24 <= CStack_3c.y)) {
        if (this_ptr->guns_drawn != 0) {
          (this_ptr->base).action_bindings.draw_key = 1;
        }
      }
      else {
        bVar1 = true;
        pCVar8 = pCVar3;
      }
    }
    CStack_78.y = (pCVar8->base).base.location.position.x -
                  (this_ptr->base).base.base.location.position.x;
    CStack_78.z = (pCVar8->base).base.location.position.y -
                  (this_ptr->base).base.base.location.position.y;
    local_6c = (pCVar8->base).base.location.position.z -
               (this_ptr->base).base.base.location.position.z;
    if (&local_68 != &CStack_78.y) {
      local_68 = CStack_78.y;
      local_64 = CStack_78.z;
      CStack_60.x = local_6c;
    }
    pCStack_14 = (CPathMap *)
                 SQRT(CStack_60.x * CStack_60.x + local_68 * local_68 + local_64 * local_64);
    (this_ptr->base).base.turn_angle_accumulator = 0.0;
    if ((float)6 <= (float)pCStack_14) {
      local_1c = 0;
      if (bVar1) {
        (this_ptr->base).base.hero_proximity_timer = 0.0;
      }
      else {
        pCStack_18 = (*((g_HeroActors[g_LocalHeroIndex]->base).base.vtable._ub)->getPathMap)
                               ((CDemonActor *)g_HeroActors[g_LocalHeroIndex]);
        iVar2 = (*(((g_HeroActors[g_LocalHeroIndex]->base).base.vtable._ue)->_ue).randomize)
                          ((CEnemy *)g_HeroActors[g_LocalHeroIndex]);
        if ((iVar2 == 0) &&
           (uVar7 = core_charactr_cpp_CCharacter_moveOutOfHeroWay_FUN_0042ede0
                              ((CCharacter *)this_ptr,in_stack_00000008), uVar7 != 0)) {
          if (uVar7 < 2) {
            (this_ptr->base).action_bindings.walk_key = 1;
          }
          else if (uVar7 == 2) {
            (this_ptr->base).action_bindings.run_key = 1;
            (this_ptr->base).action_bindings.walk_key = 1;
          }
        }
      }
      if (pCStack_14 == (CPathMap *)0x0) {
        core_path_cpp_FUN_00548500();
        pCStack_14 = extraout_EAX;
      }
      iVar2 = core_path_cpp_CPathMap_findPathWithRetry_FUN_00547d00
                        (pCStack_14,&(this_ptr->base).base.base.location.position,&CStack_3c,
                         (this_ptr->base).base.base.direction_hint);
      if (iVar2 != 0) {
        fVar5 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                          (CStack_3c.y - (this_ptr->base).base.base.orient.vec.y);
        fVar5 = fVar5 * (float)0.31830988619288902 * (float)4;
        fStack_2c = -unaff_EBP;
        *(float *)((this_ptr->base).unk2 + 4) = fVar5;
        if (fVar5 < fStack_2c) {
          *(float *)((this_ptr->base).unk2 + 4) = fStack_2c;
        }
        if (unaff_EBP < *(float *)((this_ptr->base).unk2 + 4)) {
          *(float *)((this_ptr->base).unk2 + 4) = unaff_EBP;
        }
        if (((float)10 <= fStack_88) || (bVar1)) {
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
        if (this_ptr->guns_drawn == 0) {
          (this_ptr->base).action_bindings.draw_key = 1;
        }
        else {
          pSVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                             (&this_ptr_00->motion_controller);
          if ((pSVar6->state_index != 2) && (pSVar6->state_index != 1)) {
            (this_ptr->base).action_bindings.fire_key = 1;
          }
        }
        (this_ptr->base).base.hero_proximity_timer = 0.0;
      }
      else {
        pSVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                           (&this_ptr_00->motion_controller);
        if ((pSVar6->state_index == 10) && (this_ptr->guns_drawn != 0)) {
          (this_ptr->base).action_bindings.draw_key = 1;
        }
        iVar2 = (*(((g_HeroActors[g_LocalHeroIndex]->base).base.vtable._ue)->_ue).randomize)
                          ((CEnemy *)g_HeroActors[g_LocalHeroIndex]);
        if ((iVar2 == 0) &&
           (uVar7 = core_charactr_cpp_CCharacter_moveOutOfHeroWay_FUN_0042ede0
                              ((CCharacter *)this_ptr,in_stack_00000008), uVar7 != 0)) {
          if (uVar7 < 2) {
            (this_ptr->base).action_bindings.walk_key = 1;
          }
          else if (uVar7 == 2) {
            (this_ptr->base).action_bindings.run_key = 1;
            (this_ptr->base).action_bindings.walk_key = 1;
          }
        }
      }
      if (bVar1) {
        pCVar4 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                           (&CStack_48,&CStack_60);
        fVar5 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                          (pCVar4->y - (this_ptr->base).base.base.orient.vec.y);
        fVar5 = fVar5 * (float)0.31830988619288902 * (float)4;
        local_28 = -unaff_EBP;
        *(float *)((this_ptr->base).unk2 + 4) = fVar5;
        if (fVar5 < local_28) {
          *(float *)((this_ptr->base).unk2 + 4) = local_28;
        }
        if (unaff_EBP < *(float *)((this_ptr->base).unk2 + 4)) {
          *(float *)((this_ptr->base).unk2 + 4) = unaff_EBP;
        }
        fVar5 = *(float *)((this_ptr->base).unk2 + 4);
        if ((((float)-0.25 < fVar5) && ((double)fVar5 < 0.25)) &&
           ((this_ptr->base).action_bindings.fire_key != 0)) {
          (this_ptr->base).unk2[4] = '\0';
          (this_ptr->base).unk2[5] = '\0';
          (this_ptr->base).unk2[6] = '\0';
          (this_ptr->base).unk2[7] = '\0';
        }
      }
    }
    fVar5 = (this_ptr->base).base.turn_angle_accumulator;
    if (fVar5 <= 0.0) {
      if (fVar5 < 0.0) {
        (this_ptr->base).base.turn_angle_accumulator = 0.0;
        *(float *)((this_ptr->base).unk2 + 4) = -unaff_EBP;
      }
    }
    else {
      (this_ptr->base).base.turn_angle_accumulator = 0.0;
      *(float *)((this_ptr->base).unk2 + 4) = unaff_EBP;
    }
    CStack_54.x = (pCVar8->base).base.location.position.x -
                  (this_ptr->base).base.base.location.position.x;
    CStack_54.y = (pCVar8->base).base.location.position.y -
                  (this_ptr->base).base.base.location.position.y;
    CStack_54.z = (pCVar8->base).base.location.position.z -
                  (this_ptr->base).base.base.location.position.z;
    if (&CStack_60 != &CStack_54) {
      CStack_60.x = CStack_54.x;
      CStack_60.y = CStack_54.y;
      CStack_60.z = CStack_54.z;
    }
    pCVar4 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                       (&CStack_78,&CStack_60);
    if (&CStack_60 != pCVar4) {
      CStack_60.x = pCVar4->x;
      CStack_60.y = pCVar4->y;
      CStack_60.z = pCVar4->z;
    }
    pCStack_80 = (CPathMap *)
                 core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                           (CStack_60.y - (this_ptr->base).base.base.orient.vec.y);
    if ((float)pCStack_18 < (float)pCStack_80) {
      pCStack_80 = pCStack_18;
    }
    if ((float)pCStack_80 < -(float)pCStack_18) {
      pCStack_80 = (CPathMap *)-(float)pCStack_18;
    }
    fStack_8c = (float)pCStack_80 - *(float *)(this_ptr->unk + 0x10);
    if (in_stack_00000008 * (float)3.1415926535000001 < fStack_8c) {
      fStack_8c = in_stack_00000008 * (float)3.1415926535000001;
    }
    if (fStack_8c < in_stack_00000008 * (float)-3.1415926535000001) {
      fStack_8c = in_stack_00000008 * (float)-3.1415926535000001;
    }
    *(float *)(this_ptr->unk + 0x10) = *(float *)(this_ptr->unk + 0x10) + fStack_8c;
  }
  return;
}
