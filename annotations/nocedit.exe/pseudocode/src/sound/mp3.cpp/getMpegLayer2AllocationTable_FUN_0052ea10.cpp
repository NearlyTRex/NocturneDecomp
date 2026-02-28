// Name: sound_mp3.cpp_getMpegLayer2AllocationTable_FUN_0052ea10
// Address: 0052ea10
// Address Range: [[0052ea10, 0052ea7a]]
// Convention: __cdecl
// Signature: void * __cdecl sound_mp3_cpp_getMpegLayer2AllocationTable_FUN_0052ea10(int layer,int mode_extension)

#include "nocturne.h"

void * __cdecl sound_mp3_cpp_getMpegLayer2AllocationTable_FUN_0052ea10(int layer,int mode_extension)

{
  if ((((0 < layer) && (layer < 4)) && (-1 < mode_extension)) && (mode_extension < 4)) {
    return (void *)g_MpegLayer2AllocationTables[layer][mode_extension];
  }
  g_CurrentFilename = "..\\sound\\mp3.cpp";
  g_CurrentLineNumber = 0x1b2;
  core_main_c_displayErrorAndQuit_FUN_00506f10
            ("js_bound bad layer/modext (%d/%d)  File: %s",layer,mode_extension,g_CurrentMp3Filename);
  return (void *)g_MpegLayer2AllocationTables[layer][mode_extension];
}
