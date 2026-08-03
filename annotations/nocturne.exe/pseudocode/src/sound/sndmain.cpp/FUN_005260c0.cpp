// Name: sound_sndmain.cpp_FUN_005260c0
// Address: 005260c0
// Address Range: [[005260c0, 005260ed]]
// Convention: unknown
// Signature: void sound_sndmain_cpp_FUN_005260c0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void sound_sndmain_cpp_FUN_005260c0(void)

{
  int iVar1;
  void *in_stack_00000004;
  
  iVar1 = _DAT_02dc1b74;
  g_CSfxOptions_ARRAY_02dc1b78[_DAT_02dc1b74].velocity_format = 2;
  g_CSfxOptions_ARRAY_02dc1b78[iVar1].velocity_source_ptr = in_stack_00000004;
  return;
}
