// Name: core_path.cpp_CPathMap_renderPathMap_FUN_0050c980
// Address: 0050c980
// Address Range: [[0050c980, 0050cd58]]
// Convention: __cdecl
// Signature: void __cdecl core_path_cpp_CPathMap_renderPathMap_FUN_0050c980(CPathMap *this_ptr,int depth,int red,int green,int fog)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_path_cpp_CPathMap_renderPathMap_FUN_0050c980(CPathMap *this_ptr,int depth,int red,int green,int fog)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  CDemonRenderer *pCVar6;
  int iVar7;
  byte bVar8;
  double dVar9;
  double dVar10;
  float afStackY_105c [1007];
  CVector3i *pCVar11;
  uint uStack_8c;
  CVector3f CStack_80;
  float fStack_74;
  float fStack_70;
  float afStack_6c [2];
  CVector3i CStack_64;
  float fStack_58;
  int iStack_54;
  int iStack_50;
  float fStack_44;
  float afStack_40 [2];
  int iStack_38;
  int iStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  int iStack_20;
  int iStack_1c;
  float fStack_18;
  
  bVar8 = 0;
  iVar7 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046d540(DAT_005f2afc);
  if (iVar7 != 0) {
    return;
  }
  CStack_80.x = (float)(this_ptr->grid_origin).x * g_CDemonRaytraceInstance.adjusted_size.x +
                g_CDemonRaytraceInstance.bbox_min.x;
  CStack_80.y = 0.0;
  CStack_80.z = (float)(this_ptr->grid_origin).z * g_CDemonRaytraceInstance.adjusted_size.z +
                g_CDemonRaytraceInstance.bbox_min.z;
  uStack_8c = 0x50c9e3;
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
            (DAT_005f2afc,&CStack_80);
  uStack_8c = 0x50c9fc;
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
            (DAT_005f2afc,(SMRGLTextureBasic *)0x60360c);
  _DAT_01ed2a34 = 4;
  _DAT_01ed2a38 = 0;
  _DAT_01ed2a3c = 0;
  _DAT_01ed2a40 = 0;
  _DAT_01ed2a44 = 0;
  _DAT_01ed2a48 = 0;
  _DAT_01ed2a54 = 1;
  _DAT_01ed2a60 = 2;
  _DAT_01ed2a4c = 0x800000;
  _DAT_01ed2a50 = 0x800000;
  _DAT_01ed2a58 = 0x800000;
  _DAT_01ed2a5c = 0x800000;
  _DAT_01ed2a64 = 0x800000;
  _DAT_01ed2a68 = 0x800000;
  _DAT_01ed2a70 = 0x800000;
  _DAT_01ed2a74 = 0x800000;
  _DAT_01ed2a6c = 3;
  uStack_8c = 0x50ca83;
  engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0046d450(DAT_005f2afc,0);
  fStack_28 = (float)(depth << 8);
  fStack_24 = (float)(red << 8);
  iStack_20 = green << 8;
  fStack_74 = 0.0;
  iStack_30 = 0;
  fStack_2c = (float)(fog << 8);
  do {
    afStack_6c[0] = 0.0;
    iStack_1c = (int)(this_ptr->height_cache + -1) + 0x160 + iStack_30;
    do {
      pCVar6 = DAT_005f2afc;
      dVar10 = _DAT_005cb904;
      if ((-1000 < *(int *)(iStack_1c + 0x9c70)) && (*(int *)(iStack_1c + 0x9c70) < 1000)) {
        dVar3 = (double)g_CDemonRaytraceInstance.bbox_min.y * _DAT_005cb904;
        fStack_70 = *(float *)(iStack_1c + 0x30);
        fStack_44 = g_CDemonRaytraceInstance.adjusted_size.x * _DAT_005cb8fc;
        CStack_64.z = (int)fStack_74;
        (&fStack_58)[(uint)bVar8 * -2] = (&fStack_70)[(uint)bVar8 * -2];
        (&fStack_58)[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
             afStack_6c[(uint)bVar8 * -2 + (uint)bVar8 * -2];
        afStack_40[0] = g_CDemonRaytraceInstance.adjusted_size.y * _DAT_005cb8fc;
        afStack_40[1] = g_CDemonRaytraceInstance.adjusted_size.z * _DAT_005cb8fc;
        fStack_18 = (float)CStack_64.z;
        afStack_6c[1] = fStack_44;
        *(float *)((int)&CStack_64 + (uint)bVar8 * -8) = afStack_40[(uint)bVar8 * -2];
        (&fStack_58)[(uint)bVar8 * -2 + (uint)bVar8 * -2 + -2] =
             afStack_40[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
        fVar1 = (float)(int)fStack_18;
        dVar5 = (double)(int)fStack_58;
        dVar4 = (double)(float)CStack_64.x;
        fStack_18 = (float)iStack_54;
        fVar2 = (float)iStack_54 * (float)CStack_64.y;
        dVar9 = round((double)(fVar1 * afStack_6c[1]));
        iStack_54 = (int)ROUND(dVar9);
        uStack_8c = 0x50cbda;
        dVar9 = round((double)fVar2);
        iStack_50 = (int)ROUND(dVar9);
        pCVar11 = (CVector3i *)0x50cbe7;
        dVar10 = round(dVar5 * dVar4 + dVar3 + dVar10);
        fStack_58 = (float)(int)ROUND(dVar10);
        engine_special_cpp_transformAndProjectPoint_FUN_005632a3
                  (&pCVar6->vertex_buffer_ptr->projected_vertex,pCVar11);
        pCVar6 = DAT_005f2afc;
        fStack_24 = (float)CStack_64.z;
        pCVar11 = (CVector3i *)0x50cc1a;
        dVar10 = round((double)((float)CStack_64.z + fStack_74));
        CStack_64.y = (int)ROUND(dVar10);
        engine_special_cpp_transformAndProjectPoint_FUN_005632a3
                  (&pCVar6->vertex_buffer_ptr[1].projected_vertex,pCVar11);
        pCVar6 = DAT_005f2afc;
        fStack_28 = fStack_58;
        pCVar11 = (CVector3i *)0x50cc50;
        dVar10 = round((double)((float)(int)fStack_58 + fStack_70));
        CStack_64.z = (int)ROUND(dVar10);
        engine_special_cpp_transformAndProjectPoint_FUN_005632a3
                  (&pCVar6->vertex_buffer_ptr[2].projected_vertex,pCVar11);
        pCVar6 = DAT_005f2afc;
        fStack_2c = (float)CStack_64.x;
        dVar10 = round((double)((float)CStack_64.x - CStack_80.y));
        afStack_6c[1] = (float)(int)ROUND(dVar10);
        engine_special_cpp_transformAndProjectPoint_FUN_005632a3
                  (&pCVar6->vertex_buffer_ptr[3].projected_vertex,&CStack_64);
        pCVar6 = DAT_005f2afc;
        DAT_005f2afc->vertex_buffer_ptr->r = (int)afStack_40[0];
        pCVar6->vertex_buffer_ptr->g = (int)afStack_40[1];
        pCVar6->vertex_buffer_ptr->b = iStack_38;
        pCVar6->vertex_buffer_ptr->a = (int)fStack_44;
        pCVar6->vertex_buffer_ptr[1].r = (int)afStack_40[0];
        pCVar6->vertex_buffer_ptr[1].g = (int)afStack_40[1];
        pCVar6->vertex_buffer_ptr[1].b = iStack_38;
        pCVar6->vertex_buffer_ptr[1].a = (int)fStack_44;
        pCVar6->vertex_buffer_ptr[2].r = (int)afStack_40[0];
        pCVar6->vertex_buffer_ptr[2].g = (int)afStack_40[1];
        pCVar6->vertex_buffer_ptr[2].b = iStack_38;
        pCVar6->vertex_buffer_ptr[2].a = (int)fStack_44;
        pCVar6->vertex_buffer_ptr[3].r = (int)afStack_40[0];
        pCVar6->vertex_buffer_ptr[3].g = (int)afStack_40[1];
        pCVar6->vertex_buffer_ptr[3].b = iStack_38;
        pCVar6->vertex_buffer_ptr[3].a = (int)fStack_44;
        engine_drender_cpp_CDemonRenderer_renderVertexAlphaPoly_FUN_0046c5e0
                  (pCVar6,(SMRGLPrimitivePoly *)0x1ed2a30);
      }
      afStack_6c[0] = (float)((int)afStack_6c[0] + 1);
      iStack_1c = iStack_1c + 400;
    } while ((int)afStack_6c[0] < 100);
    fStack_74 = (float)((int)fStack_74 + 1);
    iStack_30 = iStack_30 + 4;
  } while ((int)fStack_74 < 100);
  uStack_8c = 0x50cb20;
  engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0046d450(DAT_005f2afc,1);
  return;
}
