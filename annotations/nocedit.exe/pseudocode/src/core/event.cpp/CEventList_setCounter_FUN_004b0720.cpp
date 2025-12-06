// Name: core_event.cpp_CEventList_setCounter_FUN_004b0720
// Address: 004b0720
// Address Range: [[004b0720, 004b0824]]
// Convention: __cdecl
// Signature: void core_event.cpp_CEventList_setCounter_FUN_004b0720(CEventList * this_ptr)

#include "nocturne.h"

void __cdecl core_event_cpp_CEventList_setCounter_FUN_004b0720(CEventList *this_ptr)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int in_stack_0000000c;
  char *in_stack_00000010;
  
  iVar3 = core_event_cpp_CEventList_FUN_004b0950(this_ptr);
  if (iVar3 < 0) {
    if (in_stack_0000000c != 0) {
      if (9 < this_ptr->counter_count) {
        g_CurrentFilename = "..\\core\\event.cpp";
        g_CurrentLineNumber = 0xab2;
        core_main_c_displayErrorAndQuit_FUN_00506f10("CEventList::setCounter - too many counters!");
      }
      pcVar5 = this_ptr->field16_0x3380 + this_ptr->counter_count * 0x20;
      do {
        cVar2 = *in_stack_00000010;
        *pcVar5 = cVar2;
        if (cVar2 == '\0') break;
        cVar2 = in_stack_00000010[1];
        in_stack_00000010 = in_stack_00000010 + 2;
        pcVar5[1] = cVar2;
        pcVar5 = pcVar5 + 2;
      } while (cVar2 != '\0');
      *(int *)(this_ptr->variablesVarName1 + this_ptr->counter_count * 4 + -0x2c) =
           in_stack_0000000c;
      this_ptr->counter_count = this_ptr->counter_count + 1;
      return;
    }
  }
  else {
    iVar1 = iVar3 * 4;
    if (in_stack_0000000c == 0) {
      iVar4 = this_ptr->counter_count + -1;
      this_ptr->counter_count = iVar4;
      crt_string_c_memmove_FUN_005fe5e0
                (this_ptr->field16_0x3380 + iVar3 * 0x20,
                 this_ptr->field16_0x3380 + iVar3 * 0x20 + 0x20,(iVar4 - iVar3) * 0x20);
      crt_string_c_memmove_FUN_005fe5e0
                (this_ptr->variablesVarName1 + iVar1 + -0x2c,
                 this_ptr->variablesVarName1 + iVar1 + -0x28,(this_ptr->counter_count - iVar3) * 4);
      return;
    }
    *(int *)(this_ptr->variablesVarName1 + iVar1 + -0x2c) = in_stack_0000000c;
  }
  return;
}
