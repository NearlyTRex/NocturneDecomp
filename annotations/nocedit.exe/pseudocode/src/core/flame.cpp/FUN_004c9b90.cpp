// Name: core_flame.cpp_FUN_004c9b90
// Address: 004c9b90
// Address Range: [[004c9b90, 004c9ba4]]
// Convention: unknown
// Signature: undefined core_flame.cpp_FUN_004c9b90()
// Cross-references:
//   core_bodypart.cpp_FUN_0041ae50 (0041ae50) at 0041aebf [UNCONDITIONAL_CALL]
// Globals:
//   SMRGLTextureBasic DAT_0067b100
// Function calls:
//   core_actor.cpp_CDemonActor_setup_FUN_00408bb0

#include "nocturne.h"

/* Signature: undefined1 actors_other_flame.cpp_FUN_004c9b90(undefined4 param_1) */

void core_flame_cpp_FUN_004c9b90(void)

{
  uint uVar1;
  SMRGLTextureBasic *texture;
  SMRGLTextureBasic *pSVar2;
  int iVar3;
  CDemonActor *in_stack_00000004;
  int in_stack_0000000c;
  
  iVar3 = 0;
  core_actor_cpp_CDemonActor_setup_FUN_00408bb0(in_stack_00000004);
  pSVar2 = &DAT_0067b1c0;
  do {
    texture = &DAT_0067b100 + iVar3 * 8;
    do {
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80(g_CDemonRendererPtr,texture);
      texture = texture + 1;
    } while (texture != pSVar2);
    iVar3 = iVar3 + 1;
    pSVar2 = pSVar2 + 8;
  } while (iVar3 < 5);
  uVar1 = crt_stdlib_c_rand_FUN_005feb5c();
  *(uint *)(in_stack_0000000c + 0x294) = uVar1 & 1;
  return;
}


// Assembly code:
// 004c9b90: PUSH EBX
//   Label: core_flame.cpp_FUN_004c9b90
// 004c9b91: PUSH ESI
// 004c9b92: PUSH EDI
// 004c9b93: PUSH EBP
// 004c9b94: MOV EDX,dword ptr [ESP + 0x14]
// 004c9b98: PUSH EDX
// 004c9b99: MOV EBP,0x67b100
//   XREF to: 0067b100 (DATA)
// 004c9b9e: XOR EDI,EDI
// 004c9ba0: CALL core_actor.cpp_CDemonActor_setup_FUN_00408bb0
//   XREF to: 00408bb0 (UNCONDITIONAL_CALL)
