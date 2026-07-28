// Name: core_bodypart.cpp_CBodyPart_setup_FUN_00416500
// Address: 00416500
// Address Range: [[00416500, 00416565]]
// Convention: unknown
// Signature: void core_bodypart_cpp_CBodyPart_setup_FUN_00416500(CDemonActor *param_1)

#include "nocturne.h"

void core_bodypart_cpp_CBodyPart_setup_FUN_00416500(CDemonActor *param_1)

{
  int iVar1;
  SMRGLTextureBasic *texture;
  
  core_actor_cpp_CDemonActor_setup_FUN_00409fc0(param_1);
  iVar1 = 0;
  if (0 < (int)param_1[1].orient.vec.y) {
    texture = (SMRGLTextureBasic *)((int)&param_1[1].orient + 8);
    do {
      iVar1 = iVar1 + 1;
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0(DAT_005ae704,texture);
      texture = texture + 1;
    } while (iVar1 < (int)param_1[1].orient.vec.y);
  }
  if ((*(int *)(param_1[9].create_event + 0x54) == 0) &&
     (*(int *)(param_1[5].create_event + 0x3c) == 0)) {
    return;
  }
  param_1->is_transparent = 1;
  return;
}
