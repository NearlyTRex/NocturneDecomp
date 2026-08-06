// Name: core_scat.cpp_CScat_ctor_FUN_004fbc00
// Address: 004fbc00
// Address Range: [[004fbc00, 004fbcbe]]
// Convention: __cdecl
// Signature: CScat * __cdecl core_scat_cpp_CScat_ctor_FUN_004fbc00(CScat *this_ptr)

#include "nocturne.h"

CScat * __cdecl core_scat_cpp_CScat_ctor_FUN_004fbc00(CScat *this_ptr)

{
  CScat *this_ptr_00;
  
  this_ptr_00 = (CScat *)core_hero_cpp_CHero_FUN_004b46d0(&this_ptr->base);
  (this_ptr_00->base).base.base.vtable._ub = &g_CScatVTable._ub;
  this_ptr_00->guns_drawn = 0;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0
            (&(this_ptr_00->base).base.model,"scat.dfm");
  this_ptr_00->head_blend_weight = 1.0;
  (this_ptr_00->head_euler_angles).z = 0.0;
  (this_ptr_00->head_euler_angles).y = (this_ptr_00->head_euler_angles).z;
  (this_ptr_00->head_euler_angles).x = (this_ptr_00->head_euler_angles).y;
  core_scat_cpp_CScat_createDefaultWeapon_FUN_004fbe80(this_ptr_00);
  this_ptr_00->weapon_actor = (CWeapon *)0x0;
  this_ptr_00->aim_yaw = 0.0;
  this_ptr_00->aim_target = (CDemonActor *)0x0;
  this_ptr_00->aim_converged = 0;
  this_ptr_00->aim_pitch = this_ptr_00->aim_yaw;
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042a760
            ((CCharacter *)this_ptr_00,0,1,"draw_stand2coatPocket",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042a760
            ((CCharacter *)this_ptr_00,1,2,"draw_coatPocket2aimPistols",0);
  return this_ptr_00;
}
