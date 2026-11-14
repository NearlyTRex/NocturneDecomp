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
  char (*str1) [32];
  
  iVar2 = 0;
  if (0 < (this_ptr->counters).count) {
    str1 = (this_ptr->counters).names;
    do {
      iVar1 = _stricmp(*str1,name);
      if (iVar1 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      str1 = str1 + 1;
    } while (iVar2 < (this_ptr->counters).count);
  }
  return -1;
}
