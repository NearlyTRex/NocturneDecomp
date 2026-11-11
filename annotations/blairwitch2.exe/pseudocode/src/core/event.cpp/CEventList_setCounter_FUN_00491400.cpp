// Name: core_event.cpp_CEventList_setCounter_FUN_00491400
// Address: 00491400
// Address Range: [[00491400, 00491504]]
// Convention: __cdecl
// Signature: void __cdecl core_event_cpp_CEventList_setCounter_FUN_00491400(CEventList *this_ptr,char *name,int value)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_event_cpp_CEventList_setCounter_FUN_00491400(CEventList *this_ptr,char *name,int value)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char (*pacVar4) [32];
  
  iVar2 = core_event_cpp_CEventList_findCounter_FUN_00491630(this_ptr,name);
  if (iVar2 < 0) {
    if (value != 0) {
      if (9 < (this_ptr->counters).count) {
        _DAT_01d046a0 = "..\\core\\event.cpp";
        _DAT_01d046a4 = 0xdc4;
        core_main_c_FUN_004e4500("CEventList::setCounter - too many counters!");
      }
      pacVar4 = (this_ptr->counters).names + (this_ptr->counters).count;
      do {
        cVar1 = *name;
        (*pacVar4)[0] = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = name[1];
        name = name + 2;
        (*pacVar4)[1] = cVar1;
        pacVar4 = (char (*) [32])(*pacVar4 + 2);
      } while (cVar1 != '\0');
      (this_ptr->counters).values[(this_ptr->counters).count] = value;
      (this_ptr->counters).count = (this_ptr->counters).count + 1;
      return;
    }
  }
  else {
    if (value == 0) {
      iVar3 = (this_ptr->counters).count + -1;
      (this_ptr->counters).count = iVar3;
      memmove
                ((this_ptr->counters).names + iVar2,
                 ((SCounterBlock *)(&this_ptr->timers + 1))->names + iVar2 + 1,
                 (iVar3 - iVar2) * 0x20);
      memmove
                ((this_ptr->counters).values + iVar2,(this_ptr->counters).values + iVar2 + 1,
                 ((this_ptr->counters).count - iVar2) * 4);
      return;
    }
    (this_ptr->counters).values[iVar2] = value;
  }
  return;
}
