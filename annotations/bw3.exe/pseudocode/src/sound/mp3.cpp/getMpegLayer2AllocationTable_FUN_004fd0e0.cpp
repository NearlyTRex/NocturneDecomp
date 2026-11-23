// Name: sound_mp3.cpp_getMpegLayer2AllocationTable_FUN_004fd0e0
// Address: 004fd0e0
// Address Range: [[004fd0e0, 004fd14a]]
// Convention: __cdecl
// Signature: void * __cdecl sound_mp3_cpp_getMpegLayer2AllocationTable_FUN_004fd0e0(int layer,int mode_extension)

#include "nocturne.h"

void * __cdecl sound_mp3_cpp_getMpegLayer2AllocationTable_FUN_004fd0e0(int layer,int mode_extension)

{
  if ((((0 < layer) && (layer < 4)) && (-1 < mode_extension)) && (mode_extension < 4)) {
    return *(void **)("$CMotionController$$" + layer * 0x10 + mode_extension * 4 + 0x13);
  }
  g_CurrentFilename = "..\\sound\\mp3.cpp";
  g_CurrentLineNumber = 490;
  core_main_c_displayErrorAndQuit_FUN_004e4330("js_bound bad layer/modext (%d/%d)  File: %s");
  return *(void **)("$CMotionController$$" + layer * 0x10 + mode_extension * 4 + 0x13);
}
