// Name: core_event.cpp_CEventList_getSfxHandle_FUN_00480bf0
// Address: 00480bf0
// Address Range: [[00480bf0, 00480c26]]
// Convention: unknown
// Signature: uint core_event_cpp_CEventList_getSfxHandle_FUN_00480bf0(CEventList *param_1,char *param_2)

#include "nocturne.h"

uint core_event_cpp_CEventList_getSfxHandle_FUN_00480bf0(CEventList *param_1,char *param_2)

{
  int iVar1;
  
  core_event_cpp_CEventList_updateSfxEntries_FUN_00480d60(param_1);
  iVar1 = core_event_cpp_CEventList_findSfxEntry_FUN_00480d10(param_1,param_2);
  if (-1 < iVar1) {
    return (param_1->sfx_handles).entries[iVar1].sfx_handle;
  }
  return 0;
}
