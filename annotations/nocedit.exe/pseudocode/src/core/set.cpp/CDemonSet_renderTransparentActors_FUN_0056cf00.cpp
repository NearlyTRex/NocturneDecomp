// Name: core_set.cpp_CDemonSet_renderTransparentActors_FUN_0056cf00
// Address: 0056cf00
// Address Range: [[0056cf00, 0056d08b]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_renderTransparentActors_FUN_0056cf00(CDemonSet *this_ptr)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_renderTransparentActors_FUN_0056cf00(CDemonSet *this_ptr)

{
  int *piVar1;
  CDemonActor *this_ptr_00;
  CBoundingBox3D *pCVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  CBoundingBox3D CStack_44;
  CBoundingBox3D CStack_2c;
  CDemonSet *local_14;
  
  iVar5 = this_ptr->sorted_render_actor_count + -1;
  if (-1 < iVar5) {
    local_14 = (CDemonSet *)
               (this_ptr->cameras[0].name + this_ptr->sorted_render_actor_count * 4 + -8);
    do {
      this_ptr_00 = local_14->sorted_render_actors[0];
      if (this_ptr_00->is_transparent == 0) {
        piVar1 = &(this_ptr_00->previous_transform_state).dirty_flags;
        *(byte *)piVar1 = (byte)*piVar1 & 0xf7;
      }
      else {
        pCVar2 = (*((this_ptr_00->vtable)._ub)->getBoundingBox)(this_ptr_00,&CStack_44);
        if (&CStack_2c != pCVar2) {
          CStack_2c.min.x = (pCVar2->min).x;
          CStack_2c.min.y = (pCVar2->min).y;
          CStack_2c.min.z = (pCVar2->min).z;
        }
        if (&CStack_2c.max != &pCVar2->max) {
          CStack_2c.max.x = (pCVar2->max).x;
          CStack_2c.max.y = (pCVar2->max).y;
          CStack_2c.max.z = (pCVar2->max).z;
        }
        core_set_cpp_CDemonSet_setLightingParameters_FUN_0056d380
                  (this_ptr,&(this_ptr_00->location).position,&this_ptr_00->orient,&CStack_2c.min,
                   &CStack_2c.max,&this_ptr_00->orient_matrix);
        core_set_cpp_CDemonSet_setFlatColor_FUN_00570ca0
                  (this_ptr,(this_ptr_00->scale).x,(this_ptr_00->scale).y,(this_ptr_00->scale).z);
        iVar3 = (*((this_ptr_00->vtable)._ub)->renderTransparent)(this_ptr_00);
        if (iVar3 == 0) {
          piVar1 = &(this_ptr_00->previous_transform_state).dirty_flags;
          *(byte *)piVar1 = (byte)*piVar1 & 0xf7;
        }
        else {
          piVar1 = &(this_ptr_00->previous_transform_state).dirty_flags;
          *(byte *)piVar1 = (byte)*piVar1 | 8;
        }
        iVar3 = 0;
        engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0(g_CDemonRendererPtr2,1);
        if (0 < this_ptr->mirror_glass_actor_count) {
          do {
            core_set_cpp_CDemonSet_setupMirrorRendering_FUN_005709e0(this_ptr,iVar3,0);
            iVar4 = (*((this_ptr_00->vtable)._ub)->renderTransparent)(this_ptr_00);
            if (iVar4 != 0) {
              piVar1 = &(this_ptr_00->previous_transform_state).dirty_flags;
              *(byte *)piVar1 = (byte)*piVar1 | 8;
            }
            engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0(g_CDemonRendererPtr2,1)
            ;
            iVar3 = iVar3 + 1;
            core_set_cpp_CDemonSet_restoreCameraAfterMirror_FUN_00570af0(this_ptr);
          } while (iVar3 < this_ptr->mirror_glass_actor_count);
        }
        core_set_cpp_CDemonSet_setFlatColor_FUN_00570ca0(this_ptr,0x10000,0x10000,0x10000);
      }
      local_14 = (CDemonSet *)&local_14[-1].weather_type;
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
  }
  return;
}
