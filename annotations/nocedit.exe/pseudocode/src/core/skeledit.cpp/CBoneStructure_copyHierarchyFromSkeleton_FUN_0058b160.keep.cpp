// Name: core_skeledit.cpp_CBoneStructure_copyHierarchyFromSkeleton_FUN_0058b160
// Address: 0058b160
// MANUAL RECONSTRUCTION
// Address Range: [[0058b160, 0058b1f3]]
// Convention: __cdecl
// Signature: void __cdecl core_skeledit_cpp_CBoneStructure_copyHierarchyFromSkeleton_FUN_0058b160(CBoneStructure *this_ptr,CSkeleton *skeleton)

#include "nocturne.h"

void __cdecl core_skeledit_cpp_CBoneStructure_copyHierarchyFromSkeleton_FUN_0058b160(CBoneStructure *this_ptr,CSkeleton *skeleton)

{
  int iVar5;
  int iVar2;

  iVar2 = skeleton->bone_count;
  iVar5 = 0;
  this_ptr->bone_count = iVar2;
  if (0 < iVar2) {
    do {
      strcpy(this_ptr->bones[iVar5].name, skeleton->bone_list[iVar5].bone_name);
      this_ptr->bones[iVar5].parent_index = skeleton->bone_list[iVar5].parent_index;
      iVar5 = iVar5 + 1;
    } while (iVar5 < this_ptr->bone_count);
  }
  return;
}
