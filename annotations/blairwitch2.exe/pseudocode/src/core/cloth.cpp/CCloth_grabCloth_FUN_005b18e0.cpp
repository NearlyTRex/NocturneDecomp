// Name: core_cloth.cpp_CCloth_grabCloth_FUN_005b18e0
// Address: 005b18e0
// Address Range: [[005b18e0, 005b1974]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_CCloth_grabCloth_FUN_005b18e0(CCloth *this_ptr,char *bone_name,int vertex_index)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_cloth_cpp_CCloth_grabCloth_FUN_005b18e0(CCloth *this_ptr,char *bone_name,int vertex_index)

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
    _DAT_01d046a0 = "..\\core\\cloth.cpp";
    _DAT_01d046a4 = 0xab4;
    core_main_c_FUN_004e4500("CCloth::grabCloth - Can't find bone %s",bone_name);
  }
  this_ptr->vertices[vertex_index].locked = 1;
  this_ptr->vertices[vertex_index].collide_bone_index = iVar2;
  return;
}
