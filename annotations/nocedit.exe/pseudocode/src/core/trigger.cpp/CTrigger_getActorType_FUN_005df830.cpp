// Name: core_trigger.cpp_CTrigger_getActorType_FUN_005df830
// Address: 005df830
// Address Range: [[005df830, 005df835]]
// Convention: __cdecl
// Signature: CDemonActorType * core_trigger.cpp_CTrigger_getActorType_FUN_005df830(CTrigger * this_ptr)
// Globals:
//   CDemonActorType g_CTriggerClassInfo

#include "nocturne.h"

CDemonActorType * __cdecl core_trigger_cpp_CTrigger_getActorType_FUN_005df830(CTrigger *this_ptr)

{
  return &g_CTriggerClassInfo;
}


// Assembly code:
// 005df830: MOV EAX,0x3f87458
//   Label: core_trigger.cpp_CTrigger_getActorType_FUN_005df830
//   XREF to: 03f87458 (DATA)
// 005df835: RET
