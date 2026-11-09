// Name: core_event.cpp_FUN_00491110
// Address: 00491110
// Address Range: [[00491110, 00491233]]
// Convention: __cdecl
// Signature: void __cdecl core_event_cpp_FUN_00491110(CEventList *this_ptr,char *name,int add_flag)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_event_cpp_FUN_00491110(CEventList *this_ptr,char *name,int add_flag)

{
  char cVar1;
  CEventList CVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  CEventList *pCVar7;
  byte bVar8;
  
  bVar8 = 0;
  if ((name != (char *)0x0) && (*name != '\0')) {
    iVar4 = core_event_cpp_CEventList_findGameFlag_FUN_00491590(this_ptr,name);
    if (add_flag == 0) {
      if (-1 < iVar4) {
        iVar3 = *(int *)(this_ptr + 0x1908);
        *(int *)(this_ptr + 0x1908) = iVar3 + -1;
        memmove
                  (this_ptr + iVar4 * 0x20 + 0x190c,this_ptr + iVar4 * 0x20 + 0x192c,
                   ((iVar3 + -1) - iVar4) * 0x20);
        return;
      }
    }
    else if (iVar4 < 0) {
      if (9 < *(int *)(this_ptr + 0x1908)) {
        _DAT_01d046a0 = "..\\core\\event.cpp";
        _DAT_01d046a4 = 0xd3d;
        core_main_c_FUN_004e4500("Too many game flags!");
      }
      uVar5 = 0xffffffff;
      pcVar6 = name;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + (uint)bVar8 * -2 + 1;
      } while (cVar1 != '\0');
      if (0x1f < ~uVar5 - 1) {
        _DAT_01d046a0 = "..\\core\\event.cpp";
        _DAT_01d046a4 = 0xd43;
        core_main_c_FUN_004e4500("Event name %s too long!",name);
      }
      pCVar7 = this_ptr + *(int *)(this_ptr + 0x1908) * 0x20 + 0x190c;
      do {
        CVar2 = (CEventList)*name;
        *pCVar7 = CVar2;
        if (CVar2 == (CEventList)0x0) break;
        CVar2 = *(CEventList *)(name + 1);
        name = name + 2;
        pCVar7[1] = CVar2;
        pCVar7 = pCVar7 + 2;
      } while (CVar2 != (CEventList)0x0);
      strupr
                ((char *)(this_ptr + *(int *)(this_ptr + 0x1908) * 0x20 + 0x190c));
      *(int *)(this_ptr + 0x1908) = *(int *)(this_ptr + 0x1908) + 1;
      return;
    }
  }
  return;
}
