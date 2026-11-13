// Name: sound_sndmain.cpp_FUN_00551ce0
// Address: 00551ce0
// Address Range: [[00551ce0, 00551d13]]
// Convention: unknown
// Signature: CSfxSample * sound_sndmain_cpp_FUN_00551ce0(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CSfxSample * sound_sndmain_cpp_FUN_00551ce0(void)

{
  int iVar1;
  CSfxSample *str1;
  int iVar2;
  char *in_stack_00000004;
  
  str1 = g_SfxSamples;
  iVar2 = 0;
  do {
    iVar1 = _stricmp((char *)str1,in_stack_00000004);
    if (iVar1 == 0) {
      return str1;
    }
    iVar2 = iVar2 + 1;
    str1 = str1 + 1;
  } while (iVar2 < 0x40);
  return (CSfxSample *)0x0;
}
