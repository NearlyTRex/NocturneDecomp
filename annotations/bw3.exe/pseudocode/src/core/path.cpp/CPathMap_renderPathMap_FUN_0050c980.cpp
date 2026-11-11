// Name: core_path.cpp_CPathMap_renderPathMap_FUN_0050c980
// Address: 0050c980
// Address Range: [[0050c980, 0050cd58]]
// Convention: __cdecl
// Signature: void __cdecl core_path_cpp_CPathMap_renderPathMap_FUN_0050c980(CPathMap *this_ptr,int depth,int red,int green,int fog)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_path_cpp_CPathMap_renderPathMap_FUN_0050c980(CPathMap *this_ptr,int depth,int red,int green,int fog)

{
  CDemonRenderer *this_ptr_00;
  int iVar1;
  uint *extraout_EDX;
  int *extraout_EDX_00;
  int *extraout_EDX_01;
  byte bVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  ulonglong uVar8;
  int aiStackY_105c [3];
  float afStackY_1050 [3];
  int aiStackY_1044 [6];
  float afStackY_102c [1001];
  CVector3i *pCVar9;
  CVector3f CStack_80;
  int iStack_74;
  int aiStack_70 [2];
  float fStack_68;
  float afStack_64 [2];
  int iStack_5c;
  int aiStack_58 [2];
  CVector3i CStack_50;
  float fStack_44;
  float afStack_40 [4];
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  
  bVar2 = 0;
  iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046d540(DAT_005f2afc);
  if (iVar1 != 0) {
    return;
  }
  CStack_80.x = (float)(this_ptr->grid_origin).x * g_CDemonRaytraceInstance.adjusted_size.x +
                g_CDemonRaytraceInstance.bbox_min.x;
  CStack_80.y = 0.0;
  CStack_80.z = (float)(this_ptr->grid_origin).z * g_CDemonRaytraceInstance.adjusted_size.z +
                g_CDemonRaytraceInstance.bbox_min.z;
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
            (DAT_005f2afc,&CStack_80);
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
  engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0046d450(DAT_005f2afc,0);
  iStack_28 = depth << 8;
  iStack_24 = red << 8;
  iStack_20 = green << 8;
  iStack_74 = 0;
  iStack_30 = 0;
  iStack_2c = fog << 8;
  do {
    aiStack_70[1] = 0;
    iStack_1c = (int)(this_ptr->height_cache + -1) + 0x160 + iStack_30;
    do {
      if ((-1000 < *(int *)(iStack_1c + 0x9c70)) && (*(int *)(iStack_1c + 0x9c70) < 1000)) {
        fVar3 = (float10)_DAT_005cb904;
        fVar4 = (float10)g_CDemonRaytraceInstance.bbox_min.y * fVar3;
        aiStack_70[0] = *(int *)(iStack_1c + 0x30);
        fStack_44 = g_CDemonRaytraceInstance.adjusted_size.x * _DAT_005cb8fc;
        iStack_5c = iStack_74;
        aiStack_58[(uint)bVar2 * -2] = aiStack_70[(uint)bVar2 * -2];
        aiStack_58[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1] =
             aiStack_70[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
        afStack_40[0] = g_CDemonRaytraceInstance.adjusted_size.y * _DAT_005cb8fc;
        afStack_40[1] = g_CDemonRaytraceInstance.adjusted_size.z * _DAT_005cb8fc;
        iStack_18 = iStack_5c;
        fStack_68 = fStack_44;
        afStack_64[(uint)bVar2 * -2] = afStack_40[(uint)bVar2 * -2];
        afStack_64[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1] =
             afStack_40[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
        fVar5 = (float10)iStack_18 * (float10)fStack_68;
        fVar6 = (float10)aiStack_58[0] * (float10)afStack_64[0];
        iStack_18 = aiStack_58[1];
        fVar7 = (float10)aiStack_58[1] * (float10)afStack_64[1];
        round();
        CStack_50.x = (int)ROUND(fVar5);
        pCVar9 = &CStack_50;
        fVar6 = fVar6 + fVar4;
        round();
        fVar6 = fVar6 + fVar3;
        CStack_50.z = (int)ROUND(fVar7);
        round();
        CStack_50.y = (int)ROUND(fVar6);
        engine_special_cpp_FUN_005632a3((SProjectedVertex *)*extraout_EDX,pCVar9);
        iStack_18 = CStack_50.x;
        pCVar9 = &CStack_50;
        fVar3 = (float10)CStack_50.x + (float10)fStack_68;
        round();
        CStack_50.x = (int)ROUND(fVar3);
        engine_special_cpp_FUN_005632a3((SProjectedVertex *)(*extraout_EDX_00 + 0x30),pCVar9);
        iStack_18 = CStack_50.z;
        pCVar9 = &CStack_50;
        fVar3 = (float10)CStack_50.z + (float10)afStack_64[1];
        round();
        CStack_50.z = (int)ROUND(fVar3);
        engine_special_cpp_FUN_005632a3((SProjectedVertex *)(*extraout_EDX_01 + 0x60),pCVar9);
        iStack_18 = CStack_50.x;
        fVar3 = (float10)CStack_50.x - (float10)fStack_68;
        uVar8 = round();
        CStack_50.x = (int)ROUND(fVar3);
        engine_special_cpp_FUN_005632a3
                  ((SProjectedVertex *)(*(int *)uVar8 + 0x90),
                   (CVector3i *)((ulonglong)uVar8 >> 0x20));
        this_ptr_00 = DAT_005f2afc;
        DAT_005f2afc->vertex_buffer_ptr->r = iStack_28;
        this_ptr_00->vertex_buffer_ptr->g = iStack_24;
        this_ptr_00->vertex_buffer_ptr->b = iStack_20;
        this_ptr_00->vertex_buffer_ptr->a = iStack_2c;
        this_ptr_00->vertex_buffer_ptr[1].r = iStack_28;
        this_ptr_00->vertex_buffer_ptr[1].g = iStack_24;
        this_ptr_00->vertex_buffer_ptr[1].b = iStack_20;
        this_ptr_00->vertex_buffer_ptr[1].a = iStack_2c;
        this_ptr_00->vertex_buffer_ptr[2].r = iStack_28;
        this_ptr_00->vertex_buffer_ptr[2].g = iStack_24;
        this_ptr_00->vertex_buffer_ptr[2].b = iStack_20;
        this_ptr_00->vertex_buffer_ptr[2].a = iStack_2c;
        this_ptr_00->vertex_buffer_ptr[3].r = iStack_28;
        this_ptr_00->vertex_buffer_ptr[3].g = iStack_24;
        this_ptr_00->vertex_buffer_ptr[3].b = iStack_20;
        this_ptr_00->vertex_buffer_ptr[3].a = iStack_2c;
        engine_drender_cpp_CDemonRenderer_renderVertexAlphaPoly_FUN_0046c5e0
                  (this_ptr_00,(SMRGLPrimitivePoly *)0x1ed2a30);
      }
      aiStack_70[1] = aiStack_70[1] + 1;
      iStack_1c = iStack_1c + 400;
    } while (aiStack_70[1] < 100);
    iStack_74 = iStack_74 + 1;
    iStack_30 = iStack_30 + 4;
  } while (iStack_74 < 100);
  engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0046d450(DAT_005f2afc,1);
  return;
}
