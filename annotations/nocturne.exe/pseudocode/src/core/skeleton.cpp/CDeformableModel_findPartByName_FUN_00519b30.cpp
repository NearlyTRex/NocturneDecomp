// Name: core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00519b30
// Address: 00519b30
// Address Range: [[00519b30, 00519bb5]]
// Convention: __cdecl
// Signature: int __cdecl core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30(CDeformableModel *this_ptr,char *part_name,int error_if_not_found)

#include "nocturne.h"

int __cdecl core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30(CDeformableModel *this_ptr,char *part_name,int error_if_not_found)

{
  int iVar1;
  int iVar2;
  int *str2;
  
  iVar2 = 0;
  if (0 < this_ptr->texture_sets[0].textures[0x28].textures[0].base.type) {
    str2 = &this_ptr->texture_sets[0].textures[0x28].textures[0].base.count;
    do {
      iVar1 = _stricmp(part_name,(char *)str2);
      if (iVar1 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      str2 = str2 + 0x18;
    } while (iVar2 < this_ptr->texture_sets[0].textures[0x28].textures[0].base.type);
  }
  if (error_if_not_found == 0) {
    return -1;
  }
  PTR_01cc4800 = "..\\core\\skeleton.cpp";
  INT_01cc4804 = 0x5c8;
  core_main_c_FUN_004c8440
            ("Can't find part %s in model %s",part_name,
             this_ptr->texture_sets[1].textures[0x44].textures[0].texture_name + 8);
  return -1;
}
