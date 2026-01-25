// Name: core_charactr.cpp_CCharacter_FUN_00428e30
// Address: 00428e30
// Address Range: [[00428e30, 00428ed8]]
// Convention: __cdecl
// Signature: void core_charactr.cpp_CCharacter_FUN_00428e30(CCharacter * this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_FUN_00428e30(CCharacter *this_ptr)

{
  int iVar1;
  float *in_stack_0000000c;
  int iStack_40;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  
  iVar1 = (*(((this_ptr->base_actor).vtable._uc)->_uc).isDamageable)(this_ptr);
  if (0 < iVar1) {
    return;
  }
  sound_sndmain_cpp_killSfx_FUN_005a9c40(*(uint *)(this_ptr->cloth_data + 0x8d3c));
  core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)&iStack_40);
  if ((in_stack_0000000c != (float *)0x0) && (&fStack_34 != in_stack_0000000c)) {
    fStack_34 = *in_stack_0000000c;
    fStack_30 = in_stack_0000000c[1];
    fStack_2c = in_stack_0000000c[2];
  }
  (*(((this_ptr->base_actor).vtable._uc)->_uc).processDamage)(this_ptr,(SDamageInfo *)&iStack_40);
  iStack_40 = 0x428ed0;
  core_charactr_cpp_CCharacter_FUN_0042d060(this_ptr);
  return;
}
