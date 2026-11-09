// Name: shape_edittool.cpp_CStrList_findString_FUN_00481300
// Address: 00481300
// Address Range: [[00481300, 0048133e]]
// Convention: __cdecl
// Signature: int __cdecl shape_edittool_cpp_CStrList_findString_FUN_00481300(CStrList *this_ptr,char *search_string)

#include "nocturne.h"

int __cdecl shape_edittool_cpp_CStrList_findString_FUN_00481300(CStrList *this_ptr,char *search_string)

{
  char *str1;
  int iVar1;
  int index;
  char *str2;
  
  index = 0;
  if (0 < *(int *)this_ptr) {
    do {
      str2 = search_string;
      str1 = shape_edittool_cpp_CStrList_getStringAt_FUN_00481240(this_ptr,index);
      iVar1 = _stricmp(str1,str2);
      if (iVar1 == 0) {
        return index;
      }
      index = index + 1;
    } while (index < *(int *)this_ptr);
  }
  return -1;
}
