// Name: core_wateract.cpp_CWaterActor_getActorType_FUN_005ea890
// Address: 005ea890
// Address Range: [[005ea890, 005ea895]]
// Convention: __cdecl
// Signature: CDemonActorType * core_wateract.cpp_CWaterActor_getActorType_FUN_005ea890(CWaterActor * this_ptr)
// Globals:
//   CDemonActorType g_CWaterActorClassInfo

#include "nocturne.h"

CDemonActorType * __cdecl
core_wateract_cpp_CWaterActor_getActorType_FUN_005ea890(CWaterActor *this_ptr)

{
  return &g_CWaterActorClassInfo;
}


// Assembly code:
// 005ea890: MOV EAX,0x3f93968
//   Label: core_wateract.cpp_CWaterActor_getActorType_FUN_005ea890
//   XREF to: 03f93968 (DATA)
// 005ea895: RET
