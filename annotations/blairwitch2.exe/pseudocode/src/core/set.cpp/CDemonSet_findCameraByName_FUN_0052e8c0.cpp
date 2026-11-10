// Name: core_set.cpp_CDemonSet_findCameraByName_FUN_0052e8c0
// Address: 0052e8c0
// Address Range: [[0052e8c0, 0052e902]]
// Convention: __cdecl
// Signature: int __cdecl core_set_cpp_CDemonSet_findCameraByName_FUN_0052e8c0(CDemonSet *this_ptr,char *name)

#include "nocturne.h"

int __cdecl core_set_cpp_CDemonSet_findCameraByName_FUN_0052e8c0(CDemonSet *this_ptr,char *name)

{
  int iVar1;
  int iVar2;
  C3DSCamera *str1;
  
  iVar2 = 0;
  if (0 < this_ptr->camera_count) {
    str1 = this_ptr->cameras;
    do {
      iVar1 = _stricmp((char *)str1,name);
      if (iVar1 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      str1 = str1 + 1;
    } while (iVar2 < this_ptr->camera_count);
  }
  return -1;
}
