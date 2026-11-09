// Name: sound_sndmain.cpp_FUN_00555bf0
// Address: 00555bf0
// Address Range: [[00555bf0, 00555c8c]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_FUN_00555bf0(CSfxOptions *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_FUN_00555bf0(CSfxOptions *this_ptr)

{
  uint uVar1;
  
  *(uint *)this_ptr = 0;
  *(uint *)&this_ptr->field_0x14 = 0;
  *(uint *)&this_ptr->field_0x18 = 0;
  *(uint *)&this_ptr->field_0x1c = 0;
  *(uint *)&this_ptr->field_0x20 = 0;
  *(uint *)&this_ptr->field_0x2c = 0;
  *(uint *)&this_ptr->field_0x30 = 0;
  *(uint *)&this_ptr->field_0x34 = 0;
  *(uint *)&this_ptr->field_0x38 = 0x3f800000;
  *(uint *)&this_ptr->field_0x3c = 0x3f800000;
  *(ulonglong *)&this_ptr->field_0xc = *(ulonglong *)&this_ptr->field_0x14;
  *(uint *)&this_ptr->field_0x28 = *(uint *)&this_ptr->field_0x2c;
  *(ulonglong *)&this_ptr->field_0x4 = *(ulonglong *)&this_ptr->field_0xc;
  *(uint *)&this_ptr->field_0x24 = *(uint *)&this_ptr->field_0x28;
  memset(&this_ptr->field_0x44,0,8);
  *(uint *)&this_ptr->field_0x50 = 0;
  *(uint *)&this_ptr->field_0x54 = 0;
  *(uint *)&this_ptr->field_0x58 = 0;
  uVar1 = _DAT_005e4824;
  *(uint *)&this_ptr->field_0x5c = 0;
  *(uint *)&this_ptr->field_0x40 = uVar1;
  return;
}
