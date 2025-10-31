// Name: core_charactr.cpp_CCharacter_setActorNameMaybe_FUN_0042fb00
// Address: 0042fb00
// Address Range: [[0042fb00, 0042fb0e]]
// Convention: __cdecl
// Signature: CCharacter * core_charactr.cpp_CCharacter_setActorNameMaybe_FUN_0042fb00(CCharacter * this_ptr, char * * actor_name)
// Cross-references:
//   core_dtrace.cpp_CDemonRaytrace_crunch_FUN_00495310 (00495310) at 004959c3 [UNCONDITIONAL_CALL]

#include "nocturne.h"

CCharacter * __cdecl
core_charactr_cpp_CCharacter_setActorNameMaybe_FUN_0042fb00(CCharacter *this_ptr,char **actor_name)

{
  *(char **)(this_ptr->base_actor).actor_name = *actor_name;
  return this_ptr;
}


// Assembly code:
// 0042fb00: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_charactr.cpp_CCharacter_setActorNameMaybe_FUN_0042fb00
//   XREF to: Stack[0x4] (READ)
// 0042fb04: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 0042fb08: MOV EAX,dword ptr [EAX]
// 0042fb0a: MOV dword ptr [EDX],EAX
// 0042fb0c: MOV EAX,EDX
// 0042fb0e: RET
