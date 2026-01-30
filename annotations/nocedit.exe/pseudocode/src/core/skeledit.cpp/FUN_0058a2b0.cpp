// Name: core_skeledit.cpp_FUN_0058a2b0
// Address: 0058a2b0
// Address Range: [[0058a2b0, 0058a3c8]]
// Convention: __cdecl
// Signature: void __cdecl core_skeledit_cpp_FUN_0058a2b0(void)

#include "nocturne.h"

void __cdecl core_skeledit_cpp_FUN_0058a2b0(void)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  int in_stack_00000004;
  _FILE *in_stack_00000008;
  char local_2c [20];
  int local_18;
  int local_14;
  
  __STK(0x3c);
  _fprintf(in_stack_00000008,"DATA\\%s\n",in_stack_00000004 + 0x8f5c);
  local_18 = 0;
  if (0 < *(int *)(in_stack_00000004 + 0xb8)) {
    local_14 = in_stack_00000004 + 0xc0;
    do {
      iVar4 = 0;
      if (0 < *(int *)(in_stack_00000004 + 0xbc)) {
        pcVar2 = (char *)(local_14 + 8);
        pcVar6 = local_2c;
        pcVar3 = pcVar2;
LAB_0058a322:
        do {
          cVar1 = *pcVar2;
          *pcVar6 = cVar1;
          pcVar5 = local_2c;
          if (cVar1 != '\0') {
            cVar1 = pcVar2[1];
            pcVar2 = pcVar2 + 2;
            pcVar6[1] = cVar1;
            pcVar5 = local_2c;
            pcVar6 = pcVar6 + 2;
            if (cVar1 != '\0') goto LAB_0058a322;
          }
          do {
            pcVar6 = pcVar5;
            if (*pcVar5 == '.') goto LAB_0058a355;
            if (*pcVar5 == '\0') break;
            pcVar6 = pcVar5 + 1;
            if (*pcVar6 == '.') goto LAB_0058a355;
            pcVar5 = pcVar5 + 2;
          } while (*pcVar6 != '\0');
          pcVar6 = (char *)0x0;
LAB_0058a355:
          if (pcVar6 != (char *)0x0) {
            *pcVar6 = '\0';
          }
          _fprintf(in_stack_00000008,"ART\\%s.RAW\n",local_2c);
          _fprintf(in_stack_00000008,"ART\\%s.ACT\n",local_2c);
          iVar4 = iVar4 + 1;
          pcVar2 = pcVar3 + 0x48;
          pcVar6 = local_2c;
          pcVar3 = pcVar2;
        } while (iVar4 < *(int *)(in_stack_00000004 + 0xbc));
      }
      local_18 = local_18 + 1;
      local_14 = local_14 + 0x1680;
    } while (local_18 < *(int *)(in_stack_00000004 + 0xb8));
  }
  return;
}
