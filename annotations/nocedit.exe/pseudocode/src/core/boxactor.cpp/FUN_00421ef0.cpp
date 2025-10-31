// Name: core_boxactor.cpp_FUN_00421ef0
// Address: 00421ef0
// Address Range: [[00421ef0, 00421fcd]]
// Convention: unknown
// Signature: undefined core_boxactor.cpp_FUN_00421ef0()
// Globals:
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CDemonRenderer g_CDemonRendererInstance
//   undefined4 DAT_0326ef00
// Function calls:
//   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
//   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
//   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
//   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60

#include "nocturne.h"

/* Signature: undefined1 actors_other_boxactor.cpp_FUN_00421ef0(undefined4 param_1) */

int core_boxactor_cpp_FUN_00421ef0(void)

{
  CDemonSet *pCVar1;
  CKeyFramedModel *pCVar2;
  CBoundingBox3D *this_ptr;
  int iVar3;
  int in_stack_00000004;
  
  pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                     ((CKeyFramedModelInstance *)(in_stack_00000004 + 0x158));
  if (pCVar2->poly_count < 1) {
    return 0;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr,(CVector3f *)(in_stack_00000004 + 0x20));
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr,(CVector3i *)(in_stack_00000004 + 0x30),(CVector3i *)0x0);
  this_ptr = (CBoundingBox3D *)(**(code **)(*(int *)(in_stack_00000004 + 0x154) + 0x14))();
  iVar3 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr);
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(g_CDemonRendererPtr,0xffff);
  if (*(int *)(in_stack_00000004 + 0x5fc) != 0) {
    pCVar1 = g_CDemonSetPtr;
    pCVar1->field22_0x15ac80[8] = '\x01';
    pCVar1->field22_0x15ac80[9] = '\0';
    pCVar1->field22_0x15ac80[10] = '\0';
    pCVar1->field22_0x15ac80[0xb] = '\0';
  }
  if (iVar3 != 0) {
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
              ((CKeyFramedModelInstance *)(in_stack_00000004 + 0x158),
               *(float *)(in_stack_00000004 + 0x310),-1);
  }
  if (*(int *)(in_stack_00000004 + 0x5fc) != 0) {
    pCVar1 = g_CDemonSetPtr;
    pCVar1->field22_0x15ac80[8] = '\0';
    pCVar1->field22_0x15ac80[9] = '\0';
    pCVar1->field22_0x15ac80[10] = '\0';
    pCVar1->field22_0x15ac80[0xb] = '\0';
  }
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  return iVar3;
}


// Assembly code:
// 00421ef0: PUSH EBX
//   Label: core_boxactor.cpp_FUN_00421ef0
// 00421ef1: PUSH EBP
// 00421ef2: SUB ESP,0x18
// 00421ef5: MOV EBX,dword ptr [ESP + 0x24]
// 00421ef9: LEA EAX,[EBX + 0x158]
// 00421eff: PUSH EAX
// 00421f00: CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   XREF to: 00478d80 (UNCONDITIONAL_CALL)
// 00421f05: MOV EDX,dword ptr [EAX + 0x110]
// 00421f0b: ADD ESP,0x4
// 00421f0e: CMP EDX,0x1
// 00421f11: JGE 0x00421f1b
//   XREF to: 00421f1b (CONDITIONAL_JUMP)
// 00421f13: XOR EAX,EAX
// 00421f15: ADD ESP,0x18
// 00421f18: POP EBP
// 00421f19: POP EBX
// 00421f1a: RET
// 00421f1b: PUSH EDI
//   Label: LAB_00421f1b
// 00421f1c: PUSH ESI
// 00421f1d: LEA EAX,[EBX + 0x20]
// 00421f20: PUSH EAX
// 00421f21: MOV ECX,dword ptr [0x006703e8]
//   XREF to: 006703e8 (READ)
// 00421f27: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 00421f28: CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   XREF to: 0048c450 (UNCONDITIONAL_CALL)
// 00421f2d: ADD ESP,0x8
// 00421f30: PUSH 0x0
// 00421f32: LEA EAX,[EBX + 0x30]
// 00421f35: PUSH EAX
// 00421f36: MOV ESI,dword ptr [0x006703e8]
//   XREF to: 006703e8 (READ)
// 00421f3c: PUSH ESI
//   XREF to: 02c6d578 (DATA)
// 00421f3d: CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
//   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)
// 00421f42: ADD ESP,0xc
// 00421f45: LEA EAX,[ESP + 0x8]
// 00421f49: PUSH EAX
// 00421f4a: MOV ESI,dword ptr [EBX + 0x154]
// 00421f50: PUSH EBX
// 00421f51: CALL dword ptr [ESI + 0x14]
// 00421f54: ADD ESP,0x8
// 00421f57: PUSH EAX
// 00421f58: CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   XREF to: 004204f0 (UNCONDITIONAL_CALL)
// 00421f5d: ADD ESP,0x4
// 00421f60: PUSH 0xffff
// 00421f65: MOV EDI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00421f6b: PUSH EDI
//   XREF to: 02c6d578 (DATA)
// 00421f6c: MOV ESI,EAX
// 00421f6e: CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
//   XREF to: 0048ca60 (UNCONDITIONAL_CALL)
// 00421f73: MOV EBP,dword ptr [EBX + 0x5fc]
// 00421f79: ADD ESP,0x8
// 00421f7c: TEST EBP,EBP
// 00421f7e: JZ 0x00421f8f
//   XREF to: 00421f8f (CONDITIONAL_JUMP)
// 00421f80: MOV EAX,[0x006810c8]
//   XREF to: 006810c8 (READ)
// 00421f85: MOV dword ptr [EAX + 0x15ac88],0x1
//   XREF to: 0326ef00 (WRITE)
// 00421f8f: TEST ESI,ESI
//   Label: LAB_00421f8f
// 00421f91: JZ 0x00421faa
//   XREF to: 00421faa (CONDITIONAL_JUMP)
// 00421f93: PUSH -0x1
// 00421f95: LEA EAX,[EBX + 0x158]
// 00421f9b: PUSH dword ptr [EBX + 0x310]
// 00421fa1: PUSH EAX
// 00421fa2: CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
//   XREF to: 00478d20 (UNCONDITIONAL_CALL)
// 00421fa7: ADD ESP,0xc
// 00421faa: CMP dword ptr [EBX + 0x5fc],0x0
//   Label: LAB_00421faa
// 00421fb1: JZ 0x00421fc2
//   XREF to: 00421fc2 (CONDITIONAL_JUMP)
// 00421fb3: MOV EAX,[0x006810c8]
//   XREF to: 006810c8 (READ)
// 00421fb8: MOV dword ptr [EAX + 0x15ac88],0x0
//   XREF to: 0326ef00 (WRITE)
// 00421fc2: MOV EDX,dword ptr [0x006703e8]
//   Label: LAB_00421fc2
//   XREF to: 006703e8 (READ)
// 00421fc8: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 00421fc9: CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
//   XREF to: 0048c640 (UNCONDITIONAL_CALL)
