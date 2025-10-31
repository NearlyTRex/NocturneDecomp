// Name: core_succubus.cpp_CSuccubus_getActorType_FUN_005c6a70
// Address: 005c6a70
// Address Range: [[005c6a70, 005c6a75]]
// Convention: __cdecl
// Signature: CDemonActorType * core_succubus.cpp_CSuccubus_getActorType_FUN_005c6a70(CSuccubus * this_ptr)
// Globals:
//   CDemonActorType g_CSuccubusClassInfo

#include "nocturne.h"

CDemonActorType * __cdecl core_succubus_cpp_CSuccubus_getActorType_FUN_005c6a70(CSuccubus *this_ptr)

{
  return &g_CSuccubusClassInfo;
}


// Assembly code:
// 005c6a70: MOV EAX,0x3f6bb98
//   Label: core_succubus.cpp_CSuccubus_getActorType_FUN_005c6a70
//   XREF to: 03f6bb98 (DATA)
// 005c6a75: RET
