// Name: core_event.cpp_FUN_004946f0
// Address: 004946f0
// Address Range: [[004946f0, 00494876]]
// Convention: unknown
// Signature: void core_event_cpp_FUN_004946f0(CEventList *param_1,char *param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_event_cpp_FUN_004946f0(CEventList *param_1,char *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  char (*pacVar5) [32];
  char *pcVar6;
  byte bVar7;
  
  bVar7 = 0;
  if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
    iVar2 = core_event_cpp_CEventList_findPersistentEvent_FUN_00494d30(param_1,param_2);
    pacVar5 = (param_1->persistent_events).names;
    if (param_3 == 0) {
      if (-1 < iVar2) {
        iVar4 = (param_1->persistent_events).count + -1;
        (param_1->persistent_events).count = iVar4;
        memmove
                  (pacVar5 + iVar2,pacVar5 + iVar2 + 1,(iVar4 - iVar2) * 0x20);
        return;
      }
    }
    else if (iVar2 < 0) {
      if (99 < (param_1->persistent_events).count) {
        iVar2 = _fopen("events.txt",&DAT_005bfdf0);
        if (iVar2 != 0) {
          iVar4 = 0;
          if (0 < (param_1->persistent_events).count) {
            do {
              iVar4 = iVar4 + 1;
              FUN_005a3140(iVar2,&DAT_005bfdfe,pacVar5);
              pacVar5 = pacVar5 + 1;
            } while (iVar4 < (param_1->persistent_events).count);
          }
          _fclose(iVar2);
        }
        _DAT_01d71de0 = "..\\core\\event.cpp";
        _DAT_01d71de4 = 0xdea;
        core_main_c_FUN_004e4330("Too many persistent events - check events.txt");
      }
      uVar3 = 0xffffffff;
      pcVar6 = param_2;
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + (uint)bVar7 * -2 + 1;
      } while (cVar1 != '\0');
      if (0x1f < ~uVar3 - 1) {
        _DAT_01d71de0 = "..\\core\\event.cpp";
        _DAT_01d71de4 = 0xdf0;
        core_main_c_FUN_004e4330("Event name %s too long!",param_2);
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
