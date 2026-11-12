// Name: core_event.cpp_FUN_004a9870
// Address: 004a9870
// Address Range: [[004a9870, 004a99f6]]
// Convention: unknown
// Signature: void core_event_cpp_FUN_004a9870(CEventList *param_1,char *param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_event_cpp_FUN_004a9870(CEventList *param_1,char *param_2,int param_3)

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
  if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
    iVar2 = core_event_cpp_CEventList_findPersistentEvent_FUN_004a9eb0(param_1,param_2);
    pacVar5 = (param_1->persistent_events).names;
    if (param_3 == 0) {
      if (-1 < iVar2) {
        iVar7 = (param_1->persistent_events).count + -1;
        (param_1->persistent_events).count = iVar7;
        memmove
                  (pacVar5 + iVar2,pacVar5 + iVar2 + 1,(iVar7 - iVar2) * 0x20);
        return;
      }
    }
    else if (iVar2 < 0) {
      if (99 < (param_1->persistent_events).count) {
        p_Var3 = _fopen("events.txt",&DAT_005deab4);
        if (p_Var3 != (_FILE *)0x0) {
          iVar2 = 0;
          if (0 < (param_1->persistent_events).count) {
            do {
              iVar2 = iVar2 + 1;
              FUN_005c03c0(p_Var3,&DAT_005deac2,pacVar5);
              pacVar5 = pacVar5 + 1;
            } while (iVar2 < (param_1->persistent_events).count);
          }
          _fclose(p_Var3);
        }
        _DAT_01d1d400 = "..\\core\\event.cpp";
        _DAT_01d1d404 = 0xd38;
        core_main_c_FUN_005030e0("Too many persistent events - check events.txt");
      }
      uVar4 = 0xffffffff;
      pcVar6 = param_2;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + (uint)bVar8 * -2 + 1;
      } while (cVar1 != '\0');
      if (0x1f < ~uVar4 - 1) {
        _DAT_01d1d400 = "..\\core\\event.cpp";
        _DAT_01d1d404 = 0xd3e;
        core_main_c_FUN_005030e0("Event name %s too long!",param_2);
      }
      pacVar5 = (param_1->persistent_events).names + (param_1->persistent_events).count;
      do {
        cVar1 = *param_2;
        (*pacVar5)[0] = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = param_2[1];
        param_2 = param_2 + 2;
        (*pacVar5)[1] = cVar1;
        pacVar5 = (char (*) [32])(*pacVar5 + 2);
      } while (cVar1 != '\0');
      strupr
                ((param_1->persistent_events).names[(param_1->persistent_events).count]);
      (param_1->persistent_events).count = (param_1->persistent_events).count + 1;
      return;
    }
  }
  return;
}
