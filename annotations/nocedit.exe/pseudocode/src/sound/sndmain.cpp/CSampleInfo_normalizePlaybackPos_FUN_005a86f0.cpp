// Name: sound_sndmain.cpp_CSampleInfo_normalizePlaybackPos_FUN_005a86f0
// Address: 005a86f0
// Address Range: [[005a86f0, 005a87c6]]
// Convention: __cdecl
// Signature: double sound_sndmain.cpp_CSampleInfo_normalizePlaybackPos_FUN_005a86f0(CSampleInfo * this_ptr, double position, uint input_type, uint output_type)

#include "nocturne.h"

double __cdecl
sound_sndmain_cpp_CSampleInfo_normalizePlaybackPos_FUN_005a86f0
          (CSampleInfo *this_ptr,double position,uint input_type,uint output_type)

{
  int iVar1;
  double input_value;
  double dVar2;
  CSfxSample *in_stack_00000004;
  CSfxSample *this_ptr_00;
  uint in_stack_ffffffe0;
  
  this_ptr_00 = in_stack_00000004;
  input_value = sound_sndmain_cpp_CSampleInfo_cvtPlaybackPos_FUN_005a8580
                          (this_ptr,position,2,in_stack_ffffffe0);
  this_ptr = SUB84 /* extract 2-byte value */(input_value,0);
  position._0_4_ = (CSfxSample *)((ulonglong)input_value >> 0x20);
  iVar1 = sound_sndmain_cpp_CSfxSample_getLoopMode_FUN_005a87d0(this_ptr_00);
  dVar2 = (double)CONCAT44 /* combine 2-byte values */(this_ptr,in_stack_00000004);
  if (iVar1 == 0) {
    if (input_value < 0.0) {
      dVar2 = (double)ZEXT48(in_stack_00000004);
      position._0_4_ = (CSfxSample *)0x0;
    }
    else if (1.0 < input_value) {
      dVar2 = (double)ZEXT48(in_stack_00000004);
      position._0_4_ = (CSfxSample *)0x3ff00000;
    }
  }
  else {
    this_ptr_00 = position._0_4_;
    dVar2 = crt_math_c_floor_FUN_005feb90(input_value);
    dVar2 = (double)CONCAT44 /* combine 2-byte values */(this_ptr,in_stack_00000004) - dVar2;
  }
  this_ptr = (CSampleInfo *)((ulonglong)dVar2 >> 0x20);
  in_stack_00000004 = SUB84 /* extract 2-byte value */(dVar2,0);
  dVar2 = sound_sndmain_cpp_CSampleInfo_cvtPlaybackPos_FUN_005a8580
                    (&in_stack_00000004->sample_info,(double)CONCAT44 /* combine 2-byte values */(2,this_ptr),
                     (uint)position._0_4_,(uint)this_ptr_00);
  return dVar2;
}
