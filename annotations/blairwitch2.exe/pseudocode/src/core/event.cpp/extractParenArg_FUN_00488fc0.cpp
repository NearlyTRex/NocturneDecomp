// Name: core_event.cpp_extractParenArg_FUN_00488fc0
// Address: 00488fc0
// Address Range: [[00488fc0, 004890dd]]
// Convention: __cdecl
// Signature: char * __cdecl core_event_cpp_extractParenArg_FUN_00488fc0(char **cursor,char *out_buf,int max_len,int require_open_paren)

#include "nocturne.h"

char * __cdecl core_event_cpp_extractParenArg_FUN_00488fc0(char **cursor,char *out_buf,int max_len,int require_open_paren)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  SIZE_T n;
  int iVar5;
  
  pcVar2 = *cursor;
  while (((&DAT_0061ed94)[(byte)(*pcVar2 + 1)] & 2) != 0) {
    pcVar2 = pcVar2 + 1;
  }
  *cursor = pcVar2;
  if (require_open_paren != 0) {
    if (*pcVar2 != '(') {
      return "No opening parenthesis";
    }
    *cursor = pcVar2 + 1;
  }
  iVar5 = 0;
  iVar3 = 0;
  if (0 < max_len) {
    do {
      cVar1 = **cursor;
      if (cVar1 == '\0') {
        return "Can't find closing parenthesis";
      }
      if (cVar1 == '(') {
        iVar5 = iVar5 + 1;
      }
      else if (cVar1 == ')') {
        if (iVar5 == 0) {
          *cursor = *cursor + 1;
          out_buf[iVar3] = '\0';
          uVar4 = 0xffffffff;
          pcVar2 = out_buf;
          goto code_r0x00489069;
        }
        iVar5 = iVar5 + -1;
      }
      out_buf[iVar3] = **cursor;
      iVar3 = iVar3 + 1;
      *cursor = *cursor + 1;
    } while (iVar3 < max_len);
  }
  return "Argument too long";
  while( true ) {
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    if (cVar1 == '\0') break;
code_r0x00489069:
    if (uVar4 == 0) break;
  }
  n = ~uVar4 - 1;
  if (0 < (int)n) {
    pcVar2 = out_buf + n;
    do {
      if (((&DAT_0061ed94)[(byte)(pcVar2[-1] + 1)] & 2) == 0) break;
      n = n - 1;
      pcVar2 = pcVar2 + -1;
    } while (0 < (int)n);
  }
  out_buf[n] = '\0';
  while (((&DAT_0061ed94)[(byte)(*out_buf + 1)] & 2) != 0) {
    memmove(out_buf,out_buf + 1,n);
    n = n - 1;
  }
  pcVar2 = *cursor;
  while (((&DAT_0061ed94)[(byte)(*pcVar2 + 1)] & 2) != 0) {
    pcVar2 = pcVar2 + 1;
  }
  *cursor = pcVar2;
  return (char *)0x0;
}
