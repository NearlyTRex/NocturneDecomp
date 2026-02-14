// Name: core_conveyor.cpp_CConveyor_renderTransparent_FUN_00441f60
// Address: 00441f60
// Address Range: [[00441f60, 00442018]]
// Convention: __cdecl
// Signature: int __cdecl core_conveyor_cpp_CConveyor_renderTransparent_FUN_00441f60(CConveyor *this_ptr)

#include "nocturne.h"

int __cdecl core_conveyor_cpp_CConveyor_renderTransparent_FUN_00441f60(CConveyor *this_ptr)

{
  int iVar1;
  CBoundingBox3D *this_ptr_00;
  CBoundingBox3D CStack_20;
  
  if ((g_CDemonMissionPtr->is_in_editor != 0) &&
     (iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2),
     iVar1 == 0)) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00((CDemonActor *)this_ptr);
    this_ptr_00 = (*((this_ptr->base).base.vtable._ub)->getBoundingBox)
                            ((CDemonActor *)this_ptr,&CStack_20);
    iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_00);
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40((CDemonActor *)this_ptr);
    if (iVar1 != 0) {
      core_actor_cpp_CDemonActor_FUN_0040dec0((CDemonActor *)this_ptr);
      return 1;
    }
  }
  return 0;
}
