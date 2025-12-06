// Name: core_event.cpp_CEventList_setSfxHandle_FUN_004b0c80
// Address: 004b0c80
// Address Range: [[004b0c80, 004b0d5d]]
// Convention: __cdecl
// Signature: void core_event.cpp_CEventList_setSfxHandle_FUN_004b0c80(CEventList * this_ptr)

#include "nocturne.h"

void __cdecl core_event_cpp_CEventList_setSfxHandle_FUN_004b0c80(CEventList *this_ptr)

{
  CEvent CVar1;
  int iVar2;
  uint uVar3;
  CEvent *pCVar4;
  byte bVar5;
  CEvent *in_stack_00000008;
  uint in_stack_00000018;
  
  bVar5 = 0;
  core_event_cpp_CEventList_FUN_004b0db0(this_ptr);
  iVar2 = core_event_cpp_CEventList_FUN_004b0d60(this_ptr);
  if (iVar2 < 0) {
    if (0x13 < this_ptr[1].event_count) {
      g_CurrentFilename = "..\\core\\event.cpp";
      g_CurrentLineNumber = 0xba6;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CEventList::setSfxHandle - too many sfx!");
    }
    iVar2 = this_ptr[1].event_count;
    this_ptr[1].event_count = iVar2 + 1;
  }
  uVar3 = 0xffffffff;
  pCVar4 = in_stack_00000008;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    CVar1 = *pCVar4;
    pCVar4 = pCVar4 + (uint)bVar5 * -2 + 1;
  } while (CVar1 != (CEvent)0x0);
  if (0x13 < ~uVar3 - 1) {
    g_CurrentFilename = "..\\core\\event.cpp";
    g_CurrentLineNumber = 0xbae;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CEventList::setSfxHandle - sfx handle name %s is too long - max %d characters");
  }
  pCVar4 = this_ptr[1].event_list + iVar2 * 0x120 + 4;
  do {
    CVar1 = *in_stack_00000008;
    *pCVar4 = CVar1;
    if (CVar1 == (CEvent)0x0) break;
    CVar1 = in_stack_00000008[1];
    in_stack_00000008 = in_stack_00000008 + 2;
    pCVar4[1] = CVar1;
    pCVar4 = pCVar4 + 2;
  } while (CVar1 != (CEvent)0x0);
  *(uint *)(this_ptr[1].event_list + iVar2 * 0x120) = in_stack_00000018;
  core_event_cpp_CEventList_FUN_004b0db0(this_ptr);
  return;
}
