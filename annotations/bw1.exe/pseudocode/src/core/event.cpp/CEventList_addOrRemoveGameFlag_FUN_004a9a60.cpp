// Name: core_event.cpp_CEventList_addOrRemoveGameFlag_FUN_004a9a60
// Address: 004a9a60
// Address Range: [[004a9a60, 004a9be6]]
// Convention: __cdecl
// Signature: void __cdecl core_event_cpp_CEventList_addOrRemoveGameFlag_FUN_004a9a60(CEventList *this_ptr,char *name,int add_flag)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_event_cpp_CEventList_addOrRemoveGameFlag_FUN_004a9a60(CEventList *this_ptr,char *name,int add_flag)

{
  char cVar1;
  int iVar2;
  _FILE *file_handle;
  uint uVar3;
  char (*pacVar4) [32];
  char *pcVar5;
  int iVar6;
  byte bVar7;
  
  bVar7 = 0;
  if ((name != (char *)0x0) && (*name != '\0')) {
    iVar2 = core_event_cpp_CEventList_findGameFlag_FUN_004a9f00(this_ptr,name);
    pacVar4 = (this_ptr->game_flags).names;
    if (add_flag == 0) {
      if (-1 < iVar2) {
        iVar6 = (this_ptr->game_flags).count + -1;
        (this_ptr->game_flags).count = iVar6;
        memmove
                  (pacVar4 + iVar2,pacVar4 + iVar2 + 1,(iVar6 - iVar2) * 0x20);
        return;
      }
    }
    else if (iVar2 < 0) {
      if (0x27 < (this_ptr->game_flags).count) {
        file_handle = _fopen("events.txt",&DAT_005deb4e);
        if (file_handle != (_FILE *)0x0) {
          iVar2 = 0;
          if (0 < (this_ptr->game_flags).count) {
            do {
              iVar2 = iVar2 + 1;
              FUN_005c03c0(file_handle,&DAT_005deb5c,pacVar4);
              pacVar4 = pacVar4 + 1;
            } while (iVar2 < (this_ptr->game_flags).count);
          }
          _fclose(file_handle);
        }
        _DAT_01d1d400 = "..\\core\\event.cpp";
        _DAT_01d1d404 = 0xd8e;
        core_main_c_displayErrorAndQuit_FUN_005030e0("Too many game flags - check events.txt!");
      }
      uVar3 = 0xffffffff;
      pcVar5 = name;
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + (uint)bVar7 * -2 + 1;
      } while (cVar1 != '\0');
      if (0x1f < ~uVar3 - 1) {
        _DAT_01d1d400 = "..\\core\\event.cpp";
        _DAT_01d1d404 = 0xd94;
        core_main_c_displayErrorAndQuit_FUN_005030e0("Event name %s too long!");
      }
      pacVar4 = (this_ptr->game_flags).names + (this_ptr->game_flags).count;
      do {
        cVar1 = *name;
        (*pacVar4)[0] = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = name[1];
        name = name + 2;
        (*pacVar4)[1] = cVar1;
        pacVar4 = (char (*) [32])(*pacVar4 + 2);
      } while (cVar1 != '\0');
      strupr((this_ptr->game_flags).names[(this_ptr->game_flags).count]);
      (this_ptr->game_flags).count = (this_ptr->game_flags).count + 1;
      return;
    }
  }
  return;
}
