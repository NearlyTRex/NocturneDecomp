// Name: sound_sndmain.cpp_FUN_0056e7f0
// Address: 0056e7f0
// Address Range: [[0056e7f0, 0056e823]]
// Convention: unknown
// Signature: CSfxSample * sound_sndmain_cpp_FUN_0056e7f0(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CSfxSample * sound_sndmain_cpp_FUN_0056e7f0(void)

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
