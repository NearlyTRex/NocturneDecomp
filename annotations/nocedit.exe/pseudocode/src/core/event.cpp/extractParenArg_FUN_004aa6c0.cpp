// Name: core_event.cpp_extractParenArg_FUN_004aa6c0
// Address: 004aa6c0
// Address Range: [[004aa6c0, 004aa7cd]]
// Convention: __cdecl
// Signature: char * __cdecl core_event_cpp_extractParenArg_FUN_004aa6c0(char **cursor,char *out_buf,int max_len)

#include "nocturne.h"

char * __cdecl core_event_cpp_extractParenArg_FUN_004aa6c0(char **cursor,char *out_buf,int max_len)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  SIZE_T n;
  char *pcVar5;
  int iVar6;
  
  pcVar2 = *cursor;
  while ((g_CharacterClassificationTable[(byte)(*pcVar2 + 1)] & 2) != 0) {
    pcVar2 = pcVar2 + 1;
  }
  *cursor = pcVar2;
  if (*pcVar2 != '(') {
    return "No opening parenthesis";
  }
  iVar6 = 0;
  iVar3 = 0;
  if (0 < max_len) {
    do {
      pcVar2 = *cursor;
      pcVar5 = pcVar2 + 1;
      *cursor = pcVar5;
      if (*pcVar5 == '\0') {
        return "Can't find closing parenthesis";
      }
      if (*pcVar5 == '(') {
        iVar6 = iVar6 + 1;
      }
      else if (*pcVar5 == ')') {
        if (iVar6 == 0) {
          *cursor = pcVar2 + 2;
          out_buf[iVar3] = '\0';
          uVar4 = 0xffffffff;
          pcVar2 = out_buf;
          goto code_r0x004aa759;
        }
        iVar6 = iVar6 + -1;
      }
      pcVar2 = out_buf + iVar3;
      iVar3 = iVar3 + 1;
      *pcVar2 = **cursor;
    } while (iVar3 < max_len);
  }
  return "Argument too long";
  while( true ) {
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    if (cVar1 == '\0') break;
code_r0x004aa759:
    if (uVar4 == 0) break;
  }
  n = ~uVar4 - 1;
  if (0 < (int)n) {
    pcVar2 = out_buf + n;
    do {
      if ((g_CharacterClassificationTable[(byte)(pcVar2[-1] + 1)] & 2) == 0) break;
      n = n - 1;
      pcVar2 = pcVar2 + -1;
    } while (0 < (int)n);
  }
  out_buf[n] = '\0';
  while ((g_CharacterClassificationTable[(byte)(*out_buf + 1)] & 2) != 0) {
    memmove(out_buf,out_buf + 1,n);
    n = n - 1;
  }
  pcVar2 = *cursor;
  while ((g_CharacterClassificationTable[(byte)(*pcVar2 + 1)] & 2) != 0) {
    pcVar2 = pcVar2 + 1;
  }
  *cursor = pcVar2;
  return (char *)0x0;
}
