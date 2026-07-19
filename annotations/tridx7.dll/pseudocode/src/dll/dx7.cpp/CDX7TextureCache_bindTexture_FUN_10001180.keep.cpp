// Name: dll_dx7.cpp_CDX7TextureCache_bindTexture_FUN_10001180
// Address: 10001180
// MANUAL RECONSTRUCTION
// Address Range: [[10001180, 100011fa]]
// Convention: __ecxcall
// Signature: void __ecxcall dll_dx7_cpp_CDX7TextureCache_bindTexture_FUN_10001180(CDX7TextureCache *this_ptr,SMRGLTextureBasic *texture_info)

#include "nocturne.h"

void __ecxcall dll_dx7_cpp_CDX7TextureCache_bindTexture_FUN_10001180(CDX7TextureCache *this_ptr,SMRGLTextureBasic *texture_info)

{
  int iVar2;

  for (iVar2 = 0; iVar2 < this_ptr->entry_count; iVar2 = iVar2 + 1) {
    if (strcmp(this_ptr->entries[iVar2].name,texture_info->texture_name) == 0) {
      dll_dx7_cpp_loadTexture_FUN_100030e0(this_ptr->entries[iVar2].slot);
      return;
    }
  }
  dll_dx7_cpp_CDX7TextureCache_acquireSlot_FUN_10001090(this_ptr,texture_info);
  return;
}
