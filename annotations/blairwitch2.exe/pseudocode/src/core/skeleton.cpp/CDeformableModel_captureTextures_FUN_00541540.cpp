// Name: core_skeleton.cpp_CDeformableModel_captureTextures_FUN_00541540
// Address: 00541540
// Address Range: [[00541540, 005415c3]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModel_captureTextures_FUN_00541540(CDeformableModel *this_ptr)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModel_captureTextures_FUN_00541540(CDeformableModel *this_ptr)

{
  CSkeleton *skeleton_ptr;
  int iVar1;
  int iVar2;
  SMRGLTextureBasic *texture;
  SMRGLTextureBasic *local_14;
  
  skeleton_ptr = core_skeleton_cpp_loadSkeleton_FUN_00548fc0(this_ptr->model_name);
  iVar2 = 0;
  core_skeleton_cpp_CDeformableModel_bindSkeleton_FUN_005430b0(this_ptr,skeleton_ptr);
  if (0 < this_ptr->num_texture_sets) {
    local_14 = (SMRGLTextureBasic *)this_ptr->texture_sets;
    do {
      iVar1 = 0;
      texture = local_14;
      if (0 < this_ptr->num_textures) {
        do {
          iVar1 = iVar1 + 1;
          engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00(DAT_0060b280,texture);
          texture = texture + 3;
        } while (iVar1 < this_ptr->num_textures);
      }
      iVar2 = iVar2 + 1;
      local_14 = local_14 + 0x18;
    } while (iVar2 < this_ptr->num_texture_sets);
  }
  return;
}
