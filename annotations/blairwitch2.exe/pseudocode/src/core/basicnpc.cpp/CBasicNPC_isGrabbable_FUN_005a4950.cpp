// Name: core_basicnpc.cpp_CBasicNPC_isGrabbable_FUN_005a4950
// Address: 005a4950
// Address Range: [[005a4950, 005a497b]]
// Convention: __cdecl
// Signature: int __cdecl core_basicnpc_cpp_CBasicNPC_isGrabbable_FUN_005a4950(CBasicNPC *this_ptr,CDemonActor *grabber)

#include "nocturne.h"

int __cdecl core_basicnpc_cpp_CBasicNPC_isGrabbable_FUN_005a4950(CBasicNPC *this_ptr,CDemonActor *grabber)

{
  CDemonActor *pCVar1;
  
  if (grabber == (CDemonActor *)this_ptr) {
    return (uint)grabber ^ (uint)this_ptr;
  }
  pCVar1 = (CBasicNPC *)core_actor_cpp_castToClassHash_FUN_0040c8f0(grabber,g_CBasicNPCClassInfo.name_hash);
  if (pCVar1 != (CDemonActor *)0x0) {
    return 0;
  }
  return 1;
}
