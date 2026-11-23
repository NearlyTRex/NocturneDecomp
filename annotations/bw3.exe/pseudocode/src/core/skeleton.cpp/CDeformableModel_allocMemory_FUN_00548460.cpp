// Name: core_skeleton.cpp_CDeformableModel_allocMemory_FUN_00548460
// Address: 00548460
// Address Range: [[00548460, 0054857e]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModel_allocMemory_FUN_00548460(CDeformableModel *this_ptr,int num_lods,int num_texture_sets,int num_textures,int num_parts)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModel_allocMemory_FUN_00548460(CDeformableModel *this_ptr,int num_lods,int num_texture_sets,int num_textures,int num_parts)

{
  CDeformableModel *pCVar1;
  int iVar2;
  
  core_skeleton_cpp_CDeformableModel_free_FUN_00548370(this_ptr);
  if (5 < num_texture_sets) {
    g_CurrentFilename = "..\\core\\skeleton.cpp";
    g_CurrentLineNumber = 625;
    core_main_c_displayErrorAndQuit_FUN_004e4330("Too many texture sets in CDeformableModel::allocMemory.  Max is %d, requested %d.");
  }
  if (8 < num_textures) {
    g_CurrentFilename = "..\\core\\skeleton.cpp";
    g_CurrentLineNumber = 629;
    core_main_c_displayErrorAndQuit_FUN_004e4330("Too many textures in CDeformableModel::allocMemory.  Max is %d, requested %d.");
  }
  if (0x3c < num_parts) {
    g_CurrentFilename = "..\\core\\skeleton.cpp";
    g_CurrentLineNumber = 633;
    core_main_c_displayErrorAndQuit_FUN_004e4330("Too many parts in CDeformableModel::allocMemory.  Max is %d, requested %d.");
  }
  if (5 < num_lods) {
    g_CurrentFilename = "..\\core\\skeleton.cpp";
    g_CurrentLineNumber = 637;
    core_main_c_displayErrorAndQuit_FUN_004e4330("Too many LODs in CDeformableModel::allocMemory.  Max is %d, requested %d.");
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
