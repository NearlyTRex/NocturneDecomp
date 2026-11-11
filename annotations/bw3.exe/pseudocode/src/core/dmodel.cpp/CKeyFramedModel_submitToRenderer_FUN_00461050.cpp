// Name: core_dmodel.cpp_CKeyFramedModel_submitToRenderer_FUN_00461050
// Address: 00461050
// Address Range: [[00461050, 004612f0]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_CKeyFramedModel_submitToRenderer_FUN_00461050(CKeyFramedModel *this_ptr,CKeyFramedModelInstance *instance,int render_flags)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dmodel_cpp_CKeyFramedModel_submitToRenderer_FUN_00461050(CKeyFramedModel *this_ptr,CKeyFramedModelInstance *instance,int render_flags)

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
  int local_2c;
  CKeyFramedModel *local_28;
  CKeyFramedModelInstance *local_24;
  
  if (0 < this_ptr->poly_count) {
    if (this_ptr->disable_backface_culling == 0) {
      if ((0 < this_ptr->frame_count) ||
         (fVar1 = (this_ptr->bounds).max.x - (this_ptr->bounds).min.x,
         fVar2 = (this_ptr->bounds).max.y - (this_ptr->bounds).min.y,
         fVar3 = (this_ptr->bounds).max.z - (this_ptr->bounds).min.z,
         (float)_DAT_005bb7dc < SQRT(fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2))) {
        engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0046d460(DAT_005f2afc,1);
      }
    }
    else {
      engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0046d460(DAT_005f2afc,0);
      engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0046d450(DAT_005f2afc,0);
    }
    iVar4 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046d540(DAT_005f2afc);
    iVar8 = -1;
    local_2c = 0;
    if (0 < this_ptr->part_count) {
      local_28 = this_ptr;
      local_24 = instance;
      iVar9 = 0;
      do {
        iVar5 = local_28->part_list[0].poly_count + iVar9;
        if ((instance == (CKeyFramedModelInstance *)0x0) ||
           (local_24->part_visibility_flags[0] != 0)) {
          if ((this_ptr->texture_count < 2) || (iVar4 != 0)) {
            if (iVar4 == 0) {
              engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
                        (DAT_005f2afc,(SMRGLTextureBasic *)this_ptr->texture_list);
            }
            core_set_cpp_CDemonSet_renderPrimitiveBatch_FUN_0053ab80
                      (g_CDemonSetPtr,this_ptr->poly_vert_list + iVar9,iVar5 - iVar9,render_flags);
          }
          else {
            while (iVar9 < iVar5) {
              if (iVar8 != this_ptr->poly_texture_index_list[iVar9]) {
                engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
                          (DAT_005f2afc,
                           (SMRGLTextureBasic *)
                           (this_ptr->texture_list + this_ptr->poly_texture_index_list[iVar9]));
                iVar8 = this_ptr->poly_texture_index_list[iVar9];
              }
              iVar6 = iVar9 * 4;
              iVar7 = iVar9;
              do {
                iVar6 = iVar6 + 4;
                iVar7 = iVar7 + 1;
                if (iVar5 * 4 <= iVar6) break;
              } while (iVar8 == *(int *)((int)this_ptr->poly_texture_index_list + iVar6));
              core_set_cpp_CDemonSet_renderPrimitiveBatch_FUN_0053ab80
                        (g_CDemonSetPtr,this_ptr->poly_vert_list + iVar9,iVar7 - iVar9,render_flags)
              ;
              iVar9 = iVar7;
            }
          }
        }
        local_24 = (CKeyFramedModelInstance *)(local_24->part_visibility_flags + 1);
        local_28 = (CKeyFramedModel *)(local_28->model_filename + 8);
        local_2c = local_2c + 1;
        iVar9 = iVar5;
      } while (local_2c < this_ptr->part_count);
    }
    engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0046d460(DAT_005f2afc,0);
    engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0046d500(DAT_005f2afc,1);
  }
  return;
}
