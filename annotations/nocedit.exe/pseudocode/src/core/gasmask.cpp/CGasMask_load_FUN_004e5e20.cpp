// Name: core_gasmask.cpp_CGasMask_load_FUN_004e5e20
// Address: 004e5e20
// Address Range: [[004e5e20, 004e5e44]]
// Convention: unknown
// Signature: undefined core_gasmask.cpp_CGasMask_load_FUN_004e5e20()
// Globals:
//   TerminatedCString s_modelName_0062dabb
// Function calls:
//   core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0
//   core_actor.cpp_serializeKeyframedModelInstance_FUN_0040b8f0

#include "nocturne.h"

/* Signature: undefined1 actors_other_gasmask.cpp_CGasMask_load(CGasMask* param_1) */

void core_gasmask_cpp_CGasMask_load_FUN_004e5e20(void)

{
  CDemonActor *in_stack_00000004;
  int in_stack_00000008;
  
  core_actor_cpp_CDemonActor_serialize_FUN_0040c1c0(in_stack_00000004);
  core_actor_cpp_serializeKeyframedModelInstance_FUN_0040b8f0
            ((CKeyFramedModelInstance *)(in_stack_00000008 + 0x158),"modelName");
  return;
}


// Assembly code:
// 004e5e20: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_gasmask.cpp_CGasMask_load_FUN_004e5e20
//   XREF to: Stack[0x4] (READ)
// 004e5e24: PUSH EDX
// 004e5e25: CALL core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0
//   XREF to: 0040c1c0 (UNCONDITIONAL_CALL)
// 004e5e2a: ADD ESP,0x4
// 004e5e2d: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 004e5e31: PUSH 0x62dabb
//   XREF to: 0062dabb (DATA)
// 004e5e36: ADD EAX,0x158
// 004e5e3b: PUSH EAX
// 004e5e3c: CALL core_actor.cpp_serializeKeyframedModelInstance_FUN_0040b8f0
//   XREF to: 0040b8f0 (UNCONDITIONAL_CALL)
// 004e5e41: ADD ESP,0x8
// 004e5e44: RET
