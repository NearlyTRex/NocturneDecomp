// Name: core_set.cpp_CDemonSet_findCameraByName_FUN_00535360
// Address: 00535360
// Address Range: [[00535360, 005353a2]]
// Convention: __cdecl
// Signature: int __cdecl core_set_cpp_CDemonSet_findCameraByName_FUN_00535360(CDemonSet *this_ptr,char *name)

#include "nocturne.h"

int __cdecl core_set_cpp_CDemonSet_findCameraByName_FUN_00535360(CDemonSet *this_ptr,char *name)

{
  int iVar1;
  int iVar2;
  char *str1;
  
  iVar2 = 0;
  if (0 < *(int *)this_ptr) {
    str1 = &this_ptr->field_0x4;
    do {
      iVar1 = _stricmp(str1,name);
      if (iVar1 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      str1 = str1 + 0x1a4;
    } while (iVar2 < *(int *)this_ptr);
  }
  return -1;
}
