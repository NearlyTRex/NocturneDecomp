// Name: core_event.cpp_CEventList_FUN_004b0330
// Address: 004b0330
// Address Range: [[004b0330, 004b0453]]
// Convention: __cdecl
// Signature: void core_event.cpp_CEventList_FUN_004b0330(CEventList * this_ptr)

#include "nocturne.h"

void __cdecl core_event_cpp_CEventList_FUN_004b0330(CEventList *this_ptr)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  int *piVar6;
  byte bVar7;
  char *in_stack_00000008;
  int in_stack_0000000c;
  
  bVar7 = 0;
  if ((in_stack_00000008 != (char *)0x0) && (*in_stack_00000008 != '\0')) {
    iVar2 = core_event_cpp_CEventList_FUN_004b0860(this_ptr);
    if (in_stack_0000000c == 0) {
      if (-1 < iVar2) {
        iVar4 = this_ptr->persistent_event_count + -1;
        this_ptr->persistent_event_count = iVar4;
        crt_string_c_memmove_FUN_005fe5e0
                  (this_ptr->persistent_event_list + iVar2 * 8,
                   this_ptr->persistent_event_list + iVar2 * 8 + 8,(iVar4 - iVar2) * 0x20);
        return;
      }
    }
    else if (iVar2 < 0) {
      if (99 < this_ptr->persistent_event_count) {
        g_CurrentFilename = "..\\core\\event.cpp";
        g_CurrentLineNumber = 0x9f5;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Too many persistent events!");
      }
      uVar3 = 0xffffffff;
      pcVar5 = in_stack_00000008;
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + (uint)bVar7 * -2 + 1;
      } while (cVar1 != '\0');
      if (0x1f < ~uVar3 - 1) {
        g_CurrentFilename = "..\\core\\event.cpp";
        g_CurrentLineNumber = 0x9fb;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Event name %s too long!");
      }
      piVar6 = this_ptr->persistent_event_list + this_ptr->persistent_event_count * 8;
      do {
        cVar1 = *in_stack_00000008;
        *(char *)piVar6 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = in_stack_00000008[1];
        in_stack_00000008 = in_stack_00000008 + 2;
        *(char *)((int)piVar6 + 1) = cVar1;
        piVar6 = (int *)((int)piVar6 + 2);
      } while (cVar1 != '\0');
      crt_string_c_strupr_FUN_00600770
                ((char *)(this_ptr->persistent_event_list + this_ptr->persistent_event_count * 8));
      this_ptr->persistent_event_count = this_ptr->persistent_event_count + 1;
      return;
    }
  }
  return;
}
