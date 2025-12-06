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
  uint extraout_EDX;
  int iVar3;
  int iVar4;
  SMRGLHeaderPrimitive *polygon_info;
  float10 fVar5;
  double dVar6;
  int in_stack_00000004;
  float in_stack_00000010;
  int iVar7;
  
  engine_drender_cpp_CDemonRenderer_setTextureCaptureMode_FUN_0048d6c0(g_CDemonRendererPtr,0);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr,1);
  fVar5 = (float10)in_stack_00000010 * (float10)65535 *
          ((float10)2f - (float10)in_stack_00000010);
  dVar6 = crt_math_c_round_FUN_005fe6b0
                    ((double)CONCAT44 /* combine 2-byte values */(extraout_EDX,0xffff - (int)g_PerspectiveReciprocal));
  lVar2 = (longlong)SUB84 /* extract 2-byte value */(dVar6,0) * (longlong)(int)ROUND(fVar5);
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
            (g_CDemonRendererPtr,(uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
  iVar4 = 0;
  if (0 < *(int *)(in_stack_00000004 + 0x5c)) {
    iVar7 = in_stack_00000004 + 0x68;
    iVar3 = 0;
    do {
      iVar1 = *(int *)(iVar3 + *(int *)(in_stack_00000004 + 0x60));
      if (iVar1 != -1) {
        engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
                  (g_CDemonRendererPtr,(SMRGLTextureBasic *)(iVar1 * 0x48 + iVar7));
        iVar7 = iVar1;
      }
      polygon_info = (SMRGLHeaderPrimitive *)(*(int *)(in_stack_00000004 + 0x60) + iVar3);
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 0x3c;
      engine_drender_cpp_CDemonRenderer_renderWireframeVariant_FUN_0048aeb0
                (g_CDemonRendererPtr,polygon_info,0x267);
    } while (iVar4 < *(int *)(in_stack_00000004 + 0x5c));
  }
  engine_drender_cpp_CDemonRenderer_processCapturedFaces_FUN_0048da80(g_CDemonRendererPtr);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr,0);
  engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0(g_CDemonRendererPtr,1);
  return;
}
