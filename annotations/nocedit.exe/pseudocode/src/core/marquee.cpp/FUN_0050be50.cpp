// Name: core_marquee.cpp_FUN_0050be50
// Address: 0050be50
// Address Range: [[0050be50, 0050beb3]]
// Convention: unknown
// Signature: undefined core_marquee.cpp_FUN_0050be50()
// Globals:
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonRenderer g_CDemonRendererInstance
// Function calls:
//   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0

#include "nocturne.h"

/* Signature: undefined1 actors_other_marquee.cpp_FUN_0050be50(undefined4 param_1) */

float core_marquee_cpp_FUN_0050be50(void)

{
  int iVar1;
  CBoundingBox3D *this_ptr;
  float fVar2;
  BADSPACEBASE *in_ESP;
  CDemonActor *in_stack_00000004;
  float fStack_8;
  
  iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr);
  if (iVar1 != 0) {
    return 0.0;
  }
  in_stack_00000004[1].orient_matrix.m[0].z = 0.0;
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(in_stack_00000004);
  this_ptr = (*in_stack_00000004->vtable->getBoundingBox)
                       (in_stack_00000004,(CBoundingBox3D *)&stack0xffffffec);
  fStack_8 = 7.41521e-39;
  fVar2 = (float)core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr);
  in_stack_00000004[1].orient_matrix.m[0].z = fVar2;
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(in_stack_00000004);
  return in_stack_00000004[1].orient_matrix.m[0].z;
}


// Assembly code:
// 0050be50: PUSH EBX
//   Label: core_marquee.cpp_FUN_0050be50
// 0050be51: SUB ESP,0x18
// 0050be54: MOV EBX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 0050be58: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0050be5e: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 0050be5f: CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
//   XREF to: 0048cae0 (UNCONDITIONAL_CALL)
// 0050be64: ADD ESP,0x4
// 0050be67: TEST EAX,EAX
// 0050be69: JZ 0x0050be72
//   XREF to: 0050be72 (CONDITIONAL_JUMP)
// 0050be6b: XOR EAX,EAX
// 0050be6d: ADD ESP,0x18
// 0050be70: POP EBX
// 0050be71: RET
// 0050be72: PUSH EBX
//   Label: LAB_0050be72
// 0050be73: MOV dword ptr [EBX + 0x19c],EAX
// 0050be79: CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   XREF to: 00408b00 (UNCONDITIONAL_CALL)
// 0050be7e: ADD ESP,0x4
// 0050be81: MOV EDX,ESP
// 0050be83: PUSH EDX
// 0050be84: MOV EAX,dword ptr [EBX + 0x154]
// 0050be8a: PUSH EBX
// 0050be8b: CALL dword ptr [EAX + 0x14]
// 0050be8e: ADD ESP,0x8
// 0050be91: PUSH EAX
// 0050be92: CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   XREF to: 004204f0 (UNCONDITIONAL_CALL)
// 0050be97: ADD ESP,0x4
// 0050be9a: PUSH EBX
// 0050be9b: MOV dword ptr [EBX + 0x19c],EAX
// 0050bea1: CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   XREF to: 00408b40 (UNCONDITIONAL_CALL)
// 0050bea6: ADD ESP,0x4
// 0050bea9: MOV EAX,dword ptr [EBX + 0x19c]
// 0050beaf: ADD ESP,0x18
// 0050beb2: POP EBX
// 0050beb3: RET
