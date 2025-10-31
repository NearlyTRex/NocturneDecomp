// Name: core_manpuz.cpp_FUN_00509bf0
// Address: 00509bf0
// Address Range: [[00509bf0, 00509c4f]]
// Convention: unknown
// Signature: undefined core_manpuz.cpp_FUN_00509bf0()
// Cross-references:
//   core_manpuz.cpp_FUN_005090d0 (005090d0) at 0050915d [UNCONDITIONAL_CALL]
// Globals:
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonRenderer g_CDemonRendererInstance
// Function calls:
//   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
//   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
//   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720

#include "nocturne.h"

/* Signature: undefined1 actors_other_manpuz.cpp_FUN_00509bf0(undefined4 param_1, undefined4
   param_2) */

void core_manpuz_cpp_FUN_00509bf0(void)

{
  int *piVar1;
  int in_stack_00000004;
  int in_stack_00000008;
  
  piVar1 = (int *)(in_stack_00000004 + 0x5f0 + in_stack_00000008 * 100);
  if (*piVar1 == 0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr,(CVector3i *)(piVar1 + 6),(CVector3i *)(piVar1 + 3));
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
            ((CKeyFramedModelInstance *)(in_stack_00000008 + 0x158),0.0,-1);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  return;
}


// Assembly code:
// 00509bf0: MOV EDX,dword ptr [ESP + 0x8]
//   Label: core_manpuz.cpp_FUN_00509bf0
// 00509bf4: LEA EAX,[EDX*0x4 + 0x0]
// 00509bfb: SUB EAX,EDX
// 00509bfd: SHL EAX,0x3
// 00509c00: ADD EDX,EAX
// 00509c02: MOV EAX,dword ptr [ESP + 0x4]
// 00509c06: SHL EDX,0x2
// 00509c09: ADD EAX,0x5f0
// 00509c0e: ADD EAX,EDX
// 00509c10: CMP dword ptr [EAX],0x0
// 00509c13: JNZ 0x00509c16
//   XREF to: 00509c16 (CONDITIONAL_JUMP)
// 00509c15: RET
// 00509c16: PUSH EBX
//   Label: LAB_00509c16
// 00509c17: LEA EDX,[EAX + 0xc]
// 00509c1a: PUSH EDX
// 00509c1b: ADD EAX,0x18
// 00509c1e: PUSH EAX
// 00509c1f: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00509c25: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 00509c26: CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
//   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)
// 00509c2b: ADD ESP,0xc
// 00509c2e: MOV EAX,dword ptr [ESP + 0x8]
// 00509c32: PUSH -0x1
// 00509c34: ADD EAX,0x158
// 00509c39: PUSH 0x0
// 00509c3b: PUSH EAX
// 00509c3c: CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
//   XREF to: 00478d20 (UNCONDITIONAL_CALL)
// 00509c41: ADD ESP,0xc
// 00509c44: MOV EBX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00509c4a: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 00509c4b: CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
//   XREF to: 0048c640 (UNCONDITIONAL_CALL)
