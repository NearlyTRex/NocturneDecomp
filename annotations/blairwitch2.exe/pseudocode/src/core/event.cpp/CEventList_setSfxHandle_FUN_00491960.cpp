// Name: core_event.cpp_CEventList_setSfxHandle_FUN_00491960
// Address: 00491960
// Address Range: [[00491960, 00491a3d]]
// Convention: __cdecl
// Signature: void __cdecl core_event_cpp_CEventList_setSfxHandle_FUN_00491960(CEventList *this_ptr,char *name,uint sfx_handle)

#include "nocturne.h"

void __cdecl core_event_cpp_CEventList_setSfxHandle_FUN_00491960(CEventList *this_ptr,char *name,uint sfx_handle)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  SSfxEntry *pSVar4;
  char *pcVar5;
  byte bVar6;
  
  bVar6 = 0;
  core_event_cpp_CEventList_updateSfxEntries_FUN_00491a90(this_ptr);
  iVar2 = core_event_cpp_CEventList_findSfxEntry_FUN_00491a40(this_ptr,name);
  if (iVar2 < 0) {
    if (0x13 < (this_ptr->sfx_handles).count) {
      g_CurrentFilename = "..\\core\\event.cpp";
      g_CurrentLineNumber = 3768;
      core_main_c_displayErrorAndQuit_FUN_004e4500("CEventList::setSfxHandle - too many sfx!");
    }
    iVar2 = (this_ptr->sfx_handles).count;
    (this_ptr->sfx_handles).count = iVar2 + 1;
  }
  pSVar4 = (this_ptr->sfx_handles).entries + iVar2;
  uVar3 = 0xffffffff;
  pcVar5 = name;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + (uint)bVar6 * -2 + 1;
  } while (cVar1 != '\0');
  if (0x13 < ~uVar3 - 1) {
    g_CurrentFilename = "..\\core\\event.cpp";
    g_CurrentLineNumber = 3776;
    core_main_c_displayErrorAndQuit_FUN_004e4500("CEventList::setSfxHandle - sfx handle name %s is too long - max %d characters");
  }
  pcVar5 = pSVar4->handle_name;
  do {
    cVar1 = *name;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = name[1];
    name = name + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  pSVar4->sfx_handle = sfx_handle;
  core_event_cpp_CEventList_updateSfxEntries_FUN_00491a90(this_ptr);
  return;
}
