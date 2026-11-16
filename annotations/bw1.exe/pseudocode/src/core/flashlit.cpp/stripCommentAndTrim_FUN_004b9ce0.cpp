// Name: core_flashlit.cpp_stripCommentAndTrim_FUN_004b9ce0
// Address: 004b9ce0
// Address Range: [[004b9ce0, 004b9d06]]
// Convention: __cdecl
// Signature: void __cdecl core_flashlit_cpp_stripCommentAndTrim_FUN_004b9ce0(char *line)

#include "nocturne.h"

void __cdecl core_flashlit_cpp_stripCommentAndTrim_FUN_004b9ce0(char *line)

{
  char *pcVar1;
  
  pcVar1 = strstr(line,&DAT_005df822);
  if (pcVar1 != (char *)0x0) {
    *pcVar1 = '\0';
  }
  core_flashlit_cpp_trimAndNormalizeWhitespace_FUN_004b9c50(line);
  return;
}
