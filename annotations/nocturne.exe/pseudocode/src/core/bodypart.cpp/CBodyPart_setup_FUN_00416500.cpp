// Name: core_bodypart.cpp_CBodyPart_setup_FUN_00416500
// Address: 00416500
// Address Range: [[00416500, 00416565]]
// Convention: unknown
// Signature: void core_bodypart_cpp_CBodyPart_setup_FUN_00416500(int param_1)

#include "nocturne.h"

void core_bodypart_cpp_CBodyPart_setup_FUN_00416500(int param_1)

{
  int iVar1;
  int iVar2;
  
  core_actor_cpp_CDemonActor_setup_FUN_00409fc0(param_1);
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x184)) {
    iVar2 = param_1 + 0x188;
    do {
      iVar1 = iVar1 + 1;
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0(DAT_005ae704,iVar2);
      iVar2 = iVar2 + 0x18;
    } while (iVar1 < *(int *)(param_1 + 0x184));
  }
  if ((*(int *)(param_1 + 0xc9c) == 0) && (*(int *)(param_1 + 0x744) == 0)) {
    return;
  }
  *(uint *)(param_1 + 0xfc) = 1;
  return;
}
