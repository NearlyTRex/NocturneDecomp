// Name: shape_edittool.cpp_CStrList_findByFirstField_FUN_004a3070
// Address: 004a3070
// Address Range: [[004a3070, 004a3116]]
// Convention: __cdecl
// Signature: int shape_edittool.cpp_CStrList_findByFirstField_FUN_004a3070(CStrList * this_ptr, char * search_field)

#include "nocturne.h"

int __cdecl
shape_edittool_cpp_CStrList_findByFirstField_FUN_004a3070(CStrList *this_ptr,char *search_field)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  int index;
  char local_19c [200];
  char local_d4 [200];
  
  pcVar2 = local_d4;
  cVar1 = *search_field;
  while ((cVar1 != '\0' && (*search_field != '\t'))) {
    cVar1 = *search_field;
    search_field = search_field + 1;
    *pcVar2 = cVar1;
    cVar1 = *search_field;
    pcVar2 = pcVar2 + 1;
  }
  *pcVar2 = '\0';
  index = 0;
  if (0 < this_ptr->item_count) {
    do {
      pcVar2 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(this_ptr,index);
      cVar1 = *pcVar2;
      pcVar4 = local_19c;
      while ((cVar1 != '\0' && (*pcVar2 != '\t'))) {
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
        *pcVar4 = cVar1;
        cVar1 = *pcVar2;
        pcVar4 = pcVar4 + 1;
      }
      *pcVar4 = '\0';
      iVar3 = crt_string_c_stricmp_FUN_005fe7f0(local_19c,local_d4);
      if (iVar3 == 0) {
        return index;
      }
      index = index + 1;
    } while (index < this_ptr->item_count);
  }
  return -1;
}
