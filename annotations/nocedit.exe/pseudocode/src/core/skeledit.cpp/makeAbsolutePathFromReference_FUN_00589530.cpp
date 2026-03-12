// Name: core_skeledit.cpp_makeAbsolutePathFromReference_FUN_00589530
// Address: 00589530
// Address Range: [[00589530, 005895e1]]
// Convention: __cdecl
// Signature: void __cdecl core_skeledit_cpp_makeAbsolutePathFromReference_FUN_00589530(char *reference_path,char *target_path)

#include "nocturne.h"

void __cdecl core_skeledit_cpp_makeAbsolutePathFromReference_FUN_00589530(char *reference_path,char *target_path)

{
  char local_304 [256];
  char local_204 [256];
  char local_104 [252];
  char local_4 [4];
  
  local_4[0] = '\x1c';
  local_4[1] = '\x03';
  local_4[2] = '\0';
  local_4[3] = '\0';
  __STK();
  splitpath(target_path,local_4,local_104,local_304,local_204);
  if ((local_104[0] == '\0') && (local_4[0] == '\0')) {
    splitpath(reference_path,local_4,local_104,(char *)0x0,(char *)0x0);
    makepath(target_path,local_4,local_104,local_304,local_204);
    return;
  }
  return;
}
