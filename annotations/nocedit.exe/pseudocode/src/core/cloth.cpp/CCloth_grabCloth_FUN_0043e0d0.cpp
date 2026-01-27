// Name: core_cloth.cpp_CCloth_grabCloth_FUN_0043e0d0
// Address: 0043e0d0
// Address Range: [[0043e0d0, 0043e164]]
// Convention: __cdecl
// Signature: void core_cloth.cpp_CCloth_grabCloth_FUN_0043e0d0(CCloth * this_ptr)

#include "nocturne.h"

void __cdecl core_cloth_cpp_CCloth_grabCloth_FUN_0043e0d0(CCloth *this_ptr)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  char *in_stack_00000008;
  int in_stack_0000000c;
  
  iVar2 = 0;
  if (0 < *(int *)(this_ptr->unk + 0x3ce8c)) {
    pcVar3 = this_ptr->unk + 0x3ce90;
    do {
      iVar1 = crt_string_c_strcmp_FUN_005fef20(in_stack_00000008,pcVar3);
      if (iVar1 == 0) break;
      iVar2 = iVar2 + 1;
      pcVar3 = pcVar3 + 0xac;
    } while (iVar2 < *(int *)(this_ptr->unk + 0x3ce8c));
  }
  if (iVar2 == *(int *)(this_ptr->unk + 0x3ce8c)) {
    g_CurrentFilename = "..\\core\\cloth.cpp";
    g_CurrentLineNumber = 0xaa7;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CCloth::grabCloth - Can't find bone %s");
  }
  pcVar3 = this_ptr->unk + in_stack_0000000c * 0x11c + 0x574c;
  pcVar3[0] = '\x01';
  pcVar3[1] = '\0';
  pcVar3[2] = '\0';
  pcVar3[3] = '\0';
  *(int *)(this_ptr->unk + in_stack_0000000c * 0x11c + 0x57b0) = iVar2;
  return;
}
