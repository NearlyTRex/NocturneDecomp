// Name: core_filmreel.cpp_FUN_004be8a0
// Address: 004be8a0
// Address Range: [[004be8a0, 004be8e4]]
// Convention: unknown
// Signature: undefined core_filmreel.cpp_FUN_004be8a0()
// Globals:
//   TerminatedCString s_modelName_00629aeb
//   TerminatedCString s_movieName_00629af5
//   int g_CFilmReelClassVersion = 0x2
// Function calls:
//   core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0
//   core_actor.cpp_serializeKeyframedModelInstance_FUN_0040b8f0
//   core_actor.cpp_serializeString_FUN_0040b5c0

#include "nocturne.h"

/* Signature: undefined1 actors_other_filmreel.cpp_FUN_004be8a0(CFilmReel* pFilmReel) */

void core_filmreel_cpp_FUN_004be8a0(void)

{
  CDemonActor *in_stack_00000004;
  
  core_actor_cpp_CDemonActor_serialize_FUN_0040c1c0(in_stack_00000004);
  core_actor_cpp_serializeKeyframedModelInstance_FUN_0040b8f0
            ((CKeyFramedModelInstance *)(in_stack_00000004 + 1),"modelName");
  if (g_CFilmReelClassVersion < 2) {
    return;
  }
  core_actor_cpp_serializeString_FUN_0040b5c0
            ((char **)&in_stack_00000004[2].location.position.z,"movieName");
  return;
}


// Assembly code:
// 004be8a0: PUSH EBX
//   Label: core_filmreel.cpp_FUN_004be8a0
// 004be8a1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004be8a5: PUSH EBX
// 004be8a6: CALL core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0
//   XREF to: 0040c1c0 (UNCONDITIONAL_CALL)
// 004be8ab: ADD ESP,0x4
// 004be8ae: PUSH 0x629aeb
//   XREF to: 00629aeb (DATA)
// 004be8b3: LEA EAX,[EBX + 0x158]
// 004be8b9: PUSH EAX
// 004be8ba: CALL core_actor.cpp_serializeKeyframedModelInstance_FUN_0040b8f0
//   XREF to: 0040b8f0 (UNCONDITIONAL_CALL)
// 004be8bf: MOV EDX,dword ptr [0x0067a2f8]
//   XREF to: 0067a2f8 (READ)
// 004be8c5: ADD ESP,0x8
// 004be8c8: CMP EDX,0x2
// 004be8cb: JGE 0x004be8cf
//   XREF to: 004be8cf (CONDITIONAL_JUMP)
// 004be8cd: POP EBX
// 004be8ce: RET
// 004be8cf: PUSH 0x629af5
//   Label: LAB_004be8cf
//   XREF to: 00629af5 (DATA)
// 004be8d4: LEA EAX,[EBX + 0x2d8]
// 004be8da: PUSH EAX
// 004be8db: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 004be8e0: ADD ESP,0x8
// 004be8e3: POP EBX
// 004be8e4: RET
