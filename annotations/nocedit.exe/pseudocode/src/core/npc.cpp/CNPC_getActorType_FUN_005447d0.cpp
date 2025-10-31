// Name: core_npc.cpp_CNPC_getActorType_FUN_005447d0
// Address: 005447d0
// Address Range: [[005447d0, 005447d5]]
// Convention: __cdecl
// Signature: CDemonActorType * core_npc.cpp_CNPC_getActorType_FUN_005447d0(CNPC * this_ptr)
// Globals:
//   CDemonActorType g_CNPCClassInfo

#include "nocturne.h"

CDemonActorType * __cdecl core_npc_cpp_CNPC_getActorType_FUN_005447d0(CNPC *this_ptr)

{
  return &g_CNPCClassInfo;
}


// Assembly code:
// 005447d0: MOV EAX,0x2fd8ce0
//   Label: core_npc.cpp_CNPC_getActorType_FUN_005447d0
//   XREF to: 02fd8ce0 (DATA)
// 005447d5: RET
