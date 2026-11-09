// Name: sound_mp3.cpp_CMP3Decoder_readBits_FUN_00525f00
// Address: 00525f00
// Address Range: [[00525f00, 00525fde]]
// Convention: __cdecl
// Signature: uint __cdecl sound_mp3_cpp_CMP3Decoder_readBits_FUN_00525f00(CMP3Decoder *this_ptr,uint num_bits)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl sound_mp3_cpp_CMP3Decoder_readBits_FUN_00525f00(CMP3Decoder *this_ptr,uint num_bits)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  byte local_14;
  
  uVar3 = 0;
  *(uint *)&this_ptr->field_0x1314 = *(int *)&this_ptr->field_0x1314 + num_bits;
  while (0 < (int)num_bits) {
    if (*(int *)&this_ptr->field_0x531c == 0) {
      *(uint *)&this_ptr->field_0x531c = 8;
      uVar2 = *(int *)&this_ptr->field_0x1318 + 1;
      *(uint *)&this_ptr->field_0x1318 = uVar2;
      if (*(uint *)&this_ptr->field_0x1310 < uVar2) {
        _DAT_01d1d400 = "..\\sound\\mp3.cpp";
        _DAT_01d1d404 = 0x30a;
        core_main_c_FUN_005030e0("Buffer overflow!!  File: %s",&DAT_01d404c8);
      }
    }
    uVar2 = *(uint *)&this_ptr->field_0x531c;
    if (num_bits < uVar2) {
      uVar2 = num_bits;
    }
    num_bits = num_bits - uVar2;
    iVar1 = *(int *)&this_ptr->field_0x531c - uVar2;
    local_14 = (byte)iVar1;
    uVar3 = uVar3 | ((*(uint *)(&this_ptr->field_0x131c +
                               (*(uint *)&this_ptr->field_0x1318 & 0xfff) * 4) &
                     *(uint *)(&DAT_006206b0 + *(int *)&this_ptr->field_0x531c * 4)) >>
                    (local_14 & 0x1f)) << ((byte)num_bits & 0x1f);
    *(int *)&this_ptr->field_0x531c = iVar1;
  }
  return uVar3;
}
