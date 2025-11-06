// Name: core_bodypart.cpp_CBodyPart_processInEditor_FUN_0041b260
// Address: 0041b260
// Address Range: [[0041b260, 0041b27a]]
// Convention: __cdecl
// Signature: void core_bodypart.cpp_CBodyPart_processInEditor_FUN_0041b260(CBodyPart * this_ptr)
// Function calls:
//   core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040
//   core_bodypart.cpp_CBodyPart_FUN_0041b070

#include "nocturne.h"

void __cdecl core_bodypart_cpp_CBodyPart_processInEditor_FUN_0041b260(CBodyPart *this_ptr)

{
  CBodyPart *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040(&this_ptr->base_actor);
  core_bodypart_cpp_CBodyPart_FUN_0041b070(in_stack_00000008);
  return;
}


// Assembly code:
// 0041b260: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_bodypart.cpp_CBodyPart_processInEditor_FUN_0041b260
//   XREF to: Stack[0x4] (READ)
// 0041b264: PUSH EDX
// 0041b265: CALL core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040
//   XREF to: 0040d040 (UNCONDITIONAL_CALL)
// 0041b26a: ADD ESP,0x4
// 0041b26d: MOV ECX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 0041b271: PUSH ECX
// 0041b272: CALL core_bodypart.cpp_CBodyPart_FUN_0041b070
//   XREF to: 0041b070 (UNCONDITIONAL_CALL)
// 0041b277: ADD ESP,0x4
// 0041b27a: RET
