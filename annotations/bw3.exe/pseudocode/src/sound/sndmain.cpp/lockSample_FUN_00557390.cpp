// Name: sound_sndmain.cpp_lockSample_FUN_00557390
// Address: 00557390
// Address Range: [[00557390, 0055741d]]
// Convention: __cdecl
// Signature: void * __cdecl sound_sndmain_cpp_lockSample_FUN_00557390(char *sample_name,int lock_offset,int lock_length)

#include "nocturne.h"

void * __cdecl sound_sndmain_cpp_lockSample_FUN_00557390(char *sample_name,int lock_offset,int lock_length)

{
  int iVar1;
  void *pvVar2;
  CSfxSample *this_ptr;
  int iVar3;
  
  sound_sndmain_cpp_lockSound_FUN_00558e90();
  this_ptr = g_SfxSamples;
  iVar3 = 0;
  do {
    iVar1 = _stricmp((char *)this_ptr,sample_name);
    if (iVar1 == 0) {
      if (this_ptr != (CSfxSample *)0x0) {
        if (this_ptr->locked_length == 0) {
          pvVar2 = sound_sndmain_cpp_CSfxSample_lock_FUN_00553660(this_ptr,lock_offset,lock_length);
          if (pvVar2 != (void *)0x0) {
            sound_sndmain_cpp_unlockSound_FUN_00556fd0();
            return pvVar2;
          }
        }
        else {
          sound_sndmain_cpp_logSoundError_FUN_0055a560
                    ("lockSample(%s) - already locked",sample_name);
        }
        goto LAB_005573da;
      }
      break;
    }
    iVar3 = iVar3 + 1;
    this_ptr = this_ptr + 1;
  } while (iVar3 < 0x40);
  sound_sndmain_cpp_logSoundError_FUN_0055a560("lockSample(%s) - sample not in the cache",sample_name);
LAB_005573da:
  sound_sndmain_cpp_unlockSound_FUN_00556fd0();
  return (void *)0x0;
}
