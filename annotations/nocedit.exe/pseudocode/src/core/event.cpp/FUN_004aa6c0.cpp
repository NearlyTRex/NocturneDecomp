// Name: core_event.cpp_FUN_004aa6c0
// Address: 004aa6c0
// Address Range: [[004aa6c0, 004aa7cd]]
// Convention: __cdecl
// Signature: char * __cdecl core_event_cpp_FUN_004aa6c0(int *param_1,char *param_2,int param_3)

#include "nocturne.h"

char * __cdecl core_event_cpp_FUN_004aa6c0(int *param_1,char *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  SIZE_T n;
  int iVar6;
  
  pcVar3 = (char *)*param_1;
  while ((g_CharacterClassificationTable[(byte)(*pcVar3 + 1)] & 2U) != 0) {
    pcVar3 = pcVar3 + 1;
  }
  *param_1 = (int)pcVar3;
  if (*pcVar3 != '(') {
    return "No opening parenthesis";
  }
  iVar6 = 0;
  iVar4 = 0;
  if (0 < param_3) {
    do {
      iVar2 = *param_1;
      pcVar3 = (char *)(iVar2 + 1);
      *param_1 = (int)pcVar3;
      if (*pcVar3 == '\0') {
        return "Can't find closing parenthesis";
      }
      if (*pcVar3 == '(') {
        iVar6 = iVar6 + 1;
      }
      else if (*pcVar3 == ')') {
        if (iVar6 == 0) {
          *param_1 = iVar2 + 2;
          param_2[iVar4] = '\0';
          uVar5 = 0xffffffff;
          pcVar3 = param_2;
          goto code_r0x004aa759;
        }
        iVar6 = iVar6 + -1;
      }
      pcVar3 = param_2 + iVar4;
      iVar4 = iVar4 + 1;
      *pcVar3 = *(char *)*param_1;
    } while (iVar4 < param_3);
  }
  return "Argument too long";
  while( true ) {
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    if (cVar1 == '\0') break;
code_r0x004aa759:
    if (uVar5 == 0) break;
  }
  n = ~uVar5 - 1;
  if (0 < (int)n) {
    pcVar3 = param_2 + n;
    do {
      if ((g_CharacterClassificationTable[(byte)(pcVar3[-1] + 1)] & 2U) == 0) break;
      n = n - 1;
      pcVar3 = pcVar3 + -1;
    } while (0 < (int)n);
  }
  param_2[n] = '\0';
  while ((g_CharacterClassificationTable[(byte)(*param_2 + 1)] & 2U) != 0) {
    memmove(param_2,param_2 + 1,n);
    n = n - 1;
  }
  pcVar3 = (char *)*param_1;
  while ((g_CharacterClassificationTable[(byte)(*pcVar3 + 1)] & 2U) != 0) {
    pcVar3 = pcVar3 + 1;
  }
  *param_1 = (int)pcVar3;
  return (char *)0x0;
}
