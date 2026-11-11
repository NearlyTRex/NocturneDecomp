// Name: core_event.cpp_CEventList_getSfxHandle_FUN_00495110
// Address: 00495110
// Address Range: [[00495110, 00495146]]
// Convention: __cdecl
// Signature: uint __cdecl core_event_cpp_CEventList_getSfxHandle_FUN_00495110(CEventList *this_ptr,char *name)

#include "nocturne.h"

uint __cdecl core_event_cpp_CEventList_getSfxHandle_FUN_00495110(CEventList *this_ptr,char *name)

{
  int iVar1;
  
  core_event_cpp_CEventList_updateSfxEntries_FUN_00495280(this_ptr);
  iVar1 = core_event_cpp_CEventList_findSfxEntry_FUN_00495230(this_ptr,name);
  if (-1 < iVar1) {
    return (this_ptr->sfx_handles).entries[iVar1].sfx_handle;
  }
  return 0;
}
