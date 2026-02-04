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
  float fStack_20;
  
  if (*(int *)(g_CDemonMissionPtr->unk1 + 4) != 0) {
    iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2);
    if (iVar1 == 0) {
      core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00((CDemonActor *)this_ptr);
      this_ptr_00 = (*((this_ptr->base).base.vtable._ub)->getBoundingBox)
                              ((CDemonActor *)this_ptr,(CBoundingBox3D *)&fStack_20);
      fStack_20 = 6.256178e-39;
      iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_00);
      fStack_20 = 6.256194e-39;
      core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40((CDemonActor *)this_ptr);
      if (iVar1 != 0) {
        if (this_ptr == *(CConveyor **)(g_CDemonMissionPtr->unk2 + 0x1c)) {
          fStack_20 = 1.79366e-43;
        }
        else {
          fStack_20 = 8.96831e-44;
        }
        core_actor_cpp_CDemonActor_FUN_0040dec0((CDemonActor *)this_ptr);
        return 1;
      }
    }
  }
  return 0;
}
