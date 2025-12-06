// Name: engine_fileio.cpp_CCheckOutList_load_FUN_004b2890
// Address: 004b2890
// Address Range: [[004b2890, 004b2a53]]
// Convention: __cdecl
// Signature: int engine_fileio.cpp_CCheckOutList_load_FUN_004b2890(CCheckOutList * this_ptr)

#include "nocturne.h"

int __cdecl engine_fileio_cpp_CCheckOutList_load_FUN_004b2890(CCheckOutList *this_ptr)

{
  char cVar1;
  FILE *stream_ptr;
  int *piVar2;
  int iVar3;
  BADSPACEBASE *in_ESP;
  char *pcVar4;
  char *pcVar5;
  byte bVar7;
  CCheckOutList *in_stack_0000001c;
  char acStack_110 [4];
  char acStack_10c [252];
  char *pcVar6;
  
  bVar7 = 0;
  engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860(this_ptr);
  if (g_VersionControlDirectory[0] == '\0') {
    return 1;
  }
  if (g_VersionControlDirectory[0] == '\0') {
    g_CurrentFilename = "..\\engine\\fileio.cpp";
    g_CurrentLineNumber = 0xdd;
    core_main_c_displayErrorAndQuit_FUN_00506f10("versionControlDirectory not set!");
  }
  engine_dosio_c_ensureTrailingSlash_FUN_00481f80
            (g_VersionControlDirectory,&stack0xfffffff4,acStack_110);
  engine_dosio_c_makePath_FUN_00481f50
            (&stack0xfffffde8,&stack0xfffffff8,acStack_10c,(char *)0x0,(char *)0x0);
  pcVar4 = "checkout.txt";
  iVar3 = -1;
  pcVar6 = &stack0xfffffde8;
  do {
    pcVar5 = pcVar6;
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar5 = pcVar6 + (uint)bVar7 * -2 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar5;
  } while (cVar1 != '\0');
  pcVar5 = pcVar5 + -1;
  do {
    cVar1 = *pcVar4;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  iVar3 = 0;
  do {
    stream_ptr = shape_memdbg_cpp_openFile_FUN_0050f7a0
                           (&stack0xfffffdf4,(char *)0x0,"rt","..\\engine\\fileio.cpp",
                            0x153);
    if (stream_ptr != (FILE *)0x0) {
      crt_stdio_c_setvbuf_FUN_00601490(stream_ptr,(char *)0x0,0,0x400);
      goto LAB_004b295b;
    }
    piVar2 = (int *)crt_errno_c_errno_FUN_00601450();
    if (*piVar2 != 6) break;
    iVar3 = iVar3 + 1;
    (*Sleep)(500);
  } while (iVar3 < 10);
  stream_ptr = (FILE *)0x0;
LAB_004b295b:
  if (stream_ptr != (FILE *)0x0) {
    iVar3 = engine_fileio_cpp_CCheckOutList_parse_FUN_004b2a60
                      (in_stack_0000001c,(FILE **)&stack0x00000000);
    if (this_ptr != (CCheckOutList *)0x0) {
      shape_memdbg_cpp_closeFile_FUN_0050f9b0((FILE *)this_ptr,"..\\engine\\fileio.cpp",0xc4);
    }
    return iVar3;
  }
  piVar2 = (int *)crt_errno_c_errno_FUN_00601450();
  if (*piVar2 == 1) {
    return 1;
  }
  shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
            (g_CEditorToolsPtr,"Can't access %s.");
  return 0;
}
