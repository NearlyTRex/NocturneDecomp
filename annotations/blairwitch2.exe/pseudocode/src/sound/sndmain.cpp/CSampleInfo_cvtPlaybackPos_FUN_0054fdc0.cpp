// Name: sound_sndmain.cpp_CSampleInfo_cvtPlaybackPos_FUN_0054fdc0
// Address: 0054fdc0
// Address Range: [[0054fdc0, 0054ff27]]
// Convention: __cdecl
// Signature: double __cdecl sound_sndmain_cpp_CSampleInfo_cvtPlaybackPos_FUN_0054fdc0(CSampleInfo *this_ptr,double position,uint input_type,uint output_type)

#include "nocturne.h"

double __cdecl sound_sndmain_cpp_CSampleInfo_cvtPlaybackPos_FUN_0054fdc0(CSampleInfo *this_ptr,double position,uint input_type,uint output_type)

{
  if (input_type != output_type) {
    if (input_type != 0) {
      if (input_type < 2) {
        position = (double)this_ptr->sample_rate * position;
      }
      else if (input_type == 2) {
        if (this_ptr->sample_count < 1) {
          g_CurrentFilename = "..\\sound\\sndmain.cpp";
          g_CurrentLineNumber = 3516;
          core_main_c_displayErrorAndQuit_FUN_004e4500("SampleInfo::cvtPlaybackPos - can't use relative sample position when length of %s is not known.");
          position = (double)this_ptr->sample_count * position;
        }
        else {
          position = (double)this_ptr->sample_count * position;
        }
      }
      else {
        g_CurrentFilename = "..\\sound\\sndmain.cpp";
        g_CurrentLineNumber = 3521;
        core_main_c_displayErrorAndQuit_FUN_004e4500("SampleInfo::cvtPlaybackPos - Invalid input sample pos type");
      }
    }
    if (output_type != 0) {
      if (output_type < 2) {
        position = position / (double)this_ptr->sample_rate;
      }
      else if (output_type == 2) {
        if (this_ptr->sample_count < 1) {
          g_CurrentFilename = "..\\sound\\sndmain.cpp";
          g_CurrentLineNumber = 3535;
          core_main_c_displayErrorAndQuit_FUN_004e4500("SampleInfo::cvtPlaybackPos - can't use relative sample position when length of %s is not known.");
          position = position / (double)this_ptr->sample_count;
        }
        else {
          position = position / (double)this_ptr->sample_count;
        }
      }
      else {
        g_CurrentFilename = "..\\sound\\sndmain.cpp";
        g_CurrentLineNumber = 3540;
        core_main_c_displayErrorAndQuit_FUN_004e4500("SampleInfo::cvtPlaybackPos - Invalid input sample pos type");
      }
    }
  }
  return position;
}
