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
  SCollisionInfo *in_stack_ffffffbc;
  float in_stack_ffffffc4;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  
  iVar1 = (*(this_ptr->base_actor).vtable[1].hasCollision)(&this_ptr->base_actor,in_stack_ffffffbc);
  if (0 < iVar1) {
    return;
  }
  sound_sndmain_cpp_killSfx_FUN_005a9c40(*(uint *)(this_ptr->cloth_data + 0x8d3c));
  core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)&stack0xffffffc4);
  if ((in_stack_0000000c != (float *)0x0) && (&fStack_30 != in_stack_0000000c)) {
    fStack_30 = *in_stack_0000000c;
    fStack_2c = in_stack_0000000c[1];
    fStack_28 = in_stack_0000000c[2];
  }
  (*(this_ptr->base_actor).vtable[1].playAmbientSoundWithVolume)
            (&this_ptr->base_actor,&stack0xffffffc4,in_stack_ffffffc4);
  core_charactr_cpp_CCharacter_FUN_0042d060(this_ptr);
  return;
}
