// Name: sound_sndmain.cpp_CSampleInfo_cvtPlaybackPos_FUN_005a8580
// Address: 005a8580
// Address Range: [[005a8580, 005a86e7]]
// Convention: __cdecl
// Signature: double __cdecl sound_sndmain_cpp_CSampleInfo_cvtPlaybackPos_FUN_005a8580 (CSampleInfo *this_ptr,double position,uint input_type,uint output_type)

#include "nocturne.h"

double __cdecl
sound_sndmain_cpp_CSampleInfo_cvtPlaybackPos_FUN_005a8580
          (CSampleInfo *this_ptr,double position,uint input_type,uint output_type)

{
  double dVar1;
  int in_stack_00000004;
  
  if (position._4_4_ != input_type) {
    if (position._4_4_ != 0) {
      if ((ulonglong)position < 0x200000000) {
        dVar1 = (double)*(int *)(in_stack_00000004 + 0x10c) *
                (double)CONCAT44(position._0_4_,this_ptr);
        this_ptr = SUB84(dVar1,0);
        position._0_4_ = (uint)((ulonglong)dVar1 >> 0x20);
      }
      else if (position._4_4_ == 2) {
        if (*(int *)(in_stack_00000004 + 0x110) < 1) {
          g_CurrentFilename = "..\\sound\\sndmain.cpp";
          g_CurrentLineNumber = 0xc44;
          core_main_c_displayErrorAndQuit_FUN_00506f10("SampleInfo::cvtPlaybackPos - can't use relative sample position when length of %s is not known.");
          dVar1 = (double)*(int *)(in_stack_00000004 + 0x110) *
                  (double)CONCAT44(position._0_4_,this_ptr);
          this_ptr = SUB84(dVar1,0);
          position._0_4_ = (uint)((ulonglong)dVar1 >> 0x20);
          position = (double)CONCAT44(2,position._0_4_);
        }
        else {
          dVar1 = (double)*(int *)(in_stack_00000004 + 0x110) *
                  (double)CONCAT44(position._0_4_,this_ptr);
          this_ptr = SUB84(dVar1,0);
          position._0_4_ = (uint)((ulonglong)dVar1 >> 0x20);
          position = (double)CONCAT44(2,position._0_4_);
        }
      }
      else {
        g_CurrentFilename = "..\\sound\\sndmain.cpp";
        g_CurrentLineNumber = 0xc49;
        core_main_c_displayErrorAndQuit_FUN_00506f10("SampleInfo::cvtPlaybackPos - Invalid input sample pos type");
      }
    }
    if (input_type != 0) {
      if (input_type < 2) {
        dVar1 = (double)CONCAT44(position._0_4_,this_ptr) /
                (double)*(int *)(in_stack_00000004 + 0x10c);
        this_ptr = SUB84(dVar1,0);
        position._0_4_ = (uint)((ulonglong)dVar1 >> 0x20);
      }
      else if (input_type == 2) {
        if (*(int *)(in_stack_00000004 + 0x110) < 1) {
          g_CurrentFilename = "..\\sound\\sndmain.cpp";
          g_CurrentLineNumber = 0xc57;
          core_main_c_displayErrorAndQuit_FUN_00506f10("SampleInfo::cvtPlaybackPos - can't use relative sample position when length of %s is not known.");
          dVar1 = (double)CONCAT44(position._0_4_,this_ptr) /
                  (double)*(int *)(in_stack_00000004 + 0x110);
          this_ptr = SUB84(dVar1,0);
          position._0_4_ = (uint)((ulonglong)dVar1 >> 0x20);
        }
        else {
          dVar1 = (double)CONCAT44(position._0_4_,this_ptr) /
                  (double)*(int *)(in_stack_00000004 + 0x110);
          this_ptr = SUB84(dVar1,0);
          position._0_4_ = (uint)((ulonglong)dVar1 >> 0x20);
        }
      }
      else {
        g_CurrentFilename = "..\\sound\\sndmain.cpp";
        g_CurrentLineNumber = 0xc5c;
        core_main_c_displayErrorAndQuit_FUN_00506f10("SampleInfo::cvtPlaybackPos - Invalid input sample pos type");
      }
    }
  }
  return (double)CONCAT44(position._0_4_,this_ptr);
}
