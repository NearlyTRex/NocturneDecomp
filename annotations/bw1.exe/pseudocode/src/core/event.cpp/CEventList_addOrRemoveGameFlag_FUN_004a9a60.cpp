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
  _FILE *p_Var3;
  uint uVar4;
  char (*pacVar5) [32];
  char *pcVar6;
  int iVar7;
  byte bVar8;
  
  bVar8 = 0;
  if ((name != (char *)0x0) && (*name != '\0')) {
    iVar2 = core_event_cpp_CEventList_findGameFlag_FUN_004a9f00(this_ptr,name);
    pacVar5 = (this_ptr->game_flags).names;
    if (add_flag == 0) {
      if (-1 < iVar2) {
        iVar7 = (this_ptr->game_flags).count + -1;
        (this_ptr->game_flags).count = iVar7;
        memmove
                  (pacVar5 + iVar2,pacVar5 + iVar2 + 1,(iVar7 - iVar2) * 0x20);
        return;
      }
    }
    else if (iVar2 < 0) {
      if (0x27 < (this_ptr->game_flags).count) {
        p_Var3 = _fopen("events.txt",&DAT_005deb4e);
        if (p_Var3 != (_FILE *)0x0) {
          iVar2 = 0;
          if (0 < (this_ptr->game_flags).count) {
            do {
              iVar2 = iVar2 + 1;
              FUN_005c03c0(p_Var3,&DAT_005deb5c,pacVar5);
              pacVar5 = pacVar5 + 1;
            } while (iVar2 < (this_ptr->game_flags).count);
          }
          _fclose(p_Var3);
        }
        _DAT_01d1d400 = "..\\core\\event.cpp";
        _DAT_01d1d404 = 0xd8e;
        core_main_c_FUN_005030e0("Too many game flags - check events.txt!");
      }
      uVar4 = 0xffffffff;
      pcVar6 = name;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + (uint)bVar8 * -2 + 1;
      } while (cVar1 != '\0');
      if (0x1f < ~uVar4 - 1) {
        _DAT_01d1d400 = "..\\core\\event.cpp";
        _DAT_01d1d404 = 0xd94;
        core_main_c_FUN_005030e0("Event name %s too long!",name);
      }
      pacVar5 = (this_ptr->game_flags).names + (this_ptr->game_flags).count;
      do {
        cVar1 = *name;
        (*pacVar5)[0] = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = name[1];
        name = name + 2;
        (*pacVar5)[1] = cVar1;
        pacVar5 = (char (*) [32])(*pacVar5 + 2);
      } while (cVar1 != '\0');
      strupr((this_ptr->game_flags).names[(this_ptr->game_flags).count]);
      (this_ptr->game_flags).count = (this_ptr->game_flags).count + 1;
      return;
    }
  }
  return;
}
