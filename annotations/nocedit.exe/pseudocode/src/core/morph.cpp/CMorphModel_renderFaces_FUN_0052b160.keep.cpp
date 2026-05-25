// Name: core_morph.cpp_CMorphModel_renderFaces_FUN_0052b160
// Address: 0052b160
// MANUAL RECONSTRUCTION
// Address Range: [[0052b160, 0052b270]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_CMorphModel_renderFaces_FUN_0052b160(CMorphModel *this_ptr,float morph_t)

#include "nocturne.h"

void __cdecl core_morph_cpp_CMorphModel_renderFaces_FUN_0052b160(CMorphModel *this_ptr,float morph_t)

{
  int iVar4;
  SMRGLHeaderPrimitive *prim;
  int local_14;
  longlong lVar2;
  int iVar1;
  
  engine_drender_cpp_CDemonRenderer_setTextureCaptureMode_FUN_0048d6c0(g_CDemonRendererPtr2,0);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr2,1);
  lVar2 = (longlong)(0xffff - g_PerspectiveReciprocal) *
          (longlong)(int)ROUND(ROUND(morph_t * (float)65535 * (2.0f - morph_t)))
  ;
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
            (g_CDemonRendererPtr2,(uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
  local_14 = -1;
  iVar4 = 0;
  if (0 < this_ptr->num_faces) {
    do {
      iVar1 = this_ptr->faces[iVar4].base.base.type;
      if (iVar1 != local_14) {
        engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
                  (g_CDemonRendererPtr2,this_ptr->textures[iVar1].textures);
        local_14 = iVar1;
      }
      prim = &this_ptr->faces[iVar4].base;
      iVar4 = iVar4 + 1;
      engine_drender_cpp_CDemonRenderer_renderTexturedPoly_FUN_0048aeb0
                (g_CDemonRendererPtr2,(SMRGLPrimitivePoly *)prim,0x267);
    } while (iVar4 < this_ptr->num_faces);
  }
  engine_drender_cpp_CDemonRenderer_processCapturedFaces_FUN_0048da80(g_CDemonRendererPtr2);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr2,0);
  engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0(g_CDemonRendererPtr2,1);
  return;
}
