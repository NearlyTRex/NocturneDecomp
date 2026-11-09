// Name: core_skeleton.cpp_FUN_00541540
// Address: 00541540
// Address Range: [[00541540, 005415c3]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_FUN_00541540(CDeformableModel *this_ptr)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_FUN_00541540(CDeformableModel *this_ptr)

{
  CSkeleton *pCVar1;
  int iVar2;
  int iVar3;
  SMRGLTextureBasic *texture;
  SMRGLTextureBasic *local_14;
  
  pCVar1 = core_skeleton_cpp_FUN_00548fc0(&this_ptr->field_0x2a1c);
  iVar3 = 0;
  core_skeleton_cpp_FUN_005430b0(this_ptr,pCVar1);
  if (0 < *(int *)&this_ptr->field_0xb8) {
    local_14 = (SMRGLTextureBasic *)&this_ptr->field_0xc0;
    do {
      iVar2 = 0;
      texture = local_14;
      if (0 < *(int *)&this_ptr->field_0xbc) {
        do {
          iVar2 = iVar2 + 1;
          engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00(DAT_0060b280,texture);
          texture = texture + 0x48;
        } while (iVar2 < *(int *)&this_ptr->field_0xbc);
      }
      iVar3 = iVar3 + 1;
      local_14 = local_14 + 0x240;
    } while (iVar3 < *(int *)&this_ptr->field_0xb8);
  }
  return;
}
