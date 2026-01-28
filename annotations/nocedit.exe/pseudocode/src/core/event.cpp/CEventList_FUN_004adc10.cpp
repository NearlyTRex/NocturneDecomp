// Name: core_event.cpp_CEventList_FUN_004adc10
// Address: 004adc10
// Address Range: [[004adc10, 004adc96]]
// Convention: __cdecl
// Signature: int __cdecl core_event_cpp_CEventList_FUN_004adc10(CEventList *this_ptr,char *str)

#include "nocturne.h"

int __cdecl core_event_cpp_CEventList_FUN_004adc10(CEventList *this_ptr,char *str)

{
  int iVar1;
  int iVar2;
  int *str1;
  
  iVar1 = crt_string_c_stricmp_FUN_005fe7f0(str,"TRUE");
  if (iVar1 != 0) {
    iVar1 = 0;
    if (0 < this_ptr->current_event_count) {
      str1 = this_ptr->current_event_list;
      do {
        iVar2 = crt_string_c_stricmp_FUN_005fe7f0((char *)str1,str);
        if (iVar2 == 0) {
          return 1;
        }
        iVar1 = iVar1 + 1;
        str1 = str1 + 8;
      } while (iVar1 < this_ptr->current_event_count);
    }
    iVar1 = core_event_cpp_CEventList_FUN_004b0860(this_ptr);
    if (((iVar1 < 0) && (iVar1 = core_event_cpp_CEventList_FUN_004b08b0(this_ptr), iVar1 < 0)) &&
       (iVar1 = core_event_cpp_CEventList_FUN_004b0900(this_ptr), iVar1 < 0)) {
      return 0;
    }
  }
  return 1;
}
