// Name: core_event.cpp_CEventList_FUN_004b0bf0
// Address: 004b0bf0
// Address Range: [[004b0bf0, 004b0c3a]]
// Convention: __cdecl
// Signature: int __cdecl core_event_cpp_CEventList_FUN_004b0bf0(CEventList *this_ptr)

#include "nocturne.h"

int __cdecl core_event_cpp_CEventList_FUN_004b0bf0(CEventList *this_ptr)

{
  int iVar1;
  int iVar2;
  char *str1;
  char *in_stack_00000008;
  
  iVar2 = 0;
  if (0 < this_ptr->actor_var_count) {
    str1 = this_ptr->variablesVarName1;
    do {
      iVar1 = crt_string_c_stricmp_FUN_005fe7f0(str1,in_stack_00000008);
      if (iVar1 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      str1 = str1 + 0x1e;
    } while (iVar2 < this_ptr->actor_var_count);
  }
  return -1;
}
