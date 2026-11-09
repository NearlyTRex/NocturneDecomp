// Name: core_skeleton.cpp_FUN_00548750
// Address: 00548750
// Address Range: [[00548750, 005487d3]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_FUN_00548750(CDeformableModel *this_ptr)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_FUN_00548750(CDeformableModel *this_ptr)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  SMRGLTextureBasic *texture;
  SMRGLTextureBasic *local_14;
  
  uVar1 = core_skeleton_cpp_FUN_005501e0(&this_ptr->field_0x355c);
  iVar3 = 0;
  core_skeleton_cpp_FUN_0054a2c0(this_ptr,uVar1);
  if (0 < *(int *)&this_ptr->field_0xb8) {
    local_14 = (SMRGLTextureBasic *)&this_ptr->field_0xc0;
    do {
      iVar2 = 0;
      texture = local_14;
      if (0 < *(int *)&this_ptr->field_0xbc) {
        do {
          iVar2 = iVar2 + 1;
          engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0(DAT_005f2afc,texture);
          texture = texture + 0x48;
        } while (iVar2 < *(int *)&this_ptr->field_0xbc);
      }
      iVar3 = iVar3 + 1;
      local_14 = local_14 + 0x240;
    } while (iVar3 < *(int *)&this_ptr->field_0xb8);
  }
  return;
}
