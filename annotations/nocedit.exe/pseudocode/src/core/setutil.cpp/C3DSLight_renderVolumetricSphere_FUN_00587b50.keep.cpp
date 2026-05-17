// Name: core_setutil.cpp_C3DSLight_renderVolumetricSphere_FUN_00587b50
// Address: 00587b50
// MANUAL RECONSTRUCTION
// Address Range: [[00587b50, 00587de0]]
// Convention: __cdecl
// Signature: void __cdecl core_setutil_cpp_C3DSLight_renderVolumetricSphere_FUN_00587b50(C3DSLight *this_ptr)

#include "nocturne.h"

void __cdecl core_setutil_cpp_C3DSLight_renderVolumetricSphere_FUN_00587b50(C3DSLight *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar1;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar2;
  SMRGLPrimitiveQuadIndex local_78;
  CVector3i local_50;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  CDemonRenderer *this_ptr_00;
  
  if (ABS(this_ptr->atten_end) == 0.0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr2,&this_ptr->pos);
  local_c = 0;
  local_18 = 0;
  do {
    iVar3 = -4;
    iVar1 = local_18 + -0xc0;
    do {
      fVar4 = (float10)local_c * (float10)0.0625f * (float10)3.1415926535000001 *
              (float10)2;
      fVar5 = (float10)fsin(fVar4);
      fVar1 = (float10)fcos(fVar4);
      fVar6 = (float10)this_ptr->atten_end * (float10)0.25;
      fVar7 = (float10)iVar3 * (float10)0.25f * (float10)3.1415926535000001 *
              (float10)0.5;
      fVar8 = (float10)fcos(fVar7);
      fVar2 = (float10)fsin(fVar7);
      local_50.x = (int)ROUND((float)(fVar5 * fVar6 * fVar8) * 256.0f);
      local_50.y = (int)ROUND((float)(fVar2 * fVar6) * 256.0f);
      local_50.z = (int)ROUND((float)(fVar1 * fVar6 * fVar8) * 256.0f);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                ((SProjectedVertex *)
                 ((int)&(g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex).transformed_x +
                 iVar1),&local_50);
      this_ptr_00 = g_CDemonRendererPtr2;
      *(uint *)((int)&g_CDemonRendererPtr2->vertex_buffer_ptr->u + iVar1) = 0x800000;
      *(uint *)((int)&this_ptr_00->vertex_buffer_ptr->v + iVar1) = 0x800000;
      *(int *)((int)&this_ptr_00->vertex_buffer_ptr->r + iVar1) =
           (int)ROUND(ROUND((float)(this_ptr->color).r * 255.0f));
      *(int *)((int)&this_ptr_00->vertex_buffer_ptr->g + iVar1) =
           (int)ROUND(ROUND((float)(this_ptr->color).g * 255.0f));
      iVar3 = iVar3 + 1;
      *(int *)((int)&this_ptr_00->vertex_buffer_ptr->b + iVar1) =
           (int)ROUND(ROUND((float)(this_ptr->color).b * 255.0f));
      iVar1 = iVar1 + 0x30;
    } while (iVar3 < 5);
    local_c = local_c + 1;
    local_18 = local_18 + 0x1e0;
  } while (local_c < 0x11);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
            (this_ptr_00,&SMRGLTextureBasic_006817fc);
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(g_CDemonRendererPtr2,0x4000);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr2,0);
  local_78.base.base.count = 4;
  local_78.base.surface_normal.D.i = 0;
  local_78.base.surface_normal.C.i = 0;
  local_78.base.surface_normal.B.i = 0;
  local_78.base.surface_normal.A.i = 0;
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr2,1);
  local_14 = 10;
  local_10 = 0;
  do {
    iVar2 = -4;
    do {
      local_78.vertices[0] = local_10 + iVar2;
      local_78.vertices[1] = local_14 + iVar2;
      iVar2 = iVar2 + 1;
      local_78.vertices[2] = local_14 + iVar2;
      local_78.vertices[3] = local_10 + iVar2;
      engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_0048bcf0
                (g_CDemonRendererPtr2,&local_78.base);
    } while (iVar2 < 4);
    local_10 = local_10 + 10;
    local_14 = local_14 + 10;
  } while (local_10 != 0xa0);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr2,0);
  return;
}
