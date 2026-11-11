// Name: core_morph.cpp_CMorphModel_renderFaces_FUN_005b6c90
// Address: 005b6c90
// Address Range: [[005b6c90, 005b6da0]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_CMorphModel_renderFaces_FUN_005b6c90(CMorphModel *this_ptr,float morph_t)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_morph_cpp_CMorphModel_renderFaces_FUN_005b6c90(CMorphModel *this_ptr,float morph_t)

{
  int iVar1;
  int iVar2;
  int iVar3;
  SMRGLPrimitivePoly *poly;
  float10 fVar4;
  int local_14;
  
  engine_drender_cpp_CDemonRenderer_setTextureCaptureMode_FUN_0046c540(DAT_0060b280,0);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0046b880(DAT_0060b280,1);
  fVar4 = (float10)morph_t * (float10)_DAT_005f17bf * ((float10)_DAT_005f17c7 - (float10)morph_t);
  iVar2 = round();
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0
            (DAT_0060b280,
             (uint)((longlong)iVar2 * (longlong)(int)ROUND(fVar4)) >> 0x10 |
             (int)((ulonglong)((longlong)iVar2 * (longlong)(int)ROUND(fVar4)) >> 0x20) << 0x10);
  local_14 = -1;
  iVar2 = 0;
  if (0 < this_ptr->num_faces) {
    iVar3 = 0;
    do {
      iVar1 = *(int *)((int)&(((SMRGLPrimitiveTriangle *)(this_ptr->faces->vertices + -2))->base).
                             base.type + iVar3);
      if (iVar1 != local_14) {
        engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00
                  (DAT_0060b280,(SMRGLTextureBasic *)(this_ptr->textures + iVar1));
        local_14 = iVar1;
      }
      poly = (SMRGLPrimitivePoly *)
             ((int)&(((SMRGLPrimitiveTriangle *)(this_ptr->faces->vertices + -2))->base).base.type +
             iVar3);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x3c;
      engine_drender_cpp_CDemonRenderer_renderTexturedPoly_FUN_00469d00(DAT_0060b280,poly,0x267);
    } while (iVar2 < this_ptr->num_faces);
  }
  engine_drender_cpp_CDemonRenderer_processCapturedFaces_FUN_0046c900(DAT_0060b280);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0046b880(DAT_0060b280,0);
  engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0046b920(DAT_0060b280,1);
  return;
}
