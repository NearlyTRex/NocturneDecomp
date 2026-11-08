// Name: FUN_00555930
// Address: 00555930
// Address Range: [[00555930, 00555a97]]
// Convention: unknown
// Signature: double FUN_00555930(int param_1,double param_2,uint param_3,uint param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_00555930(int param_1,double param_2,uint param_3,uint param_4)

{
  if (param_3 != param_4) {
    if (param_3 != 0) {
      if (param_3 < 2) {
        param_2 = (double)*(int *)(param_1 + 0x10c) * param_2;
      }
      else if (param_3 == 2) {
        if (*(int *)(param_1 + 0x110) < 1) {
          _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
          _DAT_01d71de4 = 0xdbe;
          FUN_004e4330("SampleInfo::cvtPlaybackPos - can't use relative sample position when length of %s is not known.",param_1);
          param_2 = (double)*(int *)(param_1 + 0x110) * param_2;
        }
        else {
          param_2 = (double)*(int *)(param_1 + 0x110) * param_2;
        }
      }
      else {
        _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
        _DAT_01d71de4 = 0xdc3;
        FUN_004e4330("SampleInfo::cvtPlaybackPos - Invalid input sample pos type");
      }
    }
    if (param_4 != 0) {
      if (param_4 < 2) {
        param_2 = param_2 / (double)*(int *)(param_1 + 0x10c);
      }
      else if (param_4 == 2) {
        if (*(int *)(param_1 + 0x110) < 1) {
          _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
          _DAT_01d71de4 = 0xdd1;
          FUN_004e4330("SampleInfo::cvtPlaybackPos - can't use relative sample position when length of %s is not known.",param_1);
          param_2 = param_2 / (double)*(int *)(param_1 + 0x110);
        }
        else {
          param_2 = param_2 / (double)*(int *)(param_1 + 0x110);
        }
      }
      else {
        _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
        _DAT_01d71de4 = 0xdd6;
        FUN_004e4330("SampleInfo::cvtPlaybackPos - Invalid input sample pos type");
      }
    }
  }
  return param_2;
}
