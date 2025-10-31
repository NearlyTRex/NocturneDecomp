// Name: core_charactr.cpp_CCharacter_setActorNameMaybe_FUN_0042fae0
// Address: 0042fae0
// Address Range: [[0042fae0, 0042faee]]
// Convention: __cdecl
// Signature: CCharacter * core_charactr.cpp_CCharacter_setActorNameMaybe_FUN_0042fae0(CCharacter * this_ptr, char * * actor_name)
// Cross-references:
//   core_dtrace.cpp_CDemonRaytrace_crunch_FUN_00495310 (00495310) at 004959e9 [UNCONDITIONAL_CALL]

#include "nocturne.h"

CCharacter * __cdecl
core_charactr_cpp_CCharacter_setActorNameMaybe_FUN_0042fae0(CCharacter *this_ptr,char **actor_name)

{
  *(char **)(this_ptr->base_actor).actor_name = *actor_name;
  return this_ptr;
}


// Assembly code:
// 0042fae0: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_charactr.cpp_CCharacter_setActorNameMaybe_FUN_0042fae0
//   XREF to: Stack[0x4] (READ)
// 0042fae4: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 0042fae8: MOV EAX,dword ptr [EAX]
// 0042faea: MOV dword ptr [EDX],EAX
// 0042faec: MOV EAX,EDX
// 0042faee: RET
