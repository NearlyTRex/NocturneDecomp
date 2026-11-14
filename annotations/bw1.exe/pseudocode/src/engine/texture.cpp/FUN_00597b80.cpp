// Name: engine_texture.cpp_FUN_00597b80
// Address: 00597b80
// Address Range: [[00597b80, 00597c20]]
// Convention: unknown
// Signature: void engine_texture_cpp_FUN_00597b80(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void engine_texture_cpp_FUN_00597b80(void)

{
  int iVar1;
  int in_stack_00000004;
  uint in_stack_00000008;
  uint in_stack_0000000c;
  
  if ((DAT_00713a74 == 0) && (*(char *)(in_stack_00000004 + 8) != '\0')) {
    iVar1 = engine_texture_cpp_FUN_005970b0
                      (_DAT_02c8a680,*(uint *)(in_stack_00000004 + 4) & 0xffff,in_stack_00000004 + 8
                      );
    if (iVar1 == -1) {
      iVar1 = engine_texture_cpp_FUN_00596ed0
                        (_DAT_02c8a680,in_stack_00000004 + 8,in_stack_00000008,in_stack_0000000c);
      *(int *)(in_stack_00000004 + 4) = iVar1;
    }
    else {
      *(int *)(in_stack_00000004 + 4) = iVar1;
      engine_texture_cpp_FUN_00597000(_DAT_02c8a680);
    }
    _DAT_02c8a67c = iVar1;
    engine_texture_cpp_FUN_00597140(_DAT_02c8a680);
    return;
  }
  return;
}
