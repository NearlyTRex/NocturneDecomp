// Name: core_setutil.cpp_C3DSLight_renderVolumetricSphere_FUN_00587b50
// Address: 00587b50
// Address Range: [[00587b50, 00587de0]]
// Convention: __cdecl
// Signature: void core_setutil.cpp_C3DSLight_renderVolumetricSphere_FUN_00587b50(C3DSLight * this_ptr)

#include "nocturne.h"

void __cdecl core_setutil_cpp_C3DSLight_renderVolumetricSphere_FUN_00587b50(C3DSLight *this_ptr)

{
  SRenderVertex *pSVar1;
  int iVar2;
  CDemonRenderer *pCVar3;
  int *extraout_EDX;
  int *extraout_EDX_00;
  CDemonRenderer *this_ptr_00;
  int iVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  double dVar11;
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
            (g_CDemonRendererPtr,&this_ptr->pos);
  local_c = 0;
  local_18 = 0;
  do {
    iVar5 = -4;
    iVar4 = local_18 + -0xc0;
    do {
      fVar6 = (float10)local_c * (float10)0.0625f * (float10)3.1415926535000001 *
              (float10)2;
      fVar7 = (float10)fsin(fVar6);
      fVar6 = (float10)fcos(fVar6);
      fVar8 = (float10)this_ptr->atten_end * (float10)0.25;
      fVar9 = (float10)iVar5 * (float10)0.25f * (float10)3.1415926535000001 *
              (float10)0.5;
      fVar10 = (float10)fcos(fVar9);
      fVar9 = (float10)fsin(fVar9);
      local_3c = (float)(fVar6 * fVar8 * fVar10);
      local_44 = (float)(fVar7 * fVar8 * fVar10);
      local_40 = (float)(fVar9 * fVar8);
      local_50.x = (int)ROUND(local_44 * 256f);
      local_50.y = (int)ROUND(local_40 * 256f);
      local_50.z = (int)ROUND(local_3c * 256f);
      local_8 = iVar5;
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                ((SProjectedVertex *)
                 ((int)&(g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex).transformed_x +
                 iVar4),&local_50);
      pCVar3 = g_CDemonRendererPtr;
      *(uint *)((int)&g_CDemonRendererPtr->vertex_buffer_ptr->u + iVar4) = 0x800000;
      *(uint *)((int)&pCVar3->vertex_buffer_ptr->v + iVar4) = 0x800000;
      pSVar1 = pCVar3->vertex_buffer_ptr;
      dVar11 = crt_math_c_round_FUN_005fe6b0((double)((this_ptr->color).r * 255f));
      local_c = (int)ROUND(dVar11);
      *(int *)((int)&pSVar1->light + iVar4) = local_c;
      iVar2 = *extraout_EDX;
      dVar11 = crt_math_c_round_FUN_005fe6b0((double)((this_ptr->color).g * 255f));
      local_10 = (int)ROUND(dVar11);
      *(int *)(iVar2 + iVar4 + 0x24) = local_10;
      iVar2 = *extraout_EDX_00;
      dVar11 = crt_math_c_round_FUN_005fe6b0((double)((this_ptr->color).b * 255f));
      local_14 = (int)ROUND(dVar11);
      iVar5 = iVar5 + 1;
      *(int *)(iVar4 + 0x28 + iVar2) = local_14;
      iVar4 = iVar4 + 0x30;
    } while (iVar5 < 5);
    local_18 = local_18 + 1;
    iStack_24 = iStack_24 + 0x1e0;
  } while (local_18 < 0x11);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
            (this_ptr_00,&SMRGLTextureBasic_006817fc);
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(g_CDemonRendererPtr,0x4000);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,0);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr,1);
  iStack_20 = 10;
  iStack_1c = 0;
  do {
    iVar4 = -4;
    do {
      iVar4 = iVar4 + 1;
      engine_drender_cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0
                (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)&stack0xffffff7c);
    } while (iVar4 < 4);
    iStack_1c = iStack_1c + 10;
    iStack_20 = iStack_20 + 10;
  } while (iStack_1c != 0xa0);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr,0);
  return;
}
