// Name: core_door.cpp_CDoor_renderOpaque_FUN_00455d50
// Address: 00455d50
// Address Range: [[00455d50, 00455e03]]
// Convention: __cdecl
// Signature: int __cdecl core_door_cpp_CDoor_renderOpaque_FUN_00455d50(CDoor *this_ptr)

#include "nocturne.h"

int __cdecl core_door_cpp_CDoor_renderOpaque_FUN_00455d50(CDoor *this_ptr)

{
  CBoundingBox3D *pCVar1;
  int iVar2;
  int iVar3;
  CBoundingBox3D CStack_34;
  CBoundingBox3D local_1c;
  
  if (2 < this_ptr->one_shot) {
    return 0;
  }
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20(&this_ptr->base);
  pCVar1 = (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&local_1c);
  iVar2 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(pCVar1);
  if (iVar2 != 0) {
    if (this_ptr->plot_as_box_in_shadow != 0) {
      iVar3 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090
                        (g_CDemonRenderer_PTR_005ae704);
      if (iVar3 != 0) {
        pCVar1 = (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&CStack_34);
        core_box_cpp_CBoundingBox3D_render_FUN_0041dcc0(pCVar1);
        goto LAB_00455dcd;
      }
    }
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0
              (&this_ptr->model,0.0,-1);
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(&this_ptr->base);
    return iVar2;
  }
LAB_00455dcd:
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(&this_ptr->base);
  return iVar2;
}
