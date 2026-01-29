// Name: core_script.cpp_RelatedToMainButtonPresses_FUN_00559660
// Address: 00559660
// Address Range: [[00559660, 0055972d]]
// Convention: unknown
// Signature: int core_script_cpp_RelatedToMainButtonPresses_FUN_00559660(void)

#include "nocturne.h"

/* Signature: byte core_script.cpp_RelatedToMainButtonPresses(uint param_1, uint
   param_2) */

int core_script_cpp_RelatedToMainButtonPresses_FUN_00559660(void)

{
  int iVar1;
  int in_stack_00000004;
  char *in_stack_00000008;
  
  iVar1 = stricmp(in_stack_00000008,"walk");
  if (iVar1 == 0) {
    return in_stack_00000004;
  }
  iVar1 = stricmp(in_stack_00000008,"backup");
  if (iVar1 == 0) {
    return in_stack_00000004 + 4;
  }
  iVar1 = stricmp(in_stack_00000008,"run");
  if (iVar1 == 0) {
    return in_stack_00000004 + 8;
  }
  iVar1 = stricmp(in_stack_00000008,"fire");
  if (iVar1 == 0) {
    return in_stack_00000004 + 0xc;
  }
  iVar1 = stricmp(in_stack_00000008,"useItem");
  if (iVar1 == 0) {
    return in_stack_00000004 + 0x10;
  }
  iVar1 = stricmp(in_stack_00000008,"light");
  if (iVar1 == 0) {
    return in_stack_00000004 + 0x14;
  }
  iVar1 = stricmp(in_stack_00000008,"draw");
  if (iVar1 == 0) {
    return in_stack_00000004 + 0x18;
  }
  iVar1 = stricmp(in_stack_00000008,"jump");
  if (iVar1 == 0) {
    return in_stack_00000004 + 0x1c;
  }
  return 0;
}
