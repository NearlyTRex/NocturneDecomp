// Name: core_skeleton.cpp_CDeformableModel_allocMemory_FUN_0059a3f0
// Address: 0059a3f0
// Address Range: [[0059a3f0, 0059a50e]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModel_allocMemory_FUN_0059a3f0(CDeformableModel *this_ptr,int num_lods,int num_texture_sets,int num_textures,int num_parts)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModel_allocMemory_FUN_0059a3f0(CDeformableModel *this_ptr,int num_lods,int num_texture_sets,int num_textures,int num_parts)

{
  CDeformableModel *pCVar1;
  int iVar2;
  
  core_skeleton_cpp_CDeformableModel_free_FUN_0059a2b0(this_ptr);
  if (5 < num_texture_sets) {
    g_CurrentFilename = "..\\core\\skeleton.cpp";
    g_CurrentLineNumber = 609;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("Too many texture sets in CDeformableModel::allocMemory.  Max is %d, requested %d.",5,num_texture_sets);
  }
  if (0x50 < num_textures) {
    g_CurrentFilename = "..\\core\\skeleton.cpp";
    g_CurrentLineNumber = 613;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("Too many textures in CDeformableModel::allocMemory.  Max is %d, requested %d.",0x50,num_textures);
  }
  if (0x1e < num_parts) {
    g_CurrentFilename = "..\\core\\skeleton.cpp";
    g_CurrentLineNumber = 617;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Too many parts in CDeformableModel::allocMemory.  Max is %d, requested %d.",0x1e,num_parts)
    ;
  }
  if (5 < num_lods) {
    g_CurrentFilename = "..\\core\\skeleton.cpp";
    g_CurrentLineNumber = 621;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Too many LODs in CDeformableModel::allocMemory.  Max is %d, requested %d.",5,num_lods);
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
