// Name: core_charactr.cpp_CCharacter_addLayerAction_FUN_0042e5d0
// Address: 0042e5d0
// Address Range: [[0042e5d0, 0042e665]]
// Convention: __cdecl
// Signature: void core_charactr.cpp_CCharacter_addLayerAction_FUN_0042e5d0(CCharacter * this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_addLayerAction_FUN_0042e5d0(CCharacter *this_ptr)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  uint in_stack_00000008;
  uint in_stack_0000000c;
  char *in_stack_00000010;
  uint in_stack_00000014;
  
  if (0x13 < *(int *)(this_ptr->field13_0x2620 + 8)) {
    g_CurrentFilename = "..\\core\\charactr.cpp";
    g_CurrentLineNumber = 0xf42;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CCharacter::addLayerAction - too many");
  }
  iVar2 = *(int *)(this_ptr->field13_0x2620 + 8);
  *(int *)(this_ptr->field13_0x2620 + 8) = *(int *)(this_ptr->field13_0x2620 + 8) + 1;
  pcVar3 = this_ptr->field13_0x2620 + iVar2 * 0x38 + 0xc;
  *(uint *)pcVar3 = in_stack_00000008;
  pcVar4 = pcVar3 + 8;
  *(uint *)(pcVar3 + 4) = in_stack_0000000c;
  do {
    cVar1 = *in_stack_00000010;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = in_stack_00000010[1];
    in_stack_00000010 = in_stack_00000010 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  *(uint *)(pcVar3 + 0x28) = in_stack_00000014;
  return;
}
