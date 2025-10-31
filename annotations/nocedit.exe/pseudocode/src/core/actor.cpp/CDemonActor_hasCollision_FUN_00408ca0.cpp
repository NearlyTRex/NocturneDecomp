// Name: core_actor.cpp_CDemonActor_hasCollision_FUN_00408ca0
// Address: 00408ca0
// Address Range: [[00408ca0, 00408cbc]]
// Convention: __cdecl
// Signature: int core_actor.cpp_CDemonActor_hasCollision_FUN_00408ca0(CDemonActor * this_ptr, SCollisionInfo * collision_info)
// Globals:
//   TerminatedCString s_core_actor_cpp_0061364e
// Function calls:
//   core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80

#include "nocturne.h"

int __cdecl
core_actor_cpp_CDemonActor_hasCollision_FUN_00408ca0
          (CDemonActor *this_ptr,SCollisionInfo *collision_info)

{
  core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
            (this_ptr,"..\\core\\actor.cpp",0x27e);
  return 1;
}


// Assembly code:
// 00408ca0: PUSH 0x27e
//   Label: core_actor.cpp_CDemonActor_hasCollision_FUN_00408ca0
// 00408ca5: PUSH 0x61364e
//   XREF to: 0061364e (DATA)
// 00408caa: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00408cae: PUSH EDX
// 00408caf: CALL core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
//   XREF to: 0040ac80 (UNCONDITIONAL_CALL)
// 00408cb4: MOV EAX,0x1
// 00408cb9: ADD ESP,0xc
// 00408cbc: RET
