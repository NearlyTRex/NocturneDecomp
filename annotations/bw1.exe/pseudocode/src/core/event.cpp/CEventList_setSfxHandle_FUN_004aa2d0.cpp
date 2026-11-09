// Name: core_event.cpp_CEventList_setSfxHandle_FUN_004aa2d0
// Address: 004aa2d0
// Address Range: [[004aa2d0, 004aa3ad]]
// Convention: __cdecl
// Signature: void __cdecl core_event_cpp_CEventList_setSfxHandle_FUN_004aa2d0(CEventList *this_ptr,char *name,uint sfx_handle)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_event_cpp_CEventList_setSfxHandle_FUN_004aa2d0(CEventList *this_ptr,char *name,uint sfx_handle)

{
  char cVar1;
  CEventList CVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  CEventList *pCVar6;
  byte bVar7;
  
  bVar7 = 0;
  core_event_cpp_CEventList_updateSfxEntries_FUN_004aa400(this_ptr);
  iVar3 = core_event_cpp_CEventList_findSfxEntry_FUN_004aa3b0(this_ptr,name);
  if (iVar3 < 0) {
    if (0x13 < *(int *)(this_ptr + 0x3ac8)) {
      _DAT_01d1d400 = "..\\core\\event.cpp";
      _DAT_01d1d404 = 0xefd;
      core_main_c_FUN_005030e0("CEventList::setSfxHandle - too many sfx!");
    }
    iVar3 = *(int *)(this_ptr + 0x3ac8);
    *(int *)(this_ptr + 0x3ac8) = iVar3 + 1;
  }
  uVar4 = 0xffffffff;
  pcVar5 = name;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + (uint)bVar7 * -2 + 1;
  } while (cVar1 != '\0');
  if (0x13 < ~uVar4 - 1) {
    _DAT_01d1d400 = "..\\core\\event.cpp";
    _DAT_01d1d404 = 0xf05;
    core_main_c_FUN_005030e0("CEventList::setSfxHandle - sfx handle name %s is too long - max %d characters",name,0x13);
  }
  pCVar6 = this_ptr + iVar3 * 0x120 + 0x3acc + 4;
  do {
    CVar2 = (CEventList)*name;
    *pCVar6 = CVar2;
    if (CVar2 == (CEventList)0x0) break;
    CVar2 = *(CEventList *)(name + 1);
    name = name + 2;
    pCVar6[1] = CVar2;
    pCVar6 = pCVar6 + 2;
  } while (CVar2 != (CEventList)0x0);
  *(uint *)(this_ptr + iVar3 * 0x120 + 0x3acc) = sfx_handle;
  core_event_cpp_CEventList_updateSfxEntries_FUN_004aa400(this_ptr);
  return;
}
