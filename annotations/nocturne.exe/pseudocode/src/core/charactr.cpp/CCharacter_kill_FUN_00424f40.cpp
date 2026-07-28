// Name: core_charactr.cpp_CCharacter_kill_FUN_00424f40
// Address: 00424f40
// Address Range: [[00424f40, 00424fe8]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_kill_FUN_00424f40(CCharacter *this_ptr,int damage_type,CVector3f *damage_direction,float impact_force)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_kill_FUN_00424f40(CCharacter *this_ptr,int damage_type,CVector3f *damage_direction,float impact_force)

{
  int iVar1;
  int in_stack_ffffffc0;
  CVector3f aCStack_34 [3];
  uint uStack_10;
  
  iVar1 = (*(((this_ptr->base).vtable._uc)->_uc).releaseFromGrab)(this_ptr);
  if (0 < iVar1) {
    return;
  }
  sound_sndmain_cpp_killSfx_FUN_00527230(this_ptr->sfx_handle);
  core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0((SDamageInfo *)&stack0xffffffc0);
  uStack_10 = damage_direction;
  if ((damage_direction != (CVector3f *)0x0) && (aCStack_34 != damage_direction)) {
    aCStack_34[0].x = damage_direction->x;
    aCStack_34[0].y = damage_direction->y;
    aCStack_34[0].z = damage_direction->z;
  }
  (*(((this_ptr->base).vtable._uc)->_uc).getGrabbed)
            (this_ptr,(CDemonActor *)&stack0xffffffc0,in_stack_ffffffc0);
  core_charactr_cpp_CCharacter_dropAllCarriedObjects_FUN_004291f0(this_ptr);
  return;
}
