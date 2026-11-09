// Name: sound_sndmain.cpp_CSfxSample_init_FUN_0054fcd0
// Address: 0054fcd0
// Address Range: [[0054fcd0, 0054fd1a]]
// Convention: __cdecl
// Signature: CSfxSample * __cdecl sound_sndmain_cpp_CSfxSample_init_FUN_0054fcd0(CSfxSample *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CSfxSample * __cdecl sound_sndmain_cpp_CSfxSample_init_FUN_0054fcd0(CSfxSample *this_ptr)

{
  float fVar1;
  float fVar2;
  
  memset(this_ptr,0,0x150);
  fVar1 = _DAT_0263cf10 * _DAT_0061bcb8;
  fVar2 = _DAT_005fbc2c * _DAT_0061bcb8;
  *(float *)&this_ptr->field_0x114 = _DAT_005fbc28 * _DAT_0061bcb8;
  *(float *)&this_ptr->field_0x118 = fVar1;
  *(float *)&this_ptr->field_0x11c = fVar2;
  return this_ptr;
}
