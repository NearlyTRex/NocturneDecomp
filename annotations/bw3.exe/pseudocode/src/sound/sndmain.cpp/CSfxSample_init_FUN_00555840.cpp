// Name: sound_sndmain.cpp_CSfxSample_init_FUN_00555840
// Address: 00555840
// Address Range: [[00555840, 0055588a]]
// Convention: __cdecl
// Signature: CSfxSample * __cdecl sound_sndmain_cpp_CSfxSample_init_FUN_00555840(CSfxSample *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CSfxSample * __cdecl sound_sndmain_cpp_CSfxSample_init_FUN_00555840(CSfxSample *this_ptr)

{
  float fVar1;
  float fVar2;
  
  memset(this_ptr,0,0x150);
  fVar1 = _DAT_02ce7210 * _DAT_00604244;
  fVar2 = _DAT_005e4858 * _DAT_00604244;
  *(float *)&this_ptr->field_0x114 = _DAT_005e4854 * _DAT_00604244;
  *(float *)&this_ptr->field_0x118 = fVar1;
  *(float *)&this_ptr->field_0x11c = fVar2;
  return this_ptr;
}
