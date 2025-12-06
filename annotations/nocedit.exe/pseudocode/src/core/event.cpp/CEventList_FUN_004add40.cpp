// Name: core_event.cpp_CEventList_FUN_004add40
// Address: 004add40
// Address Range: [[004add40, 004add79]]
// Convention: __cdecl
// Signature: int core_event.cpp_CEventList_FUN_004add40(CEventList * this_ptr)

#include "nocturne.h"

int __cdecl core_event_cpp_CEventList_FUN_004add40(CEventList *this_ptr)

{
  int iVar1;
  char *in_stack_00000008;
  
  if (*in_stack_00000008 != '\0') {
    DAT_02d0a45c = 1;
    iVar1 = core_event_cpp_CEventList_FUN_004aac00(this_ptr);
    DAT_02d0a45c = 0;
    if (iVar1 == 0) {
      return 0x2d0a460;
    }
  }
  return 0;
}
