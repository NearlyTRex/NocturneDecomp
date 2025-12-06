// Name: core_event.cpp_CEventList_FUN_004b0330
// Address: 004b0330
// Address Range: [[004b0330, 004b0453]]
// Convention: __cdecl
// Signature: void core_event.cpp_CEventList_FUN_004b0330(CEventList * this_ptr)

#include "nocturne.h"

void __cdecl core_event_cpp_CEventList_FUN_004b0330(CEventList *this_ptr)

{
  CEvent CVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  CEvent *pCVar5;
  byte bVar6;
  CEvent *in_stack_00000008;
  int in_stack_00000010;
  
  bVar6 = 0;
  if ((in_stack_00000008 != (CEvent *)0x0) && (*in_stack_00000008 != (CEvent)0x0)) {
    iVar2 = core_event_cpp_CEventList_FUN_004b0860(this_ptr);
    if (in_stack_00000010 == 0) {
      if (-1 < iVar2) {
        iVar4 = this_ptr->persistent_event_count + -1;
        this_ptr->persistent_event_count = iVar4;
        crt_string_c_memmove_FUN_005fe5e0
                  (this_ptr->persistent_event_list + iVar2 * 0x20,
                   this_ptr->persistent_event_list + iVar2 * 0x20 + 0x20,(iVar4 - iVar2) * 0x20);
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
      pCVar5 = in_stack_00000008;
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        CVar1 = *pCVar5;
        pCVar5 = pCVar5 + (uint)bVar6 * -2 + 1;
      } while (CVar1 != (CEvent)0x0);
      if (0x1f < ~uVar3 - 1) {
        g_CurrentFilename = "..\\core\\event.cpp";
        g_CurrentLineNumber = 0x9fb;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Event name %s too long!");
      }
      pCVar5 = this_ptr->persistent_event_list + this_ptr->persistent_event_count * 0x20;
      do {
        CVar1 = *in_stack_00000008;
        *pCVar5 = CVar1;
        if (CVar1 == (CEvent)0x0) break;
        CVar1 = in_stack_00000008[1];
        in_stack_00000008 = in_stack_00000008 + 2;
        pCVar5[1] = CVar1;
        pCVar5 = pCVar5 + 2;
      } while (CVar1 != (CEvent)0x0);
      crt_string_c_strupr_FUN_00600770
                ((char *)(this_ptr->persistent_event_list + this_ptr->persistent_event_count * 0x20)
                );
      this_ptr->persistent_event_count = this_ptr->persistent_event_count + 1;
      return;
    }
  }
  return;
}
