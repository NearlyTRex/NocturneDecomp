// Name: core_path.cpp_CPathMap_renderPathMap_FUN_00513950
// Address: 00513950
// Address Range: [[00513950, 00513d28]]
// Convention: __cdecl
// Signature: void __cdecl core_path_cpp_CPathMap_renderPathMap_FUN_00513950(CPathMap *this_ptr,int depth,int red,int green,int fog)

#include "nocturne.h"

void __cdecl core_path_cpp_CPathMap_renderPathMap_FUN_00513950(CPathMap *this_ptr,int depth,int red,int green,int fog)

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
  iVar7 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046b960(g_CDemonRenderer_PTR_0060b280)
  ;
  if (iVar7 != 0) {
    return;
  }
  CStack_80.x = (float)(this_ptr->grid_origin).x * g_CDemonRaytraceInstance.adjusted_size.x +
                g_CDemonRaytraceInstance.bbox_min.x;
  CStack_80.y = 0.0;
  CStack_80.z = (float)(this_ptr->grid_origin).z * g_CDemonRaytraceInstance.adjusted_size.z +
                g_CDemonRaytraceInstance.bbox_min.z;
  uStack_8c = 0x5139b3;
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0
            (g_CDemonRenderer_PTR_0060b280,&CStack_80);
  uStack_8c = 0x5139cc;
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00
            (g_CDemonRenderer_PTR_0060b280,&g_SMRGLTextureBasic_0061b2d0);
  g_SMRGLPrimitiveQuad_01e613f0.base.base.count = 4;
  g_SMRGLPrimitiveQuad_01e613f0.base.surface_normal.A.i = 0;
  g_SMRGLPrimitiveQuad_01e613f0.base.surface_normal.B.i = 0;
  g_SMRGLPrimitiveQuad_01e613f0.base.surface_normal.C.i = 0;
  g_SMRGLPrimitiveQuad_01e613f0.base.surface_normal.D.i = 0;
  g_SMRGLPrimitiveQuad_01e613f0.vertices[0].vertex_index = 0;
  g_SMRGLPrimitiveQuad_01e613f0.vertices[1].vertex_index = 1;
  g_SMRGLPrimitiveQuad_01e613f0.vertices[2].vertex_index = 2;
  g_SMRGLPrimitiveQuad_01e613f0.vertices[0].texture_u = 0x800000;
  g_SMRGLPrimitiveQuad_01e613f0.vertices[0].texture_v = 0x800000;
  g_SMRGLPrimitiveQuad_01e613f0.vertices[1].texture_u = 0x800000;
  g_SMRGLPrimitiveQuad_01e613f0.vertices[1].texture_v = 0x800000;
  g_SMRGLPrimitiveQuad_01e613f0.vertices[2].texture_u = 0x800000;
  g_SMRGLPrimitiveQuad_01e613f0.vertices[2].texture_v = 0x800000;
  g_SMRGLPrimitiveQuad_01e613f0.vertices[3].texture_u = 0x800000;
  g_SMRGLPrimitiveQuad_01e613f0.vertices[3].texture_v = 0x800000;
  g_SMRGLPrimitiveQuad_01e613f0.vertices[3].vertex_index = 3;
  uStack_8c = 0x513a53;
  engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0046b870
            (g_CDemonRenderer_PTR_0060b280,0);
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
      pCVar6 = g_CDemonRenderer_PTR_0060b280;
      dVar10 = 256;
      if ((-1000 < *(int *)(iStack_1c + 0x9c70)) && (*(int *)(iStack_1c + 0x9c70) < 1000)) {
        dVar3 = (double)g_CDemonRaytraceInstance.bbox_min.y * 256;
        fStack_70 = *(float *)(iStack_1c + 0x30);
        fStack_44 = g_CDemonRaytraceInstance.adjusted_size.x * 256.0f;
        CStack_64.z = (int)fStack_74;
        (&fStack_58)[(uint)bVar8 * -2] = (&fStack_70)[(uint)bVar8 * -2];
        (&fStack_58)[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
             afStack_6c[(uint)bVar8 * -2 + (uint)bVar8 * -2];
        afStack_40[0] = g_CDemonRaytraceInstance.adjusted_size.y * 256.0f;
        afStack_40[1] = g_CDemonRaytraceInstance.adjusted_size.z * 256.0f;
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
        uStack_8c = 0x513baa;
        dVar9 = round((double)fVar2);
        iStack_50 = (int)ROUND(dVar9);
        pCVar11 = (CVector3i *)0x513bb7;
        dVar10 = round(dVar5 * dVar4 + dVar3 + dVar10);
        fStack_58 = (float)(int)ROUND(dVar10);
        engine_special_cpp_transformAndProjectPoint_FUN_0055d723
                  (&pCVar6->vertex_buffer_ptr->projected_vertex,pCVar11);
        pCVar6 = g_CDemonRenderer_PTR_0060b280;
        fStack_24 = (float)CStack_64.z;
        pCVar11 = (CVector3i *)0x513bea;
        dVar10 = round((double)((float)CStack_64.z + fStack_74));
        CStack_64.y = (int)ROUND(dVar10);
        engine_special_cpp_transformAndProjectPoint_FUN_0055d723
                  (&pCVar6->vertex_buffer_ptr[1].projected_vertex,pCVar11);
        pCVar6 = g_CDemonRenderer_PTR_0060b280;
        fStack_28 = fStack_58;
        pCVar11 = (CVector3i *)0x513c20;
        dVar10 = round((double)((float)(int)fStack_58 + fStack_70));
        CStack_64.z = (int)ROUND(dVar10);
        engine_special_cpp_transformAndProjectPoint_FUN_0055d723
                  (&pCVar6->vertex_buffer_ptr[2].projected_vertex,pCVar11);
        pCVar6 = g_CDemonRenderer_PTR_0060b280;
        fStack_2c = (float)CStack_64.x;
        dVar10 = round((double)((float)CStack_64.x - CStack_80.y));
        afStack_6c[1] = (float)(int)ROUND(dVar10);
        engine_special_cpp_transformAndProjectPoint_FUN_0055d723
                  (&pCVar6->vertex_buffer_ptr[3].projected_vertex,&CStack_64);
        pCVar6 = g_CDemonRenderer_PTR_0060b280;
        g_CDemonRenderer_PTR_0060b280->vertex_buffer_ptr->r = (int)afStack_40[0];
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
        engine_drender_cpp_CDemonRenderer_renderVertexAlphaPoly_FUN_0046aa00
                  (pCVar6,(SMRGLPrimitivePoly *)&g_SMRGLPrimitiveQuad_01e613f0);
      }
      afStack_6c[0] = (float)((int)afStack_6c[0] + 1);
      iStack_1c = iStack_1c + 400;
    } while ((int)afStack_6c[0] < 100);
    fStack_74 = (float)((int)fStack_74 + 1);
    iStack_30 = iStack_30 + 4;
  } while ((int)fStack_74 < 100);
  uStack_8c = 0x513af0;
  engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0046b870
            (g_CDemonRenderer_PTR_0060b280,1);
  return;
}
