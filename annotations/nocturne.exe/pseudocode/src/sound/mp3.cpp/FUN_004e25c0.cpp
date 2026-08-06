// Name: sound_mp3.cpp_FUN_004e25c0
// Address: 004e25c0
// Address Range: [[004e25c0, 004e262a]]
// Convention: unknown
// Signature: undefined4 sound_mp3_cpp_FUN_004e25c0(int param_1,int param_2)

#include "nocturne.h"

uint sound_mp3_cpp_FUN_004e25c0(int param_1,int param_2)

{
  if ((((0 < param_1) && (param_1 < 4)) && (-1 < param_2)) && (param_2 < 4)) {
    return *(uint *)("$CMotionController$$" + param_1 * 0x10 + param_2 * 4 + 10);
  }
  g_CurrentFilename = "..\\sound\\mp3.cpp";
  g_CurrentLineNumber = 433;
  core_main_c_displayErrorAndQuit_FUN_004c8440("js_bound bad layer/modext (%d/%d)  File: %s");
  return *(uint *)("$CMotionController$$" + param_1 * 0x10 + param_2 * 4 + 10);
}
