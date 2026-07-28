// Name: core_event.cpp_CEventList_addOrRemoveGameFlag_FUN_00480420
// Address: 00480420
// Address Range: [[00480420, 00480543]]
// Convention: __cdecl
// Signature: void __cdecl core_event_cpp_CEventList_addOrRemoveGameFlag_FUN_00480420(CEventList *this_ptr,char *name,int add_flag)

#include "nocturne.h"

void __cdecl core_event_cpp_CEventList_addOrRemoveGameFlag_FUN_00480420(CEventList *this_ptr,char *name,int add_flag)

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
    iVar2 = core_event_cpp_CEventList_findGameFlag_FUN_00480860(this_ptr,name);
    if (add_flag == 0) {
      if (-1 < iVar2) {
        iVar4 = (this_ptr->game_flags).count + -1;
        (this_ptr->game_flags).count = iVar4;
        memmove
                  ((this_ptr->game_flags).names + iVar2,
                   (&this_ptr->current_events)[1].names + iVar2 + 1,(iVar4 - iVar2) * 0x20);
        return;
      }
    }
    else if (iVar2 < 0) {
      if (9 < (this_ptr->game_flags).count) {
        PTR_01cc4800 = "..\\core\\event.cpp";
        INT_01cc4804 = 0xa37;
        core_main_c_FUN_004c8440("Too many game flags!");
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
        INT_01cc4804 = 0xa3d;
        core_main_c_FUN_004c8440("Event name %s too long!",name);
      }
      pacVar6 = (this_ptr->game_flags).names + (this_ptr->game_flags).count;
      do {
        cVar1 = *name;
        (*pacVar6)[0] = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = name[1];
        name = name + 2;
        (*pacVar6)[1] = cVar1;
        pacVar6 = (char (*) [32])(*pacVar6 + 2);
      } while (cVar1 != '\0');
      strupr((this_ptr->game_flags).names[(this_ptr->game_flags).count]);
      (this_ptr->game_flags).count = (this_ptr->game_flags).count + 1;
      return;
    }
  }
  return;
}
