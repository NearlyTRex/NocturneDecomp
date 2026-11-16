// Name: core_flashlit.cpp_stripCommentAndTrim_FUN_004a7920
// Address: 004a7920
// Address Range: [[004a7920, 004a7946]]
// Convention: __cdecl
// Signature: void __cdecl core_flashlit_cpp_stripCommentAndTrim_FUN_004a7920(char *line)

#include "nocturne.h"

void __cdecl core_flashlit_cpp_stripCommentAndTrim_FUN_004a7920(char *line)

{
  char *pcVar1;
  
  pcVar1 = strstr(line,&DAT_005c0d0f);
  if (pcVar1 != (char *)0x0) {
    *pcVar1 = '\0';
  }
  core_flashlit_cpp_trimAndNormalizeWhitespace_FUN_004a7890(line);
  return;
}
