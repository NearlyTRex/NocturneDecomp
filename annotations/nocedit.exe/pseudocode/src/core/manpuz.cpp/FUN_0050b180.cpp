// Name: core_manpuz.cpp_FUN_0050b180
// Address: 0050b180
// Address Range: [[0050b180, 0050b1ce]]
// Convention: unknown
// Signature: undefined core_manpuz.cpp_FUN_0050b180()
// Globals:
//   CGame* g_CGamePtr = 02d81a9c
//   CGame g_CGameInstance
//   undefined4 DAT_02d81c90
// Function calls:
//   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20

#include "nocturne.h"

/* Signature: undefined1 actors_other_manpuz.cpp_FUN_0050b180(undefined4 param_1) */

undefined4 core_manpuz_cpp_FUN_0050b180(void)

{
  CDemonActor *in_stack_00000004;
  
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(in_stack_00000004);
  g_CGamePtr->field62_0x1f4 = 1;
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
            ((CKeyFramedModelInstance *)(in_stack_00000004 + 1),0.0,-1);
  g_CGamePtr->field62_0x1f4 = 0;
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(in_stack_00000004);
  return 1;
}


// Assembly code:
// 0050b180: PUSH EBX
//   Label: core_manpuz.cpp_FUN_0050b180
// 0050b181: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0050b185: PUSH EBX
// 0050b186: CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   XREF to: 00408b00 (UNCONDITIONAL_CALL)
// 0050b18b: ADD ESP,0x4
// 0050b18e: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 0050b193: PUSH -0x1
// 0050b195: MOV dword ptr [EAX + 0x1f4],0x1
//   XREF to: 02d81c90 (WRITE)
// 0050b19f: LEA EAX,[EBX + 0x158]
// 0050b1a5: PUSH 0x0
// 0050b1a7: PUSH EAX
// 0050b1a8: CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
//   XREF to: 00478d20 (UNCONDITIONAL_CALL)
// 0050b1ad: ADD ESP,0xc
// 0050b1b0: MOV EAX,[0x0067b654]
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 0050b1b5: PUSH EBX
// 0050b1b6: MOV dword ptr [EAX + 0x1f4],0x0
//   XREF to: 02d81c90 (WRITE)
// 0050b1c0: CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   XREF to: 00408b40 (UNCONDITIONAL_CALL)
// 0050b1c5: MOV EAX,0x1
// 0050b1ca: ADD ESP,0x4
// 0050b1cd: POP EBX
// 0050b1ce: RET
