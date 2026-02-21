// Name: core_dmodel.cpp_CKeyFramedModel_submitToRenderer_FUN_00477980
// Address: 00477980
// Address Range: [[00477980, 00477be6]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_CKeyFramedModel_submitToRenderer_FUN_00477980(CKeyFramedModel *this_ptr,int frame_index,int render_flags)

#include "nocturne.h"

void __cdecl core_dmodel_cpp_CKeyFramedModel_submitToRenderer_FUN_00477980(CKeyFramedModel *this_ptr,int frame_index,int render_flags)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_24;
  int *local_20;
  CKeyFramedModel *local_1c;
  
  if (0 < this_ptr->poly_count) {
    if (this_ptr->disable_backface_culling == 0) {
      if ((0 < this_ptr->frame_count) ||
         (fVar1 = (this_ptr->bounds_max).x - (this_ptr->bounds_min).x,
         fVar2 = (this_ptr->bounds_max).y - (this_ptr->bounds_min).y,
         fVar3 = (this_ptr->bounds_max).z - (this_ptr->bounds_min).z,
         (float)250 < SQRT(fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2))) {
        engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr2,1);
      }
    }
    else {
      engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr2,0);
      engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0048c9f0(g_CDemonRendererPtr2,0);
    }
    iVar9 = -1;
    iVar4 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2);
    local_24 = 0;
    if (0 < this_ptr->part_count) {
      local_1c = this_ptr;
      local_20 = (int *)frame_index;
      iVar8 = 0;
      do {
        iVar5 = local_1c->part_list[0].poly_count + iVar8;
        if ((frame_index == 0) || (*local_20 != 0)) {
          if ((this_ptr->texture_count < 2) || (iVar4 != 0)) {
            if (iVar4 == 0) {
              engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
                        (g_CDemonRendererPtr2,this_ptr->texture_list[0].textures);
            }
            core_set_cpp_CDemonSet_renderPrimitiveBatch_FUN_00570770
                      (g_CDemonSetPtr,
                       (SMRGLPrimitiveQuad *)(this_ptr->poly_vert_list + iVar8 * 0x12),iVar5 - iVar8
                       ,render_flags);
          }
          else {
            while (iVar8 < iVar5) {
              if (iVar9 != this_ptr->poly_texture_index_list[iVar8]) {
                engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
                          (g_CDemonRendererPtr2,
                           this_ptr->texture_list[this_ptr->poly_texture_index_list[iVar8]].textures
                          );
                iVar9 = this_ptr->poly_texture_index_list[iVar8];
              }
              iVar6 = iVar8 * 4;
              iVar7 = iVar8;
              do {
                iVar6 = iVar6 + 4;
                iVar7 = iVar7 + 1;
                if (iVar5 * 4 <= iVar6) break;
              } while (iVar9 == *(int *)((int)this_ptr->poly_texture_index_list + iVar6));
              core_set_cpp_CDemonSet_renderPrimitiveBatch_FUN_00570770
                        (g_CDemonSetPtr,
                         (SMRGLPrimitiveQuad *)(this_ptr->poly_vert_list + iVar8 * 0x12),
                         iVar7 - iVar8,render_flags);
              iVar8 = iVar7;
            }
          }
        }
        local_1c = (CKeyFramedModel *)(local_1c->model_filename + 8);
        local_20 = local_20 + 1;
        local_24 = local_24 + 1;
        iVar8 = iVar5;
      } while (local_24 < this_ptr->part_count);
    }
    engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr2,0);
    engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0(g_CDemonRendererPtr2,1);
  }
  return;
}
