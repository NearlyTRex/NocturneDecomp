// Name: sound_sndmain.cpp_FUN_00551cde
// Address: 00551cde
// Address Range: [[00551cde, 00551d13]]
// Convention: unknown
// Signature: CSfxSample * sound_sndmain_cpp_FUN_00551cde(char *param_1)

#include "nocturne.h"

CSfxSample * sound_sndmain_cpp_FUN_00551cde(char *param_1)

{
  int iVar1;
  CSfxSample *str1;
  int iVar2;
  
  str1 = g_SfxSamples;
  iVar2 = 0;
  do {
    iVar1 = _stricmp((char *)str1,param_1);
    if (iVar1 == 0) {
      return str1;
    }
    iVar2 = iVar2 + 1;
    str1 = str1 + 1;
  } while (iVar2 < 0x40);
  return (CSfxSample *)0x0;
}
