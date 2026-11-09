// Name: core_charactr.cpp_FUN_0042f280
// Address: 0042f280
// Address Range: [[0042f280, 0042f30b]]
// Convention: unknown
// Signature: void core_charactr_cpp_FUN_0042f280(int param_1)

#include "nocturne.h"

void core_charactr_cpp_FUN_0042f280(int param_1)

{
  SMRGLTextureBasic *texture;
  int iVar1;
  
  iVar1 = 0;
  do {
    if (param_1 == 0) {
      texture = (SMRGLTextureBasic *)(&DAT_005f1124 + iVar1);
LAB_0042f2a2:
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0(DAT_005f2afc,texture);
    }
    else {
      if (param_1 == 1) {
        texture = (SMRGLTextureBasic *)(&DAT_005f1004 + iVar1);
        goto LAB_0042f2a2;
      }
      if (param_1 == 2) {
        texture = (SMRGLTextureBasic *)(&DAT_005f1094 + iVar1);
        goto LAB_0042f2a2;
      }
      if (param_1 == 4) {
        texture = (SMRGLTextureBasic *)(&DAT_005f11b4 + iVar1);
        goto LAB_0042f2a2;
      }
      if (param_1 == 3) {
        texture = (SMRGLTextureBasic *)(&DAT_005f1244 + iVar1);
        goto LAB_0042f2a2;
      }
    }
    iVar1 = iVar1 + 0x18;
    if (iVar1 == 0x90) {
      return;
    }
  } while( true );
}
