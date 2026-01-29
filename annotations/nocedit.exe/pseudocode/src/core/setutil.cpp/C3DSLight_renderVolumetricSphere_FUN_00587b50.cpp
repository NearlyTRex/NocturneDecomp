// Name: core_setutil.cpp_C3DSLight_renderVolumetricSphere_FUN_00587b50
// Address: 00587b50
// Address Range: [[00587b50, 00587de0]]
// Convention: __cdecl
// Signature: void __cdecl core_setutil_cpp_C3DSLight_renderVolumetricSphere_FUN_00587b50(C3DSLight *this_ptr)

#include "nocturne.h"

void __cdecl core_setutil_cpp_C3DSLight_renderVolumetricSphere_FUN_00587b50(C3DSLight *this_ptr)

{
  SRenderVertex *pSVar1;
  CDemonRenderer *this_ptr_00;
  int iVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  double dVar9;
  CVector3i local_50;
  float local_44;
  float local_40;
  float local_3c;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  if (ABS(this_ptr->atten_end) == 0.0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr2,&this_ptr->pos);
  local_c = 0;
  local_18 = 0;
  do {
    iVar3 = -4;
    iVar2 = local_18 + -0xc0;
    do {
      fVar4 = (float10)local_c * (float10)0.0625f * (float10)3.1415926535000001 *
              (float10)2;
      fVar5 = (float10)fsin(fVar4);
      fVar4 = (float10)fcos(fVar4);
      fVar6 = (float10)this_ptr->atten_end * (float10)0.25;
      fVar7 = (float10)iVar3 * (float10)0.25f * (float10)3.1415926535000001 *
              (float10)0.5;
      fVar8 = (float10)fcos(fVar7);
      fVar7 = (float10)fsin(fVar7);
      local_3c = (float)(fVar4 * fVar6 * fVar8);
      local_44 = (float)(fVar5 * fVar6 * fVar8);
      local_40 = (float)(fVar7 * fVar6);
      local_50.x = (int)ROUND(local_44 * 256.0f);
      local_50.y = (int)ROUND(local_40 * 256.0f);
      local_50.z = (int)ROUND(local_3c * 256.0f);
      local_8 = iVar3;
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                ((SProjectedVertex *)
                 ((int)&(g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex).transformed_x +
                 iVar2),&local_50);
      this_ptr_00 = g_CDemonRendererPtr2;
      *(uint *)((int)&g_CDemonRendererPtr2->vertex_buffer_ptr->u + iVar2) = 0x800000;
      *(uint *)((int)&this_ptr_00->vertex_buffer_ptr->v + iVar2) = 0x800000;
      pSVar1 = this_ptr_00->vertex_buffer_ptr;
      dVar9 = round((double)((this_ptr->color).r * 255.0f));
      local_c = (int)ROUND(dVar9);
      *(int *)((int)&pSVar1->light + iVar2) = local_c;
      pSVar1 = this_ptr_00->vertex_buffer_ptr;
      dVar9 = round((double)((this_ptr->color).g * 255.0f));
      local_10 = (int)ROUND(dVar9);
      *(int *)((int)&pSVar1->color + iVar2) = local_10;
      pSVar1 = this_ptr_00->vertex_buffer_ptr;
      dVar9 = round((double)((this_ptr->color).b * 255.0f));
      local_14 = (int)ROUND(dVar9);
      iVar3 = iVar3 + 1;
      *(int *)((int)&pSVar1->fog + iVar2) = local_14;
      iVar2 = iVar2 + 0x30;
    } while (iVar3 < 5);
    local_18 = local_18 + 1;
    iStack_24 = iStack_24 + 0x1e0;
  } while (local_18 < 0x11);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
            (this_ptr_00,&SMRGLTextureBasic_006817fc);
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(g_CDemonRendererPtr2,0x4000);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr2,0);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr2,1);
  iStack_20 = 10;
  iStack_1c = 0;
  do {
    iVar2 = -4;
    do {
      iVar2 = iVar2 + 1;
      engine_drender_cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0
                (g_CDemonRendererPtr2,(SMRGLHeaderPrimitive *)&stack0xffffff7c);
    } while (iVar2 < 4);
    iStack_1c = iStack_1c + 10;
    iStack_20 = iStack_20 + 10;
  } while (iStack_1c != 0xa0);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr2,0);
  return;
}
