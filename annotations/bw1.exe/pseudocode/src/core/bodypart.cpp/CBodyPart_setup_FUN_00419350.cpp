// Name: core_bodypart.cpp_CBodyPart_setup_FUN_00419350
// Address: 00419350
// Address Range: [[00419350, 004193b5]]
// Convention: __cdecl
// Signature: void __cdecl core_bodypart_cpp_CBodyPart_setup_FUN_00419350(CBodyPart *this_ptr)

#include "nocturne.h"

void __cdecl core_bodypart_cpp_CBodyPart_setup_FUN_00419350(CBodyPart *this_ptr)

{
  int iVar1;
  SMRGLTextureBasic *texture;
  
  core_actor_cpp_FUN_00408850((CDemonActor *)this_ptr);
  iVar1 = 0;
  if (0 < *(int *)&this_ptr->field_0x18c) {
    texture = (SMRGLTextureBasic *)&this_ptr->field_0x190;
    do {
      iVar1 = iVar1 + 1;
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00484f00(DAT_00612560,texture);
      texture = texture + 0x18;
    } while (iVar1 < *(int *)&this_ptr->field_0x18c);
  }
  if ((*(int *)&this_ptr->field_0xcb4 == 0) && (*(int *)&this_ptr->field_0x74c == 0)) {
    return;
  }
  *(uint *)&this_ptr->field_0xfc = 1;
  return;
}
