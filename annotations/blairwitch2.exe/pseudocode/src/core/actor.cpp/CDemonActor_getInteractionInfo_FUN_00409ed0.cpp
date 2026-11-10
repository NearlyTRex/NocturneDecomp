// Name: core_actor.cpp_CDemonActor_getInteractionInfo_FUN_00409ed0
// Address: 00409ed0
// Address Range: [[00409ed0, 00409f0f]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_CDemonActor_getInteractionInfo_FUN_00409ed0(CDemonActor *this_ptr,SInteractionInfo *out_info)

#include "nocturne.h"

void __cdecl core_actor_cpp_CDemonActor_getInteractionInfo_FUN_00409ed0(CDemonActor *this_ptr,SInteractionInfo *out_info)

{
  *(uint *)(out_info + 4) = 0;
  *(uint *)(out_info + 0x10) = 0;
  *(uint *)(out_info + 0x14) = 0;
  *(uint *)(out_info + 0x18) = 0;
  *(uint *)(out_info + 0x1c) = 0;
  *(uint *)(out_info + 8) = 0xc0000000;
  *(uint *)(out_info + 0xc) = 0x40800000;
  *(uint *)out_info = 0;
  return;
}
