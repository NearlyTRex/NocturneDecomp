// Name: core_event.cpp_CEventList_FUN_004b0270
// Address: 004b0270
// Address Range: [[004b0270, 004b0329]]
// Convention: __cdecl
// Signature: int __cdecl core_event_cpp_CEventList_FUN_004b0270(CEventList *this_ptr)

#include "nocturne.h"

int __cdecl core_event_cpp_CEventList_FUN_004b0270(CEventList *this_ptr)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int in_stack_00000008;
  int *in_stack_0000000c;
  
  iVar2 = core_event_cpp_CEventList_FUN_004ae140(this_ptr);
  if (iVar2 < 0) {
    return iVar2;
  }
  while( true ) {
    while( true ) {
      cVar1 = *(char *)(*in_stack_0000000c + in_stack_00000008);
      if (cVar1 == '\0') {
        return iVar2;
      }
      if (cVar1 != '|') break;
      iVar3 = *in_stack_0000000c;
      iVar4 = iVar3 + 1;
      *in_stack_0000000c = iVar4;
      if (*(char *)(in_stack_00000008 + iVar4) == '|') {
        *in_stack_0000000c = iVar3 + 2;
      }
      iVar3 = core_event_cpp_CEventList_FUN_004ae140(this_ptr);
      if (iVar3 < 0) {
        return iVar3;
      }
      if ((iVar2 != 0) || (iVar3 != 0)) {
        iVar2 = 1;
      }
    }
    if (cVar1 != '&') {
      return iVar2;
    }
    iVar3 = *in_stack_0000000c;
    iVar4 = iVar3 + 1;
    *in_stack_0000000c = iVar4;
    if (*(char *)(in_stack_00000008 + iVar4) == '&') {
      *in_stack_0000000c = iVar3 + 2;
    }
    iVar3 = core_event_cpp_CEventList_FUN_004ae140(this_ptr);
    if (iVar3 < 0) break;
    if ((iVar2 == 0) || (iVar3 == 0)) {
      iVar2 = 0;
    }
    else {
      iVar2 = 1;
    }
  }
  return iVar3;
}
