// Name: core_set.cpp_CDemonSet_renderBackgroundActors_FUN_00508750
// Address: 00508750
// Address Range: [[00508750, 00508889]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_renderBackgroundActors_FUN_00508750(CDemonSet *this_ptr,int layer_flag)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_renderBackgroundActors_FUN_00508750(CDemonSet *this_ptr,int layer_flag)

{
  CDemonActor *this_ptr_00;
  CBoundingBox3D *pCVar1;
  int iVar2;
  CDemonSet *pCVar3;
  CBoundingBox3D CStack_40;
  CBoundingBox3D CStack_28;
  
  if (g_CDemonMission_PTR_005baf90->is_in_editor != 0) {
    layer_flag = 0;
  }
  iVar2 = 0;
  pCVar3 = this_ptr;
  if (0 < this_ptr->sorted_render_actor_count) {
    do {
      this_ptr_00 = pCVar3->sorted_render_actors[0];
      pCVar1 = (*((this_ptr_00->vtable)._ub)->getBoundingBox)(this_ptr_00,&CStack_40);
      if (&CStack_28 != pCVar1) {
        CStack_28.min.x = (pCVar1->min).x;
        CStack_28.min.y = (pCVar1->min).y;
        CStack_28.min.z = (pCVar1->min).z;
      }
      if (&CStack_28.max != &pCVar1->max) {
        CStack_28.max.x = (pCVar1->max).x;
        CStack_28.max.y = (pCVar1->max).y;
        CStack_28.max.z = (pCVar1->max).z;
      }
      core_set_cpp_CDemonSet_setLightingParameters_FUN_0050adc0
                (this_ptr,&(this_ptr_00->location).position,&this_ptr_00->orient,&CStack_28.min,
                 &CStack_28.max,&this_ptr_00->orient_matrix);
      core_set_cpp_CDemonSet_setFlatColor_FUN_0050e340
                (this_ptr,(this_ptr_00->scale).x,(this_ptr_00->scale).y,(this_ptr_00->scale).z);
      engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00461010
                (g_CDemonRenderer_PTR_005ae704,0xffff);
      (*((this_ptr_00->vtable)._ub)->renderBackground)(this_ptr_00,layer_flag);
      core_set_cpp_CDemonSet_setFlatColor_FUN_0050e340(this_ptr,0x10000,0x10000,0x10000);
      iVar2 = iVar2 + 1;
      engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_00461050
                (g_CDemonRenderer_PTR_005ae704,1);
      pCVar3 = (CDemonSet *)pCVar3->cameras;
    } while (iVar2 < this_ptr->sorted_render_actor_count);
  }
  return;
}
