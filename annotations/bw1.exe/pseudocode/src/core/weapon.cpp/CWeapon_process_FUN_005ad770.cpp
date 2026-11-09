// Name: core_weapon.cpp_CWeapon_process_FUN_005ad770
// Address: 005ad770
// Address Range: [[005ad770, 005ad8aa]]
// Convention: __cdecl
// Signature: void __cdecl core_weapon_cpp_CWeapon_process_FUN_005ad770(CWeapon *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_weapon_cpp_CWeapon_process_FUN_005ad770(CWeapon *this_ptr,float delta_time)

{
  float fVar1;
  
  if ((0.0 < *(float *)&this_ptr->field_0x300) &&
     (fVar1 = *(float *)&this_ptr->field_0x300 - delta_time,
     *(float *)&this_ptr->field_0x300 = fVar1, fVar1 < 0.0)) {
    *(uint *)&this_ptr->field_0x300 = 0;
  }
  if (((*(int *)&this_ptr->field_0x304 == 0) && (*(int *)&this_ptr->field_0x2d4 == 0)) &&
     (0.0 < *(float *)&this_ptr->field_0x570)) {
    fVar1 = *(float *)&this_ptr->field_0x570 - delta_time;
    *(float *)&this_ptr->field_0x570 = fVar1;
    if (fVar1 < 0.0) {
      *(uint *)&this_ptr->field_0x570 = 0;
    }
    core_box_cpp_CBox_process_FUN_0041e0d0((CBox *)&this_ptr->field_0x308,delta_time);
    *(uint *)&this_ptr->field_0x20 = *(uint *)&this_ptr->field_0x308;
    *(uint *)&this_ptr->field_0x24 = *(uint *)&this_ptr->field_0x30c;
    *(uint *)&this_ptr->field_0x28 = *(uint *)&this_ptr->field_0x310;
    if (&this_ptr->field_0x30 != &this_ptr->field_0x314) {
      *(uint *)&this_ptr->field_0x30 = *(uint *)&this_ptr->field_0x314;
      *(uint *)&this_ptr->field_0x34 = *(uint *)&this_ptr->field_0x318;
      *(uint *)&this_ptr->field_0x38 = *(uint *)&this_ptr->field_0x31c;
    }
  }
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0((CDemonActor *)this_ptr);
  if (((*(int *)&this_ptr->field_0x304 == *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4)) &&
      (*(int *)&g_CGamePtr->field_0x264 != 0)) && (*(int *)&this_ptr->field_0x2f0 != 0)) {
    (**(code **)(*(int *)&this_ptr->field_0x154 + 0xf4))(this_ptr);
    if (0.0 < (float)g_CDemonLightInstance._12200_4_) {
      core_set_cpp_FUN_005518e0(g_CDemonSetPtr,&g_CDemonLightInstance);
      return;
    }
  }
  return;
}
