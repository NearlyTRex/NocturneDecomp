// Name: core_morph.cpp_FUN_004e0300
// Address: 004e0300
// Address Range: [[004e0300, 004e0330]]
// Convention: unknown
// Signature: void core_morph_cpp_FUN_004e0300(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void core_morph_cpp_FUN_004e0300(void)

{
  int in_stack_00000004;
  int in_stack_00000008;
  CVector3i *in_stack_0000000c;
  int in_stack_00000010;
  
  core_morph_cpp_CMorphModel_animateFromPartVertexBuffer_FUN_004df740
            ((CMorphModel *)(in_stack_00000008 * 0x608 + in_stack_00000004),in_stack_00000010,
             in_stack_0000000c);
  return;
}
