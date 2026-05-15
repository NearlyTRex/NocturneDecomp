// Name: engine_fileio.cpp_buildHistoryFilePath_FUN_004b1f10
// Address: 004b1f10
// MANUAL RECONSTRUCTION
// Address Range: [[004b1f10, 004b1fde]]
// Convention: __cdecl
// Signature: void __cdecl engine_fileio_cpp_buildHistoryFilePath_FUN_004b1f10(char *filename,char *extension,char *dest_buffer)

#include "nocturne.h"

void __cdecl engine_fileio_cpp_buildHistoryFilePath_FUN_004b1f10(char *filename,char *extension,char *dest_buffer)

{
  char local_214 [260];
  char local_110 [256];
  char local_10 [4];

  if (g_VersionControlDirectory[0] == '\0') {
    g_CurrentFilename = "..\\engine\\fileio.cpp";
    g_CurrentLineNumber = 0xe7;
    core_main_c_displayErrorAndQuit_FUN_00506f10("versionControlDirectory not set!");
  }
  _sprintf(local_214,"history\\%s.%s",filename,extension);
  engine_dosio_cpp_ensureTrailingSlash_FUN_00481f80(g_VersionControlDirectory,local_10,local_110);
  engine_dosio_cpp_makePath_FUN_00481f50(dest_buffer,local_10,local_110,(char *)0x0,(char *)0x0);
  strcat(dest_buffer,local_214);
  return;
}
