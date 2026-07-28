// Name: core_skeleton.cpp_CDeformableModel_allocMemory_FUN_00517da0
// Address: 00517da0
// Address Range: [[00517da0, 00517ebe]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModel_allocMemory_FUN_00517da0(CDeformableModel *this_ptr,int num_lods,int num_texture_sets,int num_textures,int num_parts)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModel_allocMemory_FUN_00517da0(CDeformableModel *this_ptr,int num_lods,int num_texture_sets,int num_textures,int num_parts)

{
  CDeformableModel *pCVar1;
  int iVar2;
  
  core_skeleton_cpp_CDeformableModel_free_FUN_00517cc0(this_ptr);
  if (5 < num_texture_sets) {
    PTR_01cc4800 = "..\\core\\skeleton.cpp";
    INT_01cc4804 = 0x261;
    core_main_c_FUN_004c8440("Too many texture sets in CDeformableModel::allocMemory.  Max is %d, requested %d.",5,num_texture_sets);
  }
  if (8 < num_textures) {
    PTR_01cc4800 = "..\\core\\skeleton.cpp";
    INT_01cc4804 = 0x265;
    core_main_c_FUN_004c8440("Too many textures in CDeformableModel::allocMemory.  Max is %d, requested %d.",8,num_textures);
  }
  if (0x1e < num_parts) {
    PTR_01cc4800 = "..\\core\\skeleton.cpp";
    INT_01cc4804 = 0x269;
    core_main_c_FUN_004c8440("Too many parts in CDeformableModel::allocMemory.  Max is %d, requested %d.",0x1e,num_parts);
  }
  if (5 < num_lods) {
    PTR_01cc4800 = "..\\core\\skeleton.cpp";
    INT_01cc4804 = 0x26d;
    core_main_c_FUN_004c8440("Too many LODs in CDeformableModel::allocMemory.  Max is %d, requested %d.",5,num_lods);
  }
  this_ptr->num_textures = num_textures;
  this_ptr->texture_sets[0].textures[0x28].textures[0].base.type = num_parts;
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
