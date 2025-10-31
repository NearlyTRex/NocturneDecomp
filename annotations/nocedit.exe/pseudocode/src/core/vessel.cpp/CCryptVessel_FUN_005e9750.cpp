// Name: core_vessel.cpp_CCryptVessel_FUN_005e9750
// Address: 005e9750
// Address Range: [[005e9750, 005e97b3]]
// Convention: __cdecl
// Signature: int core_vessel.cpp_CCryptVessel_FUN_005e9750(CCryptVessel * this_ptr)
// Globals:
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonRenderer g_CDemonRendererInstance
// Function calls:
//   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
//   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
//   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450

#include "nocturne.h"

int __cdecl core_vessel_cpp_CCryptVessel_FUN_005e9750(CCryptVessel *this_ptr)

{
  COrientation *position;
  float fVar1;
  CBoundingBox3D *this_ptr_00;
  int iVar2;
  undefined2 extraout_var;
  undefined4 extraout_EDX;
  BADSPACEBASE *in_ESP;
  float10 fVar3;
  float fStack_24;
  
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr,&(this_ptr->base_actor).location.position);
  position = &(this_ptr->base_actor).orient;
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr,(CVector3i *)position,(CVector3i *)0x0);
  this_ptr_00 = (*((this_ptr->base_actor).metadata.vtable)->getBoundingBox)
                          (&this_ptr->base_actor,(CBoundingBox3D *)&stack0xffffffd8);
  fStack_24 = 8.686928e-39;
  iVar2 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_00);
  *(int *)(this_ptr->field14_0x3c0 + 0x428) = iVar2;
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  if (*(int *)(this_ptr->field14_0x3c0 + 0x428) == 0) {
    return *(int *)(this_ptr->field14_0x3c0 + 0x428);
  }
  fStack_24 = 8.687015e-39;
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr,(CVector3i *)position,(CVector3i *)0x0);
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(g_CDemonRendererPtr,0xffff);
  if (this_ptr->state != 3) {
    fVar1 = this_ptr->timer;
    if (0.0 < fVar1) {
      fVar3 = (float10)DOUBLE_00657061 - (float10)fVar1 * (float10)DOUBLE_00657061;
      crt_math_c_round_FUN_005fe6b0
                ((double)CONCAT44(extraout_EDX,
                                  CONCAT22(extraout_var,
                                           (ushort)(0.0 < fVar1) << 8 | (ushort)NAN(fVar1) << 10 |
                                           (ushort)(fVar1 == 0.0) << 0xe)));
      fStack_24 = 8.687148e-39;
      engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
                (g_CDemonRendererPtr,(int)ROUND(fVar3));
      engine_drender_cpp_CDemonRenderer_setTextureCaptureMode_FUN_0048d6c0(g_CDemonRendererPtr,0);
      core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
                ((CKeyFramedModelInstance *)&this_ptr->model_name,0.0,0x2e7);
      engine_drender_cpp_CDemonRenderer_processCapturedFaces_FUN_0048da80(g_CDemonRendererPtr);
      goto LAB_005e9875;
    }
  }
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
            ((CKeyFramedModelInstance *)&this_ptr->model_name,0.0,-1);
LAB_005e9875:
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  return *(int *)(this_ptr->field14_0x3c0 + 0x428);
}


// Assembly code:
// 005e9750: PUSH EBX
//   Label: core_vessel.cpp_CCryptVessel_FUN_005e9750
// 005e9751: PUSH ESI
// 005e9752: PUSH EDI
// 005e9753: PUSH EBP
// 005e9754: MOV EBP,ESP
// 005e9756: SUB ESP,0x24
// 005e9759: AND ESP,0xfffffff8
// 005e975c: MOV EBX,dword ptr [EBP + 0x14]
// 005e975f: LEA EAX,[EBX + 0x20]
// 005e9762: PUSH EAX
// 005e9763: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 005e9769: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 005e976a: CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   XREF to: 0048c450 (UNCONDITIONAL_CALL)
// 005e976f: ADD ESP,0x8
// 005e9772: PUSH 0x0
// 005e9774: LEA ESI,[EBX + 0x30]
// 005e9777: PUSH ESI
// 005e9778: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 005e977e: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 005e977f: CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
//   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)
// 005e9784: ADD ESP,0xc
// 005e9787: LEA EAX,[ESP + 0x8]
// 005e978b: PUSH EAX
// 005e978c: MOV EDX,dword ptr [EBX + 0x154]
// 005e9792: PUSH EBX
// 005e9793: CALL dword ptr [EDX + 0x14]
// 005e9796: ADD ESP,0x8
// 005e9799: PUSH EAX
// 005e979a: CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   XREF to: 004204f0 (UNCONDITIONAL_CALL)
// 005e979f: ADD ESP,0x4
// 005e97a2: MOV EDI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 005e97a8: PUSH EDI
//   XREF to: 02c6d578 (DATA)
// 005e97a9: MOV dword ptr [EBX + 0x7e8],EAX
// 005e97af: CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
//   XREF to: 0048c640 (UNCONDITIONAL_CALL)
