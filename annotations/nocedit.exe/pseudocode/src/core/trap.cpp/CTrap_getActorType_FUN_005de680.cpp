// Name: core_trap.cpp_CTrap_getActorType_FUN_005de680
// Address: 005de680
// Address Range: [[005de680, 005de685]]
// Convention: __cdecl
// Signature: CDemonActorType * core_trap.cpp_CTrap_getActorType_FUN_005de680(CTrap * this_ptr)
// Globals:
//   CDemonActorType g_CTrapClassInfo

#include "nocturne.h"

CDemonActorType * __cdecl core_trap_cpp_CTrap_getActorType_FUN_005de680(CTrap *this_ptr)

{
  return &g_CTrapClassInfo;
}


// Assembly code:
// 005de680: MOV EAX,0x3f873e0
//   Label: core_trap.cpp_CTrap_getActorType_FUN_005de680
//   XREF to: 03f873e0 (DATA)
// 005de685: RET
