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
  int iVar2;
  int iVar3;
  SMRGLPrimitivePoly *poly;
  float10 fVar4;
  int local_14;
  
  engine_drender_cpp_CDemonRenderer_setTextureCaptureMode_FUN_00484a40(DAT_00612560,0);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00483d80(DAT_00612560,1);
  fVar4 = (float10)morph_t * (float10)_DAT_005ea8da * ((float10)_DAT_005ea8e2 - (float10)morph_t);
  iVar2 = round();
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0
            (DAT_00612560,
             (uint)((longlong)iVar2 * (longlong)(int)ROUND(fVar4)) >> 0x10 |
             (int)((ulonglong)((longlong)iVar2 * (longlong)(int)ROUND(fVar4)) >> 0x20) << 0x10);
  local_14 = -1;
  iVar2 = 0;
  if (0 < *(int *)&this_ptr->field_0x5c) {
    iVar3 = 0;
    do {
      iVar1 = *(int *)(iVar3 + *(int *)&this_ptr->field_0x60);
      if (iVar1 != local_14) {
        engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00484f00
                  (DAT_00612560,(SMRGLTextureBasic *)(&this_ptr->field_0x68 + iVar1 * 0x48));
        local_14 = iVar1;
      }
      poly = (SMRGLPrimitivePoly *)(*(int *)&this_ptr->field_0x60 + iVar3);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x3c;
      engine_drender_cpp_CDemonRenderer_renderTexturedPoly_FUN_00482210(DAT_00612560,poly,0x267);
    } while (iVar2 < *(int *)&this_ptr->field_0x5c);
  }
  engine_drender_cpp_CDemonRenderer_processCapturedFaces_FUN_00484e00(DAT_00612560);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00483d80(DAT_00612560,0);
  engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_00483e20(DAT_00612560,1);
  return;
}
