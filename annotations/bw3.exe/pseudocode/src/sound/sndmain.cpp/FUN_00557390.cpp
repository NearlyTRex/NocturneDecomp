// Name: sound_sndmain.cpp_FUN_00557390
// Address: 00557390
// Address Range: [[00557390, 0055741d]]
// Convention: unknown
// Signature: int sound_sndmain_cpp_FUN_00557390(char *param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

int sound_sndmain_cpp_FUN_00557390(char *param_1,uint param_2,uint param_3)

{
  int iVar1;
  CSfxSample *str1;
  int iVar2;
  
  sound_sndmain_cpp_lockSound_FUN_00558e90();
  str1 = g_SfxSamples;
  iVar2 = 0;
  do {
    iVar1 = _stricmp((char *)str1,param_1);
    if (iVar1 == 0) {
      if (str1 != (CSfxSample *)0x0) {
        if (str1->locked_length == 0) {
          iVar2 = sound_sndmain_cpp_FUN_00553660(str1,param_2,param_3);
          if (iVar2 != 0) {
            sound_sndmain_cpp_FUN_00556fd0();
            return iVar2;
          }
        }
        else {
          sound_sndmain_cpp_FUN_0055a560("lockSample(%s) - already locked",param_1);
        }
        goto LAB_005573da;
      }
      break;
    }
    iVar2 = iVar2 + 1;
    str1 = str1 + 1;
  } while (iVar2 < 0x40);
  sound_sndmain_cpp_FUN_0055a560("lockSample(%s) - sample not in the cache",param_1);
LAB_005573da:
  sound_sndmain_cpp_FUN_00556fd0();
  return 0;
}
