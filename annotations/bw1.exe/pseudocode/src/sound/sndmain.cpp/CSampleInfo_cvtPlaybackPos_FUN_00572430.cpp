// Name: sound_sndmain.cpp_CSampleInfo_cvtPlaybackPos_FUN_00572430
// Address: 00572430
// Address Range: [[00572430, 00572597]]
// Convention: __cdecl
// Signature: double __cdecl sound_sndmain_cpp_CSampleInfo_cvtPlaybackPos_FUN_00572430(CSampleInfo *this_ptr,double position,uint input_type,uint output_type)

#include "nocturne.h"

double __cdecl sound_sndmain_cpp_CSampleInfo_cvtPlaybackPos_FUN_00572430(CSampleInfo *this_ptr,double position,uint input_type,uint output_type)

{
  if (input_type != output_type) {
    if (input_type != 0) {
      if (input_type < 2) {
        position = (double)this_ptr->sample_rate * position;
      }
      else if (input_type == 2) {
        if (this_ptr->sample_count < 1) {
          g_CHAR_PTR_01d1d400 = "..\\sound\\sndmain.cpp";
          g_INT_01d1d404 = 0xdbc;
          core_main_c_displayErrorAndQuit_FUN_005030e0("SampleInfo::cvtPlaybackPos - can't use relative sample position when length of %s is not known.");
          position = (double)this_ptr->sample_count * position;
        }
        else {
          position = (double)this_ptr->sample_count * position;
        }
      }
      else {
        g_CHAR_PTR_01d1d400 = "..\\sound\\sndmain.cpp";
        g_INT_01d1d404 = 0xdc1;
        core_main_c_displayErrorAndQuit_FUN_005030e0("SampleInfo::cvtPlaybackPos - Invalid input sample pos type");
      }
    }
    if (output_type != 0) {
      if (output_type < 2) {
        position = position / (double)this_ptr->sample_rate;
      }
      else if (output_type == 2) {
        if (this_ptr->sample_count < 1) {
          g_CHAR_PTR_01d1d400 = "..\\sound\\sndmain.cpp";
          g_INT_01d1d404 = 0xdcf;
          core_main_c_displayErrorAndQuit_FUN_005030e0("SampleInfo::cvtPlaybackPos - can't use relative sample position when length of %s is not known.");
          position = position / (double)this_ptr->sample_count;
        }
        else {
          position = position / (double)this_ptr->sample_count;
        }
      }
      else {
        g_CHAR_PTR_01d1d400 = "..\\sound\\sndmain.cpp";
        g_INT_01d1d404 = 0xdd4;
        core_main_c_displayErrorAndQuit_FUN_005030e0("SampleInfo::cvtPlaybackPos - Invalid input sample pos type");
      }
    }
  }
  return position;
}
