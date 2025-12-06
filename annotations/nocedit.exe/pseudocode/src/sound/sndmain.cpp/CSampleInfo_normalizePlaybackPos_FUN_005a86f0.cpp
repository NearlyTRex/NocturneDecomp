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
  uint extraout_EAX;
  uint extraout_EDX;
  float10 in_ST0;
  double dVar2;
  CSfxSample *in_stack_00000004;
  uint in_stack_ffffffe0;
  uint in_stack_ffffffe4;
  
  dVar2 = sound_sndmain_cpp_CSampleInfo_cvtPlaybackPos_FUN_005a8580
                    (this_ptr,position,2,in_stack_ffffffe0);
  position._4_4_ = (uint)((ulonglong)dVar2 >> 0x20);
  iVar1 = sound_sndmain_cpp_CSfxSample_getLoopMode_FUN_005a87d0(in_stack_00000004);
  if (iVar1 == 0) {
    if ((double)CONCAT44 /* combine 2-byte values */(input_type,position._4_4_) < 0.0) {
      dVar2 = (double)((ulonglong)dVar2 & 0xffffffff);
      input_type = 0;
    }
    else if (1.0 < (double)CONCAT44 /* combine 2-byte values */(input_type,position._4_4_)) {
      dVar2 = (double)((ulonglong)dVar2 & 0xffffffff);
      input_type = 0x3ff00000;
    }
  }
  else {
    in_stack_ffffffe4 = input_type;
    crt_math_c_floor_FUN_005feb90((double)in_ST0);
    dVar2 = dVar2 - (double)CONCAT44 /* combine 2-byte values */(extraout_EDX,extraout_EAX);
  }
  position._4_4_ = (uint)((ulonglong)dVar2 >> 0x20);
  position._0_4_ = SUB84 /* extract 2-byte value */(dVar2,0);
  dVar2 = sound_sndmain_cpp_CSampleInfo_cvtPlaybackPos_FUN_005a8580
                    (position._0_4_,(double)CONCAT44 /* combine 2-byte values */(2,position._4_4_),input_type,in_stack_ffffffe4)
  ;
  return dVar2;
}
