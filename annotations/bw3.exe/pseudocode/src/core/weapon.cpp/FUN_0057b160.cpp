// Name: core_weapon.cpp_FUN_0057b160
// Address: 0057b160
// Address Range: [[0057b160, 0057b29a]]
// Convention: __cdecl
// Signature: void __cdecl core_weapon_cpp_FUN_0057b160(CWeapon *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_weapon_cpp_FUN_0057b160(CWeapon *this_ptr,float delta_time)

{
  float fVar1;
  
  if ((0.0 < *(float *)&this_ptr->field_0x300) &&
     (fVar1 = *(float *)&this_ptr->field_0x300 - delta_time,
     *(float *)&this_ptr->field_0x300 = fVar1, fVar1 < 0.0)) {
    *(uint *)&this_ptr->field_0x300 = 0;
  }
  if (((*(int *)&this_ptr->field_0x304 == 0) && (*(int *)&this_ptr->field_0x2d4 == 0)) &&
     (0.0 < *(float *)&this_ptr->field_0x580)) {
    fVar1 = *(float *)&this_ptr->field_0x580 - delta_time;
    *(float *)&this_ptr->field_0x580 = fVar1;
    if (fVar1 < 0.0) {
      *(uint *)&this_ptr->field_0x580 = 0;
    }
    core_box_cpp_CBox_process_FUN_0041b410((CBox *)&this_ptr->field_0x308,delta_time);
    *(uint *)&this_ptr->field_0x20 = *(uint *)&this_ptr->field_0x308;
    *(uint *)&this_ptr->field_0x24 = *(uint *)&this_ptr->field_0x30c;
    *(uint *)&this_ptr->field_0x28 = *(uint *)&this_ptr->field_0x310;
    if (&this_ptr->field_0x30 != &this_ptr->field_0x314) {
      *(uint *)&this_ptr->field_0x30 = *(uint *)&this_ptr->field_0x314;
      *(uint *)&this_ptr->field_0x34 = *(uint *)&this_ptr->field_0x318;
      *(uint *)&this_ptr->field_0x38 = *(uint *)&this_ptr->field_0x31c;
    }
  }
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0((CDemonActor *)this_ptr);
  if (((*(int *)&this_ptr->field_0x304 == *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04)) &&
      (*(int *)&g_CGamePtr->field_0x26c != 0)) && (*(int *)&this_ptr->field_0x2f0 != 0)) {
    (**(code **)(*(int *)&this_ptr->field_0x154 + 0xf4))(this_ptr);
    if (0.0 < (float)g_CDemonLightInstance._12200_4_) {
      core_set_cpp_FUN_00537270(g_CDemonSetPtr,&g_CDemonLightInstance);
      return;
    }
  }
  return;
}
