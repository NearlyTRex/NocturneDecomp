// Name: core_cloth.cpp_CCloth_grabCloth_FUN_0043e0d0
// Address: 0043e0d0
// Address Range: [[0043e0d0, 0043e164]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_CCloth_grabCloth_FUN_0043e0d0(CCloth *this_ptr,char *bone_name,int vertex_index)

#include "nocturne.h"

void __cdecl core_cloth_cpp_CCloth_grabCloth_FUN_0043e0d0(CCloth *this_ptr,char *bone_name,int vertex_index)

{
  int iVar1;
  int iVar2;
  SClothBone *str2;
  
  iVar2 = 0;
  if (0 < this_ptr->collide_bone_count) {
    str2 = this_ptr->collide_bones;
    do {
      iVar1 = _strcmp(bone_name,str2->name);
      if (iVar1 == 0) break;
      iVar2 = iVar2 + 1;
      str2 = str2 + 1;
    } while (iVar2 < this_ptr->collide_bone_count);
  }
  if (iVar2 == this_ptr->collide_bone_count) {
    g_CurrentFilename = "..\\core\\cloth.cpp";
    g_CurrentLineNumber = 2727;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CCloth::grabCloth - Can't find bone %s",bone_name);
  }
  this_ptr->vertices[vertex_index].locked = 1;
  this_ptr->vertices[vertex_index].collide_bone_index = iVar2;
  return;
}
