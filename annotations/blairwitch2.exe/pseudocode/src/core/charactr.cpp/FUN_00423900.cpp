// Name: core_charactr.cpp_FUN_00423900
// Address: 00423900
// Address Range: [[00423900, 004239a8]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_FUN_00423900(CCharacter *this_ptr,int damage_type,CVector3f *damage_direction,float impact_force)

#include "nocturne.h"

void __cdecl core_charactr_cpp_FUN_00423900(CCharacter *this_ptr,int damage_type,CVector3f *damage_direction,float impact_force)

{
  int iVar1;
  SDamageInfo aSStack_44 [4];
  uint uStack_40;
  CVector3f CStack_38;
  float fStack_2c;
  int iStack_14;
  
  iVar1 = (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0x114))(this_ptr);
  if (0 < iVar1) {
    return;
  }
  sound_sndmain_cpp_killSfx_FUN_00551050(*(uint *)&this_ptr->field_0x10220);
  core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(aSStack_44);
  uStack_40 = 0x461c3c00;
  iStack_14 = damage_type;
  if ((damage_direction != (CVector3f *)0x0) && (&CStack_38 != damage_direction)) {
    CStack_38._0_4_ = *(uint *)damage_direction;
    CStack_38._4_4_ = *(uint *)&damage_direction->field_0x4;
    CStack_38._8_4_ = *(uint *)&damage_direction->field_0x8;
  }
  if (0.0 <= impact_force) {
    fStack_2c = impact_force;
  }
  (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0x110))(this_ptr,aSStack_44);
  core_charactr_cpp_FUN_00428e00(this_ptr);
  return;
}
