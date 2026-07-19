// Name: dll_dx7.cpp_CDLLTextureCache_acquireSlot_FUN_10001090
// Address: 10001090
// MANUAL RECONSTRUCTION
// Address Range: [[10001090, 1000117d]]
// Convention: __ecxcall
// Signature: int __ecxcall dll_dx7_cpp_CDLLTextureCache_acquireSlot_FUN_10001090(CDLLTextureCache *this_ptr,SMRGLTextureBasic *texture_info)

#include "nocturne.h"

int __ecxcall dll_dx7_cpp_CDLLTextureCache_acquireSlot_FUN_10001090(CDLLTextureCache *this_ptr,SMRGLTextureBasic *texture_info)

{
  int iVar3;
  int iVar4;
  uint uVar7;
  int iVar10;

  for (iVar3 = 0; iVar3 < this_ptr->entry_count; iVar3 = iVar3 + 1) {
    if (strcmp(this_ptr->entries[iVar3].name,texture_info->texture_name) == 0) break;
  }
  iVar10 = this_ptr->entry_count;
  if (iVar3 < iVar10) {
    this_ptr->entries[iVar3].lru_stamp = this_ptr->usage_counter;
    this_ptr->usage_counter = this_ptr->usage_counter + 1;
    return this_ptr->entries[iVar3].slot;
  }
  if (iVar10 < this_ptr->max_count) {
    this_ptr->entry_count = iVar10 + 1;
  }
  else {
    uVar7 = 0xffffffff;
    iVar10 = 0;
    for (iVar4 = 0; iVar4 < this_ptr->max_count; iVar4 = iVar4 + 1) {
      if ((uint)this_ptr->entries[iVar4].lru_stamp < uVar7) {
        uVar7 = this_ptr->entries[iVar4].lru_stamp;
        iVar10 = iVar4;
      }
    }
  }
  dll_dx7_cpp_loadTexture_FUN_100030e0(this_ptr->entries[iVar10].slot);
  this_ptr->entries[iVar10].lru_stamp = this_ptr->usage_counter;
  strcpy(this_ptr->entries[iVar10].name,texture_info->texture_name);
  this_ptr->usage_counter = this_ptr->usage_counter + 1;
  return this_ptr->entries[iVar10].slot;
}
