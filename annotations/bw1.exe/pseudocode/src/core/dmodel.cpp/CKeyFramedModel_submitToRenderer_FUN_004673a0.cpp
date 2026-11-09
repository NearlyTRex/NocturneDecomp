// Name: core_dmodel.cpp_CKeyFramedModel_submitToRenderer_FUN_004673a0
// Address: 004673a0
// Address Range: [[004673a0, 00467640]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_CKeyFramedModel_submitToRenderer_FUN_004673a0(CKeyFramedModel *this_ptr,CKeyFramedModelInstance *instance,int render_flags)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dmodel_cpp_CKeyFramedModel_submitToRenderer_FUN_004673a0(CKeyFramedModel *this_ptr,CKeyFramedModelInstance *instance,int render_flags)

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
  
  if (0 < *(int *)&this_ptr->field_0x110) {
    if (*(int *)&this_ptr->field_0x360 == 0) {
      if ((0 < *(int *)&this_ptr->field_0x100) ||
         (fVar1 = *(float *)&this_ptr->field_0x344 - *(float *)&this_ptr->field_0x338,
         fVar2 = *(float *)&this_ptr->field_0x348 - *(float *)&this_ptr->field_0x33c,
         fVar3 = *(float *)&this_ptr->field_0x34c - *(float *)&this_ptr->field_0x340,
         (float)_DAT_005d94c4 < SQRT(fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2))) {
        engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00483d80(DAT_00612560,1);
      }
    }
    else {
      engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00483d80(DAT_00612560,0);
      engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_00483d70(DAT_00612560,0);
    }
    iVar4 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_00483e60(DAT_00612560);
    iVar8 = -1;
    local_2c = 0;
    if (0 < *(int *)&this_ptr->field_0x244) {
      local_28 = this_ptr;
      local_24 = instance;
      iVar9 = 0;
      do {
        iVar5 = *(int *)&local_28->field_0x24c + iVar9;
        if ((instance == (CKeyFramedModelInstance *)0x0) || (*(int *)local_24 != 0)) {
          if ((*(int *)&this_ptr->field_0x120 < 2) || (iVar4 != 0)) {
            if (iVar4 == 0) {
              engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00484f00
                        (DAT_00612560,(SMRGLTextureBasic *)&this_ptr->field_0x124);
            }
            core_set_cpp_FUN_005551f0
                      (g_CDemonSetPtr,
                       (SMRGLPrimitiveQuad *)(*(int *)&this_ptr->field_0x114 + iVar9 * 0x48),
                       iVar5 - iVar9,render_flags);
          }
          else {
            while (iVar9 < iVar5) {
              iVar6 = *(int *)(*(int *)&this_ptr->field_0x118 + iVar9 * 4);
              if (iVar8 != iVar6) {
                engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00484f00
                          (DAT_00612560,(SMRGLTextureBasic *)(&this_ptr->field_0x124 + iVar6 * 0x48)
                          );
                iVar8 = *(int *)(iVar9 * 4 + *(int *)&this_ptr->field_0x118);
              }
              iVar6 = iVar9 * 4;
              iVar7 = iVar9;
              do {
                iVar6 = iVar6 + 4;
                iVar7 = iVar7 + 1;
                if (iVar5 * 4 <= iVar6) break;
              } while (iVar8 == *(int *)(*(int *)&this_ptr->field_0x118 + iVar6));
              core_set_cpp_FUN_005551f0
                        (g_CDemonSetPtr,
                         (SMRGLPrimitiveQuad *)(*(int *)&this_ptr->field_0x114 + iVar9 * 0x48),
                         iVar7 - iVar9,render_flags);
              iVar9 = iVar7;
            }
          }
        }
        local_24 = (CKeyFramedModelInstance *)&local_24->field_0x4;
        local_28 = (CKeyFramedModel *)&local_28->field_0x8;
        local_2c = local_2c + 1;
        iVar9 = iVar5;
      } while (local_2c < *(int *)&this_ptr->field_0x244);
    }
    engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00483d80(DAT_00612560,0);
    engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_00483e20(DAT_00612560,1);
  }
  return;
}
