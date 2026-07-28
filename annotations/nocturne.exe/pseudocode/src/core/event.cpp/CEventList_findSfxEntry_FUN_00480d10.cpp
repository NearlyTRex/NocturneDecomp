// Name: core_event.cpp_CEventList_findSfxEntry_FUN_00480d10
// Address: 00480d10
// Address Range: [[00480d10, 00480d5d]]
// Convention: __cdecl
// Signature: int __cdecl core_event_cpp_CEventList_findSfxEntry_FUN_00480d10(CEventList *this_ptr,char *name)

#include "nocturne.h"

int __cdecl core_event_cpp_CEventList_findSfxEntry_FUN_00480d10(CEventList *this_ptr,char *name)

{
  int iVar1;
  int iVar2;
  char *str1;
  
  iVar2 = 0;
  if (0 < (this_ptr->sfx_handles).count) {
    str1 = (this_ptr->sfx_handles).entries[0].handle_name;
    do {
      iVar1 = _stricmp(str1,name);
      if (iVar1 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      str1 = str1 + 0x120;
    } while (iVar2 < (this_ptr->sfx_handles).count);
  }
  return -1;
}
