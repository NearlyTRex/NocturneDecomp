// Name: sound_sndmain.cpp_CSampleInfo_cvtPlaybackPos_FUN_00525c70
// Address: 00525c70
// Address Range: [[00525c70, 00525dd7]]
// Convention: unknown
// Signature: double sound_sndmain_cpp_CSampleInfo_cvtPlaybackPos_FUN_00525c70(int param_1,double param_2,uint param_3,uint param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double sound_sndmain_cpp_CSampleInfo_cvtPlaybackPos_FUN_00525c70(int param_1,double param_2,uint param_3,uint param_4)

{
  if (param_3 != param_4) {
    if (param_3 != 0) {
      if (param_3 < 2) {
        param_2 = (double)*(int *)(param_1 + 0x10c) * param_2;
      }
      else if (param_3 == 2) {
        if (*(int *)(param_1 + 0x110) < 1) {
          _DAT_01cc4800 = "..\\sound\\sndmain.cpp";
          _DAT_01cc4804 = 0xc37;
          FUN_004c8440("SampleInfo::cvtPlaybackPos - can't use relative sample position when length of %s is not known.",param_1);
          param_2 = (double)*(int *)(param_1 + 0x110) * param_2;
        }
        else {
          param_2 = (double)*(int *)(param_1 + 0x110) * param_2;
        }
      }
      else {
        _DAT_01cc4800 = "..\\sound\\sndmain.cpp";
        _DAT_01cc4804 = 0xc3c;
        FUN_004c8440("SampleInfo::cvtPlaybackPos - Invalid input sample pos type");
      }
    }
    if (param_4 != 0) {
      if (param_4 < 2) {
        param_2 = param_2 / (double)*(int *)(param_1 + 0x10c);
      }
      else if (param_4 == 2) {
        if (*(int *)(param_1 + 0x110) < 1) {
          _DAT_01cc4800 = "..\\sound\\sndmain.cpp";
          _DAT_01cc4804 = 0xc4a;
          FUN_004c8440("SampleInfo::cvtPlaybackPos - can't use relative sample position when length of %s is not known.",param_1);
          param_2 = param_2 / (double)*(int *)(param_1 + 0x110);
        }
        else {
          param_2 = param_2 / (double)*(int *)(param_1 + 0x110);
        }
      }
      else {
        _DAT_01cc4800 = "..\\sound\\sndmain.cpp";
        _DAT_01cc4804 = 0xc4f;
        FUN_004c8440("SampleInfo::cvtPlaybackPos - Invalid input sample pos type");
      }
    }
  }
  return param_2;
}
