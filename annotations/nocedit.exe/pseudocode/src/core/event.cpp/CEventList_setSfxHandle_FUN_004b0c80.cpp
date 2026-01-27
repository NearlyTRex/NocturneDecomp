// Name: core_event.cpp_CEventList_setSfxHandle_FUN_004b0c80
// Address: 004b0c80
// Address Range: [[004b0c80, 004b0d5d]]
// Convention: __cdecl
// Signature: void core_event.cpp_CEventList_setSfxHandle_FUN_004b0c80(CEventList * this_ptr)

#include "nocturne.h"

void __cdecl core_event_cpp_CEventList_setSfxHandle_FUN_004b0c80(CEventList *this_ptr)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  int *piVar5;
  byte bVar6;
  char *in_stack_00000008;
  int in_stack_0000000c;
  
  bVar6 = 0;
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
  pcVar4 = in_stack_00000008;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + (uint)bVar6 * -2 + 1;
  } while (cVar1 != '\0');
  if (0x13 < ~uVar3 - 1) {
    g_CurrentFilename = "..\\core\\event.cpp";
    g_CurrentLineNumber = 0xbae;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CEventList::setSfxHandle - sfx handle name %s is too long - max %d characters");
  }
  piVar5 = this_ptr[1].event_list + iVar2 * 0x48 + 1;
  do {
    cVar1 = *in_stack_00000008;
    *(char *)piVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = in_stack_00000008[1];
    in_stack_00000008 = in_stack_00000008 + 2;
    *(char *)((int)piVar5 + 1) = cVar1;
    piVar5 = (int *)((int)piVar5 + 2);
  } while (cVar1 != '\0');
  this_ptr[1].event_list[iVar2 * 0x48] = in_stack_0000000c;
  core_event_cpp_CEventList_FUN_004b0db0(this_ptr);
  return;
}
