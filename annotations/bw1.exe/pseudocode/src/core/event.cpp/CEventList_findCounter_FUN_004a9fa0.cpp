// Name: core_event.cpp_CEventList_findCounter_FUN_004a9fa0
// Address: 004a9fa0
// Address Range: [[004a9fa0, 004a9fea]]
// Convention: __cdecl
// Signature: int __cdecl core_event_cpp_CEventList_findCounter_FUN_004a9fa0(CEventList *this_ptr,char *name)

#include "nocturne.h"

int __cdecl core_event_cpp_CEventList_findCounter_FUN_004a9fa0(CEventList *this_ptr,char *name)

{
  int iVar1;
  int iVar2;
  CEventList *str1;
  
  iVar2 = 0;
  if (0 < *(int *)(this_ptr + 0x337c)) {
    str1 = this_ptr + 0x3380;
    do {
      iVar1 = _stricmp((char *)str1,name);
      if (iVar1 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      str1 = str1 + 0x20;
    } while (iVar2 < *(int *)(this_ptr + 0x337c));
  }
  return -1;
}
