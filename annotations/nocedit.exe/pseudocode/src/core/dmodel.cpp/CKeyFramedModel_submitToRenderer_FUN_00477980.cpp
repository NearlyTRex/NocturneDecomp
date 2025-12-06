// Name: core_dmodel.cpp_CKeyFramedModel_submitToRenderer_FUN_00477980
// Address: 00477980
// Address Range: [[00477980, 00477be6]]
// Convention: __cdecl
// Signature: void core_dmodel.cpp_CKeyFramedModel_submitToRenderer_FUN_00477980(CKeyFramedModel * this_ptr, int frame_index, int render_flags, CKeyFramedModelInstance * instance)

#include "nocturne.h"

void __cdecl
core_dmodel_cpp_CKeyFramedModel_submitToRenderer_FUN_00477980
          (CKeyFramedModel *this_ptr,int frame_index,int render_flags,
          CKeyFramedModelInstance *instance)

{
  SMRGLTextureExtended *texture;
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *in_stack_00000014;
  int in_stack_00000018;
  int local_18;
  int *local_14;
  CKeyFramedModel *local_10;
  
  if (0 < this_ptr->poly_count) {
    if (this_ptr->disable_backface_culling == 0) {
      if ((0 < this_ptr->frame_count) ||
         (fVar1 = (this_ptr->bounds_max).x - (this_ptr->bounds_min).x,
         fVar2 = (this_ptr->bounds_max).y - (this_ptr->bounds_min).y,
         fVar3 = (this_ptr->bounds_max).z - (this_ptr->bounds_min).z,
         (float)250 < SQRT(fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2))) {
        engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr,1);
      }
    }
    else {
      engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr,0);
      engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0048c9f0(g_CDemonRendererPtr,0);
    }
    iVar9 = -1;
    iVar4 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr);
    local_18 = 0;
    if (0 < this_ptr->part_count) {
      texture = this_ptr->texture_list;
      local_10 = this_ptr;
      local_14 = in_stack_00000014;
      iVar8 = 0;
      do {
        iVar5 = local_10->part_list[0].poly_count + iVar8;
        if ((in_stack_00000014 == (int *)0x0) || (*local_14 != 0)) {
          if ((this_ptr->texture_count < 2) || (iVar4 != 0)) {
            if (iVar4 == 0) {
              engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
                        (g_CDemonRendererPtr,&texture->base);
            }
            core_set_cpp_CDemonSet_renderPrimitiveBatch_FUN_00570770
                      (g_CDemonSetPtr,
                       (SMRGLPrimitiveQuad *)(this_ptr->poly_vert_list + iVar8 * 0x12),
                       (int)texture - iVar8,(int)in_stack_00000014);
          }
          else {
            while (iVar8 < iVar5) {
              if (iVar9 != this_ptr->poly_texture_index_list[iVar8]) {
                engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
                          (g_CDemonRendererPtr,
                           &texture[this_ptr->poly_texture_index_list[iVar8]].base);
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
                         iVar7 - iVar8,in_stack_00000018);
              iVar8 = iVar7;
            }
          }
        }
        local_10 = (CKeyFramedModel *)(local_10->model_filename + 8);
        local_14 = local_14 + 1;
        local_18 = local_18 + 1;
        iVar8 = iVar5;
      } while (local_18 < this_ptr->part_count);
    }
    engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr,0);
    engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0(g_CDemonRendererPtr,1);
  }
  return;
}
