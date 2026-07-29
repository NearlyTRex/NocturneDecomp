// Name: core_event.cpp_CEventList_getSfxHandle_FUN_00480bf0
// Address: 00480bf0
// Address Range: [[00480bf0, 00480c26]]
// Convention: __cdecl
// Signature: uint __cdecl core_event_cpp_CEventList_getSfxHandle_FUN_00480bf0(CEventList *this_ptr,char *name)

#include "nocturne.h"

uint __cdecl core_event_cpp_CEventList_getSfxHandle_FUN_00480bf0(CEventList *this_ptr,char *name)

{
  int iVar1;
  
  core_event_cpp_CEventList_updateSfxEntries_FUN_00480d60(this_ptr);
  iVar1 = core_event_cpp_CEventList_findSfxEntry_FUN_00480d10(this_ptr,name);
  if (-1 < iVar1) {
    return (this_ptr->sfx_handles).entries[iVar1].sfx_handle;
  }
  return 0;
}
