// Name: core_morph.cpp_FUN_0052b160
// Address: 0052b160
// Address Range: [[0052b160, 0052b270]]
// Convention: __cdecl
// Signature: void core_morph.cpp_FUN_0052b160(void)

#include "nocturne.h"

void __cdecl core_morph_cpp_FUN_0052b160(void)

{
  int iVar1;
  int extraout_EAX;
  int iVar2;
  int iVar3;
  SMRGLHeaderPrimitive *polygon_info;
  double dVar4;
  int in_stack_00000004;
  float in_stack_00000008;
  uint local_18;
  
  engine_drender_cpp_CDemonRenderer_setTextureCaptureMode_FUN_0048d6c0(g_CDemonRendererPtr,0);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr,1);
  dVar4 = crt_math_c_round_FUN_005fe6b0
                    ((double)(in_stack_00000008 * (float)65535 *
                             (2.0f - in_stack_00000008)));
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
            (g_CDemonRendererPtr,
             (uint)((longlong)extraout_EAX * (longlong)(int)ROUND(dVar4)) >> 0x10 |
             (int)((ulonglong)((longlong)extraout_EAX * (longlong)(int)ROUND(dVar4)) >> 0x20) <<
             0x10);
  local_18 = -1;
  iVar3 = 0;
  if (0 < *(int *)(in_stack_00000004 + 0x5c)) {
    iVar2 = 0;
    do {
      iVar1 = *(int *)(iVar2 + *(int *)(in_stack_00000004 + 0x60));
      if (iVar1 != local_18) {
        engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
                  (g_CDemonRendererPtr,
                   (SMRGLTextureBasic *)(iVar1 * 0x48 + in_stack_00000004 + 0x68));
        local_18 = iVar1;
      }
      polygon_info = (SMRGLHeaderPrimitive *)(*(int *)(in_stack_00000004 + 0x60) + iVar2);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x3c;
      engine_drender_cpp_CDemonRenderer_renderWireframeVariant_FUN_0048aeb0
                (g_CDemonRendererPtr,polygon_info,0x267);
    } while (iVar3 < *(int *)(in_stack_00000004 + 0x5c));
  }
  engine_drender_cpp_CDemonRenderer_processCapturedFaces_FUN_0048da80(g_CDemonRendererPtr);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr,0);
  engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0(g_CDemonRendererPtr,1);
  return;
}
