// Name: core_boxactor.cpp_CLightActor_getActorType_FUN_00422980
// Address: 00422980
// Address Range: [[00422980, 00422985]]
// Convention: __cdecl
// Signature: CDemonActorType * core_boxactor.cpp_CLightActor_getActorType_FUN_00422980(CLightActor * this_ptr)
// Globals:
//   CDemonActorType g_CLightActorClassInfo

#include "nocturne.h"

CDemonActorType * __cdecl
core_boxactor_cpp_CLightActor_getActorType_FUN_00422980(CLightActor *this_ptr)

{
  return &g_CLightActorClassInfo;
}


// Assembly code:
// 00422980: MOV EAX,0x822c4c
//   Label: core_boxactor.cpp_CLightActor_getActorType_FUN_00422980
//   XREF to: 00822c4c (DATA)
// 00422985: RET
