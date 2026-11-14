// Name: engine_texture.cpp_FUN_0056ab70
// Address: 0056ab70
// Address Range: [[0056ab70, 0056ac10]]
// Convention: unknown
// Signature: void engine_texture_cpp_FUN_0056ab70(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void engine_texture_cpp_FUN_0056ab70(void)

{
  int iVar1;
  int in_stack_00000004;
  uint in_stack_00000008;
  uint in_stack_0000000c;
  
  if ((DAT_007303f4 == 0) && (*(char *)(in_stack_00000004 + 8) != '\0')) {
    iVar1 = engine_texture_cpp_FUN_0056a0a0
                      (_DAT_02cfd0d0,*(uint *)(in_stack_00000004 + 4) & 0xffff,in_stack_00000004 + 8
                      );
    if (iVar1 == -1) {
      iVar1 = engine_texture_cpp_FUN_00569ec0
                        (_DAT_02cfd0d0,in_stack_00000004 + 8,in_stack_00000008,in_stack_0000000c);
      *(int *)(in_stack_00000004 + 4) = iVar1;
    }
    else {
      *(int *)(in_stack_00000004 + 4) = iVar1;
      engine_texture_cpp_FUN_00569ff0(_DAT_02cfd0d0);
    }
    _DAT_02cfd0cc = iVar1;
    engine_texture_cpp_FUN_0056a130(_DAT_02cfd0d0);
    return;
  }
  return;
}
