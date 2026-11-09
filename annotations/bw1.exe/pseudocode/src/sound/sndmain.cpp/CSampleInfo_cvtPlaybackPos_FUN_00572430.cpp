// Name: sound_sndmain.cpp_CSampleInfo_cvtPlaybackPos_FUN_00572430
// Address: 00572430
// Address Range: [[00572430, 00572597]]
// Convention: __cdecl
// Signature: double __cdecl sound_sndmain_cpp_CSampleInfo_cvtPlaybackPos_FUN_00572430(CSampleInfo *this_ptr,double position,uint input_type,uint output_type)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double __cdecl sound_sndmain_cpp_CSampleInfo_cvtPlaybackPos_FUN_00572430(CSampleInfo *this_ptr,double position,uint input_type,uint output_type)

{
  if (input_type != output_type) {
    if (input_type != 0) {
      if (input_type < 2) {
        position = (double)*(int *)(this_ptr + 0x10c) * position;
      }
      else if (input_type == 2) {
        if (*(int *)(this_ptr + 0x110) < 1) {
          _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
          _DAT_01d1d404 = 0xdbc;
          core_main_c_FUN_005030e0("SampleInfo::cvtPlaybackPos - can't use relative sample position when length of %s is not known.",this_ptr);
          position = (double)*(int *)(this_ptr + 0x110) * position;
        }
        else {
          position = (double)*(int *)(this_ptr + 0x110) * position;
        }
      }
      else {
        _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
        _DAT_01d1d404 = 0xdc1;
        core_main_c_FUN_005030e0("SampleInfo::cvtPlaybackPos - Invalid input sample pos type");
      }
    }
    if (output_type != 0) {
      if (output_type < 2) {
        position = position / (double)*(int *)(this_ptr + 0x10c);
      }
      else if (output_type == 2) {
        if (*(int *)(this_ptr + 0x110) < 1) {
          _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
          _DAT_01d1d404 = 0xdcf;
          core_main_c_FUN_005030e0("SampleInfo::cvtPlaybackPos - can't use relative sample position when length of %s is not known.",this_ptr);
          position = position / (double)*(int *)(this_ptr + 0x110);
        }
        else {
          position = position / (double)*(int *)(this_ptr + 0x110);
        }
      }
      else {
        _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
        _DAT_01d1d404 = 0xdd4;
        core_main_c_FUN_005030e0("SampleInfo::cvtPlaybackPos - Invalid input sample pos type");
      }
    }
  }
  return position;
}
