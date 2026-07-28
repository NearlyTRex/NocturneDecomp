// Name: core_event.cpp_CEventList_findGameFlag_FUN_00480860
// Address: 00480860
// Address Range: [[00480860, 004808aa]]
// Convention: __cdecl
// Signature: int __cdecl core_event_cpp_CEventList_findGameFlag_FUN_00480860(CEventList *this_ptr,char *name)

#include "nocturne.h"

int __cdecl core_event_cpp_CEventList_findGameFlag_FUN_00480860(CEventList *this_ptr,char *name)

{
  int iVar1;
  int iVar2;
  char (*str1) [32];
  
  iVar2 = 0;
  if (0 < (this_ptr->game_flags).count) {
    str1 = (this_ptr->game_flags).names;
    do {
      iVar1 = _stricmp(*str1,name);
      if (iVar1 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      str1 = str1 + 1;
    } while (iVar2 < (this_ptr->game_flags).count);
  }
  return -1;
}
