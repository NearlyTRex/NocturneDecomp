// Name: core_morph.cpp_FUN_0052b160
// Address: 0052b160
// Address Range: [[0052b160, 0052b270]]
// Convention: __cdecl
// Signature: void core_morph.cpp_FUN_0052b160(void)

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
  float in_stack_00000010;
  int iVar6;
  
  engine_drender_cpp_CDemonRenderer_setTextureCaptureMode_FUN_0048d6c0(g_CDemonRendererPtr,0);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr,1);
  iVar3 = 0xffff - (int)g_PerspectiveReciprocal;
  dVar5 = crt_math_c_round_FUN_005fe6b0
                    ((double)(in_stack_00000010 * (float)65535 *
                             (2f - in_stack_00000010)));
  lVar2 = (longlong)iVar3 * (longlong)(int)ROUND(dVar5);
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
            (g_CDemonRendererPtr,(uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
  iVar3 = 0;
  if (0 < *(int *)(in_stack_00000004 + 0x5c)) {
    iVar6 = in_stack_00000004 + 0x68;
    iVar4 = 0;
    do {
      iVar1 = *(int *)(iVar4 + *(int *)(in_stack_00000004 + 0x60));
      if (iVar1 != -1) {
        engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
                  (g_CDemonRendererPtr,(SMRGLTextureBasic *)(iVar1 * 0x48 + iVar6));
        iVar6 = iVar1;
      }
      polygon_info = (SMRGLHeaderPrimitive *)(*(int *)(in_stack_00000004 + 0x60) + iVar4);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x3c;
      engine_drender_cpp_CDemonRenderer_renderWireframeVariant_FUN_0048aeb0
                (g_CDemonRendererPtr,polygon_info,0x267);
    } while (iVar3 < *(int *)(in_stack_00000004 + 0x5c));
  }
  engine_drender_cpp_CDemonRenderer_processCapturedFaces_FUN_0048da80(g_CDemonRendererPtr);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr,0);
  engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0(g_CDemonRendererPtr,1);
  return;
}
