// Name: core_bodypart.cpp_FUN_00419810
// Address: 00419810
// Address Range: [[00419810, 0041981c]]
// Convention: unknown
// Signature: undefined core_bodypart.cpp_FUN_00419810()
// Function calls:
//   core_actor.cpp_CDemonActor_setup_FUN_00408bb0

#include "nocturne.h"

/* Signature: undefined1 actors_other_bodypart.cpp_FUN_00419810(undefined4 param_1) */

void core_bodypart_cpp_FUN_00419810(void)

{
  int iVar1;
  SMRGLTextureBasic *texture;
  CDemonActor *in_stack_00000004;
  
  core_actor_cpp_CDemonActor_setup_FUN_00408bb0(in_stack_00000004);
  iVar1 = 0;
  if (0 < (int)in_stack_00000004[1].orient.bank) {
    texture = (SMRGLTextureBasic *)&in_stack_00000004[1].orient.heading;
    do {
      iVar1 = iVar1 + 1;
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80(g_CDemonRendererPtr,texture);
      texture = texture + 1;
    } while (iVar1 < (int)in_stack_00000004[1].orient.bank);
  }
  if ((*(int *)(in_stack_00000004[9].create_event + 0x24) == 0) &&
     (*(int *)(in_stack_00000004[5].create_event + 0x1c) == 0)) {
    return;
  }
  in_stack_00000004->is_transparent = 1;
  return;
}


// Assembly code:
// 00419810: PUSH EBX
//   Label: core_bodypart.cpp_FUN_00419810
// 00419811: PUSH EDI
// 00419812: PUSH EBP
// 00419813: MOV EDI,dword ptr [ESP + 0x10]
// 00419817: PUSH EDI
// 00419818: CALL core_actor.cpp_CDemonActor_setup_FUN_00408bb0
//   XREF to: 00408bb0 (UNCONDITIONAL_CALL)
