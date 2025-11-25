// Name: core_spike.cpp_CSpike_getActorType_FUN_005b8210
// Address: 005b8210
// Address Range: [[005b8210, 005b8215]]
// Convention: __cdecl
// Signature: CDemonActorType * core_spike.cpp_CSpike_getActorType_FUN_005b8210(CSpike * this_ptr)
// Globals:
//   CDemonActorType g_CSpikeClassInfo

#include "nocturne.h"

CDemonActorType * __cdecl core_spike_cpp_CSpike_getActorType_FUN_005b8210(CSpike *this_ptr)

{
  return &g_CSpikeClassInfo;
}


// Assembly code:
// 005b8210: MOV EAX,0x3f6b9a4
//   Label: core_spike.cpp_CSpike_getActorType_FUN_005b8210
//   XREF to: 03f6b9a4 (DATA)
// 005b8215: RET
