// Name: core_event.cpp_CEventList_addOrRemovePersistentEvent_FUN_004946f0
// Address: 004946f0
// Address Range: [[004946f0, 00494876]]
// Convention: __cdecl
// Signature: void __cdecl core_event_cpp_CEventList_addOrRemovePersistentEvent_FUN_004946f0(CEventList *this_ptr,char *name,int add_flag)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_event_cpp_CEventList_addOrRemovePersistentEvent_FUN_004946f0(CEventList *this_ptr,char *name,int add_flag)

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
    iVar2 = core_event_cpp_CEventList_findPersistentEvent_FUN_00494d30(this_ptr,name);
    pacVar5 = (this_ptr->persistent_events).names;
    if (add_flag == 0) {
      if (-1 < iVar2) {
        iVar7 = (this_ptr->persistent_events).count + -1;
        (this_ptr->persistent_events).count = iVar7;
        memmove
                  (pacVar5 + iVar2,pacVar5 + iVar2 + 1,(iVar7 - iVar2) * 0x20);
        return;
      }
    }
    else if (iVar2 < 0) {
      if (99 < (this_ptr->persistent_events).count) {
        p_Var3 = _fopen("events.txt",&DAT_005bfdf0);
        if (p_Var3 != (_FILE *)0x0) {
          iVar2 = 0;
          if (0 < (this_ptr->persistent_events).count) {
            do {
              iVar2 = iVar2 + 1;
              FUN_005a3140(p_Var3,&DAT_005bfdfe,pacVar5);
              pacVar5 = pacVar5 + 1;
            } while (iVar2 < (this_ptr->persistent_events).count);
          }
          _fclose(p_Var3);
        }
        _DAT_01d71de0 = "..\\core\\event.cpp";
        _DAT_01d71de4 = 0xdea;
        core_main_c_FUN_004e4330("Too many persistent events - check events.txt");
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
        _DAT_01d71de0 = "..\\core\\event.cpp";
        _DAT_01d71de4 = 0xdf0;
        core_main_c_FUN_004e4330("Event name %s too long!",name);
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
