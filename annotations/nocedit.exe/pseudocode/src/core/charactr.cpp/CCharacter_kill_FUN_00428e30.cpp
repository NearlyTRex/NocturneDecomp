// Name: core_charactr.cpp_CCharacter_kill_FUN_00428e30
// Address: 00428e30
// Address Range: [[00428e30, 00428ed8]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_kill_FUN_00428e30(CCharacter *this_ptr,int damage_type,CVector3f *damage_direction,float impact_force)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_kill_FUN_00428e30(CCharacter *this_ptr,int damage_type,CVector3f *damage_direction,float impact_force)

{
  int iVar1;
  SDamageInfo SStack_44;
  
  iVar1 = (*(((this_ptr->base).vtable._uc)->_uc).getDeathState)(this_ptr);
  if (0 < iVar1) {
    return;
  }
  sound_sndmain_cpp_killSfx_FUN_005a9c40(this_ptr->sfx_handle);
  core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&SStack_44);
  SStack_44.damage_amount = 9999.0;
  SStack_44.gore_multiplier = (float)damage_type;
  if ((damage_direction != (CVector3f *)0x0) && (&SStack_44.impact_point != damage_direction)) {
    SStack_44.impact_point.x = damage_direction->x;
    SStack_44.impact_point.y = damage_direction->y;
    SStack_44.impact_point.z = damage_direction->z;
  }
  if (0.0 <= impact_force) {
    SStack_44.impact_force = impact_force;
  }
  (*(((this_ptr->base).vtable._uc)->_uc).processDamage)(this_ptr,&SStack_44);
  core_charactr_cpp_CCharacter_dropAllCarriedObjects_FUN_0042d060(this_ptr);
  return;
}
