// Name: engine_texture.cpp_FUN_00574f60
// Address: 00574f60
// Address Range: [[00574f60, 00575000]]
// Convention: unknown
// Signature: void engine_texture_cpp_FUN_00574f60(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void engine_texture_cpp_FUN_00574f60(void)

{
  int iVar1;
  int in_stack_00000004;
  uint in_stack_00000008;
  uint in_stack_0000000c;
  
  if ((DAT_0070ca74 == 0) && (*(char *)(in_stack_00000004 + 8) != '\0')) {
    iVar1 = engine_texture_cpp_FUN_00574490
                      (_DAT_02652eb0,*(uint *)(in_stack_00000004 + 4) & 0xffff,in_stack_00000004 + 8
                      );
    if (iVar1 == -1) {
      iVar1 = engine_texture_cpp_FUN_005742b0
                        (_DAT_02652eb0,in_stack_00000004 + 8,in_stack_00000008,in_stack_0000000c);
      *(int *)(in_stack_00000004 + 4) = iVar1;
    }
    else {
      *(int *)(in_stack_00000004 + 4) = iVar1;
      engine_texture_cpp_FUN_005743e0(_DAT_02652eb0);
    }
    _DAT_02652eac = iVar1;
    engine_texture_cpp_FUN_00574520(_DAT_02652eb0);
    return;
  }
  return;
}
