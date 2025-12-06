// Name: core_vessel.cpp_CCryptVessel_FUN_005e9750
// Address: 005e9750
// Address Range: [[005e9750, 005e97b3]]
// Convention: __cdecl
// Signature: int core_vessel.cpp_CCryptVessel_FUN_005e9750(CCryptVessel * this_ptr)

#include "nocturne.h"

int __cdecl core_vessel_cpp_CCryptVessel_FUN_005e9750(CCryptVessel *this_ptr)

{
  COrientation *position;
  float fVar1;
  CBoundingBox3D *this_ptr_00;
  int iVar2;
  ushort extraout_var;
  uint extraout_EDX;
  BADSPACEBASE *in_ESP;
  float10 fVar3;
  float fStack_24;
  
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr,&(this_ptr->base_actor).location.position);
  position = &(this_ptr->base_actor).orient;
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr,(CVector3i *)position,(CVector3i *)0x0);
  this_ptr_00 = (*((this_ptr->base_actor).vtable)->getBoundingBox)
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
      fVar3 = (float10)65535 - (float10)fVar1 * (float10)65535;
      crt_math_c_round_FUN_005fe6b0
                ((double)CONCAT44 /* combine 2-byte values */(extraout_EDX,
                                  CONCAT22 /* combine 2-byte values */(extraout_var,
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
