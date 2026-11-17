// Name: core_morph.cpp_CMorphModel_renderFaces_FUN_005b6c90
// Address: 005b6c90
// Address Range: [[005b6c90, 005b6da0]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_CMorphModel_renderFaces_FUN_005b6c90(CMorphModel *this_ptr,float morph_t)

#include "nocturne.h"

void __cdecl core_morph_cpp_CMorphModel_renderFaces_FUN_005b6c90(CMorphModel *this_ptr,float morph_t)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  SMRGLPrimitivePoly *poly;
  double dVar5;
  int local_18;
  
  engine_drender_cpp_CDemonRenderer_setTextureCaptureMode_FUN_0046c540
            (g_CDemonRenderer_PTR_0060b280,0);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0046b880(g_CDemonRenderer_PTR_0060b280,1);
  iVar3 = 0xffff - g_PerspectiveReciprocal;
  dVar5 = round
                    ((double)(morph_t * (float)65535 * (2.0f - morph_t)));
  lVar2 = (longlong)iVar3 * (longlong)(int)ROUND(dVar5);
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0
            (g_CDemonRenderer_PTR_0060b280,
             (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
  local_18 = -1;
  iVar3 = 0;
  if (0 < this_ptr->num_faces) {
    iVar4 = 0;
    do {
      iVar1 = *(int *)((int)&(((SMRGLPrimitiveTriangle *)(this_ptr->faces->vertices + -2))->base).
                             base.type + iVar4);
      if (iVar1 != local_18) {
        engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00
                  (g_CDemonRenderer_PTR_0060b280,(SMRGLTextureBasic *)(this_ptr->textures + iVar1));
        local_18 = iVar1;
      }
      poly = (SMRGLPrimitivePoly *)
             ((int)&(((SMRGLPrimitiveTriangle *)(this_ptr->faces->vertices + -2))->base).base.type +
             iVar4);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x3c;
      engine_drender_cpp_CDemonRenderer_renderTexturedPoly_FUN_00469d00
                (g_CDemonRenderer_PTR_0060b280,poly,0x267);
    } while (iVar3 < this_ptr->num_faces);
  }
  engine_drender_cpp_CDemonRenderer_processCapturedFaces_FUN_0046c900(g_CDemonRenderer_PTR_0060b280)
  ;
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0046b880(g_CDemonRenderer_PTR_0060b280,0);
  engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0046b920(g_CDemonRenderer_PTR_0060b280,1);
  return;
}
