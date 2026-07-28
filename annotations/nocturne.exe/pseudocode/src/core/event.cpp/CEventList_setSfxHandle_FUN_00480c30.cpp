// Name: core_event.cpp_CEventList_setSfxHandle_FUN_00480c30
// Address: 00480c30
// Address Range: [[00480c30, 00480d0d]]
// Convention: __cdecl
// Signature: void __cdecl core_event_cpp_CEventList_setSfxHandle_FUN_00480c30(CEventList *this_ptr,char *name,uint sfx_handle)

#include "nocturne.h"

void __cdecl core_event_cpp_CEventList_setSfxHandle_FUN_00480c30(CEventList *this_ptr,char *name,uint sfx_handle)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  SSfxEntry *pSVar4;
  char *pcVar5;
  byte bVar6;
  
  bVar6 = 0;
  core_event_cpp_CEventList_updateSfxEntries_FUN_00480d60(this_ptr);
  iVar2 = core_event_cpp_CEventList_findSfxEntry_FUN_00480d10(this_ptr,name);
  if (iVar2 < 0) {
    if (0x13 < (this_ptr->sfx_handles).count) {
      PTR_01cc4800 = "..\\core\\event.cpp";
      INT_01cc4804 = 0xba6;
      core_main_c_FUN_004c8440("CEventList::setSfxHandle - too many sfx!");
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
    PTR_01cc4800 = "..\\core\\event.cpp";
    INT_01cc4804 = 0xbae;
    core_main_c_FUN_004c8440("CEventList::setSfxHandle - sfx handle name %s is too long - max %d characters",name,0x13);
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
  core_event_cpp_CEventList_updateSfxEntries_FUN_00480d60(this_ptr);
  return;
}
