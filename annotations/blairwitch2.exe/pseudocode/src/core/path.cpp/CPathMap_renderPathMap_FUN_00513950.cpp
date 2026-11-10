// Name: core_path.cpp_CPathMap_renderPathMap_FUN_00513950
// Address: 00513950
// Address Range: [[00513950, 00513d28]]
// Convention: __cdecl
// Signature: void __cdecl core_path_cpp_CPathMap_renderPathMap_FUN_00513950(CPathMap *this_ptr,int depth,int red,int green,int fog)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_path_cpp_CPathMap_renderPathMap_FUN_00513950(CPathMap *this_ptr,int depth,int red,int green,int fog)

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
  iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046b960(DAT_0060b280);
  if (iVar1 != 0) {
    return;
  }
  CStack_80.x = (float)(this_ptr->grid_origin).x * g_CDemonRaytraceInstance.adjusted_size.x +
                g_CDemonRaytraceInstance.bbox_min.x;
  CStack_80.y = 0.0;
  CStack_80.z = (float)(this_ptr->grid_origin).z * g_CDemonRaytraceInstance.adjusted_size.z +
                g_CDemonRaytraceInstance.bbox_min.z;
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0
            (DAT_0060b280,&CStack_80);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00
            (DAT_0060b280,(SMRGLTextureBasic *)0x61b2d0);
  _DAT_01e613f4 = 4;
  _DAT_01e613f8 = 0;
  _DAT_01e613fc = 0;
  _DAT_01e61400 = 0;
  _DAT_01e61404 = 0;
  _DAT_01e61408 = 0;
  _DAT_01e61414 = 1;
  _DAT_01e61420 = 2;
  _DAT_01e6140c = 0x800000;
  _DAT_01e61410 = 0x800000;
  _DAT_01e61418 = 0x800000;
  _DAT_01e6141c = 0x800000;
  _DAT_01e61424 = 0x800000;
  _DAT_01e61428 = 0x800000;
  _DAT_01e61430 = 0x800000;
  _DAT_01e61434 = 0x800000;
  _DAT_01e6142c = 3;
  engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0046b870(DAT_0060b280,0);
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
        fVar3 = (float10)_DAT_005e1841;
        fVar4 = (float10)g_CDemonRaytraceInstance.bbox_min.y * fVar3;
        aiStack_70[0] = *(int *)(iStack_1c + 0x30);
        fStack_44 = g_CDemonRaytraceInstance.adjusted_size.x * _DAT_005e1839;
        iStack_5c = iStack_74;
        aiStack_58[(uint)bVar2 * -2] = aiStack_70[(uint)bVar2 * -2];
        aiStack_58[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1] =
             aiStack_70[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
        afStack_40[0] = g_CDemonRaytraceInstance.adjusted_size.y * _DAT_005e1839;
        afStack_40[1] = g_CDemonRaytraceInstance.adjusted_size.z * _DAT_005e1839;
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
        engine_special_cpp_FUN_0055d723((SProjectedVertex *)*extraout_EDX,pCVar9);
        iStack_18 = CStack_50.x;
        pCVar9 = &CStack_50;
        fVar3 = (float10)CStack_50.x + (float10)fStack_68;
        round();
        CStack_50.x = (int)ROUND(fVar3);
        engine_special_cpp_FUN_0055d723((SProjectedVertex *)(*extraout_EDX_00 + 0x30),pCVar9);
        iStack_18 = CStack_50.z;
        pCVar9 = &CStack_50;
        fVar3 = (float10)CStack_50.z + (float10)afStack_64[1];
        round();
        CStack_50.z = (int)ROUND(fVar3);
        engine_special_cpp_FUN_0055d723((SProjectedVertex *)(*extraout_EDX_01 + 0x60),pCVar9);
        iStack_18 = CStack_50.x;
        fVar3 = (float10)CStack_50.x - (float10)fStack_68;
        uVar8 = round();
        CStack_50.x = (int)ROUND(fVar3);
        engine_special_cpp_FUN_0055d723
                  ((SProjectedVertex *)(*(int *)uVar8 + 0x90),
                   (CVector3i *)((ulonglong)uVar8 >> 0x20));
        this_ptr_00 = DAT_0060b280;
        *(int *)(DAT_0060b280->vertex_buffer_ptr + 0x20) = iStack_28;
        *(int *)(this_ptr_00->vertex_buffer_ptr + 0x24) = iStack_24;
        *(int *)(this_ptr_00->vertex_buffer_ptr + 0x28) = iStack_20;
        *(int *)(this_ptr_00->vertex_buffer_ptr + 0x2c) = iStack_2c;
        *(int *)(this_ptr_00->vertex_buffer_ptr + 0x50) = iStack_28;
        *(int *)(this_ptr_00->vertex_buffer_ptr + 0x54) = iStack_24;
        *(int *)(this_ptr_00->vertex_buffer_ptr + 0x58) = iStack_20;
        *(int *)(this_ptr_00->vertex_buffer_ptr + 0x5c) = iStack_2c;
        *(int *)(this_ptr_00->vertex_buffer_ptr + 0x80) = iStack_28;
        *(int *)(this_ptr_00->vertex_buffer_ptr + 0x84) = iStack_24;
        *(int *)(this_ptr_00->vertex_buffer_ptr + 0x88) = iStack_20;
        *(int *)(this_ptr_00->vertex_buffer_ptr + 0x8c) = iStack_2c;
        *(int *)(this_ptr_00->vertex_buffer_ptr + 0xb0) = iStack_28;
        *(int *)(this_ptr_00->vertex_buffer_ptr + 0xb4) = iStack_24;
        *(int *)(this_ptr_00->vertex_buffer_ptr + 0xb8) = iStack_20;
        *(int *)(this_ptr_00->vertex_buffer_ptr + 0xbc) = iStack_2c;
        engine_drender_cpp_CDemonRenderer_renderVertexAlphaPoly_FUN_0046aa00
                  (this_ptr_00,(SMRGLPrimitivePoly *)0x1e613f0);
      }
      aiStack_70[1] = aiStack_70[1] + 1;
      iStack_1c = iStack_1c + 400;
    } while (aiStack_70[1] < 100);
    iStack_74 = iStack_74 + 1;
    iStack_30 = iStack_30 + 4;
  } while (iStack_74 < 100);
  engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0046b870(DAT_0060b280,1);
  return;
}
