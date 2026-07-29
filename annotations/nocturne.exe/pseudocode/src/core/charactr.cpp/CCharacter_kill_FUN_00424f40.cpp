// Name: core_charactr.cpp_CCharacter_kill_FUN_00424f40
// Address: 00424f40
// Address Range: [[00424f40, 00424fe8]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_kill_FUN_00424f40(CCharacter *this_ptr,int damage_type,CVector3f *damage_direction,float impact_force)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_kill_FUN_00424f40(CCharacter *this_ptr,int damage_type,CVector3f *damage_direction,float impact_force)

{
  EDeathState EVar1;
  SDamageInfo SStack_44;
  
  EVar1 = (*(((this_ptr->base).vtable._uc)->_uc).getDeathState)(this_ptr);
  if (0 < (int)EVar1) {
    return;
  }
  sound_sndmain_cpp_killSfx_FUN_00527230(this_ptr->sfx_handle);
  core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(&SStack_44);
  SStack_44.damage_amount = 9999.0;
  SStack_44.damage_type = damage_type;
  if ((damage_direction != (CVector3f *)0x0) && (&SStack_44.impact_point != damage_direction)) {
    SStack_44.impact_point.x = damage_direction->x;
    SStack_44.impact_point.y = damage_direction->y;
    SStack_44.impact_point.z = damage_direction->z;
  }
  if (0.0 <= impact_force) {
    SStack_44.impact_force = impact_force;
  }
  (*(((this_ptr->base).vtable._uc)->_uc).processDamage)(this_ptr,&SStack_44);
  core_charactr_cpp_CCharacter_dropAllCarriedObjects_FUN_004291f0(this_ptr);
  return;
}
