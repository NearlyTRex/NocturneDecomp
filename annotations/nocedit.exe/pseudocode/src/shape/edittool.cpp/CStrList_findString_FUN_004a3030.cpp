// Name: shape_edittool.cpp_CStrList_findString_FUN_004a3030
// Address: 004a3030
// Address Range: [[004a3030, 004a306e]]
// Convention: __cdecl
// Signature: int __cdecl shape_edittool_cpp_CStrList_findString_FUN_004a3030(CStrList *this_ptr,char *search_string)

#include "nocturne.h"

int __cdecl
shape_edittool_cpp_CStrList_findString_FUN_004a3030(CStrList *this_ptr,char *search_string)

{
  char *str1;
  int iVar1;
  int index;
  char *str2;
  
  index = 0;
  if (0 < this_ptr->item_count) {
    do {
      str2 = search_string;
      str1 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(this_ptr,index);
      iVar1 = crt_string_c_stricmp_FUN_005fe7f0(str1,str2);
      if (iVar1 == 0) {
        return index;
      }
      index = index + 1;
    } while (index < this_ptr->item_count);
  }
  return -1;
}
