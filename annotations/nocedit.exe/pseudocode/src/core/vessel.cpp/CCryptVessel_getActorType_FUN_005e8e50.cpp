// Name: core_vessel.cpp_CCryptVessel_getActorType_FUN_005e8e50
// Address: 005e8e50
// Address Range: [[005e8e50, 005e8e55]]
// Convention: __cdecl
// Signature: CDemonActorType * core_vessel.cpp_CCryptVessel_getActorType_FUN_005e8e50(CCryptVessel * this_ptr)
// Globals:
//   CDemonActorType g_CCryptVesselClassInfo

#include "nocturne.h"

CDemonActorType * __cdecl
core_vessel_cpp_CCryptVessel_getActorType_FUN_005e8e50(CCryptVessel *this_ptr)

{
  return &g_CCryptVesselClassInfo;
}


// Assembly code:
// 005e8e50: MOV EAX,0x3f875a0
//   Label: core_vessel.cpp_CCryptVessel_getActorType_FUN_005e8e50
//   XREF to: 03f875a0 (DATA)
// 005e8e55: RET
