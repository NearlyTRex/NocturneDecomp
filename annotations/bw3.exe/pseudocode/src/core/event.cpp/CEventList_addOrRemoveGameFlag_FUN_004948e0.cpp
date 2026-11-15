// Name: core_event.cpp_CEventList_addOrRemoveGameFlag_FUN_004948e0
// Address: 004948e0
// Address Range: [[004948e0, 00494a66]]
// Convention: __cdecl
// Signature: void __cdecl core_event_cpp_CEventList_addOrRemoveGameFlag_FUN_004948e0(CEventList *this_ptr,char *name,int add_flag)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_event_cpp_CEventList_addOrRemoveGameFlag_FUN_004948e0(CEventList *this_ptr,char *name,int add_flag)

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
    iVar2 = core_event_cpp_CEventList_findGameFlag_FUN_00494d80(this_ptr,name);
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
      if (0x31 < (this_ptr->game_flags).count) {
        file_handle = _fopen("events.txt",&DAT_005bfe8a);
        if (file_handle != (_FILE *)0x0) {
          iVar2 = 0;
          if (0 < (this_ptr->game_flags).count) {
            do {
              iVar2 = iVar2 + 1;
              FUN_005a3140(file_handle,&DAT_005bfe98,pacVar4);
              pacVar4 = pacVar4 + 1;
            } while (iVar2 < (this_ptr->game_flags).count);
          }
          _fclose(file_handle);
        }
        _DAT_01d71de0 = "..\\core\\event.cpp";
        _DAT_01d71de4 = 0xe40;
        core_main_c_displayErrorAndQuit_FUN_004e4330("Too many game flags - check events.txt!");
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
        _DAT_01d71de0 = "..\\core\\event.cpp";
        _DAT_01d71de4 = 0xe46;
        core_main_c_displayErrorAndQuit_FUN_004e4330("Event name %s too long!");
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
