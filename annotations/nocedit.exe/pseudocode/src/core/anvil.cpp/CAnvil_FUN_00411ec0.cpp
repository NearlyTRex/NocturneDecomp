// Name: core_anvil.cpp_CAnvil_FUN_00411ec0
// Address: 00411ec0
// Address Range: [[00411ec0, 00411f41]]
// Convention: __cdecl
// Signature: int core_anvil.cpp_CAnvil_FUN_00411ec0(CAnvil * this_ptr)
// Globals:
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonRenderer g_CDemonRendererInstance
// Function calls:
//   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
//   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
//   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
//   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450

#include "nocturne.h"

int __cdecl core_anvil_cpp_CAnvil_FUN_00411ec0(CAnvil *this_ptr)

{
  CBoundingBox3D *this_ptr_00;
  int iVar1;
  BADSPACEBASE *in_ESP;
  float fStack_14;
  
  if (this_ptr->triggered == 0) {
    return 0;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr,&(this_ptr->base_actor).location.position);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr,(CVector3i *)&(this_ptr->base_actor).orient,(CVector3i *)0x0);
  this_ptr_00 = (*((this_ptr->base_actor).vtable)->getBoundingBox)
                          (&this_ptr->base_actor,(CBoundingBox3D *)&fStack_14);
  iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_00);
  if (iVar1 != 0) {
    fStack_14 = 5.9805e-39;
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
              ((CKeyFramedModelInstance *)this_ptr->model_name,0.0,-1);
  }
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  return iVar1;
}


// Assembly code:
// 00411ec0: PUSH EBX
//   Label: core_anvil.cpp_CAnvil_FUN_00411ec0
// 00411ec1: SUB ESP,0x18
// 00411ec4: MOV EBX,dword ptr [ESP + 0x20]
// 00411ec8: CMP dword ptr [EBX + 0x33c],0x0
// 00411ecf: JNZ 0x00411ed8
//   XREF to: 00411ed8 (CONDITIONAL_JUMP)
// 00411ed1: XOR EAX,EAX
// 00411ed3: ADD ESP,0x18
// 00411ed6: POP EBX
// 00411ed7: RET
// 00411ed8: PUSH EDI
//   Label: LAB_00411ed8
// 00411ed9: PUSH ESI
// 00411eda: LEA EAX,[EBX + 0x20]
// 00411edd: PUSH EAX
// 00411ede: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00411ee4: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 00411ee5: CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   XREF to: 0048c450 (UNCONDITIONAL_CALL)
// 00411eea: ADD ESP,0x8
// 00411eed: PUSH 0x0
// 00411eef: LEA EAX,[EBX + 0x30]
// 00411ef2: PUSH EAX
// 00411ef3: MOV ESI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00411ef9: PUSH ESI
//   XREF to: 02c6d578 (DATA)
// 00411efa: CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
//   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)
// 00411eff: ADD ESP,0xc
// 00411f02: LEA EAX,[ESP + 0x8]
// 00411f06: PUSH EAX
// 00411f07: MOV ESI,dword ptr [EBX + 0x154]
// 00411f0d: PUSH EBX
// 00411f0e: CALL dword ptr [ESI + 0x14]
// 00411f11: ADD ESP,0x8
// 00411f14: PUSH EAX
// 00411f15: CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   XREF to: 004204f0 (UNCONDITIONAL_CALL)
// 00411f1a: ADD ESP,0x4
// 00411f1d: MOV ESI,EAX
// 00411f1f: TEST EAX,EAX
// 00411f21: JZ 0x00411f36
//   XREF to: 00411f36 (CONDITIONAL_JUMP)
// 00411f23: PUSH -0x1
// 00411f25: ADD EBX,0x158
// 00411f2b: PUSH 0x0
// 00411f2d: PUSH EBX
// 00411f2e: CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
//   XREF to: 00478d20 (UNCONDITIONAL_CALL)
// 00411f33: ADD ESP,0xc
// 00411f36: MOV EDI,dword ptr [0x006703ec]
//   Label: LAB_00411f36
//   XREF to: 006703ec (READ)
// 00411f3c: PUSH EDI
//   XREF to: 02c6d578 (DATA)
// 00411f3d: CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
//   XREF to: 0048c640 (UNCONDITIONAL_CALL)
