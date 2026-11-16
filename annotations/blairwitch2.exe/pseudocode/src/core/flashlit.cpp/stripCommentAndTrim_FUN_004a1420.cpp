// Name: core_flashlit.cpp_stripCommentAndTrim_FUN_004a1420
// Address: 004a1420
// Address Range: [[004a1420, 004a1446]]
// Convention: __cdecl
// Signature: void __cdecl core_flashlit_cpp_stripCommentAndTrim_FUN_004a1420(char *line)

#include "nocturne.h"

void __cdecl core_flashlit_cpp_stripCommentAndTrim_FUN_004a1420(char *line)

{
  char *pcVar1;
  
  pcVar1 = strstr(line,&DAT_005d59e0);
  if (pcVar1 != (char *)0x0) {
    *pcVar1 = '\0';
  }
  core_flashlit_cpp_trimAndNormalizeWhitespace_FUN_004a1390(line);
  return;
}
