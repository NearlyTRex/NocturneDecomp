// Name: core_script.cpp_parseArgument_FUN_004fe090
// Address: 004fe090
// Address Range: [[004fe090, 004fe130]]
// Convention: __cdecl
// Signature: char * __cdecl core_script_cpp_parseArgument_FUN_004fe090(char **cursor,char *out_buffer,int max_length)

#include "nocturne.h"

char * __cdecl core_script_cpp_parseArgument_FUN_004fe090(char **cursor,char *out_buffer,int max_length)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  
  pcVar2 = core_script_cpp_skipWhitespace_FUN_004fe070(*cursor);
  *cursor = pcVar2;
  if (*pcVar2 != '(') {
    return "No opening parenthesis";
  }
  iVar3 = 0;
  iVar4 = 0;
  if (0 < max_length) {
    do {
      pcVar2 = *cursor;
      pcVar6 = pcVar2 + 1;
      *cursor = pcVar6;
      cVar1 = *pcVar6;
      if (cVar1 == '\0') {
        return "Can't find closing parenthesis";
      }
      if (cVar1 == '(') {
        iVar3 = iVar3 + 1;
      }
      else if (cVar1 == ')') {
        if (iVar3 == 0) {
          *cursor = pcVar2 + 2;
          out_buffer[iVar4] = '\0';
          core_script_cpp_trimString_FUN_004fe000(out_buffer);
          pcVar2 = core_script_cpp_skipWhitespace_FUN_004fe070(*cursor);
          *cursor = pcVar2;
          return (char *)0x0;
        }
        iVar3 = iVar3 + -1;
      }
      iVar5 = iVar4 + 1;
      out_buffer[iVar4] = **cursor;
      iVar4 = iVar5;
    } while (iVar5 < max_length);
  }
  return "Argument too long";
}
