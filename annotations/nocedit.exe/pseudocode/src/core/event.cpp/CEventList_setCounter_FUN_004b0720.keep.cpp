// Name: core_event.cpp_CEventList_setCounter_FUN_004b0720
// Address: 004b0720
// MANUAL RECONSTRUCTION
// Address Range: [[004b0720, 004b0824]]
// Convention: __cdecl
// Signature: void __cdecl core_event_cpp_CEventList_setCounter_FUN_004b0720(CEventList *this_ptr,char *name,int value)

#include "nocturne.h"

void __cdecl core_event_cpp_CEventList_setCounter_FUN_004b0720(CEventList *this_ptr,char *name,int value)

{
  int iVar2;
  int iVar3;

  iVar2 = core_event_cpp_CEventList_findCounter_FUN_004b0950(this_ptr,name);
  if (iVar2 < 0) {
    if (value != 0) {
      if (9 < (this_ptr->counters).count) {
        g_CurrentFilename = "..\\core\\event.cpp";
        g_CurrentLineNumber = 2738;
        core_main_c_displayErrorAndQuit_FUN_00506f10("CEventList::setCounter - too many counters!");
      }
      strcpy((this_ptr->counters).names[(this_ptr->counters).count], name);
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
                 (iVar3 - iVar2) * sizeof(*(this_ptr->counters).names));
      memmove
                ((this_ptr->counters).values + iVar2,(this_ptr->counters).values + iVar2 + 1,
                 ((this_ptr->counters).count - iVar2) * sizeof(*(this_ptr->counters).values));
      return;
    }
    (this_ptr->counters).values[iVar2] = value;
  }
  return;
}
