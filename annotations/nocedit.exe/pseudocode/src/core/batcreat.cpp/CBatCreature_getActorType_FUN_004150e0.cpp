// Name: core_batcreat.cpp_CBatCreature_getActorType_FUN_004150e0
// Address: 004150e0
// Address Range: [[004150e0, 004150e5]]
// Convention: __cdecl
// Signature: CDemonActorType * core_batcreat.cpp_CBatCreature_getActorType_FUN_004150e0(CBatCreature * this_ptr)
// Globals:
//   CDemonActorType g_CBatCreatureClassInfo

#include "nocturne.h"

CDemonActorType * __cdecl
core_batcreat_cpp_CBatCreature_getActorType_FUN_004150e0(CBatCreature *this_ptr)

{
  return &g_CBatCreatureClassInfo;
}


// Assembly code:
// 004150e0: MOV EAX,0x82277c
//   Label: core_batcreat.cpp_CBatCreature_getActorType_FUN_004150e0
//   XREF to: 0082277c (DATA)
// 004150e5: RET
