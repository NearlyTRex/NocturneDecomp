// Name: core_boxactor.cpp_FUN_00421e00
// Address: 00421e00
// Address Range: [[00421e00, 00421ebb] [00421ec8, 00421ee6]]
// Convention: unknown
// Signature: undefined core_boxactor.cpp_FUN_00421e00()
// Globals:
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonRenderer g_CDemonRendererInstance
// Function calls:
//   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
//   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
//   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
//   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
//   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450

#include "nocturne.h"

/* Signature: undefined1 actors_other_boxactor.cpp_FUN_00421e00(undefined4 param_1) */

int core_boxactor_cpp_FUN_00421e00(void)

{
  CKeyFramedModel *pCVar1;
  int iVar2;
  CBoundingBox3D *this_ptr;
  int in_stack_00000004;
  
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                     ((CKeyFramedModelInstance *)(in_stack_00000004 + 0x158));
  if ((pCVar1->poly_count < 1) ||
     ((iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr),
      iVar2 == 0 && (*(int *)(in_stack_00000004 + 0xfc) != 0)))) {
    return 0;
  }
  if ((*(int *)(in_stack_00000004 + 0x5f4) == 0) &&
     (iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr),
     iVar2 != 0)) {
    return 0;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr,(CVector3f *)(in_stack_00000004 + 0x20));
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr,(CVector3i *)(in_stack_00000004 + 0x30),(CVector3i *)0x0);
  this_ptr = (CBoundingBox3D *)(**(code **)(*(int *)(in_stack_00000004 + 0x154) + 0x14))();
  iVar2 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr);
  if (iVar2 != 0) {
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
              ((CKeyFramedModelInstance *)(in_stack_00000004 + 0x158),
               *(float *)(in_stack_00000004 + 0x310),-1);
  }
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  return iVar2;
}


// Assembly code:
// 00421e00: PUSH EBX
//   Label: core_boxactor.cpp_FUN_00421e00
// 00421e01: PUSH EBP
// 00421e02: SUB ESP,0x18
// 00421e05: MOV EBX,dword ptr [ESP + 0x24]
// 00421e09: LEA EAX,[EBX + 0x158]
// 00421e0f: PUSH EAX
// 00421e10: CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   XREF to: 00478d80 (UNCONDITIONAL_CALL)
// 00421e15: MOV EDX,dword ptr [EAX + 0x110]
// 00421e1b: ADD ESP,0x4
// 00421e1e: CMP EDX,0x1
// 00421e21: JGE 0x00421e2b
//   XREF to: 00421e2b (CONDITIONAL_JUMP)
// 00421e23: XOR EAX,EAX
// 00421e25: ADD ESP,0x18
//   Label: LAB_00421e25
// 00421e28: POP EBP
// 00421e29: POP EBX
// 00421e2a: RET
// 00421e2b: MOV ECX,dword ptr [0x006703ec]
//   Label: LAB_00421e2b
//   XREF to: 006703ec (READ)
// 00421e31: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 00421e32: CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
//   XREF to: 0048cae0 (UNCONDITIONAL_CALL)
// 00421e37: ADD ESP,0x4
// 00421e3a: TEST EAX,EAX
// 00421e3c: JNZ 0x00421e47
//   XREF to: 00421e47 (CONDITIONAL_JUMP)
// 00421e3e: CMP dword ptr [EBX + 0xfc],0x0
// 00421e45: JNZ 0x00421e25
//   XREF to: 00421e25 (CONDITIONAL_JUMP)
// 00421e47: CMP dword ptr [EBX + 0x5f4],0x0
//   Label: LAB_00421e47
// 00421e4e: JZ 0x00421ec8
//   XREF to: 00421ec8 (CONDITIONAL_JUMP)
// 00421e50: PUSH ESI
//   Label: LAB_00421e50
// 00421e51: LEA EAX,[EBX + 0x20]
// 00421e54: PUSH EAX
// 00421e55: MOV EAX,[0x006703e8]
//   XREF to: 006703e8 (READ)
// 00421e5a: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 00421e5b: CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   XREF to: 0048c450 (UNCONDITIONAL_CALL)
// 00421e60: ADD ESP,0x8
// 00421e63: PUSH 0x0
// 00421e65: LEA EAX,[EBX + 0x30]
// 00421e68: PUSH EAX
// 00421e69: MOV EDX,dword ptr [0x006703e8]
//   XREF to: 006703e8 (READ)
// 00421e6f: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 00421e70: CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
//   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)
// 00421e75: ADD ESP,0xc
// 00421e78: LEA EAX,[ESP + 0x4]
// 00421e7c: PUSH EAX
// 00421e7d: MOV EDX,dword ptr [EBX + 0x154]
// 00421e83: PUSH EBX
// 00421e84: CALL dword ptr [EDX + 0x14]
// 00421e87: ADD ESP,0x8
// 00421e8a: PUSH EAX
// 00421e8b: CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   XREF to: 004204f0 (UNCONDITIONAL_CALL)
// 00421e90: ADD ESP,0x4
// 00421e93: MOV ESI,EAX
// 00421e95: TEST EAX,EAX
// 00421e97: JZ 0x00421eb0
//   XREF to: 00421eb0 (CONDITIONAL_JUMP)
// 00421e99: PUSH -0x1
// 00421e9b: ADD EBX,0x158
// 00421ea1: PUSH dword ptr [EBX + 0x1b8]
// 00421ea7: PUSH EBX
// 00421ea8: CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
//   XREF to: 00478d20 (UNCONDITIONAL_CALL)
// 00421ead: ADD ESP,0xc
// 00421eb0: MOV ECX,dword ptr [0x006703e8]
//   Label: LAB_00421eb0
//   XREF to: 006703e8 (READ)
// 00421eb6: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 00421eb7: CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
//   XREF to: 0048c640 (UNCONDITIONAL_CALL)
// 00421ec8: MOV EBP,dword ptr [0x006703ec]
//   Label: LAB_00421ec8
//   XREF to: 006703ec (READ)
// 00421ece: PUSH EBP
//   XREF to: 02c6d578 (DATA)
// 00421ecf: CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
//   XREF to: 0048cae0 (UNCONDITIONAL_CALL)
// 00421ed4: ADD ESP,0x4
// 00421ed7: TEST EAX,EAX
// 00421ed9: JZ 0x00421e50
//   XREF to: 00421e50 (CONDITIONAL_JUMP)
// 00421edf: XOR EAX,EAX
// 00421ee1: ADD ESP,0x18
// 00421ee4: POP EBP
// 00421ee5: POP EBX
// 00421ee6: RET
