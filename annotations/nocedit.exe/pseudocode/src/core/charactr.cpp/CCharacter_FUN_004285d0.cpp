// Name: core_charactr.cpp_CCharacter_FUN_004285d0
// Address: 004285d0
// Address Range: [[004285d0, 0042861d]]
// Convention: __cdecl
// Signature: void core_charactr.cpp_CCharacter_FUN_004285d0(CCharacter * this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_charactr_cpp_CCharacter_FUN_004285d0(CCharacter *this_ptr)

{
  uint uVar1;
  CVector3f *unaff_EBX;
  int unaff_retaddr;
  uint uStack00000010;
  CVector3f *in_stack_0000002c;
  CVector3f *in_stack_00000030;
  
  (*(this_ptr->base_actor).vtable[1].handleFootstep)
            (&this_ptr->base_actor,unaff_EBX,unaff_retaddr,(float)this_ptr);
  uStack00000010 = 0x4285f5;
  core_actor_cpp_CDemonActor_setPositionAndOrientation_FUN_00409fb0
            (&this_ptr->base_actor,in_stack_0000002c,in_stack_00000030);
  uVar1 = _DAT_0065b834;
  this_ptr->field2_0x240c[0x24] = '\0';
  this_ptr->field2_0x240c[0x25] = '\0';
  this_ptr->field2_0x240c[0x26] = '\0';
  this_ptr->field2_0x240c[0x27] = '\0';
  *(uint *)(this_ptr->field2_0x240c + 0x20) = *(uint *)(this_ptr->field2_0x240c + 0x24);
  *(uint *)(this_ptr->field2_0x240c + 0x1c) = *(uint *)(this_ptr->field2_0x240c + 0x20);
  *(uint *)(this_ptr->field2_0x240c + 8) = uVar1;
  return;
}
