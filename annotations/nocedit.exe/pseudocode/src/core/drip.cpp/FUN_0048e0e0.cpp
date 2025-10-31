// Name: core_drip.cpp_FUN_0048e0e0
// Address: 0048e0e0
// Address Range: [[0048e0e0, 0048e12a]]
// Convention: unknown
// Signature: undefined core_drip.cpp_FUN_0048e0e0()
// Function calls:
//   core_actor.cpp_getRandomFloat_FUN_0040cc10
//   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60

#include "nocturne.h"

/* Signature: undefined1 actors_other_drip.cpp_FUN_0048e0e0(undefined4 param_1) */

void core_drip_cpp_FUN_0048e0e0(void)

{
  float fVar1;
  int in_stack_00000004;
  
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
            ((CKeyFramedModelInstance *)(in_stack_00000004 + 0x158));
  *(undefined4 *)(in_stack_00000004 + 0x2ec) = 0;
  *(undefined4 *)(in_stack_00000004 + 0x20) = *(undefined4 *)(in_stack_00000004 + 0x2f8);
  *(undefined4 *)(in_stack_00000004 + 0x24) = *(undefined4 *)(in_stack_00000004 + 0x2fc);
  *(undefined4 *)(in_stack_00000004 + 0x28) = *(undefined4 *)(in_stack_00000004 + 0x300);
  fVar1 = core_actor_cpp_getRandomFloat_FUN_0040cc10
                    (*(float *)(in_stack_00000004 + 0x2e0),*(float *)(in_stack_00000004 + 0x2e4));
  *(float *)(in_stack_00000004 + 0x2dc) = fVar1;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            ((CKeyFramedModelInstance *)&DAT_02c9b170,"stalrock.kfm");
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
            ((CKeyFramedModelInstance *)&DAT_02c9b170);
  *(undefined4 *)(in_stack_00000004 + 0x338) = 0;
  return;
}


// Assembly code:
// 0048e0e0: PUSH EBX
//   Label: core_drip.cpp_FUN_0048e0e0
// 0048e0e1: SUB ESP,0x4
// 0048e0e4: MOV EBX,dword ptr [ESP + 0xc]
// 0048e0e8: LEA EAX,[EBX + 0x158]
// 0048e0ee: PUSH EAX
// 0048e0ef: CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
//   XREF to: 00478d60 (UNCONDITIONAL_CALL)
// 0048e0f4: LEA EAX,[EBX + 0x20]
// 0048e0f7: LEA EDX,[EBX + 0x2f8]
// 0048e0fd: MOV dword ptr [EBX + 0x2ec],0x0
// 0048e107: ADD ESP,0x4
// 0048e10a: MOV ECX,dword ptr [EDX]
// 0048e10c: MOV dword ptr [EAX],ECX
// 0048e10e: MOV ECX,dword ptr [EDX + 0x4]
// 0048e111: MOV dword ptr [EAX + 0x4],ECX
// 0048e114: MOV ECX,dword ptr [EDX + 0x8]
// 0048e117: MOV dword ptr [EAX + 0x8],ECX
// 0048e11a: PUSH dword ptr [EBX + 0x2e4]
// 0048e120: PUSH dword ptr [EBX + 0x2e0]
// 0048e126: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
