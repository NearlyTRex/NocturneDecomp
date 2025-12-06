// Name: engine_fileio.cpp_CFileManager_parsePodConfigFile_FUN_004ba4f0
// Address: 004ba4f0
// Address Range: [[004ba4f0, 004ba614]]
// Convention: __cdecl
// Signature: void engine_fileio.cpp_CFileManager_parsePodConfigFile_FUN_004ba4f0(CFileManager * this_ptr, CStrList * pod_list)

#include "nocturne.h"

void __cdecl
engine_fileio_cpp_CFileManager_parsePodConfigFile_FUN_004ba4f0
          (CFileManager *this_ptr,CStrList *pod_list)

{
  FILE *file;
  int iVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  char *pcVar3;
  uint *puVar4;
  byte bVar5;
  int unaff_retaddr;
  CStrList *in_stack_00000010;
  char *pcVar6;
  uint *puVar7;
  char cStack_108;
  char acStack_104 [4];
  uint auStack_100 [63];
  
  bVar5 = 0;
  file = shape_memdbg_cpp_openFile_FUN_0050f7a0
                   ("pod.ini",(char *)0x0,"rt","..\\engine\\fileio.cpp",0xe7c)
  ;
  if (file == (FILE *)0x0) {
    return;
  }
  crt_stdio_c_fscanf_FUN_005fe7c0(file,"%d\n",&stack0xfffffffc);
  if (unaff_retaddr < 0) {
    g_CurrentFilename = "..\\engine\\fileio.cpp";
    g_CurrentLineNumber = 0xe81;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Error parsing POD.INI");
  }
  iVar2 = 0;
  if (0 < (int)this_ptr) {
    do {
      puVar7 = auStack_100;
      pcVar6 = "%s\n";
      pcVar3 = g_FilenameBufferTemplate;
      puVar4 = auStack_100;
      for (iVar1 = 0x41; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar4 = *(uint *)pcVar3;
        pcVar3 = pcVar3 + ((uint)bVar5 * -2 + 1) * 4;
        puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
      }
      crt_stdio_c_fscanf_FUN_005fe7c0(file,"%s\n");
      if (cStack_108 == '\0') {
        g_CurrentFilename = "..\\engine\\fileio.cpp";
        g_CurrentLineNumber = 0xe86;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Error parsing POD.INI",pcVar6,puVar7)
        ;
      }
      shape_edittool_cpp_CStrList_add_FUN_004a2b80(in_stack_00000010,acStack_104);
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)this_ptr);
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\engine\\fileio.cpp",0xe89);
  return;
}
