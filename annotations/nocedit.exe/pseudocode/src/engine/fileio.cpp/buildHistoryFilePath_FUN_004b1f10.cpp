// Name: engine_fileio.cpp_buildHistoryFilePath_FUN_004b1f10
// Address: 004b1f10
// Address Range: [[004b1f10, 004b1fde]]
// Convention: __cdecl
// Signature: void __cdecl engine_fileio_cpp_buildHistoryFilePath_FUN_004b1f10(char *filename,char *extension,char *dest_buffer)

#include "nocturne.h"

void __cdecl engine_fileio_cpp_buildHistoryFilePath_FUN_004b1f10(char *filename,char *extension,char *dest_buffer)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  byte bVar5;
  char local_214 [260];
  char local_110 [256];
  char local_10 [4];
  
  bVar5 = 0;
  if (g_VersionControlDirectory[0] == '\0') {
    g_CurrentFilename = "..\\engine\\fileio.cpp";
    g_CurrentLineNumber = 0xe7;
    core_main_c_displayErrorAndQuit_FUN_00506f10("versionControlDirectory not set!");
  }
  pcVar3 = local_214;
  _sprintf(local_214,"history\\%s.%s",filename,extension);
  engine_dosio_c_ensureTrailingSlash_FUN_00481f80(g_VersionControlDirectory,local_10,local_110);
  engine_dosio_c_makePath_FUN_00481f50(dest_buffer,local_10,local_110,(char *)0x0,(char *)0x0);
  iVar2 = -1;
  do {
    pcVar4 = dest_buffer;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar4 = dest_buffer + (uint)bVar5 * -2 + 1;
    cVar1 = *dest_buffer;
    dest_buffer = pcVar4;
  } while (cVar1 != '\0');
  pcVar4 = pcVar4 + -1;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  return;
}
