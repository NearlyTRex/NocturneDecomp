// Name: core_skeleton.cpp_CDeformableModel_captureTextures_FUN_00563bb0
// Address: 00563bb0
// Address Range: [[00563bb0, 00563c33]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModel_captureTextures_FUN_00563bb0(CDeformableModel *this_ptr)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModel_captureTextures_FUN_00563bb0(CDeformableModel *this_ptr)

{
  CSkeleton *skeleton_ptr;
  int iVar1;
  int iVar2;
  SMRGLTextureBasic *texture;
  SMRGLTextureBasic *local_14;
  
  skeleton_ptr = core_skeleton_cpp_loadSkeleton_FUN_0056b650(this_ptr->model_name);
  iVar2 = 0;
  core_skeleton_cpp_CDeformableModel_bindSkeleton_FUN_00565730(this_ptr,skeleton_ptr);
  if (0 < this_ptr->num_texture_sets) {
    local_14 = (SMRGLTextureBasic *)this_ptr->texture_sets;
    do {
      iVar1 = 0;
      texture = local_14;
      if (0 < this_ptr->num_textures) {
        do {
          iVar1 = iVar1 + 1;
          engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00484f00(DAT_00612560,texture);
          texture = texture + 3;
        } while (iVar1 < this_ptr->num_textures);
      }
      iVar2 = iVar2 + 1;
      local_14 = local_14 + 0x18;
    } while (iVar2 < this_ptr->num_texture_sets);
  }
  return;
}
