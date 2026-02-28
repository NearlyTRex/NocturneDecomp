// Name: sound_sndmain.cpp_CSampleInfo_normalizePlaybackPos_FUN_005a86f0
// Address: 005a86f0
// Address Range: [[005a86f0, 005a87c6]]
// Convention: __cdecl
// Signature: double __cdecl sound_sndmain_cpp_CSampleInfo_normalizePlaybackPos_FUN_005a86f0(CSampleInfo *this_ptr,double position,uint input_type,uint output_type)

#include "nocturne.h"

double __cdecl sound_sndmain_cpp_CSampleInfo_normalizePlaybackPos_FUN_005a86f0(CSampleInfo *this_ptr,double position,uint input_type,uint output_type)

{
  int iVar1;
  double dVar2;
  double dVar3;
  CSfxSample *in_stack_00000004;
  uint in_stack_ffffffe0;
  
  dVar2 = sound_sndmain_cpp_CSampleInfo_cvtPlaybackPos_FUN_005a8580
                    (this_ptr,position,2,in_stack_ffffffe0);
  iVar1 = sound_sndmain_cpp_CSfxSample_getLoopMode_FUN_005a87d0(in_stack_00000004);
  if (iVar1 == 0) {
    if (dVar2 < 0.0) {
      dVar2 = 0.0;
    }
    else if (1.0 < dVar2) {
      dVar2 = 1.0;
    }
  }
  else {
    dVar3 = floor(dVar2);
    dVar2 = dVar2 - dVar3;
  }
  position._0_4_ = (uint)((ulonglong)dVar2 >> 0x20);
  this_ptr = SUB84(__BITCAST_UINT64(dVar2),0);
  dVar2 = sound_sndmain_cpp_CSampleInfo_cvtPlaybackPos_FUN_005a8580
                    (this_ptr,__BITCAST_DOUBLE(CONCAT44(2,position._0_4_)),position._4_4_,in_stack_ffffffe0);
  return dVar2;
}
