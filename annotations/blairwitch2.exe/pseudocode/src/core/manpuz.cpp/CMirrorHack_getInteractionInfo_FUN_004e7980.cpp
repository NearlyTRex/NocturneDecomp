// Name: core_manpuz.cpp_CMirrorHack_getInteractionInfo_FUN_004e7980
// Address: 004e7980
// Address Range: [[004e7980, 004e79c3]]
// Convention: __cdecl
// Signature: void __cdecl core_manpuz_cpp_CMirrorHack_getInteractionInfo_FUN_004e7980(CMirrorHack *this_ptr,SInteractionInfo *out_info)

#include "nocturne.h"

void __cdecl core_manpuz_cpp_CMirrorHack_getInteractionInfo_FUN_004e7980(CMirrorHack *this_ptr,SInteractionInfo *out_info)

{
  CDemonActor *pCVar1;
  
  core_actor_cpp_CDemonActor_getInteractionInfo_FUN_00409ed0(&this_ptr->base,out_info);
  *(uint *)out_info = 1;
  pCVar1 = this_ptr->interacting_actor;
  *(uint *)(out_info + 0x10) = 0x40c90fdb;
  *(uint *)(out_info + 0x14) = 0xc0c90fdb;
  *(uint *)(out_info + 8) = 0xbf800000;
  *(uint *)(out_info + 0xc) = 0;
  *(CDemonActor **)(out_info + 4) = pCVar1;
  return;
}
