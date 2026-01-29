// Name: core_event.cpp_CEventList_FUN_004b0900
// Address: 004b0900
// Address Range: [[004b0900, 004b094a]]
// Convention: __cdecl
// Signature: int __cdecl core_event_cpp_CEventList_FUN_004b0900(CEventList *this_ptr)

#include "nocturne.h"

int __cdecl core_event_cpp_CEventList_FUN_004b0900(CEventList *this_ptr)

{
  int iVar1;
  int iVar2;
  int *str1;
  char *in_stack_00000008;
  
  iVar2 = 0;
  if (0 < this_ptr->timer_count) {
    str1 = &this_ptr->timer_list;
    do {
      iVar1 = stricmp((char *)str1,in_stack_00000008);
      if (iVar1 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      str1 = str1 + 8;
    } while (iVar2 < this_ptr->timer_count);
  }
  return -1;
}
