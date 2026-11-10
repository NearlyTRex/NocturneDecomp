// Name: core_skeleton.cpp_CDeformableModel_captureTextures_FUN_00548750
// Address: 00548750
// Address Range: [[00548750, 005487d3]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModel_captureTextures_FUN_00548750(CDeformableModel *this_ptr)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModel_captureTextures_FUN_00548750(CDeformableModel *this_ptr)

{
  CSkeleton *skeleton_ptr;
  int iVar1;
  int iVar2;
  SMRGLTextureBasic *texture;
  SMRGLTextureBasic *local_14;
  
  skeleton_ptr = (CSkeleton *)core_skeleton_cpp_loadSkeleton_FUN_005501e0(this_ptr->model_name);
  iVar2 = 0;
  core_skeleton_cpp_CDeformableModel_bindSkeleton_FUN_0054a2c0(this_ptr,skeleton_ptr);
  if (0 < this_ptr->num_texture_sets) {
    local_14 = (SMRGLTextureBasic *)&this_ptr->field_0xc0;
    do {
      iVar1 = 0;
      texture = local_14;
      if (0 < this_ptr->num_textures) {
        do {
          iVar1 = iVar1 + 1;
          engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0(DAT_005f2afc,texture);
          texture = texture + 3;
        } while (iVar1 < this_ptr->num_textures);
      }
      iVar2 = iVar2 + 1;
      local_14 = local_14 + 0x18;
    } while (iVar2 < this_ptr->num_texture_sets);
  }
  return;
}
