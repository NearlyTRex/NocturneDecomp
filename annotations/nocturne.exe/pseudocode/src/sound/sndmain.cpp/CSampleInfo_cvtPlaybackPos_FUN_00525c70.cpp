// Name: sound_sndmain.cpp_CSampleInfo_cvtPlaybackPos_FUN_00525c70
// Address: 00525c70
// Address Range: [[00525c70, 00525dd7]]
// Convention: __cdecl
// Signature: double __cdecl sound_sndmain_cpp_CSampleInfo_cvtPlaybackPos_FUN_00525c70(CSampleInfo *this_ptr,double position,uint input_type,uint output_type)

#include "nocturne.h"

double __cdecl sound_sndmain_cpp_CSampleInfo_cvtPlaybackPos_FUN_00525c70(CSampleInfo *this_ptr,double position,uint input_type,uint output_type)

{
  if (input_type != output_type) {
    if (input_type != 0) {
      if (input_type < 2) {
        position = (double)this_ptr->sample_rate * position;
      }
      else if (input_type == 2) {
        if (this_ptr->sample_count < 1) {
          PTR_01cc4800 = "..\\sound\\sndmain.cpp";
          INT_01cc4804 = 0xc37;
          core_main_c_FUN_004c8440("SampleInfo::cvtPlaybackPos - can't use relative sample position when length of %s is not known.",this_ptr);
          position = (double)this_ptr->sample_count * position;
        }
        else {
          position = (double)this_ptr->sample_count * position;
        }
      }
      else {
        PTR_01cc4800 = "..\\sound\\sndmain.cpp";
        INT_01cc4804 = 0xc3c;
        core_main_c_FUN_004c8440("SampleInfo::cvtPlaybackPos - Invalid input sample pos type");
      }
    }
    if (output_type != 0) {
      if (output_type < 2) {
        position = position / (double)this_ptr->sample_rate;
      }
      else if (output_type == 2) {
        if (this_ptr->sample_count < 1) {
          PTR_01cc4800 = "..\\sound\\sndmain.cpp";
          INT_01cc4804 = 0xc4a;
          core_main_c_FUN_004c8440("SampleInfo::cvtPlaybackPos - can't use relative sample position when length of %s is not known.",this_ptr);
          position = position / (double)this_ptr->sample_count;
        }
        else {
          position = position / (double)this_ptr->sample_count;
        }
      }
      else {
        PTR_01cc4800 = "..\\sound\\sndmain.cpp";
        INT_01cc4804 = 0xc4f;
        core_main_c_FUN_004c8440("SampleInfo::cvtPlaybackPos - Invalid input sample pos type");
      }
    }
  }
  return position;
}
