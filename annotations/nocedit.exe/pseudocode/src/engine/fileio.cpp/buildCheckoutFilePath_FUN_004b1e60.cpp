// Name: engine_fileio.cpp_buildCheckoutFilePath_FUN_004b1e60
// Address: 004b1e60
// Address Range: [[004b1e60, 004b1f01]]
// Convention: __cdecl
// Signature: void __cdecl engine_fileio_cpp_buildCheckoutFilePath_FUN_004b1e60(char *dest_buffer)

#include "nocturne.h"

void __cdecl engine_fileio_cpp_buildCheckoutFilePath_FUN_004b1e60(char *dest_buffer)

{
  char cVar2;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  byte bVar5;
  char local_10c [256];
  char local_c [4];
  char cVar1;
  
  bVar5 = 0;
  if (g_VersionControlDirectory[0] == '\0') {
    g_CurrentFilename = "..\\engine\\fileio.cpp";
    g_CurrentLineNumber = 0xdd;
    core_main_c_displayErrorAndQuit_FUN_00506f10("versionControlDirectory not set!");
  }
  engine_dosio_cpp_ensureTrailingSlash_FUN_00481f80(g_VersionControlDirectory,local_c,local_10c);
  engine_dosio_cpp_makePath_FUN_00481f50(dest_buffer,local_c,local_10c,(char *)0x0,(char *)0x0);
  pcVar3 = "checkout.txt";
  iVar2 = -1;
  pcVar4 = dest_buffer;
  do {
    pcVar4 = pcVar4;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar4 = pcVar4 + (uint)bVar5 * -2 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4;
  } while (cVar1 != '\0');
  pcVar5 = pcVar4 + -1;
  do {
    cVar2 = *pcVar3;
    *pcVar5 = cVar2;
    if (cVar2 == '\0') {
      return;
    }
    cVar2 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar5[1] = cVar2;
    pcVar5 = pcVar5 + 2;
  } while (cVar2 != '\0');
  return;
}
