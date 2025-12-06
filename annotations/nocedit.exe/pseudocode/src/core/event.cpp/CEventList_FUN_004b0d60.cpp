// Name: core_event.cpp_CEventList_FUN_004b0d60
// Address: 004b0d60
// Address Range: [[004b0d60, 004b0dad]]
// Convention: __cdecl
// Signature: int core_event.cpp_CEventList_FUN_004b0d60(CEventList * this_ptr)

#include "nocturne.h"

int __cdecl core_event_cpp_CEventList_FUN_004b0d60(CEventList *this_ptr)

{
  int iVar1;
  int iVar2;
  CEvent *str1;
  char *in_stack_00000008;
  
  iVar2 = 0;
  if (0 < this_ptr[1].event_count) {
    str1 = this_ptr[1].event_list + 4;
    do {
      iVar1 = crt_string_c_stricmp_FUN_005fe7f0((char *)str1,in_stack_00000008);
      if (iVar1 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      str1 = str1 + 0x120;
    } while (iVar2 < this_ptr[1].event_count);
  }
  return -1;
}
