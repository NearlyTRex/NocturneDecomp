// Name: core_event.cpp_CEventList_getSfxHandle_FUN_004b0c40
// Address: 004b0c40
// Address Range: [[004b0c40, 004b0c76]]
// Convention: __cdecl
// Signature: uint __cdecl core_event_cpp_CEventList_getSfxHandle_FUN_004b0c40(CEventList *this_ptr,char *name)

#include "nocturne.h"

uint __cdecl core_event_cpp_CEventList_getSfxHandle_FUN_004b0c40(CEventList *this_ptr,char *name)

{
  int iVar1;
  
  core_event_cpp_CEventList_updateSfxEntries_FUN_004b0db0(this_ptr);
  iVar1 = core_event_cpp_CEventList_findSfxEntry_FUN_004b0d60(this_ptr,name);
  if (-1 < iVar1) {
    return (this_ptr->sfx_handles).entries[iVar1].sfx_handle;
  }
  return 0;
}
