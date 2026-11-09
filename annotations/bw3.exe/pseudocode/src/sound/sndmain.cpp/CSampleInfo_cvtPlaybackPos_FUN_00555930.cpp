// Name: sound_sndmain.cpp_CSampleInfo_cvtPlaybackPos_FUN_00555930
// Address: 00555930
// Address Range: [[00555930, 00555a97]]
// Convention: __cdecl
// Signature: double __cdecl sound_sndmain_cpp_CSampleInfo_cvtPlaybackPos_FUN_00555930(CSampleInfo *this_ptr,double position,uint input_type,uint output_type)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double __cdecl sound_sndmain_cpp_CSampleInfo_cvtPlaybackPos_FUN_00555930(CSampleInfo *this_ptr,double position,uint input_type,uint output_type)

{
  if (input_type != output_type) {
    if (input_type != 0) {
      if (input_type < 2) {
        position = (double)*(int *)(this_ptr + 0x10c) * position;
      }
      else if (input_type == 2) {
        if (*(int *)(this_ptr + 0x110) < 1) {
          _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
          _DAT_01d71de4 = 0xdbe;
          core_main_c_FUN_004e4330("SampleInfo::cvtPlaybackPos - can't use relative sample position when length of %s is not known.",this_ptr);
          position = (double)*(int *)(this_ptr + 0x110) * position;
        }
        else {
          position = (double)*(int *)(this_ptr + 0x110) * position;
        }
      }
      else {
        _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
        _DAT_01d71de4 = 0xdc3;
        core_main_c_FUN_004e4330("SampleInfo::cvtPlaybackPos - Invalid input sample pos type");
      }
    }
    if (output_type != 0) {
      if (output_type < 2) {
        position = position / (double)*(int *)(this_ptr + 0x10c);
      }
      else if (output_type == 2) {
        if (*(int *)(this_ptr + 0x110) < 1) {
          _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
          _DAT_01d71de4 = 0xdd1;
          core_main_c_FUN_004e4330("SampleInfo::cvtPlaybackPos - can't use relative sample position when length of %s is not known.",this_ptr);
          position = position / (double)*(int *)(this_ptr + 0x110);
        }
        else {
          position = position / (double)*(int *)(this_ptr + 0x110);
        }
      }
      else {
        _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
        _DAT_01d71de4 = 0xdd6;
        core_main_c_FUN_004e4330("SampleInfo::cvtPlaybackPos - Invalid input sample pos type");
      }
    }
  }
  return position;
}
