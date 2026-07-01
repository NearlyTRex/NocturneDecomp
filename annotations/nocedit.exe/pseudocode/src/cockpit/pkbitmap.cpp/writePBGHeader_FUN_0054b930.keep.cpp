// Name: cockpit_pkbitmap.cpp_writePBGHeader_FUN_0054b930
// Address: 0054b930
// MANUAL RECONSTRUCTION
// Address Range: [[0054b930, 0054b9a9]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbitmap_cpp_writePBGHeader_FUN_0054b930(int total_entries,_FILE *file_header)

#include "nocturne.h"

void __cdecl cockpit_pkbitmap_cpp_writePBGHeader_FUN_0054b930(int total_entries,_FILE *file_header)

{
  int local_10 [2];

  memcpy(local_10, "PBG\032", 4);
  local_10[1] = total_entries;
  _fwrite(local_10,8,1,file_header);
  if ((file_header->_flag & 0x20) == 0) {
    return;
  }
  g_CurrentFilename = "..\\cockpit\\pkbitmap.cpp";
  g_CurrentLineNumber = 1336;
  core_main_c_displayErrorAndQuit_FUN_00506f10("Error writing PBG header");
  return;
}
