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
  char (*str1) [32];
  
  iVar2 = 0;
  if (0 < (this_ptr->timers).count) {
    str1 = (this_ptr->timers).names;
    do {
      iVar1 = _stricmp(*str1,name);
      if (iVar1 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      str1 = str1 + 1;
    } while (iVar2 < (this_ptr->timers).count);
  }
  return -1;
}
