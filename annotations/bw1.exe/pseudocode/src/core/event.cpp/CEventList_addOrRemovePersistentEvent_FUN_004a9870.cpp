// Name: core_event.cpp_CEventList_addOrRemovePersistentEvent_FUN_004a9870
// Address: 004a9870
// Address Range: [[004a9870, 004a99f6]]
// Convention: __cdecl
// Signature: void __cdecl core_event_cpp_CEventList_addOrRemovePersistentEvent_FUN_004a9870(CEventList *this_ptr,char *name,int add_flag)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_event_cpp_CEventList_addOrRemovePersistentEvent_FUN_004a9870(CEventList *this_ptr,char *name,int add_flag)

{
  char cVar1;
  int iVar2;
  _FILE *file;
  uint uVar3;
  char *pcVar4;
  char (*pacVar5) [32];
  int iVar6;
  byte bVar7;
  
  bVar7 = 0;
  if ((name != (char *)0x0) && (*name != '\0')) {
    iVar2 = core_event_cpp_CEventList_findPersistentEvent_FUN_004a9eb0(this_ptr,name);
    if (add_flag == 0) {
      if (-1 < iVar2) {
        iVar6 = (this_ptr->persistent_events).count + -1;
        (this_ptr->persistent_events).count = iVar6;
        memmove
                  ((this_ptr->persistent_events).names + iVar2,
                   (&this_ptr->game_flags)[1].names + iVar2 + 1,(iVar6 - iVar2) * 0x20);
        return;
      }
    }
    else if (iVar2 < 0) {
      if (99 < (this_ptr->persistent_events).count) {
        file = _fopen("events.txt",&DAT_005deab4);
        if (file != (_FILE *)0x0) {
          iVar2 = 0;
          if (0 < (this_ptr->persistent_events).count) {
            do {
              iVar2 = iVar2 + 1;
              _fprintf(file,&DAT_005deac2);
            } while (iVar2 < (this_ptr->persistent_events).count);
          }
          _fclose(file);
        }
        _DAT_01d1d400 = "..\\core\\event.cpp";
        _DAT_01d1d404 = 0xd38;
        core_main_c_displayErrorAndQuit_FUN_005030e0("Too many persistent events - check events.txt");
      }
      uVar3 = 0xffffffff;
      pcVar4 = name;
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + (uint)bVar7 * -2 + 1;
      } while (cVar1 != '\0');
      if (0x1f < ~uVar3 - 1) {
        _DAT_01d1d400 = "..\\core\\event.cpp";
        _DAT_01d1d404 = 0xd3e;
        core_main_c_displayErrorAndQuit_FUN_005030e0("Event name %s too long!");
      }
      pacVar5 = (this_ptr->persistent_events).names + (this_ptr->persistent_events).count;
      do {
        cVar1 = *name;
        (*pacVar5)[0] = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = name[1];
        name = name + 2;
        (*pacVar5)[1] = cVar1;
        pacVar5 = (char (*) [32])(*pacVar5 + 2);
      } while (cVar1 != '\0');
      strupr
                ((this_ptr->persistent_events).names[(this_ptr->persistent_events).count]);
      (this_ptr->persistent_events).count = (this_ptr->persistent_events).count + 1;
      return;
    }
  }
  return;
}
