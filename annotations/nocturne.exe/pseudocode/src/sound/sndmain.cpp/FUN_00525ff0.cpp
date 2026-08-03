// Name: sound_sndmain.cpp_FUN_00525ff0
// Address: 00525ff0
// Address Range: [[00525ff0, 0052601d]]
// Convention: unknown
// Signature: void sound_sndmain_cpp_FUN_00525ff0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void sound_sndmain_cpp_FUN_00525ff0(void)

{
  int iVar1;
  void *in_stack_00000004;
  
  iVar1 = _DAT_02dc1b74;
  g_CSfxOptions_ARRAY_02dc1b78[_DAT_02dc1b74].position_format = 2;
  g_CSfxOptions_ARRAY_02dc1b78[iVar1].position_source_ptr = in_stack_00000004;
  return;
}
