// Name: core_cloth.cpp_FUN_0043bae0
// Address: 0043bae0
// Address Range: [[0043bae0, 0043bf33]]
// Convention: unknown
// Signature: undefined core_cloth.cpp_FUN_0043bae0()

#include "nocturne.h"

void core_cloth_cpp_FUN_0043bae0
               (uint param_1,uint param_2,int unaff_EBX,uint param_4,
               byte *param_5,int param_6)

{
  int iVar1;
  CDemonRenderer *pCVar2;
  int iVar3;
  SMRGLPrimitiveQuad *pSVar4;
  int iVar5;
  byte *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  int unaff_EDI;
  byte bVar11;
  double dVar12;
  
  iVar8 = (int)param_5;
  bVar11 = 0;
  core_set_cpp_CDemonSet_rotateVertices_FUN_0056e7c0
            (g_CDemonSetPtr,*(int *)((int)param_5 + 0x104),*(int **)((int)param_5 + 0x10c));
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr,1);
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(g_CDemonRendererPtr,0xffff);
  engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr);
  dVar12 = crt_math_c_round_FUN_005fe6b0
                     ((double)(*(float *)((int)param_5 + 0x3ce88) * (float)65535));
  iVar3 = (int)ROUND(dVar12);
  if (iVar3 < 1000) {
    return;
  }
  if (iVar3 < 63000) {
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(g_CDemonRendererPtr,iVar3);
  }
  engine_texture_cpp_ensureTextureLoaded_FUN_005dd800((SMRGLTextureBasic *)((int)param_5 + 0x124));
  if (*(int *)((int)param_5 + 0x3ce84) == 0) {
    core_set_cpp_CDemonSet_lightVerticies_FUN_0056eac0
              (g_CDemonSetPtr,*(int *)((int)param_5 + 0x104),*(int *)((int)param_5 + 0x110) / 2,
               *(SInputFace **)((int)param_5 + 0x114),*(int *)((int)param_5 + 0x10c),4,0);
    if ((param_6 != 0) && (iVar8 = 0, iVar3 = (int)param_5, 0 < *(int *)((int)param_5 + 0x3f028))) {
      do {
        pCVar2 = g_CDemonRendererPtr;
        iVar9 = *(int *)(iVar3 + 0x3f02c);
        g_CDemonRendererPtr->vertex_buffer_ptr[iVar9].light = *(float *)(iVar3 + 0x3f98c);
        pCVar2->vertex_buffer_ptr[iVar9].color = *(int *)(iVar3 + 0x3fb1c);
        pCVar2->vertex_buffer_ptr[iVar9].fog = *(float *)(iVar3 + 0x3fcac);
        iVar8 = iVar8 + 1;
        iVar3 = iVar3 + 4;
      } while (iVar8 < *(int *)((int)param_5 + 0x3f028));
    }
    if (unaff_EDI < 63000) {
      iVar3 = *(int *)((int)param_5 + 0x110);
      iVar8 = 0x267;
      pSVar4 = *(SMRGLPrimitiveQuad **)((int)param_5 + 0x114);
    }
    else {
      iVar3 = *(int *)((int)param_5 + 0x110);
      iVar8 = -1;
      pSVar4 = *(SMRGLPrimitiveQuad **)((int)param_5 + 0x114);
    }
    core_set_cpp_CDemonSet_renderPrimitiveBatch_FUN_00570770(g_CDemonSetPtr,pSVar4,iVar3 / 2,iVar8);
    iVar3 = *(int *)((int)param_5 + 0x110) / 2;
    core_set_cpp_CDemonSet_lightVerticies_FUN_0056eac0
              (g_CDemonSetPtr,*(int *)((int)param_5 + 0x104),iVar3,
               (SInputFace *)(*(int *)((int)param_5 + 0x114) + iVar3 * 0x48),
               *(int *)((int)param_5 + 0x10c),4,0);
    if (62999 < unaff_EBX) {
      iVar3 = *(int *)((int)param_5 + 0x110) / 2;
      iVar8 = -1;
      pSVar4 = (SMRGLPrimitiveQuad *)(iVar3 * 0x48 + *(int *)((int)param_5 + 0x114));
      goto LAB_0043bcda;
    }
    iVar3 = *(int *)((int)param_5 + 0x110) / 2;
    pSVar4 = (SMRGLPrimitiveQuad *)(*(int *)((int)param_5 + 0x114) + iVar3 * 0x48);
  }
  else {
    core_set_cpp_CDemonSet_lightVerticies_FUN_0056eac0
              (g_CDemonSetPtr,*(int *)((int)param_5 + 0x104),*(int *)((int)param_5 + 0x110),
               *(SInputFace **)((int)param_5 + 0x114),*(int *)((int)param_5 + 0x10c),4,0);
    if ((param_6 != 0) && (iVar9 = 0, iVar3 = (int)param_5, 0 < *(int *)((int)param_5 + 0x3f028))) {
      do {
        pCVar2 = g_CDemonRendererPtr;
        iVar5 = *(int *)(iVar3 + 0x3f02c);
        g_CDemonRendererPtr->vertex_buffer_ptr[iVar5].light = *(float *)(iVar3 + 0x3f98c);
        pCVar2->vertex_buffer_ptr[iVar5].color = *(int *)(iVar3 + 0x3fb1c);
        pCVar2->vertex_buffer_ptr[iVar5].fog = *(float *)(iVar3 + 0x3fcac);
        iVar9 = iVar9 + 1;
        iVar3 = iVar3 + 4;
      } while (iVar9 < *(int *)((int)param_5 + 0x3f028));
    }
    if (unaff_EDI < 63000) {
      iVar9 = 0x267;
      iVar3 = *(int *)((int)param_5 + 0x110);
      pSVar4 = *(SMRGLPrimitiveQuad **)((int)param_5 + 0x114);
    }
    else {
      iVar9 = -1;
      iVar3 = *(int *)((int)param_5 + 0x110);
      pSVar4 = *(SMRGLPrimitiveQuad **)((int)param_5 + 0x114);
    }
    core_set_cpp_CDemonSet_renderPrimitiveBatch_FUN_00570770(g_CDemonSetPtr,pSVar4,iVar3,iVar9);
    iVar3 = *(int *)((int)param_5 + 0x110);
    if (1000 < iVar3) {
      iVar3 = 1000;
    }
    iVar9 = 0;
    if (0 < iVar3) {
      param_5 = &DAT_00827500;
      do {
        iVar7 = *(int *)(iVar8 + 0x114) + iVar9 * 0x48;
        *(uint *)(param_5 + 4) = *(uint *)(iVar7 + 4);
        iVar5 = 0;
        puVar6 = param_5;
        if (0 < *(int *)(iVar7 + 4)) {
          do {
            iVar1 = iVar7 + ((*(int *)(iVar7 + 4) - iVar5) + -1) * 0xc;
            puVar10 = (uint *)(iVar1 + 0x1c + (uint)bVar11 * -8);
            *(uint *)(puVar6 + 0x18) = *(uint *)(iVar1 + 0x18);
            *(uint *)(puVar6 + (uint)bVar11 * -8 + 0x1c) = *puVar10;
            *(uint *)((int)(puVar6 + (uint)bVar11 * -8 + 0x1c) + ((uint)bVar11 * -2 + 1) * 4)
                 = puVar10[(uint)bVar11 * -2 + 1];
            iVar5 = iVar5 + 1;
            puVar6 = puVar6 + 0xc;
          } while (iVar5 < *(int *)(iVar7 + 4));
        }
        param_5 = param_5 + 0x48;
        iVar9 = iVar9 + 1;
      } while (iVar9 < iVar3);
    }
    iVar9 = iVar3;
    core_set_cpp_CDemonSet_lightVerticies_FUN_0056eac0
              (g_CDemonSetPtr,*(int *)(iVar8 + 0x104),iVar3,(SInputFace *)&DAT_00827500,
               *(int *)(iVar8 + 0x10c),4,0);
    if (62999 < iVar9) {
      iVar8 = -1;
      pSVar4 = (SMRGLPrimitiveQuad *)&DAT_00827500;
      goto LAB_0043bcda;
    }
    pSVar4 = (SMRGLPrimitiveQuad *)&DAT_00827500;
  }
  iVar8 = 0x267;
LAB_0043bcda:
  core_set_cpp_CDemonSet_renderPrimitiveBatch_FUN_00570770(g_CDemonSetPtr,pSVar4,iVar3,iVar8);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr,0);
  engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0(g_CDemonRendererPtr,1);
  return;
}
