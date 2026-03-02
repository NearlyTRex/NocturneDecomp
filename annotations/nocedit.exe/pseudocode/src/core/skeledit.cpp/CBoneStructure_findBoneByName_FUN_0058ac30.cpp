// Name: core_skeledit.cpp_CBoneStructure_findBoneByName_FUN_0058ac30
// Address: 0058ac30
// Address Range: [[0058ac30, 0058ac7c]]
// Convention: __cdecl
// Signature: int __cdecl core_skeledit_cpp_CBoneStructure_findBoneByName_FUN_0058ac30(CBoneStructure *this_ptr,char *bone_name)

#include "nocturne.h"

int __cdecl core_skeledit_cpp_CBoneStructure_findBoneByName_FUN_0058ac30(CBoneStructure *this_ptr,char *bone_name)

{
  int iVar1;
  int iVar2;
  SBoneData *str1;
  
  __STK();
  iVar2 = 0;
  if (0 < this_ptr->bone_count) {
    str1 = this_ptr->bones;
    do {
      iVar1 = _stricmp(str1->name,bone_name);
      if (iVar1 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      str1 = str1 + 1;
    } while (iVar2 < this_ptr->bone_count);
  }
  return -1;
}
