// Name: support_codec.cpp_CAsciiUnarmor_decode_FUN_00441610
// Address: 00441610
// Address Range: [[00441610, 00441653]]
// Convention: __cdecl
// Signature: undefined4 __cdecl support_codec_cpp_CAsciiUnarmor_decode_FUN_00441610(CAsciiUnarmor *this_ptr,int *param_2,undefined4 param_3)

#include "nocturne.h"

uint __cdecl support_codec_cpp_CAsciiUnarmor_decode_FUN_00441610(CAsciiUnarmor *this_ptr,int *param_2,uint param_3)

{
  int iVar1;
  
  while( true ) {
    iVar1 = (**(code **)(*param_2 + 4))(param_2);
    if (iVar1 < 0) break;
    iVar1 = support_codec_cpp_FUN_00441490(iVar1);
    if (-1 < iVar1) {
      support_codec_cpp_FUN_00440260(&this_ptr->bit_buffer,6,iVar1,param_3);
    }
  }
  return 1;
}
