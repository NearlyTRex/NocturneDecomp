// Name: core_event.cpp_CEventList_FUN_004add80
// Address: 004add80
// Address Range: [[004add80, 004added]]
// Convention: __cdecl
// Signature: int core_event.cpp_CEventList_FUN_004add80(CEventList * this_ptr)

#include "nocturne.h"

int __cdecl core_event_cpp_CEventList_FUN_004add80(CEventList *this_ptr)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char *in_stack_00000008;
  
  DAT_02d0a460 = 0;
  iVar2 = core_event_cpp_CEventList_FUN_004b0270(this_ptr);
  if ((-1 < iVar2) && (*in_stack_00000008 != '\0')) {
    pcVar3 = "Syntax error";
    pcVar4 = &DAT_02d0a460;
    do {
      cVar1 = *pcVar3;
      *pcVar4 = cVar1;
      if (cVar1 == '\0') {
        return -1;
      }
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      pcVar4[1] = cVar1;
      pcVar4 = pcVar4 + 2;
    } while (cVar1 != '\0');
    return -1;
  }
  return iVar2;
}
