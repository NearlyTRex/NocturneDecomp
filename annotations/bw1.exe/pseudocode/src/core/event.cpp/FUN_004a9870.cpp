// Name: core_event.cpp_FUN_004a9870
// Address: 004a9870
// Address Range: [[004a9870, 004a99f6]]
// Convention: unknown
// Signature: void core_event_cpp_FUN_004a9870(CEventList *param_1,CEventList *param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_event_cpp_FUN_004a9870(CEventList *param_1,CEventList *param_2,int param_3)

{
  CEventList CVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  CEventList *pCVar5;
  byte bVar6;
  
  bVar6 = 0;
  if ((param_2 != (CEventList *)0x0) && (*param_2 != (CEventList)0x0)) {
    iVar2 = core_event_cpp_CEventList_findPersistentEvent_FUN_004a9eb0(param_1,(char *)param_2);
    pCVar5 = param_1 + 0x2590;
    if (param_3 == 0) {
      if (-1 < iVar2) {
        iVar4 = *(int *)(param_1 + 0x258c);
        *(int *)(param_1 + 0x258c) = iVar4 + -1;
        memmove
                  (pCVar5 + iVar2 * 0x20,pCVar5 + iVar2 * 0x20 + 0x20,((iVar4 + -1) - iVar2) * 0x20)
        ;
        return;
      }
    }
    else if (iVar2 < 0) {
      if (99 < *(int *)(param_1 + 0x258c)) {
        iVar2 = _fopen("events.txt",&DAT_005deab4);
        if (iVar2 != 0) {
          iVar4 = 0;
          if (0 < *(int *)(param_1 + 0x258c)) {
            do {
              iVar4 = iVar4 + 1;
              FUN_005c03c0(iVar2,&DAT_005deac2,pCVar5);
              pCVar5 = pCVar5 + 0x20;
            } while (iVar4 < *(int *)(param_1 + 0x258c));
          }
          _fclose(iVar2);
        }
        _DAT_01d1d400 = "..\\core\\event.cpp";
        _DAT_01d1d404 = 0xd38;
        core_main_c_FUN_005030e0("Too many persistent events - check events.txt");
      }
      uVar3 = 0xffffffff;
      pCVar5 = param_2;
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        CVar1 = *pCVar5;
        pCVar5 = pCVar5 + (uint)bVar6 * -2 + 1;
      } while (CVar1 != (CEventList)0x0);
      if (0x1f < ~uVar3 - 1) {
        _DAT_01d1d400 = "..\\core\\event.cpp";
        _DAT_01d1d404 = 0xd3e;
        core_main_c_FUN_005030e0("Event name %s too long!",param_2);
      }
      pCVar5 = param_1 + *(int *)(param_1 + 0x258c) * 0x20 + 0x2590;
      do {
        CVar1 = *param_2;
        *pCVar5 = CVar1;
        if (CVar1 == (CEventList)0x0) break;
        CVar1 = param_2[1];
        param_2 = param_2 + 2;
        pCVar5[1] = CVar1;
        pCVar5 = pCVar5 + 2;
      } while (CVar1 != (CEventList)0x0);
      strupr
                ((char *)(param_1 + *(int *)(param_1 + 0x258c) * 0x20 + 0x2590));
      *(int *)(param_1 + 0x258c) = *(int *)(param_1 + 0x258c) + 1;
      return;
    }
  }
  return;
}
