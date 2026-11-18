// Name: core_fforest.cpp_CTwigZombie_processAI_FUN_005a2910
// Address: 005a2910
// Address Range: [[005a2910, 005a2a87]]
// Convention: __cdecl
// Signature: void __cdecl core_fforest_cpp_CTwigZombie_processAI_FUN_005a2910(CTwigZombie *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_fforest_cpp_CTwigZombie_processAI_FUN_005a2910(CTwigZombie *this_ptr,float delta_time)

{
  SStateMachine *this_ptr_00;
  CDeformableModelInstance *this_ptr_01;
  CDemonActor_vtable *pCVar1;
  float fVar2;
  int iVar3;
  SMotion *pSVar4;
  uint uVar5;
  byte bVar6;
  float afStackY_1024 [1016];
  CClothList *this_ptr_02;
  CVector3f *wind_velocity;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  CVector3f CStack_24;
  float fStack_18;
  float afStack_14 [2];
  
  bVar6 = 0;
  this_ptr_00 = &(this_ptr->base).state_machine;
  iVar3 = core_muzzle_cpp_SStateMachine_isState_FUN_0059daa0(this_ptr_00,"Death");
  if ((iVar3 == 0) ||
     (iVar3 = core_muzzle_cpp_SStateMachine_isState_FUN_0059daa0(this_ptr_00,"Animation"),
     iVar3 == 0)) {
    (*(this_ptr->base).base.base.base.vtable._ub[1].getCarrier)((CDemonActor *)this_ptr);
  }
  this_ptr_01 = &(this_ptr->base).base.base.model;
  pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_005035c0(&this_ptr_01->base);
  if ((pSVar4->state_index == 1) ||
     (pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_005035c0(&this_ptr_01->base),
     pSVar4->state_index == 6)) {
    if ((this_ptr->base).idle_sound[0] == '\0') {
      sound_sndmain_cpp_killSfx_FUN_00551050((this_ptr->base).idle_sfx_handle);
    }
    else {
      fVar2 = (this_ptr->base).idle_sound_timer - delta_time;
      (this_ptr->base).idle_sound_timer = fVar2;
      if (fVar2 <= 0.0) {
        pCVar1 = (this_ptr->base).base.base.base.vtable._ub;
        (this_ptr->base).idle_sound_timer = (this_ptr->base).idle_sound_interval;
        uVar5 = (*pCVar1->playSound)((CDemonActor *)this_ptr,(this_ptr->base).idle_sound);
        (this_ptr->base).idle_sfx_handle = uVar5;
      }
    }
  }
  else {
    sound_sndmain_cpp_killSfx_FUN_00551050((this_ptr->base).idle_sfx_handle);
  }
  fStack_30 = (this_ptr->base).move_velocity.x * -4000.0f;
  fStack_2c = (this_ptr->base).move_velocity.y * -4000.0f;
  fStack_28 = (this_ptr->base).move_velocity.z * -4000.0f;
  fStack_3c = fStack_30;
  *(uint *)((int)&stack0xffffffc8 + (uint)bVar6 * -8) =
       *(uint *)((int)&stack0xffffffd4 + (uint)bVar6 * -8);
  *(uint *)((int)&stack0xffffffcc + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
       *(uint *)((int)&stack0xffffffd8 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
  wind_velocity = &CStack_24;
  this_ptr_02 = &(this_ptr->base).base.base.cloth_list;
  fStack_18 = fStack_3c * delta_time;
  afStack_14[0] = fStack_38 * delta_time;
  afStack_14[1] = fStack_34 * delta_time;
  CStack_24.x = fStack_3c * delta_time;
  *(float *)((int)&CStack_24 + (uint)bVar6 * -8 + 4) = afStack_14[(uint)bVar6 * -2];
  *(float *)((int)&CStack_24 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
       afStack_14[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
  core_cloth_cpp_CClothList_setWindVelocity_FUN_005b1890(this_ptr_02,wind_velocity);
  return;
}
