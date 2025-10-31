// Name: core_filmreel.cpp_FUN_004beb00
// Address: 004beb00
// Address Range: [[004beb00, 004beb3c]]
// Convention: unknown
// Signature: undefined core_filmreel.cpp_FUN_004beb00()
// Function calls:
//   core_dest.cpp_FUN_0046f970
//   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60

#include "nocturne.h"

/* Signature: undefined1 actors_other_filmreel.cpp_FUN_004beb00(undefined4 param_1) */

void core_filmreel_cpp_FUN_004beb00(void)

{
  int in_stack_00000004;
  
  core_dest_cpp_FUN_0046f970();
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
            ((CKeyFramedModelInstance *)(in_stack_00000004 + 500));
  *(undefined4 *)(in_stack_00000004 + 0xf8) = 1;
  *(undefined4 *)(in_stack_00000004 + 0x3d8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0x3dc) = 0;
  return;
}


// Assembly code:
// 004beb00: PUSH EBX
//   Label: core_filmreel.cpp_FUN_004beb00
// 004beb01: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004beb05: PUSH EBX
// 004beb06: CALL core_dest.cpp_FUN_0046f970
//   XREF to: 0046f970 (UNCONDITIONAL_CALL)
// 004beb0b: ADD ESP,0x4
// 004beb0e: LEA EAX,[EBX + 0x1f4]
// 004beb14: PUSH EAX
// 004beb15: CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
//   XREF to: 00478d60 (UNCONDITIONAL_CALL)
// 004beb1a: MOV dword ptr [EBX + 0xf8],0x1
// 004beb24: MOV dword ptr [EBX + 0x3d8],0x0
// 004beb2e: ADD ESP,0x4
// 004beb31: MOV dword ptr [EBX + 0x3dc],0x0
// 004beb3b: POP EBX
// 004beb3c: RET
