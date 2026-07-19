// Name: dll_dx7.cpp_CDX7TextureCache_init_FUN_10001020
// Address: 10001020
// MANUAL RECONSTRUCTION
// Address Range: [[10001020, 10001074]]
// Convention: __ecxcall
// Signature: void __ecxcall dll_dx7_cpp_CDX7TextureCache_init_FUN_10001020(CDX7TextureCache *this_ptr,int max_count,int texture_size)

#include "nocturne.h"

void __ecxcall dll_dx7_cpp_CDX7TextureCache_init_FUN_10001020(CDX7TextureCache *this_ptr,int max_count,int texture_size)

{
  int iVar1;
  int iVar2;
  SDX7TextureCacheEntry *pSVar3;
  
  pSVar3 = this_ptr->entries;
  this_ptr->max_count = max_count;
  this_ptr->texture_size = texture_size;
  memset(this_ptr->entries,0,sizeof(this_ptr->entries));
  iVar2 = 0;
  this_ptr->entry_count = 0;
  this_ptr->usage_counter = 0;
  if (0 < this_ptr->max_count) {
    while( true ) {
      iVar1 = dll_dx7_cpp_createTexture_FUN_10002f60(this_ptr->texture_size);
      if (iVar1 == -1) break;
      pSVar3->slot = iVar1;
      pSVar3 = pSVar3 + 1;
      iVar2 = iVar2 + 1;
      if (this_ptr->max_count <= iVar2) {
        return;
      }
    }
    this_ptr->max_count = iVar2;
  }
  return;
}
