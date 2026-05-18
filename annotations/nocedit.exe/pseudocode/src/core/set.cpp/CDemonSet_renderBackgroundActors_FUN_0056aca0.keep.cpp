// Name: core_set.cpp_CDemonSet_renderBackgroundActors_FUN_0056aca0
// Address: 0056aca0
// MANUAL RECONSTRUCTION
// Address Range: [[0056aca0, 0056add9]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_renderBackgroundActors_FUN_0056aca0(CDemonSet *this_ptr,int layer_flag)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_renderBackgroundActors_FUN_0056aca0(CDemonSet *this_ptr,int layer_flag)

{
  CDemonActor *this_ptr_00;
  CBoundingBox3D *pCVar1;
  int iVar2;
  CBoundingBox3D CStack_40;
  CBoundingBox3D CStack_28;
  
  if (g_CDemonMissionPtr->is_in_editor != 0) {
    layer_flag = 0;
  }
  for (iVar2 = 0; iVar2 < this_ptr->sorted_render_actor_count; iVar2 = iVar2 + 1) {
    this_ptr_00 = this_ptr->sorted_render_actors[iVar2];
    pCVar1 = (*((this_ptr_00->vtable)._ub)->getBoundingBox)(this_ptr_00,&CStack_40);
    if (&CStack_28 != pCVar1) {
      CStack_28 = *pCVar1;
    }
    core_set_cpp_CDemonSet_setLightingParameters_FUN_0056d380
              (this_ptr,&(this_ptr_00->location).position,&this_ptr_00->orient,&CStack_28.min,
               &CStack_28.max,&this_ptr_00->orient_matrix);
    core_set_cpp_CDemonSet_setFlatColor_FUN_00570ca0
              (this_ptr,(this_ptr_00->scale).x,(this_ptr_00->scale).y,(this_ptr_00->scale).z);
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(g_CDemonRendererPtr2,0xffff);
    (*((this_ptr_00->vtable)._ub)->renderBackground)(this_ptr_00,layer_flag);
    core_set_cpp_CDemonSet_setFlatColor_FUN_00570ca0(this_ptr,0x10000,0x10000,0x10000);
    engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0(g_CDemonRendererPtr2,1);
  }
  return;
}
