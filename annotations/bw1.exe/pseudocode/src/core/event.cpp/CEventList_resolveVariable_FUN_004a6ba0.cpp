// Name: core_event.cpp_CEventList_resolveVariable_FUN_004a6ba0
// Address: 004a6ba0
// Address Range: [[004a6ba0, 004a6c26]]
// Convention: __cdecl
// Signature: int __cdecl core_event_cpp_CEventList_resolveVariable_FUN_004a6ba0(CEventList *this_ptr,char *identifier)

#include "nocturne.h"

int __cdecl core_event_cpp_CEventList_resolveVariable_FUN_004a6ba0(CEventList *this_ptr,char *identifier)

{
  int iVar1;
  int iVar2;
  CEventList *str1;
  
  iVar1 = _stricmp(identifier,&DAT_005de184);
  if (iVar1 != 0) {
    iVar1 = 0;
    if (0 < *(int *)(this_ptr + 0xc84)) {
      str1 = this_ptr + 0xc88;
      do {
        iVar2 = _stricmp((char *)str1,identifier);
        if (iVar2 == 0) {
          return 1;
        }
        iVar1 = iVar1 + 1;
        str1 = str1 + 0x20;
      } while (iVar1 < *(int *)(this_ptr + 0xc84));
    }
    iVar1 = core_event_cpp_CEventList_findPersistentEvent_FUN_004a9eb0(this_ptr,identifier);
    if (((iVar1 < 0) &&
        (iVar1 = core_event_cpp_CEventList_findGameFlag_FUN_004a9f00(this_ptr,identifier), iVar1 < 0
        )) && (iVar1 = core_event_cpp_CEventList_findTimer_FUN_004a9f50(this_ptr,identifier),
              iVar1 < 0)) {
      return 0;
    }
  }
  return 1;
}
