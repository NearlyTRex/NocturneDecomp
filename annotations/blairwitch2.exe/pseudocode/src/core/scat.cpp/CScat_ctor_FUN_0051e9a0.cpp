// Name: core_scat.cpp_CScat_ctor_FUN_0051e9a0
// Address: 0051e9a0
// Address Range: [[0051e9a0, 0051ea5e]]
// Convention: __cdecl
// Signature: CScat * __cdecl core_scat_cpp_CScat_ctor_FUN_0051e9a0(CScat *this_ptr)

#include "nocturne.h"

CScat * __cdecl core_scat_cpp_CScat_ctor_FUN_0051e9a0(CScat *this_ptr)

{
  CScat *this_ptr_00;
  
  this_ptr_00 = (CScat *)core_hero_cpp_FUN_004ce240(this_ptr);
  *(CHero_full_vtable **)&this_ptr_00->field_0x2b0 = &g_CScatVTable;
  this_ptr_00->guns_drawn = 0;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            ((CDeformableModelInstance *)&this_ptr_00->field_0x2b4,(char *)0x5e29b7);
  this_ptr_00->head_blend_weight = 1.0;
  (this_ptr_00->head_euler_angles).z = 0.0;
  (this_ptr_00->head_euler_angles).y = (this_ptr_00->head_euler_angles).z;
  (this_ptr_00->head_euler_angles).x = (this_ptr_00->head_euler_angles).y;
  core_scat_cpp_CScat_createDefaultWeapon_FUN_0051ec20(this_ptr_00);
  this_ptr_00->weapon_actor = (CWeapon *)0x0;
  this_ptr_00->aim_yaw = 0.0;
  this_ptr_00->aim_target = (CDemonActor *)0x0;
  this_ptr_00->aim_converged = 0;
  this_ptr_00->aim_pitch = this_ptr_00->aim_yaw;
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042a330
            ((CCharacter *)this_ptr_00,0,1,"draw_stand2coatPocket",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042a330
            ((CCharacter *)this_ptr_00,1,2,"draw_coatPocket2aimPistols",0);
  return this_ptr_00;
}
