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
  BADSPACEBASE *in_ESP;
  int iVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  double dVar11;
  int in_stack_00000008;
  SMRGLHeaderPrimitive local_64;
  CVector3i local_4c;
  char *local_40;
  float local_3c;
  float fStack_38;
  int local_14;
  int local_8;
  
  if (ABS(this_ptr->atten_end) == 0.0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr,&this_ptr->pos);
  local_8 = 0;
  local_14 = 0;
  do {
    iVar5 = -4;
    iVar4 = local_14 + -0xc0;
    do {
      fVar6 = (float10)local_8 * (float10)0.0625f * (float10)3.1415926535000001 *
              (float10)2;
      fVar7 = (float10)fsin(fVar6);
      fVar6 = (float10)fcos(fVar6);
      fVar8 = (float10)this_ptr->atten_end * (float10)0.25;
      fVar9 = (float10)iVar5 * (float10)0.25f * (float10)3.1415926535000001 *
              (float10)0.5;
      fVar10 = (float10)fcos(fVar9);
      fVar9 = (float10)fsin(fVar9);
      fStack_38 = (float)(fVar6 * fVar8 * fVar10);
      local_40 = (char *)(float)(fVar7 * fVar8 * fVar10);
      local_3c = (float)(fVar9 * fVar8);
      local_4c.x = (int)ROUND((float)local_40 * 256f);
      local_4c.y = (int)ROUND(local_3c * 256f);
      local_4c.z = (int)ROUND(fStack_38 * 256f);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                ((SProjectedVertex *)
                 ((int)&(g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex).transformed_x +
                 iVar4),&local_4c);
      pCVar3 = g_CDemonRendererPtr;
      *(uint *)((int)&g_CDemonRendererPtr->vertex_buffer_ptr->u + iVar4) = 0x800000;
      *(uint *)((int)&pCVar3->vertex_buffer_ptr->v + iVar4) = 0x800000;
      pSVar1 = pCVar3->vertex_buffer_ptr;
      dVar11 = crt_math_c_round_FUN_005fe6b0((double)((this_ptr->color).r * 255f));
      *(int *)((int)&pSVar1->light + iVar4) = (int)ROUND(dVar11);
      iVar2 = *extraout_EDX;
      dVar11 = crt_math_c_round_FUN_005fe6b0((double)((this_ptr->color).g * 255f));
      local_8 = (int)ROUND(dVar11);
      *(int *)(iVar2 + iVar4 + 0x24) = local_8;
      iVar2 = *extraout_EDX_00;
      dVar11 = crt_math_c_round_FUN_005fe6b0((double)((this_ptr->color).b * 255f));
      iVar5 = iVar5 + 1;
      *(int *)(iVar4 + 0x28 + iVar2) = (int)ROUND(dVar11);
      iVar4 = iVar4 + 0x30;
    } while (iVar5 < 5);
    local_8 = local_8 + 1;
    local_14 = local_14 + 0x1e0;
  } while (local_8 < 0x11);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
            (this_ptr_00,&SMRGLTextureBasic_006817fc);
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(g_CDemonRendererPtr,0x4000);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,0);
  local_64.base.type = 4;
  local_64.surface_normal.C = 0;
  local_64.surface_normal.B = 0;
  local_64.surface_normal.A = 0;
  local_64.base.count = 0;
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr,1);
  this_ptr = (C3DSLight *)0x0;
  do {
    iVar4 = -4;
    do {
      local_4c.x = (int)(this_ptr->name + iVar4 + -4);
      local_4c.y = iVar4 + 10;
      iVar5 = iVar4 + 1;
      local_4c.z = iVar4 + 0xb;
      local_40 = this_ptr->name + iVar4 + -3;
      engine_drender_cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0
                (g_CDemonRendererPtr,&local_64);
      iVar4 = iVar5;
    } while (iVar5 < 4);
    in_stack_00000008 = in_stack_00000008 + 10;
    this_ptr = (C3DSLight *)(this_ptr->name + 6);
  } while (in_stack_00000008 != 0xa0);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr,0);
  return;
}
