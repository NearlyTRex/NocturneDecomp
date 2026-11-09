// Name: core_skeleton.cpp_CDeformableModel_allocMemory_FUN_00548460
// Address: 00548460
// Address Range: [[00548460, 0054857e]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModel_allocMemory_FUN_00548460(CDeformableModel *this_ptr,int num_lods,int num_texture_sets,int num_textures,int num_parts)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_skeleton_cpp_CDeformableModel_allocMemory_FUN_00548460(CDeformableModel *this_ptr,int num_lods,int num_texture_sets,int num_textures,int num_parts)

{
  CDeformableModel *pCVar1;
  int iVar2;
  
  core_skeleton_cpp_CDeformableModel_free_FUN_00548370(this_ptr);
  if (5 < num_texture_sets) {
    _DAT_01d71de0 = "..\\core\\skeleton.cpp";
    _DAT_01d71de4 = 0x271;
    core_main_c_FUN_004e4330("Too many texture sets in CDeformableModel::allocMemory.  Max is %d, requested %d.",5,num_texture_sets);
  }
  if (8 < num_textures) {
    _DAT_01d71de0 = "..\\core\\skeleton.cpp";
    _DAT_01d71de4 = 0x275;
    core_main_c_FUN_004e4330("Too many textures in CDeformableModel::allocMemory.  Max is %d, requested %d.",8,num_textures);
  }
  if (0x3c < num_parts) {
    _DAT_01d71de0 = "..\\core\\skeleton.cpp";
    _DAT_01d71de4 = 0x279;
    core_main_c_FUN_004e4330("Too many parts in CDeformableModel::allocMemory.  Max is %d, requested %d.",0x3c,num_parts);
  }
  if (5 < num_lods) {
    _DAT_01d71de0 = "..\\core\\skeleton.cpp";
    _DAT_01d71de4 = 0x27d;
    core_main_c_FUN_004e4330("Too many LODs in CDeformableModel::allocMemory.  Max is %d, requested %d.",5,num_lods);
  }
  *(int *)&this_ptr->field_0xbc = num_textures;
  *(int *)&this_ptr->field_0xc00 = num_parts;
  *(int *)this_ptr = num_lods;
  iVar2 = 0;
  *(int *)&this_ptr->field_0xb8 = num_texture_sets;
  pCVar1 = this_ptr;
  if (0 < num_lods) {
    do {
      *(uint *)&pCVar1->field_0x4 = 1;
      *(uint *)&pCVar1->field_0x8 = 0;
      iVar2 = iVar2 + 1;
      pCVar1 = (CDeformableModel *)&pCVar1->field_0x8;
    } while (iVar2 < *(int *)this_ptr);
  }
  return;
}
