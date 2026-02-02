// Name: core_icepick.cpp_CIcePick_FUN_004f8c70
// Address: 004f8c70
// Address Range: [[004f8c70, 004f9378]]
// Convention: __cdecl
// Signature: void __cdecl core_icepick_cpp_CIcePick_FUN_004f8c70(CIcePick *this_ptr)

#include "nocturne.h"

void __cdecl core_icepick_cpp_CIcePick_FUN_004f8c70(CIcePick *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  float fVar1;
  bool bVar2;
  float fVar3;
  int iVar4;
  CHero *pCVar5;
  CVector3f *pCVar6;
  SMotion *pSVar7;
  uint uVar8;
  CPathMap *extraout_EAX;
  CHero *pCVar9;
  float in_stack_00000008;
  float fStack_98;
  float fStack_8c;
  CVector3f CStack_84;
  CVector3f CStack_78;
  CVector3f local_6c;
  CVector3f CStack_60;
  CVector3f CStack_54;
  CVector3f CStack_48;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float local_30;
  float local_28;
  float local_24;
  CPathMap *pCStack_20;
  CPathMap *local_1c;
  float fStack_18;
  float fStack_14;
  
  bVar2 = false;
  local_1c = (CPathMap *)0x3e800000;
  local_24 = 0.7853982;
  pCVar9 = g_HeroActors[g_LocalHeroIndex];
  memset(&(this_ptr->base).action_bindings,0,0x2c);
  if ((this_ptr->base).ai_task != 0) {
    pCVar5 = g_HeroActors[g_LocalHeroIndex];
    local_6c.x = (this_ptr->base).base.base.location.position.x -
                 (pCVar5->base).base.location.position.x;
    local_6c.y = (this_ptr->base).base.base.location.position.y -
                 (pCVar5->base).base.location.position.y;
    local_6c.z = (this_ptr->base).base.base.location.position.z -
                 (pCVar5->base).base.location.position.z;
    local_30 = SQRT(local_6c.z * local_6c.z + local_6c.x * local_6c.x + local_6c.y * local_6c.y);
    if ((this_ptr->base).ai_task == 3) {
      local_30 = 0.0;
    }
    local_28 = 20.0;
    iVar4 = (*(((g_HeroActors[g_LocalHeroIndex]->base).base.vtable._ue)->_ue).enemyfunc3)();
    if (iVar4 != 0) {
      local_28 = 30.0;
    }
    if ((local_30 < local_28) && ((iVar4 = (this_ptr->base).ai_task, iVar4 == 2 || (iVar4 == 3)))) {
      fStack_3c = 9999.9;
      pCVar5 = (CHero *)core_hero_cpp_CHero_FUN_004f3960(&this_ptr->base);
      if ((pCVar5 == (CHero *)0x0) || (local_28 <= fStack_3c)) {
        if (*(int *)this_ptr->unk != 0) {
          (this_ptr->base).action_bindings.draw_key = 1;
        }
      }
      else {
        bVar2 = true;
        pCVar9 = pCVar5;
      }
    }
    CStack_78.x = (pCVar9->base).base.location.position.x -
                  (this_ptr->base).base.base.location.position.x;
    CStack_78.y = (pCVar9->base).base.location.position.y -
                  (this_ptr->base).base.base.location.position.y;
    CStack_78.z = (pCVar9->base).base.location.position.z -
                  (this_ptr->base).base.base.location.position.z;
    if (&local_6c != &CStack_78) {
      local_6c.x = CStack_78.x;
      local_6c.y = CStack_78.y;
      local_6c.z = CStack_78.z;
    }
    fVar1 = SQRT(local_6c.z * local_6c.z + local_6c.x * local_6c.x + local_6c.y * local_6c.y);
    pCVar5 = &this_ptr->base;
    (pCVar5->base).unk1[0xc] = '\0';
    (pCVar5->base).unk1[0xd] = '\0';
    (pCVar5->base).unk1[0xe] = '\0';
    (pCVar5->base).unk1[0xf] = '\0';
    fStack_18 = fVar1;
    if ((float)6 <= fVar1) {
      pCStack_20 = (CPathMap *)0x0;
      if (bVar2) {
        pCVar5 = &this_ptr->base;
        (pCVar5->base).cloth_data[0x32c] = '\0';
        (pCVar5->base).cloth_data[0x32d] = '\0';
        (pCVar5->base).cloth_data[0x32e] = '\0';
        (pCVar5->base).cloth_data[0x32f] = '\0';
      }
      else {
        local_1c = (*((g_HeroActors[g_LocalHeroIndex]->base).base.vtable._ub)->getPathMap)
                             ((CDemonActor *)g_HeroActors[g_LocalHeroIndex]);
        iVar4 = (*(((g_HeroActors[g_LocalHeroIndex]->base).base.vtable._ue)->_ue).enemyfunc3)();
        if ((iVar4 == 0) &&
           (uVar8 = core_charactr_cpp_CCharacter_FUN_0042ede0((CCharacter *)this_ptr), uVar8 != 0))
        {
          if (uVar8 < 2) {
            (this_ptr->base).action_bindings.walk_key = 1;
          }
          else if (uVar8 == 2) {
            (this_ptr->base).action_bindings.run_key = 1;
            (this_ptr->base).action_bindings.walk_key = 1;
          }
        }
      }
      if (pCStack_20 == (CPathMap *)0x0) {
        core_path_cpp_FUN_00548500();
        pCStack_20 = extraout_EAX;
      }
      iVar4 = core_path_cpp_CPathMap_findPathWithRetry_FUN_00547d00
                        (pCStack_20,&(this_ptr->base).base.base.location.position,&CStack_48,
                         (this_ptr->base).base.base.unk1);
      if (iVar4 != 0) {
        fStack_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                              (CStack_48.y - (this_ptr->base).base.base.orient.bank);
        fVar3 = fStack_14 * (float)0.31830988619288902 * (float)4;
        fStack_38 = -(float)local_1c;
        *(float *)((this_ptr->base).unk2 + 4) = fVar3;
        if (fVar3 < fStack_38) {
          *(float *)((this_ptr->base).unk2 + 4) = fStack_38;
        }
        if ((float)local_1c < *(float *)((this_ptr->base).unk2 + 4)) {
          *(CPathMap **)((this_ptr->base).unk2 + 4) = local_1c;
        }
        if (((float)10 <= fVar1) || (bVar2)) {
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
      if (bVar2) {
        if (*(int *)this_ptr->unk == 0) {
          (this_ptr->base).action_bindings.draw_key = 1;
        }
        else {
          pSVar7 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                             (&this_ptr_00->motion_controller);
          if ((pSVar7->state_index != 2) && (pSVar7->state_index != 1)) {
            (this_ptr->base).action_bindings.fire_key = 1;
          }
        }
        pCVar5 = &this_ptr->base;
        (pCVar5->base).cloth_data[0x32c] = '\0';
        (pCVar5->base).cloth_data[0x32d] = '\0';
        (pCVar5->base).cloth_data[0x32e] = '\0';
        (pCVar5->base).cloth_data[0x32f] = '\0';
      }
      else {
        pSVar7 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                           (&this_ptr_00->motion_controller);
        if ((pSVar7->state_index == 10) && (*(int *)this_ptr->unk != 0)) {
          (this_ptr->base).action_bindings.draw_key = 1;
        }
        iVar4 = (*(((g_HeroActors[g_LocalHeroIndex]->base).base.vtable._ue)->_ue).enemyfunc3)();
        if ((iVar4 == 0) &&
           (uVar8 = core_charactr_cpp_CCharacter_FUN_0042ede0((CCharacter *)this_ptr), uVar8 != 0))
        {
          if (uVar8 < 2) {
            (this_ptr->base).action_bindings.walk_key = 1;
          }
          else if (uVar8 == 2) {
            (this_ptr->base).action_bindings.run_key = 1;
            (this_ptr->base).action_bindings.walk_key = 1;
          }
        }
      }
      if (bVar2) {
        pCVar6 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                           (&CStack_54,&local_6c);
        fStack_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                              (pCVar6->y - (this_ptr->base).base.base.orient.bank);
        fVar1 = fStack_14 * (float)0.31830988619288902 * (float)4;
        fStack_34 = -(float)local_1c;
        *(float *)((this_ptr->base).unk2 + 4) = fVar1;
        if (fVar1 < fStack_34) {
          *(float *)((this_ptr->base).unk2 + 4) = fStack_34;
        }
        if ((float)local_1c < *(float *)((this_ptr->base).unk2 + 4)) {
          *(CPathMap **)((this_ptr->base).unk2 + 4) = local_1c;
        }
        fVar1 = *(float *)((this_ptr->base).unk2 + 4);
        if ((((float)-0.25 < fVar1) && ((double)fVar1 < 0.25)) &&
           ((this_ptr->base).action_bindings.fire_key != 0)) {
          (this_ptr->base).unk2[4] = '\0';
          (this_ptr->base).unk2[5] = '\0';
          (this_ptr->base).unk2[6] = '\0';
          (this_ptr->base).unk2[7] = '\0';
        }
      }
    }
    fVar1 = *(float *)((this_ptr->base).base.unk1 + 0xc);
    if (fVar1 <= 0.0) {
      if (fVar1 < 0.0) {
        pCVar5 = &this_ptr->base;
        (pCVar5->base).unk1[0xc] = '\0';
        (pCVar5->base).unk1[0xd] = '\0';
        (pCVar5->base).unk1[0xe] = '\0';
        (pCVar5->base).unk1[0xf] = '\0';
        *(float *)((this_ptr->base).unk2 + 4) = -(float)local_1c;
      }
    }
    else {
      pCVar5 = &this_ptr->base;
      (pCVar5->base).unk1[0xc] = '\0';
      (pCVar5->base).unk1[0xd] = '\0';
      (pCVar5->base).unk1[0xe] = '\0';
      (pCVar5->base).unk1[0xf] = '\0';
      *(CPathMap **)((this_ptr->base).unk2 + 4) = local_1c;
    }
    CStack_60.x = (pCVar9->base).base.location.position.x -
                  (this_ptr->base).base.base.location.position.x;
    CStack_60.y = (pCVar9->base).base.location.position.y -
                  (this_ptr->base).base.base.location.position.y;
    CStack_60.z = (pCVar9->base).base.location.position.z -
                  (this_ptr->base).base.base.location.position.z;
    if (&local_6c != &CStack_60) {
      local_6c.x = CStack_60.x;
      local_6c.y = CStack_60.y;
      local_6c.z = CStack_60.z;
    }
    pCVar6 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&CStack_84,&local_6c)
    ;
    if (&local_6c != pCVar6) {
      local_6c.x = pCVar6->x;
      local_6c.y = pCVar6->y;
      local_6c.z = pCVar6->z;
    }
    fStack_8c = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                          (local_6c.y - (this_ptr->base).base.base.orient.bank);
    if (local_24 < fStack_8c) {
      fStack_8c = local_24;
    }
    if (fStack_8c < -local_24) {
      fStack_8c = -local_24;
    }
    fStack_98 = fStack_8c - *(float *)(this_ptr->unk + 0x14);
    if (in_stack_00000008 * (float)3.1415926535000001 < fStack_98) {
      fStack_98 = in_stack_00000008 * (float)3.1415926535000001;
    }
    if (fStack_98 < in_stack_00000008 * (float)-3.1415926535000001) {
      fStack_98 = in_stack_00000008 * (float)-3.1415926535000001;
    }
    *(float *)(this_ptr->unk + 0x14) = *(float *)(this_ptr->unk + 0x14) + fStack_98;
  }
  return;
}
