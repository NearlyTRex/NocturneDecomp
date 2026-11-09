// Name: core_event.cpp_FUN_004a9a60
// Address: 004a9a60
// Address Range: [[004a9a60, 004a9be6]]
// Convention: unknown
// Signature: void core_event_cpp_FUN_004a9a60(CEventList *param_1,CEventList *param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_event_cpp_FUN_004a9a60(CEventList *param_1,CEventList *param_2,int param_3)

{
  CEventList CVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  CEventList *pCVar5;
  byte bVar6;
  
  bVar6 = 0;
  if ((param_2 != (CEventList *)0x0) && (*param_2 != (CEventList)0x0)) {
    iVar2 = core_event_cpp_CEventList_findGameFlag_FUN_004a9f00(param_1,(char *)param_2);
    pCVar5 = param_1 + 0x190c;
    if (param_3 == 0) {
      if (-1 < iVar2) {
        iVar4 = *(int *)(param_1 + 0x1908);
        *(int *)(param_1 + 0x1908) = iVar4 + -1;
        memmove
                  (pCVar5 + iVar2 * 0x20,pCVar5 + iVar2 * 0x20 + 0x20,((iVar4 + -1) - iVar2) * 0x20)
        ;
        return;
      }
    }
    else if (iVar2 < 0) {
      if (0x27 < *(int *)(param_1 + 0x1908)) {
        iVar2 = _fopen("events.txt",&DAT_005deb4e);
        if (iVar2 != 0) {
          iVar4 = 0;
          if (0 < *(int *)(param_1 + 0x1908)) {
            do {
              iVar4 = iVar4 + 1;
              FUN_005c03c0(iVar2,&DAT_005deb5c,pCVar5);
              pCVar5 = pCVar5 + 0x20;
            } while (iVar4 < *(int *)(param_1 + 0x1908));
          }
          _fclose(iVar2);
        }
        _DAT_01d1d400 = "..\\core\\event.cpp";
        _DAT_01d1d404 = 0xd8e;
        core_main_c_FUN_005030e0("Too many game flags - check events.txt!");
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
        _DAT_01d1d404 = 0xd94;
        core_main_c_FUN_005030e0("Event name %s too long!",param_2);
      }
      pCVar5 = param_1 + *(int *)(param_1 + 0x1908) * 0x20 + 0x190c;
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
                ((char *)(param_1 + *(int *)(param_1 + 0x1908) * 0x20 + 0x190c));
      *(int *)(param_1 + 0x1908) = *(int *)(param_1 + 0x1908) + 1;
      return;
    }
  }
  return;
}
