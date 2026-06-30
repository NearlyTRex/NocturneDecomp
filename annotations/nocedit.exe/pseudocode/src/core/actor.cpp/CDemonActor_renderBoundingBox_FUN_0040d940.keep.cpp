// Name: core_actor.cpp_CDemonActor_renderBoundingBox_FUN_0040d940
// Address: 0040d940
// MANUAL RECONSTRUCTION
// Address Range: [[0040d940, 0040deba] [006027e0, 006029f3]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_CDemonActor_renderBoundingBox_FUN_0040d940(CDemonActor *this_ptr,uint32_t color)

#include "nocturne.h"

void __cdecl core_actor_cpp_CDemonActor_renderBoundingBox_FUN_0040d940(CDemonActor *this_ptr,uint32_t color)
{
  static const uint axis_masks[3] = {1, 2, 4};

  CBoundingBox3D bbox;
  CBoundingBox3D *this_ptr_00;
  CDemonRenderer *pCVar1;
  CVector3f *pCVar2;
  CVector3f *pCVar3;
  uint corner_index;
  int axis;
  CVector3f adjacent_corner;
  CVector3f current_corner;
  CVector3f current_copy;
  CVector3f scaled_adjacent;
  CVector3f scaled_current;
  CVector3f midpoint;
  CVector3i current_fixed;
  CVector3i midpoint_fixed;

  core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(this_ptr);
  this_ptr_00 = (*((this_ptr->vtable)._ub)->getBoundingBox)(this_ptr, &bbox);
  g_ActiveRenderColor = (int)color;

  for (corner_index = 0; (int)corner_index < 8; corner_index = corner_index + 1) {
    for (axis = 0; axis < 3; axis = axis + 1) {
      pCVar2 = core_box_cpp_CBoundingBox3D_getCorner_FUN_004202b0
                         (this_ptr_00, &adjacent_corner, corner_index ^ axis_masks[axis]);
      pCVar3 = core_box_cpp_CBoundingBox3D_getCorner_FUN_004202b0
                         (this_ptr_00, &current_corner, corner_index);

      core_actor_cpp_copyFloat3_FUN_004104f0(&current_copy.x, &pCVar3->x);
      core_actor_cpp_copyFloat2_FUN_004104e0(&current_copy.y, &pCVar3->y);
      core_actor_cpp_copyFloat1_FUN_004104d0(&current_copy.z, &pCVar3->z);

      core_actor_cpp_CVector_ctor_FUN_00410340(&scaled_adjacent);
      scaled_adjacent.x = pCVar2->x * 0.2f;
      scaled_adjacent.y = pCVar2->y * 0.2f;
      scaled_adjacent.z = pCVar2->z * 0.2f;

      core_actor_cpp_CVector_ctor_FUN_00410340(&scaled_current);
      scaled_current.x = pCVar3->x * 0.8f;
      scaled_current.y = pCVar3->y * 0.8f;
      scaled_current.z = 0.8f * pCVar3->z;

      core_actor_cpp_CVector_ctor_FUN_00410340(&midpoint);
      pCVar1 = g_CDemonRendererPtr1;
      midpoint.x = scaled_current.x + scaled_adjacent.x;
      midpoint.y = scaled_current.y + scaled_adjacent.y;
      midpoint.z = scaled_current.z + scaled_adjacent.z;

      core_actor_cpp_CVector3f_toFixed8_FUN_004103d0(&current_copy, &current_fixed);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&pCVar1->vertex_buffer_ptr->projected_vertex, &current_fixed);
      pCVar1 = g_CDemonRendererPtr1;
      core_actor_cpp_CVector3f_toFixed8_FUN_004103d0(&midpoint, &midpoint_fixed);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&pCVar1->vertex_buffer_ptr[1].projected_vertex, &midpoint_fixed);

      engine_3d_c_clipAndDrawLine2D_FUN_00407d70
                (pCVar1->vertex_buffer_ptr[0], pCVar1->vertex_buffer_ptr[1]);
    }
  }

  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(this_ptr);
  return;
}
