// Name: core_event.cpp_CEventList_getSfxHandle_FUN_004aa290
// Address: 004aa290
// Address Range: [[004aa290, 004aa2c6]]
// Convention: __cdecl
// Signature: uint __cdecl core_event_cpp_CEventList_getSfxHandle_FUN_004aa290(CEventList *this_ptr,char *name)

#include "nocturne.h"

uint __cdecl core_event_cpp_CEventList_getSfxHandle_FUN_004aa290(CEventList *this_ptr,char *name)

{
  int iVar1;
  
  core_event_cpp_CEventList_updateSfxEntries_FUN_004aa400(this_ptr);
  iVar1 = core_event_cpp_CEventList_findSfxEntry_FUN_004aa3b0(this_ptr,name);
  if (-1 < iVar1) {
    return (this_ptr->sfx_handles).entries[iVar1].sfx_handle;
  }
  return 0;
}
