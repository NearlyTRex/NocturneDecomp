// Name: core_werewolf.cpp_CWerewolf_getActorType_FUN_005efc00
// Address: 005efc00
// Address Range: [[005efc00, 005efc05]]
// Convention: __cdecl
// Signature: CDemonActorType * core_werewolf.cpp_CWerewolf_getActorType_FUN_005efc00(CWerewolf * this_ptr)
// Globals:
//   CDemonActorType g_CWerewolfClassInfo

#include "nocturne.h"

CDemonActorType * __cdecl core_werewolf_cpp_CWerewolf_getActorType_FUN_005efc00(CWerewolf *this_ptr)

{
  return &g_CWerewolfClassInfo;
}


// Assembly code:
// 005efc00: MOV EAX,0x3f96b5c
//   Label: core_werewolf.cpp_CWerewolf_getActorType_FUN_005efc00
//   XREF to: 03f96b5c (DATA)
// 005efc05: RET
