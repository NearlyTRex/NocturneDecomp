// Name: core_event.cpp_CEventList_addOrRemovePersistentEvent_FUN_004802e0
// Address: 004802e0
// Address Range: [[004802e0, 00480403]]
// Convention: __cdecl
// Signature: void __cdecl core_event_cpp_CEventList_addOrRemovePersistentEvent_FUN_004802e0(CEventList *this_ptr,char *name,int add_flag)

#include "nocturne.h"

void __cdecl core_event_cpp_CEventList_addOrRemovePersistentEvent_FUN_004802e0(CEventList *this_ptr,char *name,int add_flag)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  char (*pacVar6) [32];
  byte bVar7;
  
  bVar7 = 0;
  if ((name != (char *)0x0) && (*name != '\0')) {
    iVar2 = core_event_cpp_CEventList_findPersistentEvent_FUN_00480810(this_ptr,name);
    if (add_flag == 0) {
      if (-1 < iVar2) {
        iVar4 = (this_ptr->persistent_events).count + -1;
        (this_ptr->persistent_events).count = iVar4;
        memmove
                  ((this_ptr->persistent_events).names + iVar2,
                   (&this_ptr->game_flags)[1].names + iVar2 + 1,(iVar4 - iVar2) * 0x20);
        return;
      }
    }
    else if (iVar2 < 0) {
      if (99 < (this_ptr->persistent_events).count) {
        PTR_01cc4800 = "..\\core\\event.cpp";
        INT_01cc4804 = 0x9f5;
        core_main_c_FUN_004c8440("Too many persistent events!");
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
        PTR_01cc4800 = "..\\core\\event.cpp";
        INT_01cc4804 = 0x9fb;
        core_main_c_FUN_004c8440("Event name %s too long!",name);
      }
      pacVar6 = (this_ptr->persistent_events).names + (this_ptr->persistent_events).count;
      do {
        cVar1 = *name;
        (*pacVar6)[0] = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = name[1];
        name = name + 2;
        (*pacVar6)[1] = cVar1;
        pacVar6 = (char (*) [32])(*pacVar6 + 2);
      } while (cVar1 != '\0');
      strupr
                ((this_ptr->persistent_events).names[(this_ptr->persistent_events).count]);
      (this_ptr->persistent_events).count = (this_ptr->persistent_events).count + 1;
      return;
    }
  }
  return;
}
