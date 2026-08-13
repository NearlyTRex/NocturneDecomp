// Name: sound_mp3.cpp_getMpegLayer2AllocationTable_FUN_004e25c0
// Address: 004e25c0
// Address Range: [[004e25c0, 004e262a]]
// Convention: __cdecl
// Signature: void * __cdecl sound_mp3_cpp_getMpegLayer2AllocationTable_FUN_004e25c0(int layer,int mode_extension)

#include "nocturne.h"

void * __cdecl sound_mp3_cpp_getMpegLayer2AllocationTable_FUN_004e25c0(int layer,int mode_extension)

{
  if ((((0 < layer) && (layer < 4)) && (-1 < mode_extension)) && (mode_extension < 4)) {
    return *(void **)("$CMotionController$$" + layer * 0x10 + mode_extension * 4 + 10);
  }
  g_CurrentFilename = "..\\sound\\mp3.cpp";
  g_CurrentLineNumber = 433;
  core_main_c_displayErrorAndQuit_FUN_004c8440("js_bound bad layer/modext (%d/%d)  File: %s");
  return *(void **)("$CMotionController$$" + layer * 0x10 + mode_extension * 4 + 10);
}
