// Name: core_skeledit.cpp_skipLeadingWhitespace_FUN_00589500
// Address: 00589500
// Address Range: [[00589500, 00589523]]
// Convention: __cdecl
// Signature: void __cdecl core_skeledit_cpp_skipLeadingWhitespace_FUN_00589500(char *str)

#include "nocturne.h"

void __cdecl core_skeledit_cpp_skipLeadingWhitespace_FUN_00589500(char *str)

{
  while ((g_CharacterClassificationTable[(byte)(*str + 1)] & 2) != 0) {
    str = str + 1;
  }
  return;
}
