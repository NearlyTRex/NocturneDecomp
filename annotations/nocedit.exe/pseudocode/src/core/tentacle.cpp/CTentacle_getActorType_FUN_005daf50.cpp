// Name: core_tentacle.cpp_CTentacle_getActorType_FUN_005daf50
// Address: 005daf50
// Address Range: [[005daf50, 005daf55]]
// Convention: __cdecl
// Signature: CDemonActorType * core_tentacle.cpp_CTentacle_getActorType_FUN_005daf50(CTentacle * this_ptr)
// Globals:
//   CDemonActorType g_CTentacleClassInfo

#include "nocturne.h"

CDemonActorType * __cdecl core_tentacle_cpp_CTentacle_getActorType_FUN_005daf50(CTentacle *this_ptr)

{
  return &g_CTentacleClassInfo;
}


// Assembly code:
// 005daf50: MOV EAX,0x3f6cd18
//   Label: core_tentacle.cpp_CTentacle_getActorType_FUN_005daf50
//   XREF to: 03f6cd18 (DATA)
// 005daf55: RET
