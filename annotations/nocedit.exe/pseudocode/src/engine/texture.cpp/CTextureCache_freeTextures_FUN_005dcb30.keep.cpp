// Name: engine_texture.cpp_CTextureCache_freeTextures_FUN_005dcb30
// Address: 005dcb30
// MANUAL RECONSTRUCTION
// Address Range: [[005dcb30, 005dcbf4]]
// Convention: __cdecl
// Signature: void __cdecl engine_texture_cpp_CTextureCache_freeTextures_FUN_005dcb30(CTextureCache *this_ptr)

#include "nocturne.h"

void __cdecl engine_texture_cpp_CTextureCache_freeTextures_FUN_005dcb30(CTextureCache *this_ptr)

{
  int iVar3;

  this_ptr->current_texture_count = 0;
  for (iVar3 = 0; iVar3 < this_ptr->max_texture_count; iVar3 = iVar3 + 1) {
    this_ptr->texture_names[iVar3][0] = '\0';
    this_ptr->texture_dimensions[iVar3] = 0;
    if (this_ptr->texture_data_ptrs[iVar3] != (void *)0x0) {
      shape_memdbg_cpp_debugFree_FUN_0050f460
                (this_ptr->texture_data_ptrs[iVar3],"..\\engine\\texture.cpp",200);
      this_ptr->texture_data_ptrs[iVar3] = (uchar *)0x0;
    }
    if (this_ptr->texture_opacity_ptrs[iVar3] != (void *)0x0) {
      shape_memdbg_cpp_debugFree_FUN_0050f460
                (this_ptr->texture_opacity_ptrs[iVar3],"..\\engine\\texture.cpp",204);
      this_ptr->texture_opacity_ptrs[iVar3] = (uchar *)0x0;
    }
    if (this_ptr->texture_palette_ptrs[iVar3] != (byte *)0x0) {
      shape_memdbg_cpp_debugFree_FUN_0050f460
                (this_ptr->texture_palette_ptrs[iVar3],"..\\engine\\texture.cpp",208);
      this_ptr->texture_palette_ptrs[iVar3] = (byte *)0x0;
    }
  }
  this_ptr->wrap_indicator = 0;
  return;
}
