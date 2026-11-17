// Name: sound_mp3.cpp_getMpegLayer2AllocationTable_FUN_00504600
// Address: 00504600
// Address Range: [[00504600, 0050466a]]
// Convention: __cdecl
// Signature: void * __cdecl sound_mp3_cpp_getMpegLayer2AllocationTable_FUN_00504600(int layer,int mode_extension)

#include "nocturne.h"

void * __cdecl sound_mp3_cpp_getMpegLayer2AllocationTable_FUN_00504600(int layer,int mode_extension)

{
  if ((((0 < layer) && (layer < 4)) && (-1 < mode_extension)) && (mode_extension < 4)) {
    return *(void **)("$CMotionController$$" + layer * 0x10 + mode_extension * 4 + 0x14);
  }
  g_CHAR_PTR_01d046a0 = "..\\sound\\mp3.cpp";
  g_INT_01d046a4 = 0x1ea;
  core_main_c_displayErrorAndQuit_FUN_004e4500("js_bound bad layer/modext (%d/%d)  File: %s");
  return *(void **)("$CMotionController$$" + layer * 0x10 + mode_extension * 4 + 0x14);
}
