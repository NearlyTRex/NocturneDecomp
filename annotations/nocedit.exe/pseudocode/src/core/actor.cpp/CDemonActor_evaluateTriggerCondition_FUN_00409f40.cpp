// Name: core_actor.cpp_CDemonActor_evaluateTriggerCondition_FUN_00409f40
// Address: 00409f40
// Address Range: [[00409f40, 00409f5e]]
// Convention: __cdecl
// Signature: float core_actor.cpp_CDemonActor_evaluateTriggerCondition_FUN_00409f40(CDemonActor * this_ptr)
// Globals:
//   TerminatedCString s_core_actor_cpp_00613928
// Function calls:
//   core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80

#include "nocturne.h"

float __cdecl
core_actor_cpp_CDemonActor_evaluateTriggerCondition_FUN_00409f40(CDemonActor *this_ptr)

{
  core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
            (this_ptr,"..\\core\\actor.cpp",0x545);
  return -1.0;
}


// Assembly code:
// 00409f40: PUSH 0x545
//   Label: core_actor.cpp_CDemonActor_evaluateTriggerCondition_FUN_00409f40
// 00409f45: PUSH 0x613928
//   XREF to: 00613928 (DATA)
// 00409f4a: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00409f4e: PUSH EDX
// 00409f4f: CALL core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
//   XREF to: 0040ac80 (UNCONDITIONAL_CALL)
// 00409f54: MOV ECX,0xbf800000
// 00409f59: ADD ESP,0xc
// 00409f5c: MOV EAX,ECX
// 00409f5e: RET
