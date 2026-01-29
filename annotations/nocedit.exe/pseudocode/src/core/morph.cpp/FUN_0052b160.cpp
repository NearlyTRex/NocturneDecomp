// Name: core_morph.cpp_FUN_0052b160
// Address: 0052b160
// Address Range: [[0052b160, 0052b270]]
// Convention: __cdecl
// Signature: void __cdecl core_morph_cpp_FUN_0052b160(void)

#include "nocturne.h"

void __cdecl core_morph_cpp_FUN_0052b160(void)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  SMRGLHeaderPrimitive *polygon_info;
  double dVar5;
  int in_stack_00000004;
  float in_stack_00000008;
  uint local_18;
  
  engine_drender_cpp_CDemonRenderer_setTextureCaptureMode_FUN_0048d6c0(g_CDemonRendererPtr2,0);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr2,1);
  iVar3 = 0xffff - (int)g_PerspectiveReciprocal;
  dVar5 = round
                    ((double)(in_stack_00000008 * (float)65535 *
                             (2.0f - in_stack_00000008)));
  lVar2 = (longlong)iVar3 * (longlong)(int)ROUND(dVar5);
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
            (g_CDemonRendererPtr2,(uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
  local_18 = -1;
  iVar3 = 0;
  if (0 < *(int *)(in_stack_00000004 + 0x5c)) {
    iVar4 = 0;
    do {
      iVar1 = *(int *)(iVar4 + *(int *)(in_stack_00000004 + 0x60));
      if (iVar1 != local_18) {
        engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
                  (g_CDemonRendererPtr2,
                   (SMRGLTextureBasic *)(iVar1 * 0x48 + in_stack_00000004 + 0x68));
        local_18 = iVar1;
      }
      polygon_info = (SMRGLHeaderPrimitive *)(*(int *)(in_stack_00000004 + 0x60) + iVar4);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x3c;
      engine_drender_cpp_CDemonRenderer_renderWireframeVariant_FUN_0048aeb0
                (g_CDemonRendererPtr2,polygon_info,0x267);
    } while (iVar3 < *(int *)(in_stack_00000004 + 0x5c));
  }
  engine_drender_cpp_CDemonRenderer_processCapturedFaces_FUN_0048da80(g_CDemonRendererPtr2);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr2,0);
  engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0(g_CDemonRendererPtr2,1);
  return;
}
