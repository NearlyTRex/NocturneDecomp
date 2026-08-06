// Name: sound_snddx.cpp_CDirectSoundDevice_lockSample_FUN_0052adc0
// Address: 0052adc0
// Address Range: [[0052adc0, 0052ae85]]
// Convention: __cdecl
// Signature: void * __cdecl sound_snddx_cpp_CDirectSoundDevice_lockSample_FUN_0052adc0(CDirectSoundDevice *this_ptr,int buffer_id,int offset,int size)

#include "nocturne.h"

void * __cdecl sound_snddx_cpp_CDirectSoundDevice_lockSample_FUN_0052adc0(CDirectSoundDevice *this_ptr,int buffer_id,int offset,int size)

{
  uint error_code;
  char *pcVar1;
  CSfxSample *in_stack_00000014;
  int *piStack_1b8;
  int iStack_1b4;
  int iStack_1b0;
  void **ppvStack_1ac;
  uint *puStack_1a8;
  void **ppvStack_1a4;
  uint *puStack_1a0;
  
  if (((0 < buffer_id) && (buffer_id < 0x19)) && (*(int *)(&DAT_02dc9244 + buffer_id * 4) != 0)) {
    puStack_1a0 = (uint *)0x52adfa;
    iStack_1b4 = sound_sndmain_cpp_CSfxSample_getBytesPerFrame_FUN_00525c40(in_stack_00000014);
    puStack_1a0 = &in_stack_00000014->locked_bytes2;
    ppvStack_1a4 = &in_stack_00000014->locked_ptr2;
    puStack_1a8 = &in_stack_00000014->locked_bytes1;
    ppvStack_1ac = &in_stack_00000014->locked_ptr1;
    iStack_1b0 = size * iStack_1b4;
    iStack_1b4 = iStack_1b4 * offset;
    piStack_1b8 = *(int **)(&DAT_02dc9244 + buffer_id * 4);
    error_code = (**(code **)(*piStack_1b8 + 0x2c))();
    if (error_code == 0) {
      return in_stack_00000014->locked_ptr1;
    }
    pcVar1 = sound_snddx_cpp_getDirectSoundErrorString_FUN_00529a90(error_code);
    _sprintf((char *)&piStack_1b8,"DirectSux: Unable to %s.  (%s)",
               "Lock hw sample buffer",pcVar1);
    sound_sndmain_cpp_FUN_00529980(&piStack_1b8);
    return (void *)0x0;
  }
  return (void *)0x0;
}
