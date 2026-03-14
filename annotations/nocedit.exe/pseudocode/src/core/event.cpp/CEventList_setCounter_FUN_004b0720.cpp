// Name: core_event.cpp_CEventList_setCounter_FUN_004b0720
// Address: 004b0720
// Address Range: [[004b0720, 004b0824]]
// Convention: __cdecl
// Signature: void __cdecl core_event_cpp_CEventList_setCounter_FUN_004b0720(CEventList *this_ptr,char *name,int value)

#include "nocturne.h"

void __cdecl core_event_cpp_CEventList_setCounter_FUN_004b0720(CEventList *this_ptr,char *name,int value)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char (*pacVar4) [32];
  
  iVar2 = core_event_cpp_CEventList_findCounter_FUN_004b0950(this_ptr,name);
  if (iVar2 < 0) {
    if (value != 0) {
      if (9 < (this_ptr->counters).count) {
        g_CurrentFilename = "..\\core\\event.cpp";
        g_CurrentLineNumber = 0xab2;
        core_main_c_displayErrorAndQuit_FUN_00506f10("CEventList::setCounter - too many counters!");
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
