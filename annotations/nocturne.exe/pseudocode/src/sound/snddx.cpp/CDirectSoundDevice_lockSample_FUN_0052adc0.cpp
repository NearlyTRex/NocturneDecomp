// Name: sound_snddx.cpp_CDirectSoundDevice_lockSample_FUN_0052adc0
// Address: 0052adc0
// Address Range: [[0052adc0, 0052ae85]]
// Convention: __cdecl
// Signature: void * __cdecl sound_snddx_cpp_CDirectSoundDevice_lockSample_FUN_0052adc0(CDirectSoundDevice *this_ptr,int buffer_id,int offset,int size)

#include "nocturne.h"

void * __cdecl sound_snddx_cpp_CDirectSoundDevice_lockSample_FUN_0052adc0(CDirectSoundDevice *this_ptr,int buffer_id,int offset,int size)

{
  int iVar1;
  uint error_code;
  char *pcVar2;
  CSfxSample *in_stack_00000014;
  char acStack_198 [400];
  
  if (((0 < buffer_id) && (buffer_id < 0x19)) &&
     (g_IDirectSoundBuffer_PTR_ARRAY_02dc9244[buffer_id] != (IDirectSoundBuffer *)0x0)) {
    iVar1 = sound_sndmain_cpp_CSfxSample_getBytesPerFrame_FUN_00525c40(in_stack_00000014);
    error_code = (*g_IDirectSoundBuffer_PTR_ARRAY_02dc9244[buffer_id]->vtable->Lock)
                           (g_IDirectSoundBuffer_PTR_ARRAY_02dc9244[buffer_id],iVar1 * offset,
                            size * iVar1,&in_stack_00000014->locked_ptr1,
                            &in_stack_00000014->locked_bytes1,&in_stack_00000014->locked_ptr2,
                            &in_stack_00000014->locked_bytes2,0);
    if (error_code == 0) {
      return in_stack_00000014->locked_ptr1;
    }
    pcVar2 = sound_snddx_cpp_getDirectSoundErrorString_FUN_00529a90(error_code);
    _sprintf(acStack_198,"DirectSux: Unable to %s.  (%s)","Lock hw sample buffer",
               pcVar2);
    sound_sndmain_cpp_logSoundError_FUN_00529980(acStack_198);
    return (void *)0x0;
  }
  return (void *)0x0;
}
