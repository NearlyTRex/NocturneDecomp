// Name: sound_sndmain.cpp_findSfxSampleByName_FUN_00551ce0
// Address: 00551ce0
// Address Range: [[00551ce0, 00551d13]]
// Convention: __cdecl
// Signature: CSfxSample * __cdecl sound_sndmain_cpp_findSfxSampleByName_FUN_00551ce0(char *filename)

#include "nocturne.h"

CSfxSample * __cdecl sound_sndmain_cpp_findSfxSampleByName_FUN_00551ce0(char *filename)

{
  int iVar1;
  CSfxSample *str1;
  int iVar2;
  
  str1 = g_SfxSamples;
  iVar2 = 0;
  do {
    iVar1 = _stricmp((char *)str1,filename);
    if (iVar1 == 0) {
      return str1;
    }
    iVar2 = iVar2 + 1;
    str1 = str1 + 1;
  } while (iVar2 < 0x40);
  return (CSfxSample *)0x0;
}
