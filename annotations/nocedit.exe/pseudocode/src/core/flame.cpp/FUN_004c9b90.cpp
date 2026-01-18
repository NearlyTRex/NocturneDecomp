// Name: core_flame.cpp_FUN_004c9b90
// Address: 004c9b90
// Address Range: [[004c9b90, 004c9ba4]]
// Convention: unknown
// Signature: undefined core_flame.cpp_FUN_004c9b90()

#include "nocturne.h"

/* Signature: byte actors_other_flame.cpp_FUN_004c9b90(uint param_1) */

void core_flame_cpp_FUN_004c9b90(void)

{
  uint uVar1;
  SMRGLTextureBasic *texture;
  SMRGLTextureBasic *pSVar2;
  int iVar3;
  CDemonActor *in_stack_00000004;
  
  iVar3 = 0;
  core_actor_cpp_CDemonActor_setup_FUN_00408bb0(in_stack_00000004);
  pSVar2 = &DAT_0067b1c0;
  do {
    texture = &DAT_0067b100 + iVar3 * 8;
    do {
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80(g_CDemonRendererPtr2,texture);
      texture = texture + 1;
    } while (texture != pSVar2);
    iVar3 = iVar3 + 1;
    pSVar2 = pSVar2 + 8;
  } while (iVar3 < 5);
  uVar1 = crt_stdlib_c_rand_FUN_005feb5c();
  in_stack_00000004[1].previous_transform_state.orientation.z = (float)(uVar1 & 1);
  return;
}
