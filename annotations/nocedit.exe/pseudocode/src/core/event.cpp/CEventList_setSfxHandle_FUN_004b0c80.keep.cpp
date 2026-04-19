// Name: core_event.cpp_CEventList_setSfxHandle_FUN_004b0c80
// Address: 004b0c80
// MANUAL RECONSTRUCTION
// Address Range: [[004b0c80, 004b0d5d]]
// Convention: __cdecl
// Signature: void __cdecl core_event_cpp_CEventList_setSfxHandle_FUN_004b0c80(CEventList *this_ptr,char *name,uint sfx_handle)

#include "nocturne.h"

void __cdecl core_event_cpp_CEventList_setSfxHandle_FUN_004b0c80(CEventList *this_ptr,char *name,uint sfx_handle)

{
  int iVar2;
  SSfxEntry *pSVar4;

  core_event_cpp_CEventList_updateSfxEntries_FUN_004b0db0(this_ptr);
  iVar2 = core_event_cpp_CEventList_findSfxEntry_FUN_004b0d60(this_ptr,name);
  if (iVar2 < 0) {
    if (0x13 < (this_ptr->sfx_handles).count) {
      g_CurrentFilename = "..\\core\\event.cpp";
      g_CurrentLineNumber = 0xba6;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CEventList::setSfxHandle - too many sfx!");
    }
    iVar2 = (this_ptr->sfx_handles).count;
    (this_ptr->sfx_handles).count = iVar2 + 1;
  }
  pSVar4 = (this_ptr->sfx_handles).entries + iVar2;
  if (0x13 < (int)strlen(name)) {
    g_CurrentFilename = "..\\core\\event.cpp";
    g_CurrentLineNumber = 0xbae;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CEventList::setSfxHandle - sfx handle name %s is too long - max %d characters",name,0x13);
  }
  strcpy(pSVar4->handle_name,name);
  pSVar4->sfx_handle = sfx_handle;
  core_event_cpp_CEventList_updateSfxEntries_FUN_004b0db0(this_ptr);
  return;
}
