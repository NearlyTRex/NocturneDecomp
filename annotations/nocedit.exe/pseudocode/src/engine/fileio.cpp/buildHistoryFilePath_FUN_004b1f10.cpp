// Name: engine_fileio.cpp_buildHistoryFilePath_FUN_004b1f10
// Address: 004b1f10
// Address Range: [[004b1f10, 004b1fde]]
// Convention: __cdecl
// Signature: void engine_fileio.cpp_buildHistoryFilePath_FUN_004b1f10(char * filename, char * extension, char * dest_buffer)

#include "nocturne.h"

void __cdecl
engine_fileio_cpp_buildHistoryFilePath_FUN_004b1f10
          (char *filename,char *extension,char *dest_buffer)

{
  char cVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  char *pcVar3;
  char *pcVar4;
  byte bVar5;
  char acStack_204 [252];
  char acStack_108 [4];
  char acStack_104 [248];
  
  bVar5 = 0;
  if (g_VersionControlDirectory[0] == '\0') {
    g_CurrentFilename = "..\\engine\\fileio.cpp";
    g_CurrentLineNumber = 0xe7;
    core_main_c_displayErrorAndQuit_FUN_00506f10("versionControlDirectory not set!");
  }
  crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xfffffdf0,"history\\%s.%s",extension,dest_buffer);
  engine_dosio_c_ensureTrailingSlash_FUN_00481f80
            (g_VersionControlDirectory,&stack0xfffffff8,acStack_108);
  engine_dosio_c_makePath_FUN_00481f50
            (dest_buffer,&stack0xfffffffc,acStack_104,(char *)0x0,(char *)0x0);
  pcVar3 = acStack_204;
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
