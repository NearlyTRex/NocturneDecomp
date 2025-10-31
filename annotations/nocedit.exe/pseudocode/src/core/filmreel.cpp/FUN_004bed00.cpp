// Name: core_filmreel.cpp_FUN_004bed00
// Address: 004bed00
// Address Range: [[004bed00, 004bedba]]
// Convention: unknown
// Signature: undefined core_filmreel.cpp_FUN_004bed00()
// Globals:
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonRenderer g_CDemonRendererInstance
//   CVector3f g_ZeroVector
// Function calls:
//   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
//   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
//   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720

#include "nocturne.h"

/* Signature: undefined1 actors_other_filmreel.cpp_FUN_004bed00(undefined4 param_1) */

int core_filmreel_cpp_FUN_004bed00(void)

{
  CBoundingBox3D *this_ptr;
  int iVar1;
  BADSPACEBASE *in_ESP;
  CDemonActor *in_stack_00000004;
  int in_stack_00000008;
  float in_stack_0000000c;
  float fStack_34;
  
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(in_stack_00000004);
  this_ptr = (*((in_stack_00000004->metadata).vtable)->getBoundingBox)
                       (in_stack_00000004,(CBoundingBox3D *)&stack0xffffffc8);
  iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr);
  if (iVar1 == 0) {
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(in_stack_00000004);
    return 0;
  }
  in_stack_0000000c = in_stack_00000004[2].metadata.runtime_vector1.x;
  in_stack_00000008 = 0;
  fStack_34 = 6.972861e-39;
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr,(CVector3i *)&g_ZeroVector,(CVector3i *)&stack0xfffffff8);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr,(CVector3i *)&stack0x00000008,(CVector3i *)&g_ZeroVector);
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
            ((CKeyFramedModelInstance *)(in_stack_00000004[1].create_event + 0x24),0.0,-1);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(in_stack_00000004);
  return iVar1;
}


// Assembly code:
// 004bed00: PUSH EBX
//   Label: core_filmreel.cpp_FUN_004bed00
// 004bed01: PUSH ESI
// 004bed02: PUSH EBP
// 004bed03: SUB ESP,0x30
// 004bed06: MOV EBX,dword ptr [ESP + 0x40]
// 004bed0a: PUSH EBX
// 004bed0b: CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   XREF to: 00408b00 (UNCONDITIONAL_CALL)
// 004bed10: ADD ESP,0x4
// 004bed13: MOV EAX,ESP
// 004bed15: PUSH EAX
// 004bed16: MOV ESI,dword ptr [EBX + 0x154]
// 004bed1c: PUSH EBX
// 004bed1d: CALL dword ptr [ESI + 0x14]
// 004bed20: ADD ESP,0x8
// 004bed23: PUSH EAX
// 004bed24: CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   XREF to: 004204f0 (UNCONDITIONAL_CALL)
// 004bed29: ADD ESP,0x4
// 004bed2c: MOV ESI,EAX
// 004bed2e: TEST EAX,EAX
// 004bed30: JNZ 0x004bed44
//   XREF to: 004bed44 (CONDITIONAL_JUMP)
// 004bed32: PUSH EBX
// 004bed33: CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   XREF to: 00408b40 (UNCONDITIONAL_CALL)
// 004bed38: ADD ESP,0x4
// 004bed3b: MOV EAX,ESI
// 004bed3d: ADD ESP,0x30
// 004bed40: POP EBP
// 004bed41: POP ESI
// 004bed42: POP EBX
// 004bed43: RET
// 004bed44: PUSH EDI
//   Label: LAB_004bed44
// 004bed45: XOR EDX,EDX
// 004bed47: MOV dword ptr [ESP + 0x28],EDX
// 004bed4b: MOV EAX,dword ptr [EBX + 0x3d8]
// 004bed51: MOV dword ptr [ESP + 0x30],EAX
// 004bed55: LEA EAX,[ESP + 0x1c]
// 004bed59: MOV dword ptr [ESP + 0x2c],EDX
// 004bed5d: PUSH EAX
// 004bed5e: MOV dword ptr [ESP + 0x20],EDX
// 004bed62: MOV dword ptr [ESP + 0x28],EDX
// 004bed66: PUSH 0x3f87558
//   XREF to: 03f87558 (DATA)
// 004bed6b: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004bed71: MOV EBP,0x40000000
// 004bed76: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 004bed77: MOV dword ptr [ESP + 0x2c],EBP
// 004bed7b: CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
//   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)
// 004bed80: ADD ESP,0xc
// 004bed83: PUSH 0x3f87558
//   XREF to: 03f87558 (DATA)
// 004bed88: LEA EAX,[ESP + 0x2c]
// 004bed8c: PUSH EAX
// 004bed8d: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004bed93: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 004bed94: CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
//   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)
// 004bed99: ADD ESP,0xc
// 004bed9c: PUSH -0x1
// 004bed9e: LEA EAX,[EBX + 0x1f4]
// 004beda4: PUSH 0x0
// 004beda6: PUSH EAX
// 004beda7: CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
//   XREF to: 00478d20 (UNCONDITIONAL_CALL)
// 004bedac: ADD ESP,0xc
// 004bedaf: MOV EDI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004bedb5: PUSH EDI
//   XREF to: 02c6d578 (DATA)
// 004bedb6: CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
//   XREF to: 0048c640 (UNCONDITIONAL_CALL)
