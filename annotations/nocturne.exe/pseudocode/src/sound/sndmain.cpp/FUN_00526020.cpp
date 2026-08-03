// Name: sound_sndmain.cpp_FUN_00526020
// Address: 00526020
// Address Range: [[00526020, 00526083]]
// Convention: unknown
// Signature: void sound_sndmain_cpp_FUN_00526020(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void sound_sndmain_cpp_FUN_00526020(void)

{
  int iVar1;
  uint in_stack_00000004;
  uint in_stack_00000008;
  uint in_stack_0000000c;
  uint in_stack_00000010;
  uint in_stack_00000014;
  uint in_stack_00000018;
  
  iVar1 = _DAT_02dc1b74;
  *(uint *)&g_CSfxOptions_ARRAY_02dc1b78[_DAT_02dc1b74].velocity.x = in_stack_00000004;
  *(uint *)((int)&g_CSfxOptions_ARRAY_02dc1b78[iVar1].velocity.x + 4) = in_stack_00000008;
  *(uint *)&g_CSfxOptions_ARRAY_02dc1b78[iVar1].velocity.y = in_stack_0000000c;
  *(uint *)((int)&g_CSfxOptions_ARRAY_02dc1b78[iVar1].velocity.y + 4) = in_stack_00000010;
  *(uint *)&g_CSfxOptions_ARRAY_02dc1b78[iVar1].velocity.z = in_stack_00000014;
  *(uint *)((int)&g_CSfxOptions_ARRAY_02dc1b78[iVar1].velocity.z + 4) = in_stack_00000018;
  g_CSfxOptions_ARRAY_02dc1b78[iVar1].velocity_source_ptr = (void *)0x0;
  g_CSfxOptions_ARRAY_02dc1b78[iVar1].velocity_format = 0;
  return;
}
