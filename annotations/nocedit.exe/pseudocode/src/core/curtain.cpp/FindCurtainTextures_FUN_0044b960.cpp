// Name: core_curtain.cpp_FindCurtainTextures_FUN_0044b960
// Address: 0044b960
// Address Range: [[0044b960, 0044ba2f]]
// Convention: __cdecl
// Signature: void __cdecl core_curtain_cpp_FindCurtainTextures_FUN_0044b960(void)

#include "nocturne.h"

/* Signature: byte actors_other_curtain.cpp_FindCurtainTextures(uint param_1, uint
   param_2) */

void __cdecl core_curtain_cpp_FindCurtainTextures_FUN_0044b960(void)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  int in_stack_00000004;
  _FILE *in_stack_00000008;
  char local_108 [256];
  
  pcVar2 = (char *)(in_stack_00000004 + 0x16c);
  _fprintf(in_stack_00000008,"ART\\%s\n",pcVar2);
  pcVar4 = local_108;
  do {
    cVar1 = *pcVar2;
    *pcVar4 = cVar1;
    pcVar3 = local_108;
    if (cVar1 == '\0') break;
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
    pcVar3 = local_108;
  } while (cVar1 != '\0');
  do {
    pcVar4 = pcVar3;
    if (*pcVar3 == '.') goto LAB_0044b9c3;
    if (*pcVar3 == '\0') break;
    pcVar4 = pcVar3 + 1;
    if (*pcVar4 == '.') goto LAB_0044b9c3;
    pcVar3 = pcVar3 + 2;
  } while (*pcVar4 != '\0');
  pcVar4 = (char *)0x0;
LAB_0044b9c3:
  if (pcVar4 == (char *)0x0) {
    g_CurrentFilename = "..\\core\\curtain.cpp";
    g_CurrentLineNumber = 0x438;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Cannot find curtain texture extension");
  }
  pcVar2 = ".ACT";
  do {
    cVar1 = *pcVar2;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  _fprintf(in_stack_00000008,"ART\\%s\n",local_108);
  return;
}
