// Name: core_event.cpp_CEventList_findTimer_FUN_00494dd0
// Address: 00494dd0
// Address Range: [[00494dd0, 00494e1a]]
// Convention: __cdecl
// Signature: int __cdecl core_event_cpp_CEventList_findTimer_FUN_00494dd0(CEventList *this_ptr,char *name)

#include "nocturne.h"

int __cdecl core_event_cpp_CEventList_findTimer_FUN_00494dd0(CEventList *this_ptr,char *name)

{
  int iVar1;
  int iVar2;
  CEventList *str1;
  
  iVar2 = 0;
  if (0 < *(int *)(this_ptr + 0x3210)) {
    str1 = this_ptr + 0x3214;
    do {
      iVar1 = _stricmp((char *)str1,name);
      if (iVar1 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      str1 = str1 + 0x20;
    } while (iVar2 < *(int *)(this_ptr + 0x3210));
  }
  return -1;
}
