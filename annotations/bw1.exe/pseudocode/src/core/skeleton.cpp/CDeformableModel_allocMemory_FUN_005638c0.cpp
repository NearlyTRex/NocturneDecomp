// Name: core_skeleton.cpp_CDeformableModel_allocMemory_FUN_005638c0
// Address: 005638c0
// Address Range: [[005638c0, 005639de]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModel_allocMemory_FUN_005638c0(CDeformableModel *this_ptr,int num_lods,int num_texture_sets,int num_textures,int num_parts)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_skeleton_cpp_CDeformableModel_allocMemory_FUN_005638c0(CDeformableModel *this_ptr,int num_lods,int num_texture_sets,int num_textures,int num_parts)

{
  CDeformableModel *pCVar1;
  int iVar2;
  
  core_skeleton_cpp_CDeformableModel_free_FUN_005637d0(this_ptr);
  if (5 < num_texture_sets) {
    _DAT_01d1d400 = "..\\core\\skeleton.cpp";
    _DAT_01d1d404 = 0x27a;
    core_main_c_FUN_005030e0("Too many texture sets in CDeformableModel::allocMemory.  Max is %d, requested %d.",5,num_texture_sets);
  }
  if (8 < num_textures) {
    _DAT_01d1d400 = "..\\core\\skeleton.cpp";
    _DAT_01d1d404 = 0x27e;
    core_main_c_FUN_005030e0("Too many textures in CDeformableModel::allocMemory.  Max is %d, requested %d.",8,num_textures);
  }
  if (0x3c < num_parts) {
    _DAT_01d1d400 = "..\\core\\skeleton.cpp";
    _DAT_01d1d404 = 0x282;
    core_main_c_FUN_005030e0("Too many parts in CDeformableModel::allocMemory.  Max is %d, requested %d.",0x3c,num_parts);
  }
  if (5 < num_lods) {
    _DAT_01d1d400 = "..\\core\\skeleton.cpp";
    _DAT_01d1d404 = 0x286;
    core_main_c_FUN_005030e0("Too many LODs in CDeformableModel::allocMemory.  Max is %d, requested %d.",5,num_lods);
  }
  this_ptr->num_textures = num_textures;
  this_ptr->num_parts = num_parts;
  this_ptr->num_lods = num_lods;
  iVar2 = 0;
  this_ptr->num_texture_sets = num_texture_sets;
  pCVar1 = this_ptr;
  if (0 < num_lods) {
    do {
      pCVar1->lod_info[0].pixel_height = 1;
      pCVar1->lod_info[0].shadow_only_flag = 0;
      iVar2 = iVar2 + 1;
      pCVar1 = (CDeformableModel *)&pCVar1->lod_info[0].shadow_only_flag;
    } while (iVar2 < this_ptr->num_lods);
  }
  return;
}
