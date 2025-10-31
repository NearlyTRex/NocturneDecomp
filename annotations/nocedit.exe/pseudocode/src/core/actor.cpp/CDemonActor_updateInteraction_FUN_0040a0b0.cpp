// Name: core_actor.cpp_CDemonActor_updateInteraction_FUN_0040a0b0
// Address: 0040a0b0
// Address Range: [[0040a0b0, 0040a0c9]]
// Convention: __cdecl
// Signature: int core_actor.cpp_CDemonActor_updateInteraction_FUN_0040a0b0(CDemonActor * this_ptr, COrientation * user_orientation, SInteractionState * interaction_state)
// Globals:
//   TerminatedCString s_core_actor_cpp_006139f5
// Function calls:
//   core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80

#include "nocturne.h"

int __cdecl
core_actor_cpp_CDemonActor_updateInteraction_FUN_0040a0b0
          (CDemonActor *this_ptr,COrientation *user_orientation,SInteractionState *interaction_state
          )

{
  core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
            (this_ptr,"..\\core\\actor.cpp",0x59d);
  return 0;
}


// Assembly code:
// 0040a0b0: PUSH 0x59d
//   Label: core_actor.cpp_CDemonActor_updateInteraction_FUN_0040a0b0
// 0040a0b5: PUSH 0x6139f5
//   XREF to: 006139f5 (DATA)
// 0040a0ba: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0040a0be: PUSH EDX
// 0040a0bf: CALL core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
//   XREF to: 0040ac80 (UNCONDITIONAL_CALL)
// 0040a0c4: ADD ESP,0xc
// 0040a0c7: XOR EAX,EAX
// 0040a0c9: RET
