// Name: shape_edittool.cpp_CStrList_findString_FUN_00474140
// Address: 00474140
// Address Range: [[00474140, 0047417e]]
// Convention: __cdecl
// Signature: int __cdecl shape_edittool_cpp_CStrList_findString_FUN_00474140(CStrList *this_ptr,char *search_string)

#include "nocturne.h"

int __cdecl shape_edittool_cpp_CStrList_findString_FUN_00474140(CStrList *this_ptr,char *search_string)

{
  char *str1;
  int iVar1;
  int index;
  char *str2;
  
  index = 0;
  if (0 < this_ptr->item_count) {
    do {
      str2 = search_string;
      str1 = shape_edittool_cpp_CStrList_getStringAt_FUN_00474080(this_ptr,index);
      iVar1 = _stricmp(str1,str2);
      if (iVar1 == 0) {
        return index;
      }
      index = index + 1;
    } while (index < this_ptr->item_count);
  }
  return -1;
}
