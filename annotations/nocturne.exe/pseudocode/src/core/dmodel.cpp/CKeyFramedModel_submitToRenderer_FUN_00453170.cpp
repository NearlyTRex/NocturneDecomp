// Name: core_dmodel.cpp_CKeyFramedModel_submitToRenderer_FUN_00453170
// Address: 00453170
// Address Range: [[00453170, 004533d6]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_CKeyFramedModel_submitToRenderer_FUN_00453170(CKeyFramedModel *this_ptr,CKeyFramedModelInstance *instance,int render_flags)

#include "nocturne.h"

void __cdecl core_dmodel_cpp_CKeyFramedModel_submitToRenderer_FUN_00453170(CKeyFramedModel *this_ptr,CKeyFramedModelInstance *instance,int render_flags)

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
  CKeyFramedModelInstance *local_20;
  CKeyFramedModel *local_1c;
  
  if (0 < this_ptr->poly_count) {
    if (this_ptr->disable_backface_culling == 0) {
      if ((0 < this_ptr->frame_count) ||
         (fVar1 = (this_ptr->bounds).max.x - (this_ptr->bounds).min.x,
         fVar2 = (this_ptr->bounds).max.y - (this_ptr->bounds).min.y,
         fVar3 = (this_ptr->bounds).max.z - (this_ptr->bounds).min.z,
         (float)250 < SQRT(fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2))) {
        engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00460fb0
                  (g_CDemonRenderer_PTR_005ae704,1);
      }
    }
    else {
      engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00460fb0
                (g_CDemonRenderer_PTR_005ae704,0);
      engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_00460fa0
                (g_CDemonRenderer_PTR_005ae704,0);
    }
    iVar9 = -1;
    iVar4 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090
                      (g_CDemonRenderer_PTR_005ae704);
    local_24 = 0;
    if (0 < this_ptr->part_count) {
      local_1c = this_ptr;
      local_20 = instance;
      iVar8 = 0;
      do {
        iVar5 = local_1c->part_list[0].poly_count + iVar8;
        if ((instance == (CKeyFramedModelInstance *)0x0) ||
           (local_20->part_visibility_flags[0] != 0)) {
          if ((this_ptr->texture_count < 2) || (iVar4 != 0)) {
            if (iVar4 == 0) {
              engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0
                        (g_CDemonRenderer_PTR_005ae704,this_ptr->texture_list[0].textures);
            }
            core_set_cpp_CDemonSet_renderPrimitiveBatch_FUN_0050ddd0
                      (g_CDemonSet_PTR_005be368,this_ptr->poly_vert_list + iVar8,iVar5 - iVar8,
                       render_flags);
          }
          else {
            while (iVar8 < iVar5) {
              if (iVar9 != this_ptr->poly_texture_index_list[iVar8]) {
                engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0
                          (g_CDemonRenderer_PTR_005ae704,
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
              core_set_cpp_CDemonSet_renderPrimitiveBatch_FUN_0050ddd0
                        (g_CDemonSet_PTR_005be368,this_ptr->poly_vert_list + iVar8,iVar7 - iVar8,
                         render_flags);
              iVar8 = iVar7;
            }
          }
        }
        local_1c = (CKeyFramedModel *)(local_1c->model_filename + 8);
        local_20 = (CKeyFramedModelInstance *)(local_20->part_visibility_flags + 1);
        local_24 = local_24 + 1;
        iVar8 = iVar5;
      } while (local_24 < this_ptr->part_count);
    }
    engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00460fb0
              (g_CDemonRenderer_PTR_005ae704,0);
    engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_00461050
              (g_CDemonRenderer_PTR_005ae704,1);
  }
  return;
}
