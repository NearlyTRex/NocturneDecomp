// Name: core_bodypart.cpp_FUN_00415ee0
// Address: 00415ee0
// Address Range: [[00415ee0, 00415f45]]
// Convention: unknown
// Signature: void core_bodypart_cpp_FUN_00415ee0(CDemonActor *param_1)

#include "nocturne.h"

void core_bodypart_cpp_FUN_00415ee0(CDemonActor *param_1)

{
  int iVar1;
  SMRGLTextureBasic *texture;
  
  core_actor_cpp_FUN_00408a80(param_1);
  iVar1 = 0;
  if (0 < *(int *)&param_1[1].field_0x34) {
    texture = (SMRGLTextureBasic *)&param_1[1].field_0x38;
    do {
      iVar1 = iVar1 + 1;
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00(DAT_0060b280,texture);
      texture = texture + 0x18;
    } while (iVar1 < *(int *)&param_1[1].field_0x34);
  }
  if ((*(int *)&param_1[6].field_0x90 == 0) && (*(int *)&param_1[3].field_0x8c == 0)) {
    return;
  }
  *(uint *)&param_1->field_0xfc = 1;
  return;
}
