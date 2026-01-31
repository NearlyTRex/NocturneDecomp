// Name: core_battery.cpp_CBattery_renderOpaque_FUN_00417f80
// Address: 00417f80
// Address Range: [[00417f80, 00417fdb] [00417fe7, 00417ffb]]
// Convention: __cdecl
// Signature: int __cdecl core_battery_cpp_CBattery_renderOpaque_FUN_00417f80(CBattery *this_ptr)

#include "nocturne.h"

int __cdecl core_battery_cpp_CBattery_renderOpaque_FUN_00417f80(CBattery *this_ptr)

{
  CBoundingBox3D *this_ptr_00;
  int iVar1;
  
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr2,&(this_ptr->base).location.position);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr2,(CVector3i *)&(this_ptr->base).orient,(CVector3i *)0x0);
  this_ptr_00 = (*((this_ptr->base).vtable._ub)->getBoundingBox)
                          (&this_ptr->base,(CBoundingBox3D *)&stack0xffffffe0);
  iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_00);
  if (iVar1 != 0) {
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
              (&this_ptr->model,0.0,-1);
  }
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  return iVar1;
}
