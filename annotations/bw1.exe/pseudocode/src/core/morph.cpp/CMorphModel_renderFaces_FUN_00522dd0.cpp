// Name: core_morph.cpp_CMorphModel_renderFaces_FUN_00522dd0
// Address: 00522dd0
// Address Range: [[00522dd0, 00522ee0]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_CMorphModel_renderFaces_FUN_00522dd0(CMorphModel *this_ptr,float morph_t)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_morph_cpp_CMorphModel_renderFaces_FUN_00522dd0(CMorphModel *this_ptr,float morph_t)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  SMRGLPrimitivePoly *poly;
  double dVar5;
  int local_18;
  
  engine_drender_cpp_CDemonRenderer_setTextureCaptureMode_FUN_00484a40(DAT_00612560,0);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00483d80(DAT_00612560,1);
  iVar3 = 0xffff - _DAT_01c51cac;
  dVar5 = round
                    ((double)(morph_t * (float)_DAT_005ea8da * (_DAT_005ea8e2 - morph_t)));
  lVar2 = (longlong)iVar3 * (longlong)(int)ROUND(dVar5);
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0
            (DAT_00612560,(uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
  local_18 = -1;
  iVar3 = 0;
  if (0 < this_ptr->num_faces) {
    iVar4 = 0;
    do {
      iVar1 = *(int *)((int)&(((SMRGLPrimitiveTriangle *)(this_ptr->faces->vertices + -2))->base).
                             base.type + iVar4);
      if (iVar1 != local_18) {
        engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00484f00
                  (DAT_00612560,(SMRGLTextureBasic *)(this_ptr->textures + iVar1));
        local_18 = iVar1;
      }
      poly = (SMRGLPrimitivePoly *)
             ((int)&(((SMRGLPrimitiveTriangle *)(this_ptr->faces->vertices + -2))->base).base.type +
             iVar4);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x3c;
      engine_drender_cpp_CDemonRenderer_renderTexturedPoly_FUN_00482210(DAT_00612560,poly,0x267);
    } while (iVar3 < this_ptr->num_faces);
  }
  engine_drender_cpp_CDemonRenderer_processCapturedFaces_FUN_00484e00(DAT_00612560);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00483d80(DAT_00612560,0);
  engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_00483e20(DAT_00612560,1);
  return;
}
