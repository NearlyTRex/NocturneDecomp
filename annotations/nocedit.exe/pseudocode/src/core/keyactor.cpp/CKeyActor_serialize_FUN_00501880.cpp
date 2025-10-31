// Name: core_keyactor.cpp_CKeyActor_serialize_FUN_00501880
// Address: 00501880
// Address Range: [[00501880, 005018eb]]
// Convention: __cdecl
// Signature: void core_keyactor.cpp_CKeyActor_serialize_FUN_00501880(CKeyActor * this_ptr)
// Globals:
//   TerminatedCString s_modelName_00630c55
//   TerminatedCString s_keyMask_00630c5f
//   TerminatedCString s_descriptiveName_00630c67
//   undefined4 g_CKeyActorClassVersion
// Function calls:
//   core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0
//   core_actor.cpp_serializeInteger_FUN_0040b7f0
//   core_actor.cpp_serializeKeyframedModelInstance_FUN_0040b8f0
//   core_actor.cpp_serializeLocalizedString_FUN_0040b6e0

#include "nocturne.h"

void __cdecl core_keyactor_cpp_CKeyActor_serialize_FUN_00501880(CKeyActor *this_ptr)

{
  BADSPACEBASE *in_ESP;
  char *apcStack_f8 [61];
  
  core_actor_cpp_CDemonActor_serialize_FUN_0040c1c0(&this_ptr->base);
  core_actor_cpp_serializeKeyframedModelInstance_FUN_0040b8f0(&this_ptr->model,"modelName")
  ;
  core_actor_cpp_serializeInteger_FUN_0040b7f0(&this_ptr->key_mask,"keyMask");
  if (g_CKeyActorClassVersion != 2) {
    return;
  }
  core_actor_cpp_serializeLocalizedString_FUN_0040b6e0(apcStack_f8,"descriptiveName");
  return;
}


// Assembly code:
// 00501880: PUSH EBX
//   Label: core_keyactor.cpp_CKeyActor_serialize_FUN_00501880
// 00501881: SUB ESP,0x100
// 00501887: MOV EBX,dword ptr [ESP + 0x108]
//   XREF to: Stack[0x4] (READ)
// 0050188e: PUSH EBX
// 0050188f: CALL core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0
//   XREF to: 0040c1c0 (UNCONDITIONAL_CALL)
// 00501894: ADD ESP,0x4
// 00501897: PUSH 0x630c55
//   XREF to: 00630c55 (DATA)
// 0050189c: LEA EAX,[EBX + 0x158]
// 005018a2: PUSH EAX
// 005018a3: CALL core_actor.cpp_serializeKeyframedModelInstance_FUN_0040b8f0
//   XREF to: 0040b8f0 (UNCONDITIONAL_CALL)
// 005018a8: ADD ESP,0x8
// 005018ab: PUSH 0x630c5f
//   XREF to: 00630c5f (DATA)
// 005018b0: LEA EAX,[EBX + 0x2d4]
// 005018b6: PUSH EAX
// 005018b7: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 005018bc: MOV EDX,dword ptr [0x0067cf2c]
//   XREF to: 0067cf2c (READ)
// 005018c2: ADD ESP,0x8
// 005018c5: CMP EDX,0x2
// 005018c8: JZ 0x005018d2
//   XREF to: 005018d2 (CONDITIONAL_JUMP)
// 005018ca: ADD ESP,0x100
// 005018d0: POP EBX
// 005018d1: RET
// 005018d2: PUSH 0x630c67
//   Label: LAB_005018d2
//   XREF to: 00630c67 (DATA)
// 005018d7: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x104] (DATA)
// 005018db: PUSH EAX
// 005018dc: CALL core_actor.cpp_serializeLocalizedString_FUN_0040b6e0
//   XREF to: 0040b6e0 (UNCONDITIONAL_CALL)
// 005018e1: ADD ESP,0x8
// 005018e4: ADD ESP,0x100
// 005018ea: POP EBX
// 005018eb: RET
