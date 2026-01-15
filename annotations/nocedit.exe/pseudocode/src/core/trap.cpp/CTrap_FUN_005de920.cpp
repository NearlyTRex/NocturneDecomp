// Name: core_trap.cpp_CTrap_FUN_005de920
// Address: 005de920
// Address Range: [[005de920, 005de99d] [005de9ab, 005de9b0]]
// Convention: __cdecl
// Signature: int core_trap.cpp_CTrap_FUN_005de920(CTrap * this_ptr)

#include "nocturne.h"

int __cdecl core_trap_cpp_CTrap_FUN_005de920(CTrap *this_ptr)

{
  CBoundingBox3D *this_ptr_00;
  int iVar1;
  float animation_frame;
  
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr,&(this_ptr->base_actor).location.position);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr,(CVector3i *)&(this_ptr->base_actor).orient,(CVector3i *)0x0);
  this_ptr_00 = (*((this_ptr->base_actor).vtable)->getBoundingBox)
                          (&this_ptr->base_actor,(CBoundingBox3D *)&stack0xffffffd8);
  iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_00);
  if (iVar1 != 0) {
    if (this_ptr->wolf_in_trap == 0) {
      animation_frame = 0.0;
    }
    else {
      animation_frame = 3.0;
    }
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
              ((CKeyFramedModelInstance *)&this_ptr->model_name,animation_frame,-1);
  }
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  return iVar1;
}
