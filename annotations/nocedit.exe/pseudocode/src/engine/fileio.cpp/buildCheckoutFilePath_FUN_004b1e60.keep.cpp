// Name: engine_fileio.cpp_buildCheckoutFilePath_FUN_004b1e60
// Address: 004b1e60
// MANUAL RECONSTRUCTION
// Address Range: [[004b1e60, 004b1f01]]
// Convention: __cdecl
// Signature: void __cdecl engine_fileio_cpp_buildCheckoutFilePath_FUN_004b1e60(char *dest_buffer)

#include "nocturne.h"

void __cdecl engine_fileio_cpp_buildCheckoutFilePath_FUN_004b1e60(char *dest_buffer)

{
  char local_10c [256];
  char local_c [4];

  if (g_VersionControlDirectory[0] == '\0') {
    g_CurrentFilename = "..\\engine\\fileio.cpp";
    g_CurrentLineNumber = 0xdd;
    core_main_c_displayErrorAndQuit_FUN_00506f10("versionControlDirectory not set!");
  }
  engine_dosio_cpp_ensureTrailingSlash_FUN_00481f80(g_VersionControlDirectory,local_c,local_10c);
  engine_dosio_cpp_makePath_FUN_00481f50(dest_buffer,local_c,local_10c,(char *)0x0,(char *)0x0);
  strcat(dest_buffer,"checkout.txt");
  return;
}
