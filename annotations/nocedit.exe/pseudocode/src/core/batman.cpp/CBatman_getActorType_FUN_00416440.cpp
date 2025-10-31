// Name: core_batman.cpp_CBatman_getActorType_FUN_00416440
// Address: 00416440
// Address Range: [[00416440, 00416445]]
// Convention: __cdecl
// Signature: CDemonActorType * core_batman.cpp_CBatman_getActorType_FUN_00416440(CBatman * this_ptr)
// Globals:
//   CDemonActorType g_CBatmanClassInfo

#include "nocturne.h"

CDemonActorType * __cdecl core_batman_cpp_CBatman_getActorType_FUN_00416440(CBatman *this_ptr)

{
  return &g_CBatmanClassInfo;
}


// Assembly code:
// 00416440: MOV EAX,0x8227e8
//   Label: core_batman.cpp_CBatman_getActorType_FUN_00416440
//   XREF to: 008227e8 (DATA)
// 00416445: RET
