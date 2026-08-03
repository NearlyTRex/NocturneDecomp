// Name: core_skeleton.cpp_CDeformableModel_captureTextures_FUN_005180a0
// Address: 005180a0
// Address Range: [[005180a0, 00518123]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModel_captureTextures_FUN_005180a0(CDeformableModel *this_ptr)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModel_captureTextures_FUN_005180a0(CDeformableModel *this_ptr)

{
  CSkeleton *pCVar1;
  int iVar2;
  int iVar3;
  SMRGLTextureBasic *texture;
  SMRGLTextureBasic *local_14;
  
  pCVar1 = core_skeleton_cpp_FUN_0051f680(this_ptr->model_name);
  iVar3 = 0;
  core_skeleton_cpp_CDeformableModel_bindSkeleton_FUN_00519ae0(this_ptr,pCVar1);
  if (0 < this_ptr->num_texture_sets) {
    local_14 = (SMRGLTextureBasic *)this_ptr->texture_sets;
    do {
      iVar2 = 0;
      texture = local_14;
      if (0 < this_ptr->num_textures) {
        do {
          iVar2 = iVar2 + 1;
          engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0(DAT_005ae704,texture);
          texture = texture + 3;
        } while (iVar2 < this_ptr->num_textures);
      }
      iVar3 = iVar3 + 1;
      local_14 = local_14 + 0x18;
    } while (iVar3 < this_ptr->num_texture_sets);
  }
  return;
}
