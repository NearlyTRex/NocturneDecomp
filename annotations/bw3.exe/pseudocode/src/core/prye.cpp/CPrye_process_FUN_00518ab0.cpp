// Name: core_prye.cpp_CPrye_process_FUN_00518ab0
// Address: 00518ab0
// Address Range: [[00518ab0, 00518ccd]]
// Convention: __cdecl
// Signature: void __cdecl core_prye_cpp_CPrye_process_FUN_00518ab0(CPrye *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_prye_cpp_CPrye_process_FUN_00518ab0(CPrye *this_ptr,float delta_time)

{
  bool bVar1;
  int iVar2;
  SMotion *pSVar3;
  SDamageInfo SStack_4c;
  float fStack_10;
  float fStack_c;
  
  iVar2 = core_charactr_cpp_FUN_0042cd70(this_ptr,delta_time);
  if (iVar2 == 0) {
    if (0.0 < (this_ptr->base).base.bind_time) {
      unkafter_prye_cpp_FUN_00526dc0(this_ptr,delta_time);
      return;
    }
  }
  else {
    if ((this_ptr->weapon == (CWeapon *)0x0) || (this_ptr->weapon->draw_crosshair == 0)) {
      (this_ptr->base).aim_target_pulse = 0.0;
      (this_ptr->base).aim_target_actor = (CDemonActor *)0x0;
    }
    if ((this_ptr->base).aim_target_actor != (CDemonActor *)0x0) {
      (this_ptr->base).aim_target_pulse =
           delta_time * _DAT_005cd00b + (this_ptr->base).aim_target_pulse;
    }
    if ((0.0 < (this_ptr->base).base.bind_time) && ((this_ptr->base).base.bind_type == 3)) {
      core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(&SStack_4c);
      SStack_4c.damage_amount = delta_time * (float)_DAT_005cd00f;
      SStack_4c.damage_type = DAMAGE_TYPE_ATTACK_GAS;
      (*(((this_ptr->base).base.base.vtable._uc)->_uc).processDamage)
                ((CCharacter *)this_ptr,&SStack_4c);
    }
    iVar2 = g_CGamePtr->goggles_active;
    if (this_ptr->quick_turn_active == 1) {
      this_ptr->quick_turn_angle = this_ptr->quick_turn_angle - _DAT_005e3504;
      core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                (&(this_ptr->base).base.model.base,0x7a,1);
      if ((float)_DAT_005cd017 <= this_ptr->quick_turn_angle) {
        (this_ptr->base).base.base.orient.vec.y =
             _DAT_005e3504 + (this_ptr->base).base.base.orient.vec.y;
        core_charactr_cpp_FUN_00433220(this_ptr,&(this_ptr->base).base.base.orient);
      }
      else {
        this_ptr->quick_turn_active = 0;
      }
    }
    core_charactr_cpp_FUN_00432330(this_ptr,delta_time,iVar2 != 0);
    fStack_c = g_CGamePtr->delta_time_float;
    pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                       (&(this_ptr->base).base.model.base);
    bVar1 = false;
    switch(pSVar3->state_index) {
    case 0x1a:
    case 0x1b:
    case 0x1c:
    case 0x1d:
    case 0x1e:
    case 0x1f:
    case 0x20:
    case 0x21:
    case 0x22:
    case 0x24:
    case 0x26:
      bVar1 = true;
    }
    if (((this_ptr->base).action_pending == 7) || (bVar1)) {
      fStack_10 = delta_time * (float)_DAT_005cd01f;
      core_prye_cpp_FUN_00518cd0(this_ptr,fStack_10);
      core_prye_cpp_FUN_00518cd0(this_ptr,fStack_10);
      core_prye_cpp_FUN_00518cd0(this_ptr,fStack_10);
      delta_time = fStack_10;
    }
    core_prye_cpp_FUN_00518cd0(this_ptr,delta_time);
    core_game_cpp_CGame_slamDT_FUN_004bf3a0(g_CGamePtr,fStack_c);
  }
  return;
}
