// Name: core_basicnpc.cpp_CBasicNPC_processStates_FUN_005a4880
// Address: 005a4880
// Address Range: [[005a4880, 005a489b]]
// Convention: __cdecl
// Signature: void __cdecl core_basicnpc_cpp_CBasicNPC_processStates_FUN_005a4880(CBasicNPC *this_ptr,float delta_time,int mode)

#include "nocturne.h"

void __cdecl core_basicnpc_cpp_CBasicNPC_processStates_FUN_005a4880(CBasicNPC *this_ptr,float delta_time,int mode)

{
  if (mode == 0) {
    return;
  }
  core_basicene_cpp_FUN_0059e8c0(this_ptr,delta_time,mode);
  return;
}
