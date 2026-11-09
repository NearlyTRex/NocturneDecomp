// Name: core_fire.cpp_FUN_004a41d0
// Address: 004a41d0
// Address Range: [[004a41d0, 004a42b9]]
// Convention: unknown
// Signature: void core_fire_cpp_FUN_004a41d0(undefined4 param_1,int param_2)

#include "nocturne.h"

void core_fire_cpp_FUN_004a41d0(uint param_1,int param_2)

{
  int iVar1;
  byte *puVar2;
  SMRGLTextureBasic *texture;
  int iVar3;
  
  if ((((param_2 == 2) || (param_2 == 4)) || (param_2 == 3)) || (param_2 == 6)) {
    iVar1 = 1;
  }
  else if (param_2 == 5) {
    iVar1 = 6;
  }
  else {
    iVar1 = 0x14;
  }
  iVar3 = 0;
  do {
    if (param_2 == 2) {
      puVar2 = &DAT_005fd7ec;
LAB_004a41fa:
      texture = (SMRGLTextureBasic *)(puVar2 + iVar3);
    }
    else if (param_2 == 7) {
      texture = (SMRGLTextureBasic *)(&DAT_005fd804 + iVar3);
    }
    else if (param_2 == 4) {
      texture = (SMRGLTextureBasic *)(&DAT_005fd81c + iVar3);
    }
    else if (param_2 == 3) {
      texture = (SMRGLTextureBasic *)(&DAT_005fd834 + iVar3);
    }
    else {
      if (param_2 == 5) {
        puVar2 = &DAT_005fd84c;
        goto LAB_004a41fa;
      }
      if (param_2 == 6) {
        texture = (SMRGLTextureBasic *)(&DAT_005fd8dc + iVar3);
      }
      else {
        texture = (SMRGLTextureBasic *)(&DAT_005fd60c + iVar3);
      }
    }
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0(DAT_005f2afc,texture);
    iVar3 = iVar3 + 0x18;
    if (iVar1 * 0x18 <= iVar3) {
      return;
    }
  } while( true );
}
