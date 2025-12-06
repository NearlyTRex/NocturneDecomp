// Name: core_bodypart.cpp_CBodyPart_FUN_0041af90
// Address: 0041af90
// Address Range: [[0041af90, 0041b06d]]
// Convention: __cdecl
// Signature: int core_bodypart.cpp_CBodyPart_FUN_0041af90(CBodyPart * this_ptr)

#include "nocturne.h"

int __cdecl core_bodypart_cpp_CBodyPart_FUN_0041af90(CBodyPart *this_ptr)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char *in_stack_00000008;
  
  iVar3 = 0;
  if (0 < *(int *)(this_ptr->field1_0x158 + 0x34)) {
    pcVar4 = this_ptr->field1_0x158 + 0x40;
    do {
      iVar2 = crt_string_c_stricmp_FUN_005fe7f0(pcVar4,in_stack_00000008);
      if (iVar2 == 0) {
        return iVar3;
      }
      iVar3 = iVar3 + 1;
      pcVar4 = pcVar4 + 0x18;
    } while (iVar3 < *(int *)(this_ptr->field1_0x158 + 0x34));
  }
  if (9 < *(int *)(this_ptr->field1_0x158 + 0x34)) {
    g_CurrentFilename = "..\\core\\bodypart.cpp";
    g_CurrentLineNumber = 0x47a;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Too many body part textures!");
  }
  crt_memory_c_memset_FUN_005fde40
            (this_ptr->field1_0x158 + *(int *)(this_ptr->field1_0x158 + 0x34) * 0x18 + 0x38,0,0x18);
  pcVar4 = this_ptr->field1_0x158 + *(int *)(this_ptr->field1_0x158 + 0x34) * 0x18 + 0x40;
  do {
    cVar1 = *in_stack_00000008;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = in_stack_00000008[1];
    in_stack_00000008 = in_stack_00000008 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  iVar3 = *(int *)(this_ptr->field1_0x158 + 0x34);
  *(int *)(this_ptr->field1_0x158 + 0x34) = iVar3 + 1;
  return iVar3;
}
