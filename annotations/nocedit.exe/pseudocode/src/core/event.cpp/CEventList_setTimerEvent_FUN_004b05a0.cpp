// Name: core_event.cpp_CEventList_setTimerEvent_FUN_004b05a0
// Address: 004b05a0
// Address Range: [[004b05a0, 004b0712]]
// Convention: __cdecl
// Signature: void core_event.cpp_CEventList_setTimerEvent_FUN_004b05a0(CEventList * this_ptr)

#include "nocturne.h"

void __cdecl core_event_cpp_CEventList_setTimerEvent_FUN_004b05a0(CEventList *this_ptr)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  char *in_stack_00000008;
  float in_stack_0000000c;
  
  if (in_stack_0000000c < 0.0) {
    g_CurrentFilename = "..\\core\\event.cpp";
    g_CurrentLineNumber = 0xa5d;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CEventList::setTimerEvent - invalid duration for %s: %f");
  }
  iVar3 = core_event_cpp_CEventList_FUN_004b0900(this_ptr);
  if (iVar3 < 0) {
    if (0.0 < in_stack_0000000c) {
      if (9 < this_ptr->timer_count) {
        g_CurrentFilename = "..\\core\\event.cpp";
        g_CurrentLineNumber = 0xa7e;
        core_main_c_displayErrorAndQuit_FUN_00506f10("CEventList::setTimerEvent - too many timers!");
      }
      pcVar5 = this_ptr->unk5 + this_ptr->timer_count * 0x20 + -4;
      do {
        cVar2 = *in_stack_00000008;
        *pcVar5 = cVar2;
        if (cVar2 == '\0') break;
        cVar2 = in_stack_00000008[1];
        in_stack_00000008 = in_stack_00000008 + 2;
        pcVar5[1] = cVar2;
        pcVar5 = pcVar5 + 2;
      } while (cVar2 != '\0');
      *(float *)(this_ptr->unk6 + this_ptr->timer_count * 4 + -0x2c) = in_stack_0000000c;
      this_ptr->timer_count = this_ptr->timer_count + 1;
      return;
    }
  }
  else {
    iVar1 = iVar3 * 4;
    if (in_stack_0000000c <= 0.0) {
      iVar4 = this_ptr->timer_count + -1;
      this_ptr->timer_count = iVar4;
      crt_string_c_memmove_FUN_005fe5e0
                (this_ptr->unk5 + iVar3 * 0x20 + -4,this_ptr->unk5 + iVar3 * 0x20 + 0x1c,
                 (iVar4 - iVar3) * 0x20);
      crt_string_c_memmove_FUN_005fe5e0
                (this_ptr->unk6 + iVar1 + -0x2c,this_ptr->unk6 + iVar1 + -0x28,
                 (this_ptr->timer_count - iVar3) * 4);
      return;
    }
    *(float *)(this_ptr->unk6 + iVar1 + -0x2c) = in_stack_0000000c;
  }
  return;
}
