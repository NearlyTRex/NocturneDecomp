// Name: core_setutil.cpp_C3DSLight_renderVolumetricSphere_FUN_00587b50
// Address: 00587b50
// Address Range: [[00587b50, 00587de0]]
// Convention: __cdecl
// Signature: void core_setutil.cpp_C3DSLight_renderVolumetricSphere_FUN_00587b50(C3DSLight * this_ptr)

#include "nocturne.h"

void __cdecl core_setutil_cpp_C3DSLight_renderVolumetricSphere_FUN_00587b50(C3DSLight *this_ptr)

{
  SRenderVertex *pSVar1;
  SRenderVertex *pSVar2;
  int iVar3;
  CDemonRenderer *pCVar4;
  int *piVar5;
  BADSPACEBASE *in_ESP;
  int iVar6;
  int iVar7;
  int iVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  double dVar14;
  int iStack00000010;
  int iStack00000014;
  int in_stack_00000018;
  byte local_54 [12];
  int local_48;
  int local_44;
  float local_40;
  float local_3c;
  float fStack_38;
  int iStack_34;
  int iStack_30;
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
    iVar8 = -4;
    iVar6 = local_14 + -0xc0;
    do {
      fVar9 = (float10)local_8 * (float10)0.0625f * (float10)3.1415926535000001 *
              (float10)2;
      fVar10 = (float10)fsin(fVar9);
      fVar9 = (float10)fcos(fVar9);
      fVar11 = (float10)this_ptr->atten_end * (float10)0.25;
      fVar12 = (float10)iVar8 * (float10)0.25f * (float10)3.1415926535000001 *
               (float10)0.5;
      fVar13 = (float10)fcos(fVar12);
      fVar12 = (float10)fsin(fVar12);
      fStack_38 = (float)(fVar9 * fVar11 * fVar13);
      local_40 = (float)(fVar10 * fVar11 * fVar13);
      local_3c = (float)(fVar12 * fVar11);
      local_54._8_4_ = (uint)ROUND(local_40 * 256f);
      local_48 = (int)ROUND(local_3c * 256f);
      local_44 = (int)ROUND(fStack_38 * 256f);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                ((SProjectedVertex *)
                 ((int)&(g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex).transformed_x +
                 iVar6),(CVector3i *)(local_54 + 8));
      pCVar4 = g_CDemonRendererPtr;
      *(uint *)((int)&g_CDemonRendererPtr->vertex_buffer_ptr->u + iVar6) = 0x800000;
      pSVar1 = pCVar4->vertex_buffer_ptr;
      *(uint *)((int)&pSVar1->v + iVar6) = 0x800000;
      fVar9 = (float10)(this_ptr->color).r * (float10)255f;
      pSVar2 = pCVar4->vertex_buffer_ptr;
      dVar14 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(pCVar4,pSVar1));
      piVar5 = (int *)((ulonglong)dVar14 >> 0x20);
      *(int *)((int)&pSVar2->light + iVar6) = (int)ROUND(fVar9);
      iVar3 = *piVar5;
      fVar9 = (float10)(this_ptr->color).g * (float10)255f;
      dVar14 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(piVar5,iVar3));
      piVar5 = (int *)((ulonglong)dVar14 >> 0x20);
      iVar7 = (int)ROUND(fVar9);
      *(int *)(iVar3 + iVar6 + 0x24) = iVar7;
      fVar9 = (float10)(this_ptr->color).b * (float10)255f;
      iVar3 = *piVar5;
      dVar14 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(piVar5,iVar7));
      iVar8 = iVar8 + 1;
      *(int *)(iVar6 + 0x28 + iVar3) = (int)ROUND(fVar9);
      iVar6 = iVar6 + 0x30;
    } while (iVar8 < 5);
  } while (iVar7 + 1 < 0x11);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
            ((CDemonRenderer *)((ulonglong)dVar14 >> 0x20),&SMRGLTextureBasic_006817fc);
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(g_CDemonRendererPtr,0x4000);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,0);
  local_54._0_4_ = 4;
  local_44 = 0;
  local_48 = 0;
  local_54._8_4_ = 0;
  local_54._4_4_ = 0;
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr,1);
  iStack00000010 = 10;
  iStack00000014 = 0;
  do {
    iVar8 = iStack00000014;
    iVar6 = iStack00000010;
    iVar7 = -4;
    do {
      local_3c = (float)(iVar8 + iVar7);
      fStack_38 = (float)(iVar6 + iVar7);
      iVar7 = iVar7 + 1;
      iStack_34 = iVar6 + iVar7;
      iStack_30 = iVar8 + iVar7;
      engine_drender_cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0
                (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)local_54);
    } while (iVar7 < 4);
    in_stack_00000018 = in_stack_00000018 + 10;
    iStack00000014 = iStack00000014 + 10;
  } while (in_stack_00000018 != 0xa0);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr,0);
  return;
}
