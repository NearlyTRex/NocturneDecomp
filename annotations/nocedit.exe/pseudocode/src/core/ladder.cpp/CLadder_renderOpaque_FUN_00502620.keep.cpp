// Name: core_ladder.cpp_CLadder_renderOpaque_FUN_00502620
// Address: 00502620
// MANUAL RECONSTRUCTION
// Address Range: [[00502620, 005028b3] [00602e34, 00603047]]
// Convention: __cdecl
// Signature: int __cdecl core_ladder_cpp_CLadder_renderOpaque_FUN_00502620(CLadder *this_ptr)

#include "nocturne.h"

int __cdecl core_ladder_cpp_CLadder_renderOpaque_FUN_00502620(CLadder *this_ptr)

{
  CBoundingBox3D *this_ptr_00;
  int iVar1;
  int iVar2;
  SRenderVertex *pSVar6;
  CBoundingBox3D local_bbox;
  CVector3i CStack_30;
  float fStack_y;

  core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(&this_ptr->base);
  this_ptr_00 = (*((this_ptr->base).vtable._ub)->getBoundingBox)
                          (&this_ptr->base, &local_bbox);
  iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_00);
  if ((iVar1 != 0) && (g_CDemonMissionPtr->is_in_editor != 0)) {
    iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2);
    if (iVar2 == 0) {
      g_ActiveRenderColor = 0xfb;
      fStack_y = 0.0f;
      while (fStack_y < (this_ptr->ladder_size).y + (float)0.001) {
        if (0.0f < fStack_y) {
          CStack_30.x = 0;
          CStack_30.y = (int)ROUND(fStack_y * 256.0f);
          CStack_30.z = (int)ROUND(0.0f * 256.0f);
          engine_special_cpp_transformAndProjectPoint_FUN_005b575c
                    (&g_CDemonRendererPtr2->vertex_buffer_ptr[2].projected_vertex, &CStack_30);
          pSVar6 = g_CDemonRendererPtr2->vertex_buffer_ptr;
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(pSVar6[0], pSVar6[2]);
          pSVar6 = g_CDemonRendererPtr2->vertex_buffer_ptr;
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(pSVar6[1], pSVar6[2]);
        }
        CStack_30.x = (int)ROUND(-(this_ptr->ladder_size).x * (float)0.5 * 256.0f);
        CStack_30.y = (int)ROUND(fStack_y * 256.0f);
        CStack_30.z = (int)ROUND(0.0f * 256.0f);
        engine_special_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex, &CStack_30);
        CStack_30.x = (int)ROUND((this_ptr->ladder_size).x * (float)0.5 * 256.0f);
        CStack_30.y = (int)ROUND(fStack_y * 256.0f);
        CStack_30.z = (int)ROUND(0.0f * 256.0f);
        engine_special_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr2->vertex_buffer_ptr[1].projected_vertex, &CStack_30);
        pSVar6 = g_CDemonRendererPtr2->vertex_buffer_ptr;
        engine_3d_c_clipAndDrawLine2D_FUN_00407d70(pSVar6[0], pSVar6[1]);
        fStack_y = fStack_y + 1.0f;
      }
    }
  }
  if (iVar1 != 0) {
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
              (&this_ptr->model, 0.0, -1);
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(&this_ptr->base);
  return iVar1;
}
