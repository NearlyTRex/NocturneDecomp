// Name: core_bat.cpp_CBat_FUN_00414bf0
// Address: 00414bf0
// Address Range: [[00414bf0, 00414c59]]
// Convention: __cdecl
// Signature: int __cdecl core_bat_cpp_CBat_FUN_00414bf0(CBat *this_ptr)

#include "nocturne.h"

int __cdecl core_bat_cpp_CBat_FUN_00414bf0(CBat *this_ptr)

{
  CBoundingBox3D *this_ptr_00;
  int iVar1;
  
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(&this_ptr->base);
  this_ptr_00 = (*((this_ptr->base).vtable._ub)->getBoundingBox)
                          (&this_ptr->base,(CBoundingBox3D *)&stack0xffffffe0);
  iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_00);
  if (iVar1 == 0) {
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(&this_ptr->base);
    return 0;
  }
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
            (&this_ptr->model,*(float *)(this_ptr->course_filename + 0x2c),-1);
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(&this_ptr->base);
  return iVar1;
}
