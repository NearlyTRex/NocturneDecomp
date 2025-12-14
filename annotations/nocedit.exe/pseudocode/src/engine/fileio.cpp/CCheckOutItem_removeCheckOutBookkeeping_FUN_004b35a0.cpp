// Name: engine_fileio.cpp_CCheckOutItem_removeCheckOutBookkeeping_FUN_004b35a0
// Address: 004b35a0
// Address Range: [[004b35a0, 004b391c]]
// Convention: __cdecl
// Signature: int engine_fileio.cpp_CCheckOutItem_removeCheckOutBookkeeping_FUN_004b35a0(CCheckOutItem * this_ptr, void * unused_param)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004b38da) */

int __cdecl
engine_fileio_cpp_CCheckOutItem_removeCheckOutBookkeeping_FUN_004b35a0
          (CCheckOutItem *this_ptr,void *unused_param)

{
  char cVar1;
  void *filename;
  int iVar2;
  CCheckOutItem *stream_ptr;
  int *piVar3;
  BADSPACEBASE *in_ESP;
  char *pcVar4;
  char *pcVar5;
  byte bVar7;
  FILE *in_stack_0000000c;
  int in_stack_00000010;
  char acStack_114 [4];
  char acStack_110 [248];
  uint local_18;
  char *pcVar6;
  
  filename = unused_param;
  bVar7 = 0;
  local_18 = 0;
  if (g_VersionControlSession.primary_username[0] == '\0') {
    g_CurrentFilename = "..\\engine\\fileio.cpp";
    g_CurrentLineNumber = 0x402;
    core_main_c_displayErrorAndQuit_FUN_00506f10("removeCheckOutBookkeeping - don't know user name!");
  }
  if (g_VersionControlSession.network_username[0] != '\0') {
    shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
              (g_CEditorToolsPtr,"Logging on as version control user...");
    iVar2 = engine_fileio_cpp_logOnAsVersionControlUser_FUN_004b2770();
    if (iVar2 == 0) goto LAB_004b36da;
  }
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Marking %s as no longer checked out");
  if (g_VersionControlDirectory[0] == '\0') {
    g_CurrentFilename = "..\\engine\\fileio.cpp";
    g_CurrentLineNumber = 0xdd;
    core_main_c_displayErrorAndQuit_FUN_00506f10("versionControlDirectory not set!");
  }
  engine_dosio_c_ensureTrailingSlash_FUN_00481f80
            (g_VersionControlDirectory,&stack0xfffffff8,acStack_114);
  engine_dosio_c_makePath_FUN_00481f50
            (&stack0xfffffde4,&stack0xfffffffc,acStack_110,(char *)0x0,(char *)0x0);
  pcVar4 = "checkout.txt";
  iVar2 = -1;
  pcVar6 = &stack0xfffffde4;
  do {
    pcVar5 = pcVar6;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
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
  iVar2 = 0;
  do {
    stream_ptr = (CCheckOutItem *)
                 shape_memdbg_cpp_openFile_FUN_0050f7a0
                           (&stack0xfffffdf0,(char *)0x0,"r+t","..\\engine\\fileio.cpp"
                            ,0x153);
    if (stream_ptr != (CCheckOutItem *)0x0) {
      crt_stdio_c_setvbuf_FUN_00601490((FILE *)stream_ptr,(char *)0x0,0,0x400);
      goto LAB_004b36b4;
    }
    piVar3 = (int *)crt_errno_c_errno_FUN_00601450();
    if (*piVar3 != 6) break;
    iVar2 = iVar2 + 1;
    (*Sleep)(500);
  } while (iVar2 < 10);
  stream_ptr = (CCheckOutItem *)0x0;
LAB_004b36b4:
  this_ptr = stream_ptr;
  if (stream_ptr == (CCheckOutItem *)0x0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Can't access %s.");
  }
  else {
    iVar2 = engine_fileio_cpp_CCheckOutList_parse_FUN_004b2a60
                      ((CCheckOutList *)&stack0xfffffffc,(FILE **)&this_ptr);
    if (iVar2 == 0) {
      engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860((CCheckOutList *)&stack0x00000000);
    }
    else {
      iVar2 = engine_fileio_cpp_CCheckOutList_findEntry_FUN_004b2e60
                        ((CCheckOutList *)&stack0x00000000,filename);
      if (iVar2 < 0) {
        if (in_stack_0000000c != (FILE *)0x0) {
          shape_memdbg_cpp_closeFile_FUN_0050f9b0
                    (in_stack_0000000c,"..\\engine\\fileio.cpp",0xc4);
          in_stack_00000010 = 0;
        }
        engine_fileio_cpp_logOffVersionControl_FUN_004b2830();
        shape_edittool_cpp_CEditorTools_showWarning_FUN_0049e6f0
                  (g_CEditorToolsPtr,"Tried to undo checkout on %s, but you didn't have the file checked out!\nThis should never happen.\nPlease leave this on your screen and show this to Fletch.");
        engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860((CCheckOutList *)&stack0x00000010);
        return 1;
      }
      iVar2 = engine_fileio_cpp_CCheckOutList_remove_FUN_004b2d70((CCheckOutList *)&this_ptr,iVar2);
      if (iVar2 == 0) {
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"Out of memory...Restart the application NOW.\nBetter yet, reboot the computer.");
      }
      else {
        iVar2 = engine_fileio_cpp_CCheckOutList_write_FUN_004b2eb0
                          ((CCheckOutList *)&stack0xfffffff8,(FILE **)&stack0x00000000);
        if (iVar2 != 0) {
          if (this_ptr != (CCheckOutItem *)0x0) {
            shape_memdbg_cpp_closeFile_FUN_0050f9b0
                      ((FILE *)this_ptr,"..\\engine\\fileio.cpp",0xc4);
            unused_param = (void *)0x0;
          }
          engine_fileio_cpp_logOffVersionControl_FUN_004b2830();
          engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860((CCheckOutList *)&this_ptr);
          return 1;
        }
      }
      engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860((CCheckOutList *)&stack0x00000000);
    }
  }
LAB_004b36da:
  if (in_stack_0000000c != (FILE *)0x0) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(in_stack_0000000c,"..\\engine\\fileio.cpp",0xc4);
    in_stack_0000000c = (FILE *)0x0;
  }
  engine_fileio_cpp_logOffVersionControl_FUN_004b2830();
  return 0;
}
