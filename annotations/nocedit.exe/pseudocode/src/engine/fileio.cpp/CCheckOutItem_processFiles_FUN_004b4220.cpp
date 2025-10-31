// Name: engine_fileio.cpp_CCheckOutItem_processFiles_FUN_004b4220
// Address: 004b4220
// Address Range: [[004b4220, 004b502e]]
// Convention: __cdecl
// Signature: int engine_fileio.cpp_CCheckOutItem_processFiles_FUN_004b4220(CCheckOutItem * this_ptr, int operation_mode, char * filename)
// Globals:
//   Sleep* Sleep = 00212228
//   TerminatedCString s_engine_fileio_cpp_0062604b
//   TerminatedCString s_engine_fileio_cpp_00626060
//   TerminatedCString s_versionControlDirectory__00626075
//   TerminatedCString s_checkout_txt_00626096
//   undefined4 s_heckout.txt_00626097
//   undefined4 s_eckout.txt_00626098
//   undefined4 s_ckout.txt_00626099
//   TerminatedCString s_engine_fileio_cpp_006260a3
//   TerminatedCString s_versionControlDirectory__006260b8
//   TerminatedCString s_history_s_s_006260d9
//   TerminatedCString s_engine_fileio_cpp_00626129
//   TerminatedCString s_anon_00626a5d
//   TerminatedCString s_Select_file_to_undo_chec_00626a5f
//   TerminatedCString s_anon_00626a7d
//   TerminatedCString s_Select_file_to_check_in_00626a7f
//   TerminatedCString s_Error_accessing_s_File_n_00626a97
//   TerminatedCString s_Error_accessing_s_File_n_00626ac1
//   TerminatedCString s_Undo_the_checkout_00626aeb
//   TerminatedCString s_Yes_I_did_change_the_fil_00626afe
//   TerminatedCString s_Oops_Keep_the_file_check_00626b4e
//   TerminatedCString s_Checking_in_file_that_di_00626b70
//   TerminatedCString s_Keep_s_checked_out_after_00626b95
//   TerminatedCString s_history_00626bc4
//   TerminatedCString s_Reading_s_00626bcc
//   TerminatedCString s_Opening_local_file_s_00626bd7
//   TerminatedCString s_engine_fileio_cpp_00626bed
//   TerminatedCString s_rb_00626c02
//   TerminatedCString s_Can_t_open_s_00626c05
//   TerminatedCString s_Logging_on_as_version_co_00626c13
//   TerminatedCString s_s_00626c39
//   TerminatedCString s_Creating_temporary_netwo_00626c44
//   TerminatedCString s_engine_fileio_cpp_00626c6a
//   TerminatedCString s_wb_00626c7f
//   TerminatedCString s_Can_t_create_s_Get_Fletc_00626c82
//   TerminatedCString s_Copying_file_to_temporar_00626c9f
//   TerminatedCString s_network_00626cc6
//   TerminatedCString s_s_Get_Fletch_00626cce
//   TerminatedCString s_Grabbing_s_00626cdd
//   TerminatedCString s_r_t_00626cec
//   TerminatedCString s_Can_t_access_s_Get_Fletc_00626cf0
//   TerminatedCString s_Hell_froze_we_no_longer__00626d0e
//   TerminatedCString s_Finalizing_s_to_network_00626d46
//   TerminatedCString s_Error_renaming_s_s_The_f_00626d62
//   TerminatedCString s_Waiting_for_s_to_become__00626e66
//   TerminatedCString s_Error_setting_file_date__00626ea8
//   TerminatedCString s_Error_setting_file_date__006270ed
//   TerminatedCString s_at_0062729a
//   TerminatedCString s_Error_creating_history_r_0062729d
//   TerminatedCString s_s_4d_04d_02d_02d_02d_02d_0062744a
//   TerminatedCString s_Out_of_memory_Restart_th_00627473
//   TerminatedCString s_Error_marking_local_file_006274c1
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   char[260] g_DefaultCheckOutPath
//   undefined4 s__00679ddc
//   CKeys* g_CKeysPtr = 02dcd7d4
//   CEditorTools g_CEditorToolsPtr
//   char[264] g_VersionControlDirectory
//   SVersionControlSession g_VersionControlSession
//   undefined4 g_VersionControlSession.network_username[0]
//   void* g_CKeysPtr
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_errno.c_errno_FUN_00601450
//   crt_io.c_deleteFile_FUN_005ff9d0
//   crt_stdio.c_fflush_FUN_00601540
//   crt_stdio.c_fprintf_FUN_005fe6d0
//   crt_stdio.c_rename_FUN_006015d0
//   crt_stdio.c_setvbuf_FUN_00601490
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   crt_time.c_localtime_FUN_00600288
//   crt_time.c_time_with_rounding_FUN_006001f0
//   engine_2d.c_clearInputAndWait_FUN_00403260
//   engine_dosio.c_copyFileTimestamp_FUN_00481910
//   engine_dosio.c_ensureTrailingSlash_FUN_00481f80
//   engine_dosio.c_findFileNormally_FUN_004817c0
//   engine_dosio.c_getFileTimestamp_FUN_00481960
//   engine_dosio.c_makePath_FUN_00481f50
//   engine_dosio.c_setFileAttributes_FUN_004819f0
//   engine_fileio.cpp_CCheckOutItem_removeCheckOutBookkeeping_FUN_004b35a0
//   engine_fileio.cpp_CCheckOutItem_selectCheckedOutFile_FUN_004b3f50
//   engine_fileio.cpp_CCheckOutList_findEntry_FUN_004b2e60
//   engine_fileio.cpp_CCheckOutList_parse_FUN_004b2a60
//   engine_fileio.cpp_CCheckOutList_remove_FUN_004b2d70
//   engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860
//   engine_fileio.cpp_CCheckOutList_write_FUN_004b2eb0
//   engine_fileio.cpp_copyFileWithProgress_FUN_004b2030
//   engine_fileio.cpp_findMaxFieldInTimestampFile_FUN_004b2640
//   engine_fileio.cpp_getLatestFileFromRepository_FUN_004b3220
//   engine_fileio.cpp_logOffVersionControl_FUN_004b2830
//   engine_fileio.cpp_logOnAsVersionControlUser_FUN_004b2770
//   shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0
//   shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
//   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   shape_edittool.cpp_CEditorTools_showWarning_FUN_0049e6f0
//   shape_edittool.cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
//   shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530
//   shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   shape_memdbg.cpp_openFile_FUN_0050f7a0
//   wincore_winrun.cpp_sleep_FUN_005f40e0

#include "nocturne.h"

int __cdecl
engine_fileio_cpp_CCheckOutItem_processFiles_FUN_004b4220
          (CCheckOutItem *this_ptr,int operation_mode,char *filename)

{
  char cVar1;
  CCheckOutItem *this_ptr_00;
  bool bVar2;
  FILE *pFVar3;
  undefined3 extraout_var;
  int *piVar4;
  undefined3 extraout_var_00;
  int iVar5;
  BADSPACEBASE *in_ESP;
  char *pcVar6;
  char *pcVar7;
  undefined4 *puVar8;
  char *pcVar9;
  byte bVar10;
  FILE *in_stack_00000010;
  CCheckOutItem *in_stack_00000014;
  CCheckOutItem *in_stack_00000018;
  CCheckOutItem *in_stack_0000001c;
  CCheckOutItem *in_stack_00000020;
  time_t in_stack_00000028;
  FILE *pFStack0000002c;
  FILE *in_stack_00000030;
  CCheckOutItem *in_stack_00000034;
  CCheckOutItem *in_stack_0000003c;
  FILE *in_stack_00000040;
  undefined4 in_stack_00000044;
  CCheckOutItem *in_stack_00000048;
  undefined4 in_stack_00000054;
  CStrList_vtable *in_stack_ffffec60;
  CStrList_vtable *in_stack_ffffec64;
  CStrList_vtable *in_stack_ffffec68;
  CStrList_vtable *in_stack_ffffec6c;
  uint in_stack_ffffec70;
  char **in_stack_ffffec74;
  CStrList_vtable *in_stack_ffffec78;
  uint in_stack_ffffec7c;
  char acStack_1014 [4];
  undefined1 auStack_1010 [524];
  undefined1 auStack_e04 [4];
  uint uStack_e00;
  char acStack_dfc [44];
  char acStack_dd0 [12];
  char acStack_dc4 [4];
  char acStack_dc0 [64];
  char acStack_d80 [4];
  char acStack_d7c [392];
  int iStack_bf4;
  uint uStack_bec;
  int iStack_bcc;
  char *pcStack_ba8;
  char acStack_ba4 [4];
  char acStack_ba0 [312];
  undefined4 local_a68 [9];
  char acStack_a44 [4];
  char acStack_a40 [4];
  char acStack_a3c [4];
  char acStack_a38 [4];
  char acStack_a34 [28];
  char acStack_a18 [8];
  char acStack_a10 [216];
  char acStack_938 [52];
  char acStack_904 [220];
  char acStack_828 [8];
  char acStack_820 [248];
  char acStack_728 [12];
  char acStack_71c [236];
  char acStack_630 [4];
  undefined1 auStack_62c [4];
  char acStack_628 [252];
  char acStack_52c [48];
  char acStack_4fc [204];
  char acStack_430 [4];
  char acStack_42c [276];
  char acStack_318 [4];
  char acStack_314 [204];
  char acStack_248 [4];
  char acStack_244 [300];
  char acStack_118 [4];
  char acStack_114 [204];
  undefined4 local_48;
  undefined4 local_2c;
  undefined4 local_28;
  char local_18 [4];
  char local_14 [4];
  
  this_ptr_00 = this_ptr;
  bVar10 = 0;
  pcVar6 = g_DefaultCheckOutPath;
  puVar8 = local_a68;
  for (iVar5 = 0x41; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar8 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    puVar8 = puVar8 + 1;
  }
  local_48 = 0;
  local_2c = 0;
  local_28 = 0;
  iVar5 = engine_fileio_cpp_CCheckOutItem_selectCheckedOutFile_FUN_004b3f50
                    (this_ptr,(char *)operation_mode,auStack_1010 + 0x204,
                     "Select file to check in","*");
  if (iVar5 == 0) {
    return 0;
  }
  iVar5 = engine_dosio_c_findFileNormally_FUN_004817c0((SFoundFileInfo *)(auStack_1010 + 0x208));
  if (iVar5 == 0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Error accessing %s.  File not checked in.",auStack_e04);
    return 0;
  }
  engine_dosio_c_ensureTrailingSlash_FUN_00481f80(this_ptr_00->name,local_18,acStack_248);
  engine_dosio_c_makePath_FUN_00481f50(acStack_1014,local_14,acStack_244,(char *)0x0,(char *)0x0);
  pcVar6 = acStack_dfc;
  iVar5 = -1;
  pcVar7 = auStack_1010;
  do {
    pcVar9 = pcVar7;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar9 = pcVar7 + (uint)bVar10 * -2 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar9;
  } while (cVar1 != '\0');
  pcVar9 = pcVar9 + -1;
  do {
    cVar1 = *pcVar6;
    *pcVar9 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar9[1] = cVar1;
    pcVar9 = pcVar9 + 2;
  } while (cVar1 != '\0');
  iVar5 = engine_dosio_c_findFileNormally_FUN_004817c0((SFoundFileInfo *)auStack_1010);
  if (iVar5 == 0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Error accessing %s.  File not checked in.",auStack_1010 + 4);
    return 0;
  }
  if (((iStack_bf4 == auStack_1010._520_4_) && (uStack_bec < uStack_e00 + 2)) &&
     (uStack_e00 < uStack_bec + 2)) {
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xffffec4c);
    shape_edittool_cpp_CStrList_add_FUN_004a2b80
              ((CStrList *)&stack0xffffec50,"Undo the checkout.");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80
              ((CStrList *)&stack0xffffec54,"Yes, I did change the file.  Check it in, like I said to do in the first place.");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80
              ((CStrList *)&stack0xffffec58,"Oops.  Keep the file checked out.");
    iVar5 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                      ((CPickList *)&stack0xffffec5c,"Checking in file that didn't change.",-1,0);
    if ((iVar5 < 0) || (iVar5 == 2)) {
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                ((CPickList *)&stack0xffffec60,0,(uint)in_stack_ffffec60,(uint)in_stack_ffffec64,
                 (uint)in_stack_ffffec68,(uint)in_stack_ffffec6c,in_stack_ffffec70);
      return 0;
    }
    if (iVar5 == 0) {
      iVar5 = engine_fileio_cpp_CCheckOutItem_selectCheckedOutFile_FUN_004b3f50
                        (this_ptr_00,(char *)operation_mode,acStack_630,
                         "Select file to undo check out","*");
      if (iVar5 != 0) {
        iVar5 = engine_fileio_cpp_CCheckOutItem_removeCheckOutBookkeeping_FUN_004b35a0
                          (this_ptr_00,auStack_62c);
        if (iVar5 != 0) {
          iVar5 = engine_fileio_cpp_getLatestFileFromRepository_FUN_004b3220
                            (this_ptr_00->name,acStack_628);
          goto LAB_004b458d;
        }
      }
      iVar5 = 0;
LAB_004b458d:
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                ((CPickList *)&stack0xffffec6c,0,(uint)in_stack_ffffec6c,in_stack_ffffec70,
                 (uint)in_stack_ffffec74,(uint)in_stack_ffffec78,in_stack_ffffec7c);
      return iVar5;
    }
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              ((CPickList *)&stack0xffffec60,0,(uint)in_stack_ffffec60,(uint)in_stack_ffffec64,
               (uint)in_stack_ffffec68,(uint)in_stack_ffffec6c,in_stack_ffffec70);
  }
  shape_edittool_cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
            (g_CEditorToolsPtr,"Keep %s checked out after updating to network?");
  if (g_VersionControlDirectory[0] == '\0') {
    g_CurrentFilename = "..\\engine\\fileio.cpp";
    g_CurrentLineNumber = 0xe7;
    core_main_c_displayErrorAndQuit_FUN_00506f10("versionControlDirectory not set!");
  }
  crt_stdio_c_sprintf_FUN_005fdbd0(acStack_728,"history\\%s.%s");
  engine_dosio_c_ensureTrailingSlash_FUN_00481f80
            (g_VersionControlDirectory,(char *)&stack0x0000001c,acStack_118);
  engine_dosio_c_makePath_FUN_00481f50
            (acStack_938,(char *)&stack0x00000020,acStack_114,(char *)0x0,(char *)0x0);
  pcVar6 = acStack_71c;
  iVar5 = -1;
  pcVar7 = acStack_938;
  do {
    pcVar9 = pcVar7;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar9 = pcVar7 + (uint)bVar10 * -2 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar9;
  } while (cVar1 != '\0');
  pcVar9 = pcVar9 + -1;
  do {
    cVar1 = *pcVar6;
    *pcVar9 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar9[1] = cVar1;
    pcVar9 = pcVar9 + 2;
  } while (cVar1 != '\0');
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Reading %s");
  filename = (char *)engine_fileio_cpp_findMaxFieldInTimestampFile_FUN_004b2640
                               ((char *)operation_mode);
  if ((int)filename < 0) {
    return 0;
  }
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Opening local file %s");
  pFStack0000002c =
       shape_memdbg_cpp_openFile_FUN_0050f7a0
                 (acStack_dc0,(char *)0x0,"rb","..\\engine\\fileio.cpp",0x567);
  if (pFStack0000002c == (FILE *)0x0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Can't open %s");
    return 0;
  }
  if (g_VersionControlSession.network_username[0] != '\0') {
    shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
              (g_CEditorToolsPtr,"Logging on as version control user...");
    iVar5 = engine_fileio_cpp_logOnAsVersionControlUser_FUN_004b2770();
    if (iVar5 == 0) goto LAB_004b4768;
  }
  crt_stdio_c_sprintf_FUN_005fdbd0(acStack_4fc,"$$$.%s.$$$");
  engine_dosio_c_ensureTrailingSlash_FUN_00481f80(this_ptr_00->name,(char *)&filename,acStack_430);
  engine_dosio_c_makePath_FUN_00481f50
            (acStack_a44,(char *)&stack0x00000010,acStack_42c,(char *)0x0,(char *)0x0);
  pcVar6 = acStack_52c;
  iVar5 = -1;
  pcVar7 = acStack_a40;
  do {
    pcVar9 = pcVar7;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar9 = pcVar7 + (uint)bVar10 * -2 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar9;
  } while (cVar1 != '\0');
  pcVar9 = pcVar9 + -1;
  do {
    cVar1 = *pcVar6;
    *pcVar9 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar9[1] = cVar1;
    pcVar9 = pcVar9 + 2;
  } while (cVar1 != '\0');
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Creating temporary network file %s...");
  engine_dosio_c_setFileAttributes_FUN_004819f0(acStack_a3c,0);
  crt_io_c_deleteFile_FUN_005ff9d0(acStack_a38);
  pFVar3 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                     (acStack_a34,(char *)0x0,"wb","..\\engine\\fileio.cpp",0x591);
  filename = (char *)pFVar3;
  if (in_stack_00000014 == (CCheckOutItem *)0x0) {
    pcVar6 = "Can't create %s.\nGet Fletch.";
  }
  else {
    shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
              (g_CEditorToolsPtr,"Copying file to temporary network file");
    pcVar6 = engine_fileio_cpp_copyFileWithProgress_FUN_004b2030
                       ((FILE *)in_stack_00000018,pFVar3,acStack_dd0,"network",iStack_bcc);
    if (in_stack_0000001c != (CCheckOutItem *)0x0) {
      shape_memdbg_cpp_closeFile_FUN_0050f9b0
                ((FILE *)in_stack_0000001c,"..\\engine\\fileio.cpp",0xc4);
      in_stack_00000020 = (CCheckOutItem *)0x0;
    }
    if (filename != (char *)0x0) {
      shape_memdbg_cpp_closeFile_FUN_0050f9b0((FILE *)filename,"..\\engine\\fileio.cpp",0xc4);
      filename = (char *)0x0;
    }
    if (pcVar6 == (char *)0x0) {
      if (g_VersionControlDirectory[0] == '\0') {
        g_CurrentFilename = "..\\engine\\fileio.cpp";
        g_CurrentLineNumber = 0xdd;
        core_main_c_displayErrorAndQuit_FUN_00506f10("versionControlDirectory not set!");
      }
      engine_dosio_c_ensureTrailingSlash_FUN_00481f80
                (g_VersionControlDirectory,(char *)&stack0x00000020,acStack_318);
      engine_dosio_c_makePath_FUN_00481f50
                (acStack_828,&stack0x00000024,acStack_314,(char *)0x0,(char *)0x0);
      pcVar7 = "checkout.txt";
      iVar5 = -1;
      pcVar6 = acStack_828;
      do {
        pcVar9 = pcVar6;
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pcVar9 = pcVar6 + (uint)bVar10 * -2 + 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar9;
      } while (cVar1 != '\0');
      pcVar9 = pcVar9 + -1;
      do {
        cVar1 = *pcVar7;
        *pcVar9 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar7[1];
        pcVar7 = pcVar7 + 2;
        pcVar9[1] = cVar1;
        pcVar9 = pcVar9 + 2;
      } while (cVar1 != '\0');
      iVar5 = 0;
      if (filename == (char *)0x0) {
        shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                  (g_CEditorToolsPtr,"Grabbing %s...");
        do {
          pFVar3 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                             (acStack_820,(char *)0x0,"r+t","..\\engine\\fileio.cpp",
                              0x153);
          if (pFVar3 != (FILE *)0x0) {
            crt_stdio_c_setvbuf_FUN_00601490(pFVar3,(char *)0x0,0,0x400);
            goto LAB_004b4ad9;
          }
          piVar4 = (int *)crt_errno_c_errno_FUN_00601450();
          if (*piVar4 != 6) break;
          iVar5 = iVar5 + 1;
          (*Sleep)(500);
        } while (iVar5 < 10);
        pFVar3 = (FILE *)0x0;
LAB_004b4ad9:
        if (pFVar3 == (FILE *)0x0) {
          if (pFVar3 != (FILE *)0x0) {
            shape_memdbg_cpp_closeFile_FUN_0050f9b0((FILE *)0x0,"..\\engine\\fileio.cpp",0xc4);
          }
          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                    (g_CEditorToolsPtr,"Can't access %s.  Get Fletch.");
          engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860((CCheckOutList *)&stack0xfffffff8);
          goto LAB_004b4768;
        }
        iVar5 = engine_fileio_cpp_CCheckOutList_parse_FUN_004b2a60
                          ((CCheckOutList *)&stack0xfffffff4,(FILE **)&stack0xfffffffc);
        if (iVar5 != 0) {
          filename = (char *)engine_fileio_cpp_CCheckOutList_findEntry_FUN_004b2e60
                                       ((CCheckOutList *)&stack0xfffffff8,acStack_dc4);
          if (-1 < (int)filename) goto LAB_004b4980;
          if (this_ptr != (CCheckOutItem *)0x0) {
            shape_memdbg_cpp_closeFile_FUN_0050f9b0
                      ((FILE *)this_ptr,"..\\engine\\fileio.cpp",0xc4);
            operation_mode = 0;
          }
          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                    (g_CEditorToolsPtr,"Hell froze - we no longer have the file checked out!!!!");
        }
        engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860((CCheckOutList *)&this_ptr);
        goto LAB_004b4768;
      }
LAB_004b4980:
      shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                (g_CEditorToolsPtr,"Finalizing %s to network...");
      engine_2d_c_clearInputAndWait_FUN_00403260();
      pFVar3 = (FILE *)0x0;
      while( true ) {
        engine_dosio_c_setFileAttributes_FUN_004819f0(auStack_1010 + 0x38,0);
        crt_io_c_deleteFile_FUN_005ff9d0(auStack_1010 + 0x3c);
        iVar5 = crt_stdio_c_rename_FUN_006015d0(acStack_a18,auStack_1010 + 0x40);
        if (iVar5 == 0) break;
        if (0x27 < (int)pFVar3) {
          if (filename != (char *)0x0) {
            shape_memdbg_cpp_closeFile_FUN_0050f9b0
                      ((FILE *)filename,"..\\engine\\fileio.cpp",0xc4);
            in_stack_00000010 = (FILE *)0x0;
          }
          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                    (g_CEditorToolsPtr,"Error renaming %s -> %s.\nThe file was not checked in.\nThe most likely cause is that somebody is currently trying to get\nthe file you are checking in.  No file files have been modified,\nand you still have the file checked out.  Wait a little bit and\ntry again.");
          shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
          engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860((CCheckOutList *)&stack0x00000010);
          goto LAB_004b4768;
        }
        pFVar3 = (FILE *)((int)&pFVar3->_ptr + 1);
        if (pFVar3 == (FILE *)&DAT_00000001) {
          crt_stdio_c_sprintf_FUN_005fdbd0(acStack_ba4,"Waiting for %s to become available.\nPress ESC to cancel check in.");
          shape_edittool_cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
                    (g_CEditorToolsPtr,acStack_ba0);
        }
        wincore_winrun_cpp_sleep_FUN_005f40e0(0.5);
        in_stack_00000030 = pFVar3;
        shape_edittool_cpp_CEditorTools_updatePercentage_FUN_004a0530
                  (g_CEditorToolsPtr,(float)(int)pFVar3,40.0);
        iVar5 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,1);
        if (iVar5 != 0) {
          pFVar3 = (FILE *)0x28;
        }
      }
      if (0 < (int)pFVar3) {
        shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
      }
      iVar5 = engine_dosio_c_copyFileTimestamp_FUN_00481910(auStack_1010 + 0x48,pcStack_ba8);
      if (iVar5 == 0) {
        if (in_stack_00000014 != (CCheckOutItem *)0x0) {
          shape_memdbg_cpp_closeFile_FUN_0050f9b0
                    ((FILE *)in_stack_00000014,"..\\engine\\fileio.cpp",0xc4);
          in_stack_00000018 = (CCheckOutItem *)0x0;
        }
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"Error setting file date/time for %s.\nYour version of the file has been updated to the network,\nbut the date on the network file is incorrect.\nYou still have the file checked out.\nThis is probably harmless, and can happen in rare\nsituations when somebody else is trying to get the pod\nwhile you are checking it in.\nAnother possibility is that the time of the file is newer than\nthe current system time on your computer.\nLeave this on your screen and get Fletch.\nIf that isn't an option, simply check the file in again,\nand then make sure the network file is the same as your file.\n");
        engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860((CCheckOutList *)&stack0x00000014);
        goto LAB_004b4768;
      }
      bVar2 = engine_dosio_c_setFileAttributes_FUN_004819f0(auStack_1010 + 0x4c,8);
      if (CONCAT31(extraout_var,bVar2) == 0) {
        if (in_stack_00000018 != (CCheckOutItem *)0x0) {
          shape_memdbg_cpp_closeFile_FUN_0050f9b0
                    ((FILE *)in_stack_00000018,"..\\engine\\fileio.cpp",0xc4);
          in_stack_0000001c = (CCheckOutItem *)0x0;
        }
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"Error setting file date/time for %s.\nYour version of the file has been updated to the network.\nYou still have the file checked out.\nThis is probably harmless, and can happen in rare\nsituations when somebody else is trying to get the pod\nwhile you are checking it in.\nLeave this on your screen and get Fletch.\nIf that isn't an option, simply check the file in again,\nand then make sure the network file is the same as your file.\n");
        engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860((CCheckOutList *)&stack0x00000018);
        goto LAB_004b4768;
      }
      iVar5 = 0;
      do {
        pFVar3 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                           (acStack_904,(char *)0x0,"at","..\\engine\\fileio.cpp",0x153
                           );
        if (pFVar3 != (FILE *)0x0) {
          crt_stdio_c_setvbuf_FUN_00601490(pFVar3,(char *)0x0,0,0x400);
          goto LAB_004b4d50;
        }
        piVar4 = (int *)crt_errno_c_errno_FUN_00601450();
        if (*piVar4 != 6) break;
        iVar5 = iVar5 + 1;
        (*Sleep)(500);
      } while (iVar5 < 10);
      pFVar3 = (FILE *)0x0;
LAB_004b4d50:
      in_stack_00000040 = pFVar3;
      if (pFVar3 != (FILE *)0x0) {
        in_stack_00000028 = crt_time_c_time_with_rounding_FUN_006001f0((time_t *)0x0);
        crt_time_c_localtime_FUN_00600288(&stack0x00000028);
        crt_stdio_c_fprintf_FUN_005fe6d0(pFVar3,"%4d: %04d/%02d/%02d %02d:%02d:%02d \"%s\"\n");
        crt_stdio_c_fflush_FUN_00601540(pFVar3);
        if ((pFVar3->_flag & 0x20) == 0) {
          shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar3,"..\\engine\\fileio.cpp",0xc4);
          in_stack_00000054 = 0;
          engine_fileio_cpp_logOffVersionControl_FUN_004b2830();
          if (in_stack_00000048 != (CCheckOutItem *)0x0) {
            engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860((CCheckOutList *)&stack0x00000030);
            return 2;
          }
          iVar5 = engine_fileio_cpp_CCheckOutList_remove_FUN_004b2d70
                            ((CCheckOutList *)&stack0x00000030,(int)in_stack_00000040);
          if (iVar5 == 0) {
            if (in_stack_0000003c != (CCheckOutItem *)0x0) {
              shape_memdbg_cpp_closeFile_FUN_0050f9b0
                        ((FILE *)in_stack_0000003c,"..\\engine\\fileio.cpp",0xc4);
              in_stack_0000003c = in_stack_00000048;
            }
            shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                      (g_CEditorToolsPtr,"Out of memory...Restart the application NOW.\nBetter yet, reboot the computer.");
          }
          else {
            iVar5 = engine_fileio_cpp_CCheckOutList_write_FUN_004b2eb0
                              ((CCheckOutList *)&stack0x00000034,(FILE **)&stack0x0000003c);
            if (iVar5 != 0) {
              if (in_stack_00000040 != (FILE *)0x0) {
                shape_memdbg_cpp_closeFile_FUN_0050f9b0
                          (in_stack_00000040,"..\\engine\\fileio.cpp",0xc4);
                in_stack_00000044 = 0;
              }
              iVar5 = engine_dosio_c_getFileTimestamp_FUN_00481960((char *)0x0,acStack_d80);
              if (iVar5 < 0) {
LAB_004b4ff2:
                if (-1 < iVar5) goto LAB_004b5011;
              }
              else {
                bVar2 = engine_dosio_c_setFileAttributes_FUN_004819f0(acStack_d7c,(byte)iVar5 | 8);
                if (CONCAT31(extraout_var_00,bVar2) != 0) goto LAB_004b4ff2;
              }
              shape_edittool_cpp_CEditorTools_showWarning_FUN_0049e6f0
                        (g_CEditorToolsPtr,"Error marking local file %s as read only.\n(But your check-in did complete to the network successfully.)");
LAB_004b5011:
              engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860((CCheckOutList *)&stack0x00000048);
              return 1;
            }
          }
          engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860((CCheckOutList *)&stack0x00000038);
          goto LAB_004b4768;
        }
      }
      if (in_stack_00000020 != (CCheckOutItem *)0x0) {
        shape_memdbg_cpp_closeFile_FUN_0050f9b0
                  ((FILE *)in_stack_00000020,"..\\engine\\fileio.cpp",0xc4);
        in_stack_00000020 = (CCheckOutItem *)0x0;
      }
      if (in_stack_00000040 != (FILE *)0x0) {
        shape_memdbg_cpp_closeFile_FUN_0050f9b0(in_stack_00000040,"..\\engine\\fileio.cpp",0xc4)
        ;
        in_stack_00000040 = (FILE *)0x0;
      }
      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                (g_CEditorToolsPtr,"Error creating history record in %s.\nYour version of the file has been updated to the network.\nYou still have the file checked out.\nThis is probably harmless, and can happen in rare\nsituations when somebody else is trying to get the pod\nwhile you are checking it in.\nLeave this on your screen and get Fletch.\nIf that isn't an option, simply check the file in again,\nand then make sure the network file is the same as your file.\n");
      engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860((CCheckOutList *)&stack0x0000001c);
      goto LAB_004b4768;
    }
    pcVar6 = "%s\nGet Fletch.";
  }
  shape_edittool_cpp_CEditorTools_showError_FUN_0049e740(g_CEditorToolsPtr,pcVar6);
LAB_004b4768:
  if (in_stack_00000010 != (FILE *)0x0) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(in_stack_00000010,"..\\engine\\fileio.cpp",0xc4);
    in_stack_00000010 = (FILE *)0x0;
  }
  if (pFStack0000002c != (FILE *)0x0) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFStack0000002c,"..\\engine\\fileio.cpp",0xc4);
  }
  if (in_stack_00000034 != (CCheckOutItem *)0x0) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0
              ((FILE *)in_stack_00000034,"..\\engine\\fileio.cpp",0xc4);
  }
  if (in_stack_00000030 != (FILE *)0x0) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(in_stack_00000030,"..\\engine\\fileio.cpp",0xc4);
  }
  if (acStack_a10[0] != '\0') {
    crt_io_c_deleteFile_FUN_005ff9d0(acStack_a10);
  }
  engine_fileio_cpp_logOffVersionControl_FUN_004b2830();
  return 0;
}


// Assembly code:
// 004b4220: PUSH EBX
//   Label: engine_fileio.cpp_CCheckOutItem_processFiles_FUN_004b4220
// 004b4221: PUSH ESI
// 004b4222: PUSH EDI
// 004b4223: PUSH EBP
// 004b4224: MOV EBP,ESP
// 004b4226: SUB ESP,0x13b8
// 004b422c: AND ESP,0xfffffff8
// 004b422f: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004b4232: MOV ECX,0x41
// 004b4237: LEA EDI,[ESP + 0x960]
//   XREF to: Stack[-0xa68] (DATA)
// 004b423e: PUSH 0x626a7d
//   XREF to: 00626a7d (DATA)
// 004b4243: MOV ESI,0x679dd8
//   XREF to: 00679dd8 (DATA)
// 004b4248: LEA EAX,[ESP + 0x5c0]
//   XREF to: Stack[-0xe0c] (DATA)
// 004b424f: PUSH 0x626a7f
//   XREF to: 00626a7f (DATA)
// 004b4254: MOVSD.REP ES:EDI,ESI
//   XREF to: 00679dd8 (READ)
//   XREF to: 00679ddc (READ)
// 004b4256: PUSH EAX
// 004b4257: MOV EDI,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004b425a: XOR EDX,EDX
// 004b425c: PUSH EDI
// 004b425d: MOV dword ptr [ESP + 0x1390],EDX
//   XREF to: Stack[-0x48] (WRITE)
// 004b4264: PUSH EBX
// 004b4265: MOV dword ptr [ESP + 0x13b0],EDX
//   XREF to: Stack[-0x2c] (WRITE)
// 004b426c: MOV dword ptr [ESP + 0x13b4],EDX
//   XREF to: Stack[-0x28] (WRITE)
// 004b4273: CALL engine_fileio.cpp_CCheckOutItem_selectCheckedOutFile_FUN_004b3f50
//   XREF to: 004b3f50 (UNCONDITIONAL_CALL)
// 004b4278: ADD ESP,0x14
// 004b427b: TEST EAX,EAX
// 004b427d: JNZ 0x004b428a
//   XREF to: 004b428a (CONDITIONAL_JUMP)
// 004b427f: XOR EBX,EBX
// 004b4281: MOV EAX,EBX
// 004b4283: MOV ESP,EBP
// 004b4285: POP EBP
// 004b4286: POP EDI
// 004b4287: POP ESI
// 004b4288: POP EBX
// 004b4289: RET
// 004b428a: LEA EAX,[ESP + 0x5bc]
//   Label: LAB_004b428a
//   XREF to: Stack[-0xe0c] (DATA)
// 004b4291: PUSH EAX
// 004b4292: CALL engine_dosio.c_findFileNormally_FUN_004817c0
//   XREF to: 004817c0 (UNCONDITIONAL_CALL)
// 004b4297: ADD ESP,0x4
// 004b429a: TEST EAX,EAX
// 004b429c: JZ 0x004b448d
//   XREF to: 004b448d (CONDITIONAL_JUMP)
// 004b42a2: LEA EAX,[ESP + 0x1178]
//   XREF to: Stack[-0x250] (DATA)
// 004b42a9: PUSH EAX
// 004b42aa: LEA EAX,[ESP + 0x13ac]
//   XREF to: Stack[-0x20] (DATA)
// 004b42b1: PUSH EAX
// 004b42b2: PUSH EBX
// 004b42b3: CALL engine_dosio.c_ensureTrailingSlash_FUN_00481f80
//   XREF to: 00481f80 (UNCONDITIONAL_CALL)
// 004b42b8: ADD ESP,0xc
// 004b42bb: PUSH 0x0
// 004b42bd: PUSH 0x0
// 004b42bf: LEA EAX,[ESP + 0x1180]
//   XREF to: Stack[-0x250] (DATA)
// 004b42c6: PUSH EAX
// 004b42c7: LEA EAX,[ESP + 0x13b4]
//   XREF to: Stack[-0x20] (DATA)
// 004b42ce: PUSH EAX
// 004b42cf: LEA EAX,[ESP + 0x3b8]
//   XREF to: Stack[-0x1020] (DATA)
// 004b42d6: PUSH EAX
// 004b42d7: CALL engine_dosio.c_makePath_FUN_00481f50
//   XREF to: 00481f50 (UNCONDITIONAL_CALL)
// 004b42dc: ADD ESP,0x14
// 004b42df: LEA ESI,[ESP + 0x5bc]
//   XREF to: Stack[-0xe0c] (DATA)
// 004b42e6: LEA EDI,[ESP + 0x3a8]
//   XREF to: Stack[-0x1020] (DATA)
// 004b42ed: PUSH EDI
// 004b42ee: SUB ECX,ECX
// 004b42f0: DEC ECX
// 004b42f1: MOV AL,0x0
// 004b42f3: SCASB.REPNE ES:EDI
// 004b42f5: DEC EDI
// 004b42f6: MOV AL,byte ptr [ESI]
//   Label: LAB_004b42f6
//   XREF to: Stack[-0xe0c] (DATA)
// 004b42f8: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x1020] (DATA)
// 004b42fa: CMP AL,0x0
// 004b42fc: JZ 0x004b430e
//   XREF to: 004b430e (CONDITIONAL_JUMP)
// 004b42fe: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: Stack[-0xe0b] (READ)
// 004b4301: ADD ESI,0x2
// 004b4304: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x101f] (WRITE)
// 004b4307: ADD EDI,0x2
// 004b430a: CMP AL,0x0
// 004b430c: JNZ 0x004b42f6
//   XREF to: 004b42f6 (CONDITIONAL_JUMP)
// 004b430e: POP EDI
//   Label: LAB_004b430e
// 004b430f: LEA EAX,[ESP + 0x3a8]
//   XREF to: Stack[-0x1020] (DATA)
// 004b4316: PUSH EAX
// 004b4317: CALL engine_dosio.c_findFileNormally_FUN_004817c0
//   XREF to: 004817c0 (UNCONDITIONAL_CALL)
// 004b431c: ADD ESP,0x4
// 004b431f: TEST EAX,EAX
// 004b4321: JZ 0x004b44b3
//   XREF to: 004b44b3 (CONDITIONAL_JUMP)
// 004b4327: MOV EAX,dword ptr [ESP + 0x7c0]
//   XREF to: Stack[-0xc08] (READ)
// 004b432e: CMP EAX,dword ptr [ESP + 0x5ac]
//   XREF to: Stack[-0xe1c] (READ)
// 004b4335: JNZ 0x004b435e
//   XREF to: 004b435e (CONDITIONAL_JUMP)
// 004b4337: MOV EAX,dword ptr [ESP + 0x5b4]
//   XREF to: Stack[-0xe14] (READ)
// 004b433e: MOV ESI,dword ptr [ESP + 0x7c8]
//   XREF to: Stack[-0xc00] (READ)
// 004b4345: ADD EAX,0x2
// 004b4348: CMP EAX,ESI
// 004b434a: JBE 0x004b435e
//   XREF to: 004b435e (CONDITIONAL_JUMP)
// 004b434c: MOV EDI,dword ptr [ESP + 0x5b4]
//   XREF to: Stack[-0xe14] (READ)
// 004b4353: LEA EAX,[ESI + 0x2]
// 004b4356: CMP EAX,EDI
// 004b4358: JA 0x004b44da
//   XREF to: 004b44da (CONDITIONAL_JUMP)
// 004b435e: LEA EAX,[ESP + 0x5bc]
//   Label: LAB_004b435e
//   XREF to: Stack[-0xe0c] (DATA)
// 004b4365: PUSH EAX
// 004b4366: PUSH 0x626b95
//   XREF to: 00626b95 (DATA)
// 004b436b: MOV EAX,[0x00678a60]
//   XREF to: 00678a60 (READ)
// 004b4370: PUSH EAX
//   XREF to: 02cf1cd4 (DATA)
// 004b4371: LEA EDI,[ESP + 0xa70]
//   XREF to: Stack[-0x964] (DATA)
// 004b4378: CALL shape_edittool.cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
//   XREF to: 0049f0f0 (UNCONDITIONAL_CALL)
// 004b437d: ADD ESP,0xc
// 004b4380: MOV EDX,0x626bc4
//   XREF to: 00626bc4 (DATA)
// 004b4385: MOV ESI,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004b4388: MOV dword ptr [ESP + 0x1394],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 004b438f: MOV AH,byte ptr [0x02d12ac8]
//   XREF to: 02d12ac8 (READ)
// 004b4395: MOV dword ptr [ESP + 0x1390],EDX
//   XREF to: 00626bc4 (DATA)
//   XREF to: Stack[-0x38] (WRITE)
// 004b439c: TEST AH,AH
// 004b439e: JNZ 0x004b43c2
//   XREF to: 004b43c2 (CONDITIONAL_JUMP)
// 004b43a0: MOV ECX,0x6260a3
//   XREF to: 006260a3 (DATA)
// 004b43a5: MOV EAX,0xe7
// 004b43aa: PUSH 0x6260b8
//   XREF to: 006260b8 (DATA)
// 004b43af: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 004b43b5: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 004b43ba: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004b43bf: ADD ESP,0x4
// 004b43c2: MOV EDX,dword ptr [ESP + 0x1390]
//   Label: LAB_004b43c2
//   XREF to: Stack[-0x38] (READ)
// 004b43c9: PUSH EDX
//   XREF to: 00626bc4 (DATA)
// 004b43ca: PUSH ESI
// 004b43cb: PUSH 0x6260d9
//   XREF to: 006260d9 (DATA)
// 004b43d0: LEA EAX,[ESP + 0xc78]
//   XREF to: Stack[-0x75c] (DATA)
// 004b43d7: PUSH EAX
// 004b43d8: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004b43dd: ADD ESP,0x10
// 004b43e0: LEA EAX,[ESP + 0x1278]
//   XREF to: Stack[-0x150] (DATA)
// 004b43e7: PUSH EAX
// 004b43e8: LEA EAX,[ESP + 0x13b0]
//   XREF to: Stack[-0x1c] (DATA)
// 004b43ef: PUSH EAX
// 004b43f0: PUSH 0x2d12ac8
//   XREF to: 02d12ac8 (DATA)
// 004b43f5: CALL engine_dosio.c_ensureTrailingSlash_FUN_00481f80
//   XREF to: 00481f80 (UNCONDITIONAL_CALL)
// 004b43fa: ADD ESP,0xc
// 004b43fd: PUSH 0x0
// 004b43ff: PUSH 0x0
// 004b4401: LEA EAX,[ESP + 0x1280]
//   XREF to: Stack[-0x150] (DATA)
// 004b4408: PUSH EAX
// 004b4409: LEA EAX,[ESP + 0x13b8]
//   XREF to: Stack[-0x1c] (DATA)
// 004b4410: PUSH EAX
// 004b4411: PUSH EDI
// 004b4412: CALL engine_dosio.c_makePath_FUN_00481f50
//   XREF to: 00481f50 (UNCONDITIONAL_CALL)
// 004b4417: ADD ESP,0x14
// 004b441a: LEA ESI,[ESP + 0xc6c]
//   XREF to: Stack[-0x75c] (DATA)
// 004b4421: PUSH EDI
// 004b4422: SUB ECX,ECX
// 004b4424: DEC ECX
// 004b4425: MOV AL,0x0
// 004b4427: SCASB.REPNE ES:EDI
// 004b4429: DEC EDI
// 004b442a: MOV AL,byte ptr [ESI]
//   Label: LAB_004b442a
//   XREF to: Stack[-0x75c] (DATA)
// 004b442c: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x964] (DATA)
// 004b442e: CMP AL,0x0
// 004b4430: JZ 0x004b4442
//   XREF to: 004b4442 (CONDITIONAL_JUMP)
// 004b4432: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: Stack[-0x75b] (READ)
// 004b4435: ADD ESI,0x2
// 004b4438: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x963] (WRITE)
// 004b443b: ADD EDI,0x2
// 004b443e: CMP AL,0x0
// 004b4440: JNZ 0x004b442a
//   XREF to: 004b442a (CONDITIONAL_JUMP)
// 004b4442: POP EDI
//   Label: LAB_004b4442
// 004b4443: LEA EAX,[ESP + 0xa64]
//   XREF to: Stack[-0x964] (DATA)
// 004b444a: PUSH EAX
// 004b444b: PUSH 0x626bcc
//   XREF to: 00626bcc (DATA)
// 004b4450: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004b4456: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 004b4457: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 004b445c: ADD ESP,0xc
// 004b445f: LEA EAX,[ESP + 0xa64]
//   XREF to: Stack[-0x964] (DATA)
// 004b4466: PUSH EAX
// 004b4467: MOV ESI,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004b446a: PUSH ESI
// 004b446b: CALL engine_fileio.cpp_findMaxFieldInTimestampFile_FUN_004b2640
//   XREF to: 004b2640 (UNCONDITIONAL_CALL)
// 004b4470: ADD ESP,0x8
// 004b4473: MOV dword ptr [ESP + 0x138c],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 004b447a: TEST EAX,EAX
// 004b447c: JGE 0x004b45d6
//   XREF to: 004b45d6 (CONDITIONAL_JUMP)
// 004b4482: XOR EBX,EBX
// 004b4484: MOV EAX,EBX
// 004b4486: MOV ESP,EBP
// 004b4488: POP EBP
// 004b4489: POP EDI
// 004b448a: POP ESI
// 004b448b: POP EBX
// 004b448c: RET
// 004b448d: LEA EAX,[ESP + 0x5bc]
//   Label: LAB_004b448d
//   XREF to: Stack[-0xe0c] (DATA)
// 004b4494: PUSH EAX
// 004b4495: PUSH 0x626a97
//   XREF to: 00626a97 (DATA)
// 004b449a: MOV EAX,[0x00678a60]
//   XREF to: 00678a60 (READ)
// 004b449f: PUSH EAX
//   XREF to: 02cf1cd4 (DATA)
// 004b44a0: XOR EBX,EBX
// 004b44a2: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 004b44a7: ADD ESP,0xc
// 004b44aa: MOV EAX,EBX
// 004b44ac: MOV ESP,EBP
// 004b44ae: POP EBP
// 004b44af: POP EDI
// 004b44b0: POP ESI
// 004b44b1: POP EBX
// 004b44b2: RET
// 004b44b3: LEA EAX,[ESP + 0x3a8]
//   Label: LAB_004b44b3
//   XREF to: Stack[-0x1020] (DATA)
// 004b44ba: PUSH EAX
// 004b44bb: PUSH 0x626ac1
//   XREF to: 00626ac1 (DATA)
// 004b44c0: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004b44c6: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 004b44c7: XOR EBX,EBX
// 004b44c9: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 004b44ce: ADD ESP,0xc
// 004b44d1: MOV EAX,EBX
// 004b44d3: MOV ESP,EBP
// 004b44d5: POP EBP
// 004b44d6: POP EDI
// 004b44d7: POP ESI
// 004b44d8: POP EBX
// 004b44d9: RET
// 004b44da: MOV EAX,ESP
//   Label: LAB_004b44da
// 004b44dc: PUSH EAX
// 004b44dd: CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
// 004b44e2: ADD ESP,0x4
// 004b44e5: PUSH 0x626aeb
//   XREF to: 00626aeb (DATA)
// 004b44ea: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x13c8] (DATA)
// 004b44ee: PUSH EAX
// 004b44ef: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 004b44f4: ADD ESP,0x8
// 004b44f7: PUSH 0x626afe
//   XREF to: 00626afe (DATA)
// 004b44fc: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x13c8] (DATA)
// 004b4500: PUSH EAX
// 004b4501: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 004b4506: ADD ESP,0x8
// 004b4509: PUSH 0x626b4e
//   XREF to: 00626b4e (DATA)
// 004b450e: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x13c8] (DATA)
// 004b4512: PUSH EAX
// 004b4513: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 004b4518: ADD ESP,0x8
// 004b451b: PUSH 0x0
// 004b451d: PUSH -0x1
// 004b451f: PUSH 0x626b70
//   XREF to: 00626b70 (DATA)
// 004b4524: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x13c8] (DATA)
// 004b4528: PUSH EAX
// 004b4529: CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
// 004b452e: ADD ESP,0x10
// 004b4531: TEST EAX,EAX
// 004b4533: JL 0x004b45a5
//   XREF to: 004b45a5 (CONDITIONAL_JUMP)
// 004b4535: CMP EAX,0x2
// 004b4538: JZ 0x004b45a5
//   XREF to: 004b45a5 (CONDITIONAL_JUMP)
// 004b453a: TEST EAX,EAX
// 004b453c: JNZ 0x004b45c2
//   XREF to: 004b45c2 (CONDITIONAL_JUMP)
// 004b4542: PUSH 0x626a5d
//   XREF to: 00626a5d (DATA)
// 004b4547: PUSH 0x626a5f
//   XREF to: 00626a5f (DATA)
// 004b454c: LEA EAX,[ESP + 0xd78]
//   XREF to: Stack[-0x658] (DATA)
// 004b4553: PUSH EAX
// 004b4554: MOV EDI,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004b4557: PUSH EDI
// 004b4558: PUSH EBX
// 004b4559: CALL engine_fileio.cpp_CCheckOutItem_selectCheckedOutFile_FUN_004b3f50
//   XREF to: 004b3f50 (UNCONDITIONAL_CALL)
// 004b455e: ADD ESP,0x14
// 004b4561: TEST EAX,EAX
// 004b4563: JZ 0x004b45be
//   XREF to: 004b45be (CONDITIONAL_JUMP)
// 004b4565: LEA EAX,[ESP + 0xd70]
//   XREF to: Stack[-0x658] (DATA)
// 004b456c: PUSH EAX
// 004b456d: PUSH EBX
// 004b456e: CALL engine_fileio.cpp_CCheckOutItem_removeCheckOutBookkeeping_FUN_004b35a0
//   XREF to: 004b35a0 (UNCONDITIONAL_CALL)
// 004b4573: ADD ESP,0x8
// 004b4576: TEST EAX,EAX
// 004b4578: JZ 0x004b45be
//   XREF to: 004b45be (CONDITIONAL_JUMP)
// 004b457a: LEA EAX,[ESP + 0xd70]
//   XREF to: Stack[-0x658] (DATA)
// 004b4581: PUSH EAX
// 004b4582: PUSH EBX
// 004b4583: CALL engine_fileio.cpp_getLatestFileFromRepository_FUN_004b3220
//   XREF to: 004b3220 (UNCONDITIONAL_CALL)
// 004b4588: ADD ESP,0x8
// 004b458b: MOV EBX,EAX
// 004b458d: PUSH 0x0
//   Label: LAB_004b458d
// 004b458f: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x13c8] (DATA)
// 004b4593: PUSH EAX
// 004b4594: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 004b4599: ADD ESP,0x8
// 004b459c: MOV EAX,EBX
// 004b459e: MOV ESP,EBP
// 004b45a0: POP EBP
// 004b45a1: POP EDI
// 004b45a2: POP ESI
// 004b45a3: POP EBX
// 004b45a4: RET
// 004b45a5: XOR EBX,EBX
//   Label: LAB_004b45a5
// 004b45a7: PUSH EBX
// 004b45a8: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x13c8] (DATA)
// 004b45ac: PUSH EAX
// 004b45ad: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 004b45b2: ADD ESP,0x8
// 004b45b5: MOV EAX,EBX
// 004b45b7: MOV ESP,EBP
// 004b45b9: POP EBP
// 004b45ba: POP EDI
// 004b45bb: POP ESI
// 004b45bc: POP EBX
// 004b45bd: RET
// 004b45be: XOR EBX,EBX
//   Label: LAB_004b45be
// 004b45c0: JMP 0x004b458d
//   XREF to: 004b458d (UNCONDITIONAL_JUMP)
// 004b45c2: PUSH 0x0
//   Label: LAB_004b45c2
// 004b45c4: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x13c8] (DATA)
// 004b45c8: PUSH EAX
// 004b45c9: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 004b45ce: ADD ESP,0x8
// 004b45d1: JMP 0x004b435e
//   XREF to: 004b435e (UNCONDITIONAL_JUMP)
// 004b45d6: LEA EAX,[ESP + 0x5bc]
//   Label: LAB_004b45d6
//   XREF to: Stack[-0xe0c] (DATA)
// 004b45dd: PUSH EAX
// 004b45de: PUSH 0x626bd7
//   XREF to: 00626bd7 (DATA)
// 004b45e3: MOV EDI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004b45e9: PUSH EDI
//   XREF to: 02cf1cd4 (DATA)
// 004b45ea: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 004b45ef: ADD ESP,0xc
// 004b45f2: PUSH 0x567
// 004b45f7: PUSH 0x626bed
//   XREF to: 00626bed (DATA)
// 004b45fc: PUSH 0x626c02
//   XREF to: 00626c02 (DATA)
// 004b4601: PUSH 0x0
// 004b4603: LEA EAX,[ESP + 0x5cc]
//   XREF to: Stack[-0xe0c] (DATA)
// 004b460a: PUSH EAX
// 004b460b: CALL shape_memdbg.cpp_openFile_FUN_0050f7a0
//   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
// 004b4610: ADD ESP,0x14
// 004b4613: MOV dword ptr [ESP + 0x13a4],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 004b461a: TEST EAX,EAX
// 004b461c: JZ 0x004b4813
//   XREF to: 004b4813 (CONDITIONAL_JUMP)
// 004b4622: CMP byte ptr [0x02d12bf8],0x0
//   XREF to: 02d12bf8 (READ)
// 004b4629: JZ 0x004b464b
//   XREF to: 004b464b (CONDITIONAL_JUMP)
// 004b462b: PUSH 0x626c13
//   XREF to: 00626c13 (DATA)
// 004b4630: MOV EAX,[0x00678a60]
//   XREF to: 00678a60 (READ)
// 004b4635: PUSH EAX
//   XREF to: 02cf1cd4 (DATA)
// 004b4636: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 004b463b: ADD ESP,0x8
// 004b463e: CALL engine_fileio.cpp_logOnAsVersionControlUser_FUN_004b2770
//   XREF to: 004b2770 (UNCONDITIONAL_CALL)
// 004b4643: TEST EAX,EAX
// 004b4645: JZ 0x004b4768
//   XREF to: 004b4768 (CONDITIONAL_JUMP)
// 004b464b: LEA EAX,[ESP + 0x5bc]
//   Label: LAB_004b464b
//   XREF to: Stack[-0xe0c] (DATA)
// 004b4652: PUSH EAX
// 004b4653: PUSH 0x626c39
//   XREF to: 00626c39 (DATA)
// 004b4658: LEA EAX,[ESP + 0xe7c]
//   XREF to: Stack[-0x554] (DATA)
// 004b465f: PUSH EAX
// 004b4660: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004b4665: ADD ESP,0xc
// 004b4668: LEA EAX,[ESP + 0xf78]
//   XREF to: Stack[-0x450] (DATA)
// 004b466f: PUSH EAX
// 004b4670: LEA EAX,[ESP + 0x13b8]
//   XREF to: Stack[-0x14] (DATA)
// 004b4677: PUSH EAX
// 004b4678: PUSH EBX
// 004b4679: CALL engine_dosio.c_ensureTrailingSlash_FUN_00481f80
//   XREF to: 00481f80 (UNCONDITIONAL_CALL)
// 004b467e: ADD ESP,0xc
// 004b4681: PUSH 0x0
// 004b4683: PUSH 0x0
// 004b4685: LEA EAX,[ESP + 0xf80]
//   XREF to: Stack[-0x450] (DATA)
// 004b468c: PUSH EAX
// 004b468d: LEA EAX,[ESP + 0x13c0]
//   XREF to: Stack[-0x14] (DATA)
// 004b4694: PUSH EAX
// 004b4695: LEA EAX,[ESP + 0x970]
//   XREF to: Stack[-0xa68] (DATA)
// 004b469c: PUSH EAX
// 004b469d: CALL engine_dosio.c_makePath_FUN_00481f50
//   XREF to: 00481f50 (UNCONDITIONAL_CALL)
// 004b46a2: ADD ESP,0x14
// 004b46a5: LEA ESI,[ESP + 0xe74]
//   XREF to: Stack[-0x554] (DATA)
// 004b46ac: LEA EDI,[ESP + 0x960]
//   XREF to: Stack[-0xa68] (DATA)
// 004b46b3: PUSH EDI
// 004b46b4: SUB ECX,ECX
// 004b46b6: DEC ECX
// 004b46b7: MOV AL,0x0
// 004b46b9: SCASB.REPNE ES:EDI
// 004b46bb: DEC EDI
// 004b46bc: MOV AL,byte ptr [ESI]
//   Label: LAB_004b46bc
//   XREF to: Stack[-0x554] (DATA)
// 004b46be: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0xa68] (DATA)
// 004b46c0: CMP AL,0x0
// 004b46c2: JZ 0x004b46d4
//   XREF to: 004b46d4 (CONDITIONAL_JUMP)
// 004b46c4: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: Stack[-0x553] (READ)
// 004b46c7: ADD ESI,0x2
// 004b46ca: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0xa67] (WRITE)
// 004b46cd: ADD EDI,0x2
// 004b46d0: CMP AL,0x0
// 004b46d2: JNZ 0x004b46bc
//   XREF to: 004b46bc (CONDITIONAL_JUMP)
// 004b46d4: POP EDI
//   Label: LAB_004b46d4
// 004b46d5: LEA EAX,[ESP + 0x960]
//   XREF to: Stack[-0xa68] (DATA)
// 004b46dc: PUSH EAX
// 004b46dd: PUSH 0x626c44
//   XREF to: 00626c44 (DATA)
// 004b46e2: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004b46e8: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 004b46e9: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 004b46ee: ADD ESP,0xc
// 004b46f1: PUSH 0x0
// 004b46f3: LEA EAX,[ESP + 0x964]
//   XREF to: Stack[-0xa68] (DATA)
// 004b46fa: PUSH EAX
// 004b46fb: CALL engine_dosio.c_setFileAttributes_FUN_004819f0
//   XREF to: 004819f0 (UNCONDITIONAL_CALL)
// 004b4700: ADD ESP,0x8
// 004b4703: LEA EAX,[ESP + 0x960]
//   XREF to: Stack[-0xa68] (DATA)
// 004b470a: PUSH EAX
// 004b470b: CALL crt_io.c_deleteFile_FUN_005ff9d0
//   XREF to: 005ff9d0 (UNCONDITIONAL_CALL)
// 004b4710: ADD ESP,0x4
// 004b4713: PUSH 0x591
// 004b4718: PUSH 0x626c6a
//   XREF to: 00626c6a (DATA)
// 004b471d: PUSH 0x626c7f
//   XREF to: 00626c7f (DATA)
// 004b4722: PUSH 0x0
// 004b4724: LEA EAX,[ESP + 0x970]
//   XREF to: Stack[-0xa68] (DATA)
// 004b472b: PUSH EAX
// 004b472c: CALL shape_memdbg.cpp_openFile_FUN_0050f7a0
//   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
// 004b4731: ADD ESP,0x14
// 004b4734: MOV EBX,EAX
// 004b4736: MOV ECX,dword ptr [ESP + 0x13a4]
//   XREF to: Stack[-0x24] (READ)
// 004b473d: MOV dword ptr [ESP + 0x139c],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 004b4744: TEST ECX,ECX
// 004b4746: JNZ 0x004b483a
//   XREF to: 004b483a (CONDITIONAL_JUMP)
// 004b474c: LEA EAX,[ESP + 0x960]
//   XREF to: Stack[-0xa68] (DATA)
// 004b4753: PUSH EAX
// 004b4754: PUSH 0x626c82
//   XREF to: 00626c82 (DATA)
// 004b4759: MOV EBX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004b475f: PUSH EBX
//   XREF to: 02cf1cd4 (DATA)
// 004b4760: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   Label: LAB_004b4760
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 004b4765: ADD ESP,0xc
// 004b4768: MOV ECX,dword ptr [ESP + 0x1380]
//   Label: LAB_004b4768
//   XREF to: Stack[-0x48] (READ)
// 004b476f: TEST ECX,ECX
// 004b4771: JZ 0x004b478f
//   XREF to: 004b478f (CONDITIONAL_JUMP)
// 004b4773: PUSH 0xc4
// 004b4778: PUSH 0x62604b
//   XREF to: 0062604b (DATA)
// 004b477d: PUSH ECX
// 004b477e: XOR ESI,ESI
// 004b4780: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 004b4785: ADD ESP,0xc
// 004b4788: MOV dword ptr [ESP + 0x1380],ESI
//   XREF to: Stack[-0x48] (WRITE)
// 004b478f: MOV EDI,dword ptr [ESP + 0x139c]
//   Label: LAB_004b478f
//   XREF to: Stack[-0x2c] (READ)
// 004b4796: TEST EDI,EDI
// 004b4798: JZ 0x004b47ad
//   XREF to: 004b47ad (CONDITIONAL_JUMP)
// 004b479a: PUSH 0xc4
// 004b479f: PUSH 0x62604b
//   XREF to: 0062604b (DATA)
// 004b47a4: PUSH EDI
// 004b47a5: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 004b47aa: ADD ESP,0xc
// 004b47ad: MOV EDX,dword ptr [ESP + 0x13a4]
//   Label: LAB_004b47ad
//   XREF to: Stack[-0x24] (READ)
// 004b47b4: TEST EDX,EDX
// 004b47b6: JZ 0x004b47cb
//   XREF to: 004b47cb (CONDITIONAL_JUMP)
// 004b47b8: PUSH 0xc4
// 004b47bd: PUSH 0x62604b
//   XREF to: 0062604b (DATA)
// 004b47c2: PUSH EDX
// 004b47c3: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 004b47c8: ADD ESP,0xc
// 004b47cb: MOV EBX,dword ptr [ESP + 0x13a0]
//   Label: LAB_004b47cb
//   XREF to: Stack[-0x28] (READ)
// 004b47d2: TEST EBX,EBX
// 004b47d4: JZ 0x004b47e9
//   XREF to: 004b47e9 (CONDITIONAL_JUMP)
// 004b47d6: PUSH 0xc4
// 004b47db: PUSH 0x62604b
//   XREF to: 0062604b (DATA)
// 004b47e0: PUSH EBX
// 004b47e1: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 004b47e6: ADD ESP,0xc
// 004b47e9: CMP byte ptr [ESP + 0x960],0x0
//   Label: LAB_004b47e9
//   XREF to: Stack[-0xa68] (READ)
// 004b47f1: JZ 0x004b4803
//   XREF to: 004b4803 (CONDITIONAL_JUMP)
// 004b47f3: LEA EAX,[ESP + 0x960]
//   XREF to: Stack[-0xa68] (DATA)
// 004b47fa: PUSH EAX
// 004b47fb: CALL crt_io.c_deleteFile_FUN_005ff9d0
//   XREF to: 005ff9d0 (UNCONDITIONAL_CALL)
// 004b4800: ADD ESP,0x4
// 004b4803: CALL engine_fileio.cpp_logOffVersionControl_FUN_004b2830
//   Label: LAB_004b4803
//   XREF to: 004b2830 (UNCONDITIONAL_CALL)
// 004b4808: XOR EBX,EBX
// 004b480a: MOV EAX,EBX
// 004b480c: MOV ESP,EBP
// 004b480e: POP EBP
// 004b480f: POP EDI
// 004b4810: POP ESI
// 004b4811: POP EBX
// 004b4812: RET
// 004b4813: LEA EAX,[ESP + 0x5bc]
//   Label: LAB_004b4813
//   XREF to: Stack[-0xe0c] (DATA)
// 004b481a: PUSH EAX
// 004b481b: PUSH 0x626c05
//   XREF to: 00626c05 (DATA)
// 004b4820: MOV ESI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004b4826: PUSH ESI
//   XREF to: 02cf1cd4 (DATA)
// 004b4827: XOR EBX,EBX
// 004b4829: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 004b482e: ADD ESP,0xc
// 004b4831: MOV EAX,EBX
// 004b4833: MOV ESP,EBP
// 004b4835: POP EBP
// 004b4836: POP EDI
// 004b4837: POP ESI
// 004b4838: POP EBX
// 004b4839: RET
// 004b483a: PUSH 0x626c9f
//   Label: LAB_004b483a
//   XREF to: 00626c9f (DATA)
// 004b483f: MOV ESI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004b4845: PUSH ESI
//   XREF to: 02cf1cd4 (DATA)
// 004b4846: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 004b484b: ADD ESP,0x8
// 004b484e: MOV EDI,dword ptr [ESP + 0x7c0]
//   XREF to: Stack[-0xc08] (READ)
// 004b4855: PUSH EDI
// 004b4856: PUSH 0x626cc6
//   XREF to: 00626cc6 (DATA)
// 004b485b: LEA EAX,[ESP + 0x5c4]
//   XREF to: Stack[-0xe0c] (DATA)
// 004b4862: PUSH EAX
// 004b4863: PUSH EBX
// 004b4864: MOV EAX,dword ptr [ESP + 0x13b4]
//   XREF to: Stack[-0x24] (READ)
// 004b486b: PUSH EAX
// 004b486c: CALL engine_fileio.cpp_copyFileWithProgress_FUN_004b2030
//   XREF to: 004b2030 (UNCONDITIONAL_CALL)
// 004b4871: ADD ESP,0x14
// 004b4874: MOV EDX,dword ptr [ESP + 0x13a4]
//   XREF to: Stack[-0x24] (READ)
// 004b487b: MOV EDI,EAX
// 004b487d: TEST EDX,EDX
// 004b487f: JZ 0x004b489d
//   XREF to: 004b489d (CONDITIONAL_JUMP)
// 004b4881: PUSH 0xc4
// 004b4886: PUSH 0x62604b
//   XREF to: 0062604b (DATA)
// 004b488b: PUSH EDX
// 004b488c: XOR EBX,EBX
// 004b488e: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 004b4893: ADD ESP,0xc
// 004b4896: MOV dword ptr [ESP + 0x13a4],EBX
//   XREF to: Stack[-0x24] (WRITE)
// 004b489d: MOV ESI,dword ptr [ESP + 0x139c]
//   Label: LAB_004b489d
//   XREF to: Stack[-0x2c] (READ)
// 004b48a4: TEST ESI,ESI
// 004b48a6: JZ 0x004b48c4
//   XREF to: 004b48c4 (CONDITIONAL_JUMP)
// 004b48a8: PUSH 0xc4
// 004b48ad: PUSH 0x62604b
//   XREF to: 0062604b (DATA)
// 004b48b2: PUSH ESI
// 004b48b3: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 004b48b8: ADD ESP,0xc
// 004b48bb: XOR EDX,EDX
// 004b48bd: MOV dword ptr [ESP + 0x139c],EDX
//   XREF to: Stack[-0x2c] (WRITE)
// 004b48c4: TEST EDI,EDI
//   Label: LAB_004b48c4
// 004b48c6: JNZ 0x004b4a6c
//   XREF to: 004b4a6c (CONDITIONAL_JUMP)
// 004b48cc: MOV DH,byte ptr [0x02d12ac8]
//   XREF to: 02d12ac8 (READ)
// 004b48d2: LEA EDI,[ESP + 0xb68]
//   XREF to: Stack[-0x860] (DATA)
// 004b48d9: TEST DH,DH
// 004b48db: JNZ 0x004b4900
//   XREF to: 004b4900 (CONDITIONAL_JUMP)
// 004b48dd: MOV ECX,0x626060
//   XREF to: 00626060 (DATA)
// 004b48e2: MOV EBX,0xdd
// 004b48e7: PUSH 0x626075
//   XREF to: 00626075 (DATA)
// 004b48ec: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 004b48f2: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 004b48f8: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004b48fd: ADD ESP,0x4
// 004b4900: LEA EAX,[ESP + 0x1078]
//   Label: LAB_004b4900
//   XREF to: Stack[-0x350] (DATA)
// 004b4907: PUSH EAX
// 004b4908: LEA EAX,[ESP + 0x13b4]
//   XREF to: Stack[-0x18] (DATA)
// 004b490f: PUSH EAX
// 004b4910: PUSH 0x2d12ac8
//   XREF to: 02d12ac8 (DATA)
// 004b4915: CALL engine_dosio.c_ensureTrailingSlash_FUN_00481f80
//   XREF to: 00481f80 (UNCONDITIONAL_CALL)
// 004b491a: ADD ESP,0xc
// 004b491d: PUSH 0x0
// 004b491f: PUSH 0x0
// 004b4921: LEA EAX,[ESP + 0x1080]
//   XREF to: Stack[-0x350] (DATA)
// 004b4928: PUSH EAX
// 004b4929: LEA EAX,[ESP + 0x13bc]
//   XREF to: Stack[-0x18] (DATA)
// 004b4930: PUSH EAX
// 004b4931: PUSH EDI
// 004b4932: CALL engine_dosio.c_makePath_FUN_00481f50
//   XREF to: 00481f50 (UNCONDITIONAL_CALL)
// 004b4937: ADD ESP,0x14
// 004b493a: MOV ESI,0x626096
//   XREF to: 00626096 (DATA)
// 004b493f: PUSH EDI
// 004b4940: SUB ECX,ECX
// 004b4942: DEC ECX
// 004b4943: MOV AL,0x0
// 004b4945: SCASB.REPNE ES:EDI
// 004b4947: DEC EDI
// 004b4948: MOV AL,byte ptr [ESI]
//   Label: LAB_004b4948
//   XREF to: 00626096 (READ)
//   XREF to: 00626098 (READ)
// 004b494a: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x860] (DATA)
// 004b494c: CMP AL,0x0
// 004b494e: JZ 0x004b4960
//   XREF to: 004b4960 (CONDITIONAL_JUMP)
// 004b4950: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 00626097 (READ)
//   XREF to: 00626099 (READ)
// 004b4953: ADD ESI,0x2
// 004b4956: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x85f] (WRITE)
// 004b4959: ADD EDI,0x2
// 004b495c: CMP AL,0x0
// 004b495e: JNZ 0x004b4948
//   XREF to: 004b4948 (CONDITIONAL_JUMP)
// 004b4960: POP EDI
//   Label: LAB_004b4960
// 004b4961: XOR ESI,ESI
// 004b4963: MOV EAX,dword ptr [ESP + 0x1394]
//   XREF to: Stack[-0x34] (READ)
// 004b496a: MOV dword ptr [ESP + 0x1378],ESI
//   XREF to: Stack[-0x50] (WRITE)
// 004b4971: MOV dword ptr [ESP + 0x137c],ESI
//   XREF to: Stack[-0x4c] (WRITE)
// 004b4978: TEST EAX,EAX
// 004b497a: JZ 0x004b4a7e
//   XREF to: 004b4a7e (CONDITIONAL_JUMP)
// 004b4980: MOV ECX,dword ptr [EBP + 0x18]
//   Label: LAB_004b4980
//   XREF to: Stack[0x8] (READ)
// 004b4983: PUSH ECX
// 004b4984: PUSH 0x626d46
//   XREF to: 00626d46 (DATA)
// 004b4989: MOV EBX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004b498f: PUSH EBX
//   XREF to: 02cf1cd4 (DATA)
// 004b4990: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 004b4995: ADD ESP,0xc
// 004b4998: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 004b499d: XOR EBX,EBX
// 004b499f: XOR EDI,EDI
// 004b49a1: PUSH EDI
//   Label: LAB_004b49a1
// 004b49a2: LEA EAX,[ESP + 0x3ac]
//   XREF to: Stack[-0x1020] (DATA)
// 004b49a9: PUSH EAX
// 004b49aa: CALL engine_dosio.c_setFileAttributes_FUN_004819f0
//   XREF to: 004819f0 (UNCONDITIONAL_CALL)
// 004b49af: ADD ESP,0x8
// 004b49b2: LEA EAX,[ESP + 0x3a8]
//   XREF to: Stack[-0x1020] (DATA)
// 004b49b9: PUSH EAX
// 004b49ba: CALL crt_io.c_deleteFile_FUN_005ff9d0
//   XREF to: 005ff9d0 (UNCONDITIONAL_CALL)
// 004b49bf: ADD ESP,0x4
// 004b49c2: LEA EAX,[ESP + 0x3a8]
//   XREF to: Stack[-0x1020] (DATA)
// 004b49c9: PUSH EAX
// 004b49ca: LEA EAX,[ESP + 0x964]
//   XREF to: Stack[-0xa68] (DATA)
// 004b49d1: PUSH EAX
// 004b49d2: CALL crt_stdio.c_rename_FUN_006015d0
//   XREF to: 006015d0 (UNCONDITIONAL_CALL)
// 004b49d7: ADD ESP,0x8
// 004b49da: TEST EAX,EAX
// 004b49dc: JNZ 0x004b4bf1
//   XREF to: 004b4bf1 (CONDITIONAL_JUMP)
// 004b49e2: TEST EBX,EBX
// 004b49e4: JLE 0x004b49f4
//   XREF to: 004b49f4 (CONDITIONAL_JUMP)
// 004b49e6: MOV EAX,[0x00678a60]
//   XREF to: 00678a60 (READ)
// 004b49eb: PUSH EAX
//   XREF to: 02cf1cd4 (DATA)
// 004b49ec: CALL shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0
//   XREF to: 004a0dd0 (UNCONDITIONAL_CALL)
// 004b49f1: ADD ESP,0x4
// 004b49f4: MOV EDX,dword ptr [ESP + 0x7c8]
//   Label: LAB_004b49f4
//   XREF to: Stack[-0xc00] (READ)
// 004b49fb: PUSH EDX
// 004b49fc: LEA EAX,[ESP + 0x3ac]
//   XREF to: Stack[-0x1020] (DATA)
// 004b4a03: PUSH EAX
// 004b4a04: CALL engine_dosio.c_copyFileTimestamp_FUN_00481910
//   XREF to: 00481910 (UNCONDITIONAL_CALL)
// 004b4a09: ADD ESP,0x8
// 004b4a0c: TEST EAX,EAX
// 004b4a0e: JNZ 0x004b4cf7
//   XREF to: 004b4cf7 (CONDITIONAL_JUMP)
// 004b4a14: MOV ECX,dword ptr [ESP + 0x1380]
//   XREF to: Stack[-0x48] (READ)
// 004b4a1b: TEST ECX,ECX
// 004b4a1d: JZ 0x004b4a3b
//   XREF to: 004b4a3b (CONDITIONAL_JUMP)
// 004b4a1f: PUSH 0xc4
// 004b4a24: PUSH 0x62604b
//   XREF to: 0062604b (DATA)
// 004b4a29: PUSH ECX
// 004b4a2a: XOR ESI,ESI
// 004b4a2c: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 004b4a31: ADD ESP,0xc
// 004b4a34: MOV dword ptr [ESP + 0x1380],ESI
//   XREF to: Stack[-0x48] (WRITE)
// 004b4a3b: LEA EAX,[ESP + 0x3a8]
//   Label: LAB_004b4a3b
//   XREF to: Stack[-0x1020] (DATA)
// 004b4a42: PUSH EAX
// 004b4a43: PUSH 0x626ea8
//   XREF to: 00626ea8 (DATA)
// 004b4a48: MOV EDI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004b4a4e: PUSH EDI
//   XREF to: 02cf1cd4 (DATA)
// 004b4a4f: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 004b4a54: ADD ESP,0xc
// 004b4a57: LEA EAX,[ESP + 0x1378]
//   XREF to: Stack[-0x50] (DATA)
// 004b4a5e: PUSH EAX
// 004b4a5f: CALL engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860
//   XREF to: 004b2860 (UNCONDITIONAL_CALL)
// 004b4a64: ADD ESP,0x4
// 004b4a67: JMP 0x004b4768
//   XREF to: 004b4768 (UNCONDITIONAL_JUMP)
// 004b4a6c: PUSH EDI
//   Label: LAB_004b4a6c
// 004b4a6d: PUSH 0x626cce
//   XREF to: 00626cce (DATA)
// 004b4a72: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004b4a78: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 004b4a79: JMP 0x004b4760
//   XREF to: 004b4760 (UNCONDITIONAL_JUMP)
// 004b4a7e: LEA EAX,[ESP + 0xb68]
//   Label: LAB_004b4a7e
//   XREF to: Stack[-0x860] (DATA)
// 004b4a85: PUSH EAX
// 004b4a86: PUSH 0x626cdd
//   XREF to: 00626cdd (DATA)
// 004b4a8b: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004b4a91: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 004b4a92: LEA EDI,[ESP + 0xb74]
//   XREF to: Stack[-0x860] (DATA)
// 004b4a99: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 004b4a9e: ADD ESP,0xc
// 004b4aa1: PUSH 0x153
//   Label: LAB_004b4aa1
// 004b4aa6: PUSH 0x626129
//   XREF to: 00626129 (DATA)
// 004b4aab: PUSH 0x626cec
//   XREF to: 00626cec (DATA)
// 004b4ab0: PUSH 0x0
// 004b4ab2: PUSH EDI
// 004b4ab3: CALL shape_memdbg.cpp_openFile_FUN_0050f7a0
//   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
// 004b4ab8: MOV EBX,EAX
// 004b4aba: ADD ESP,0x14
// 004b4abd: TEST EAX,EAX
// 004b4abf: JZ 0x004b4b37
//   XREF to: 004b4b37 (CONDITIONAL_JUMP)
// 004b4ac5: PUSH 0x400
// 004b4aca: PUSH 0x0
// 004b4acc: PUSH 0x0
// 004b4ace: PUSH EAX
// 004b4acf: CALL crt_stdio.c_setvbuf_FUN_00601490
//   XREF to: 00601490 (UNCONDITIONAL_CALL)
// 004b4ad4: ADD ESP,0x10
// 004b4ad7: MOV EAX,EBX
// 004b4ad9: MOV dword ptr [ESP + 0x1380],EAX
//   Label: LAB_004b4ad9
//   XREF to: Stack[-0x48] (WRITE)
// 004b4ae0: TEST EAX,EAX
// 004b4ae2: JNZ 0x004b4b5e
//   XREF to: 004b4b5e (CONDITIONAL_JUMP)
// 004b4ae8: JZ 0x004b4b06
//   XREF to: 004b4b06 (CONDITIONAL_JUMP)
// 004b4aea: PUSH 0xc4
// 004b4aef: PUSH 0x62604b
//   XREF to: 0062604b (DATA)
// 004b4af4: PUSH EAX
// 004b4af5: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 004b4afa: ADD ESP,0xc
// 004b4afd: XOR EAX,EAX
// 004b4aff: MOV dword ptr [ESP + 0x1380],EAX
//   XREF to: Stack[-0x48] (WRITE)
// 004b4b06: LEA EAX,[ESP + 0xb68]
//   Label: LAB_004b4b06
//   XREF to: Stack[-0x860] (DATA)
// 004b4b0d: PUSH EAX
// 004b4b0e: PUSH 0x626cf0
//   XREF to: 00626cf0 (DATA)
// 004b4b13: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004b4b19: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 004b4b1a: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 004b4b1f: ADD ESP,0xc
// 004b4b22: LEA EAX,[ESP + 0x1378]
//   XREF to: Stack[-0x50] (DATA)
// 004b4b29: PUSH EAX
// 004b4b2a: CALL engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860
//   XREF to: 004b2860 (UNCONDITIONAL_CALL)
// 004b4b2f: ADD ESP,0x4
// 004b4b32: JMP 0x004b4768
//   XREF to: 004b4768 (UNCONDITIONAL_JUMP)
// 004b4b37: CALL crt_errno.c_errno_FUN_00601450
//   Label: LAB_004b4b37
//   XREF to: 00601450 (UNCONDITIONAL_CALL)
// 004b4b3c: CMP dword ptr [EAX],0x6
// 004b4b3f: JNZ 0x004b4b57
//   XREF to: 004b4b57 (CONDITIONAL_JUMP)
// 004b4b41: PUSH 0x1f4
// 004b4b46: INC ESI
// 004b4b47: CALL dword ptr CS:[0x611644]
//   XREF to: 00611644 (READ)
// 004b4b4e: CMP ESI,0xa
// 004b4b51: JL 0x004b4aa1
//   XREF to: 004b4aa1 (CONDITIONAL_JUMP)
// 004b4b57: XOR EAX,EAX
//   Label: LAB_004b4b57
// 004b4b59: JMP 0x004b4ad9
//   XREF to: 004b4ad9 (UNCONDITIONAL_JUMP)
// 004b4b5e: LEA EAX,[ESP + 0x1380]
//   Label: LAB_004b4b5e
//   XREF to: Stack[-0x48] (DATA)
// 004b4b65: PUSH EAX
// 004b4b66: LEA EAX,[ESP + 0x137c]
//   XREF to: Stack[-0x50] (DATA)
// 004b4b6d: PUSH EAX
// 004b4b6e: CALL engine_fileio.cpp_CCheckOutList_parse_FUN_004b2a60
//   XREF to: 004b2a60 (UNCONDITIONAL_CALL)
// 004b4b73: ADD ESP,0x8
// 004b4b76: TEST EAX,EAX
// 004b4b78: JZ 0x004b4bdc
//   XREF to: 004b4bdc (CONDITIONAL_JUMP)
// 004b4b7a: LEA EAX,[ESP + 0x5bc]
//   XREF to: Stack[-0xe0c] (DATA)
// 004b4b81: PUSH EAX
// 004b4b82: LEA EAX,[ESP + 0x137c]
//   XREF to: Stack[-0x50] (DATA)
// 004b4b89: PUSH EAX
// 004b4b8a: CALL engine_fileio.cpp_CCheckOutList_findEntry_FUN_004b2e60
//   XREF to: 004b2e60 (UNCONDITIONAL_CALL)
// 004b4b8f: ADD ESP,0x8
// 004b4b92: MOV dword ptr [ESP + 0x1388],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 004b4b99: TEST EAX,EAX
// 004b4b9b: JGE 0x004b4980
//   XREF to: 004b4980 (CONDITIONAL_JUMP)
// 004b4ba1: MOV ECX,dword ptr [ESP + 0x1380]
//   XREF to: Stack[-0x48] (READ)
// 004b4ba8: TEST ECX,ECX
// 004b4baa: JZ 0x004b4bc8
//   XREF to: 004b4bc8 (CONDITIONAL_JUMP)
// 004b4bac: PUSH 0xc4
// 004b4bb1: PUSH 0x62604b
//   XREF to: 0062604b (DATA)
// 004b4bb6: PUSH ECX
// 004b4bb7: XOR ESI,ESI
// 004b4bb9: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 004b4bbe: ADD ESP,0xc
// 004b4bc1: MOV dword ptr [ESP + 0x1380],ESI
//   XREF to: Stack[-0x48] (WRITE)
// 004b4bc8: PUSH 0x626d0e
//   Label: LAB_004b4bc8
//   XREF to: 00626d0e (DATA)
// 004b4bcd: MOV EDI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004b4bd3: PUSH EDI
//   XREF to: 02cf1cd4 (DATA)
// 004b4bd4: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 004b4bd9: ADD ESP,0x8
// 004b4bdc: LEA EAX,[ESP + 0x1378]
//   Label: LAB_004b4bdc
//   XREF to: Stack[-0x50] (DATA)
// 004b4be3: PUSH EAX
// 004b4be4: CALL engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860
//   XREF to: 004b2860 (UNCONDITIONAL_CALL)
// 004b4be9: ADD ESP,0x4
// 004b4bec: JMP 0x004b4768
//   XREF to: 004b4768 (UNCONDITIONAL_JUMP)
// 004b4bf1: CMP EBX,0x28
//   Label: LAB_004b4bf1
// 004b4bf4: JL 0x004b4c65
//   XREF to: 004b4c65 (CONDITIONAL_JUMP)
// 004b4bf6: MOV EDX,dword ptr [ESP + 0x1380]
//   XREF to: Stack[-0x48] (READ)
// 004b4bfd: TEST EDX,EDX
// 004b4bff: JZ 0x004b4c1d
//   XREF to: 004b4c1d (CONDITIONAL_JUMP)
// 004b4c01: PUSH 0xc4
// 004b4c06: PUSH 0x62604b
//   XREF to: 0062604b (DATA)
// 004b4c0b: PUSH EDX
// 004b4c0c: XOR EBX,EBX
// 004b4c0e: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 004b4c13: ADD ESP,0xc
// 004b4c16: MOV dword ptr [ESP + 0x1380],EBX
//   XREF to: Stack[-0x48] (WRITE)
// 004b4c1d: LEA EAX,[ESP + 0x3a8]
//   Label: LAB_004b4c1d
//   XREF to: Stack[-0x1020] (DATA)
// 004b4c24: PUSH EAX
// 004b4c25: LEA EAX,[ESP + 0x964]
//   XREF to: Stack[-0xa68] (DATA)
// 004b4c2c: PUSH EAX
// 004b4c2d: PUSH 0x626d62
//   XREF to: 00626d62 (DATA)
// 004b4c32: MOV ESI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004b4c38: PUSH ESI
//   XREF to: 02cf1cd4 (DATA)
// 004b4c39: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 004b4c3e: ADD ESP,0x10
// 004b4c41: MOV EDI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004b4c47: PUSH EDI
//   XREF to: 02cf1cd4 (DATA)
// 004b4c48: CALL shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0
//   XREF to: 004a0dd0 (UNCONDITIONAL_CALL)
// 004b4c4d: ADD ESP,0x4
// 004b4c50: LEA EAX,[ESP + 0x1378]
//   XREF to: Stack[-0x50] (DATA)
// 004b4c57: PUSH EAX
// 004b4c58: CALL engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860
//   XREF to: 004b2860 (UNCONDITIONAL_CALL)
// 004b4c5d: ADD ESP,0x4
// 004b4c60: JMP 0x004b4768
//   XREF to: 004b4768 (UNCONDITIONAL_JUMP)
// 004b4c65: INC EBX
//   Label: LAB_004b4c65
// 004b4c66: CMP EBX,0x1
// 004b4c69: JNZ 0x004b4c9f
//   XREF to: 004b4c9f (CONDITIONAL_JUMP)
// 004b4c6b: LEA EAX,[ESP + 0x3a8]
//   XREF to: Stack[-0x1020] (DATA)
// 004b4c72: PUSH EAX
// 004b4c73: PUSH 0x626e66
//   XREF to: 00626e66 (DATA)
// 004b4c78: LEA EAX,[ESP + 0x7d8]
//   XREF to: Stack[-0xbf8] (DATA)
// 004b4c7f: PUSH EAX
// 004b4c80: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004b4c85: ADD ESP,0xc
// 004b4c88: LEA EAX,[ESP + 0x7d0]
//   XREF to: Stack[-0xbf8] (DATA)
// 004b4c8f: PUSH EAX
// 004b4c90: MOV ESI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004b4c96: PUSH ESI
//   XREF to: 02cf1cd4 (DATA)
// 004b4c97: CALL shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
//   XREF to: 004a0430 (UNCONDITIONAL_CALL)
// 004b4c9c: ADD ESP,0x8
// 004b4c9f: PUSH 0x3fe00000
//   Label: LAB_004b4c9f
// 004b4ca4: PUSH 0x0
// 004b4ca6: CALL wincore_winrun.cpp_sleep_FUN_005f40e0
//   XREF to: 005f40e0 (UNCONDITIONAL_CALL)
// 004b4cab: ADD ESP,0x8
// 004b4cae: MOV dword ptr [ESP + 0x1398],EBX
//   XREF to: Stack[-0x30] (WRITE)
// 004b4cb5: PUSH 0x42200000
// 004b4cba: FILD dword ptr [ESP + 0x139c]
//   XREF to: Stack[-0x30] (READ)
// 004b4cc1: SUB ESP,0x4
// 004b4cc4: MOV EAX,[0x00678a60]
//   XREF to: 00678a60 (READ)
// 004b4cc9: FSTP float ptr [ESP]
//   XREF to: Stack[-0x13d0] (DATA)
// 004b4ccc: PUSH EAX
//   XREF to: 02cf1cd4 (DATA)
// 004b4ccd: CALL shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530
//   XREF to: 004a0530 (UNCONDITIONAL_CALL)
// 004b4cd2: ADD ESP,0xc
// 004b4cd5: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004b4cda: PUSH 0x1
// 004b4cdc: MOV ESI,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 004b4cde: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 004b4cdf: CALL dword ptr [ESI + 0x4]
// 004b4ce2: ADD ESP,0x8
// 004b4ce5: TEST EAX,EAX
// 004b4ce7: JZ 0x004b49a1
//   XREF to: 004b49a1 (CONDITIONAL_JUMP)
// 004b4ced: MOV EBX,0x28
// 004b4cf2: JMP 0x004b49a1
//   XREF to: 004b49a1 (UNCONDITIONAL_JUMP)
// 004b4cf7: PUSH 0x8
//   Label: LAB_004b4cf7
// 004b4cf9: LEA EAX,[ESP + 0x3ac]
//   XREF to: Stack[-0x1020] (DATA)
// 004b4d00: PUSH EAX
// 004b4d01: CALL engine_dosio.c_setFileAttributes_FUN_004819f0
//   XREF to: 004819f0 (UNCONDITIONAL_CALL)
// 004b4d06: ADD ESP,0x8
// 004b4d09: TEST EAX,EAX
// 004b4d0b: JZ 0x004b4dde
//   XREF to: 004b4dde (CONDITIONAL_JUMP)
// 004b4d11: LEA EDI,[ESP + 0xa64]
//   XREF to: Stack[-0x964] (DATA)
// 004b4d18: XOR ESI,ESI
// 004b4d1a: PUSH 0x153
//   Label: LAB_004b4d1a
// 004b4d1f: PUSH 0x626129
//   XREF to: 00626129 (DATA)
// 004b4d24: PUSH 0x62729a
//   XREF to: 0062729a (DATA)
// 004b4d29: PUSH 0x0
// 004b4d2b: PUSH EDI
// 004b4d2c: CALL shape_memdbg.cpp_openFile_FUN_0050f7a0
//   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
// 004b4d31: MOV EBX,EAX
// 004b4d33: ADD ESP,0x14
// 004b4d36: TEST EAX,EAX
// 004b4d38: JZ 0x004b4e36
//   XREF to: 004b4e36 (CONDITIONAL_JUMP)
// 004b4d3e: PUSH 0x400
// 004b4d43: PUSH 0x0
// 004b4d45: PUSH 0x0
// 004b4d47: PUSH EAX
// 004b4d48: CALL crt_stdio.c_setvbuf_FUN_00601490
//   XREF to: 00601490 (UNCONDITIONAL_CALL)
// 004b4d4d: ADD ESP,0x10
// 004b4d50: MOV dword ptr [ESP + 0x13a0],EBX
//   Label: LAB_004b4d50
//   XREF to: Stack[-0x28] (WRITE)
// 004b4d57: TEST EBX,EBX
// 004b4d59: JNZ 0x004b4e5d
//   XREF to: 004b4e5d (CONDITIONAL_JUMP)
// 004b4d5f: MOV EDX,dword ptr [ESP + 0x1380]
//   Label: LAB_004b4d5f
//   XREF to: Stack[-0x48] (READ)
// 004b4d66: TEST EDX,EDX
// 004b4d68: JZ 0x004b4d86
//   XREF to: 004b4d86 (CONDITIONAL_JUMP)
// 004b4d6a: PUSH 0xc4
// 004b4d6f: PUSH 0x62604b
//   XREF to: 0062604b (DATA)
// 004b4d74: PUSH EDX
// 004b4d75: XOR EBX,EBX
// 004b4d77: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 004b4d7c: ADD ESP,0xc
// 004b4d7f: MOV dword ptr [ESP + 0x1380],EBX
//   XREF to: Stack[-0x48] (WRITE)
// 004b4d86: MOV ESI,dword ptr [ESP + 0x13a0]
//   Label: LAB_004b4d86
//   XREF to: Stack[-0x28] (READ)
// 004b4d8d: TEST ESI,ESI
// 004b4d8f: JZ 0x004b4dad
//   XREF to: 004b4dad (CONDITIONAL_JUMP)
// 004b4d91: PUSH 0xc4
// 004b4d96: PUSH 0x62604b
//   XREF to: 0062604b (DATA)
// 004b4d9b: PUSH ESI
// 004b4d9c: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 004b4da1: ADD ESP,0xc
// 004b4da4: XOR EAX,EAX
// 004b4da6: MOV dword ptr [ESP + 0x13a0],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 004b4dad: LEA EAX,[ESP + 0xa64]
//   Label: LAB_004b4dad
//   XREF to: Stack[-0x964] (DATA)
// 004b4db4: PUSH EAX
// 004b4db5: PUSH 0x62729d
//   XREF to: 0062729d (DATA)
// 004b4dba: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004b4dc0: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 004b4dc1: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 004b4dc6: ADD ESP,0xc
// 004b4dc9: LEA EAX,[ESP + 0x1378]
//   XREF to: Stack[-0x50] (DATA)
// 004b4dd0: PUSH EAX
// 004b4dd1: CALL engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860
//   XREF to: 004b2860 (UNCONDITIONAL_CALL)
// 004b4dd6: ADD ESP,0x4
// 004b4dd9: JMP 0x004b4768
//   XREF to: 004b4768 (UNCONDITIONAL_JUMP)
// 004b4dde: MOV EAX,dword ptr [ESP + 0x1380]
//   Label: LAB_004b4dde
//   XREF to: Stack[-0x48] (READ)
// 004b4de5: TEST EAX,EAX
// 004b4de7: JZ 0x004b4e05
//   XREF to: 004b4e05 (CONDITIONAL_JUMP)
// 004b4de9: PUSH 0xc4
// 004b4dee: PUSH 0x62604b
//   XREF to: 0062604b (DATA)
// 004b4df3: PUSH EAX
// 004b4df4: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 004b4df9: ADD ESP,0xc
// 004b4dfc: XOR ECX,ECX
// 004b4dfe: MOV dword ptr [ESP + 0x1380],ECX
//   XREF to: Stack[-0x48] (WRITE)
// 004b4e05: LEA EAX,[ESP + 0x3a8]
//   Label: LAB_004b4e05
//   XREF to: Stack[-0x1020] (DATA)
// 004b4e0c: PUSH EAX
// 004b4e0d: PUSH 0x6270ed
//   XREF to: 006270ed (DATA)
// 004b4e12: MOV EBX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004b4e18: PUSH EBX
//   XREF to: 02cf1cd4 (DATA)
// 004b4e19: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 004b4e1e: ADD ESP,0xc
// 004b4e21: LEA EAX,[ESP + 0x1378]
//   XREF to: Stack[-0x50] (DATA)
// 004b4e28: PUSH EAX
// 004b4e29: CALL engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860
//   XREF to: 004b2860 (UNCONDITIONAL_CALL)
// 004b4e2e: ADD ESP,0x4
// 004b4e31: JMP 0x004b4768
//   XREF to: 004b4768 (UNCONDITIONAL_JUMP)
// 004b4e36: CALL crt_errno.c_errno_FUN_00601450
//   Label: LAB_004b4e36
//   XREF to: 00601450 (UNCONDITIONAL_CALL)
// 004b4e3b: CMP dword ptr [EAX],0x6
// 004b4e3e: JNZ 0x004b4e56
//   XREF to: 004b4e56 (CONDITIONAL_JUMP)
// 004b4e40: PUSH 0x1f4
// 004b4e45: INC ESI
// 004b4e46: CALL dword ptr CS:[0x611644]
//   XREF to: 00611644 (READ)
// 004b4e4d: CMP ESI,0xa
// 004b4e50: JL 0x004b4d1a
//   XREF to: 004b4d1a (CONDITIONAL_JUMP)
// 004b4e56: XOR EBX,EBX
//   Label: LAB_004b4e56
// 004b4e58: JMP 0x004b4d50
//   XREF to: 004b4d50 (UNCONDITIONAL_JUMP)
// 004b4e5d: PUSH 0x0
//   Label: LAB_004b4e5d
// 004b4e5f: CALL crt_time.c_time_with_rounding_FUN_006001f0
//   XREF to: 006001f0 (UNCONDITIONAL_CALL)
// 004b4e64: ADD ESP,0x4
// 004b4e67: MOV dword ptr [ESP + 0x1384],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 004b4e6e: LEA EAX,[ESP + 0x1384]
//   XREF to: Stack[-0x44] (DATA)
// 004b4e75: PUSH EAX
// 004b4e76: CALL crt_time.c_localtime_FUN_00600288
//   XREF to: 00600288 (UNCONDITIONAL_CALL)
// 004b4e7b: ADD ESP,0x4
// 004b4e7e: PUSH 0x2d12bd0
//   XREF to: 02d12bd0 (DATA)
// 004b4e83: MOV ECX,dword ptr [EAX]
// 004b4e85: PUSH ECX
// 004b4e86: MOV ESI,dword ptr [EAX + 0x4]
// 004b4e89: PUSH ESI
// 004b4e8a: MOV EDI,dword ptr [EAX + 0x8]
// 004b4e8d: PUSH EDI
// 004b4e8e: MOV EDX,dword ptr [EAX + 0xc]
// 004b4e91: MOV ESI,dword ptr [EAX + 0x10]
// 004b4e94: PUSH EDX
// 004b4e95: INC ESI
// 004b4e96: MOV EAX,dword ptr [EAX + 0x14]
// 004b4e99: PUSH ESI
// 004b4e9a: ADD EAX,0x76c
// 004b4e9f: PUSH EAX
// 004b4ea0: MOV EAX,dword ptr [ESP + 0x13a8]
//   XREF to: Stack[-0x3c] (READ)
// 004b4ea7: INC EAX
// 004b4ea8: PUSH EAX
// 004b4ea9: PUSH 0x62744a
//   XREF to: 0062744a (DATA)
// 004b4eae: PUSH EBX
// 004b4eaf: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 004b4eb4: ADD ESP,0x28
// 004b4eb7: PUSH EBX
// 004b4eb8: CALL crt_stdio.c_fflush_FUN_00601540
//   XREF to: 00601540 (UNCONDITIONAL_CALL)
// 004b4ebd: MOV CL,byte ptr [EBX + 0xc]
// 004b4ec0: ADD ESP,0x4
// 004b4ec3: TEST CL,0x20
// 004b4ec6: JNZ 0x004b4d5f
//   XREF to: 004b4d5f (CONDITIONAL_JUMP)
// 004b4ecc: PUSH 0xc4
// 004b4ed1: PUSH 0x62604b
//   XREF to: 0062604b (DATA)
// 004b4ed6: PUSH EBX
// 004b4ed7: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 004b4edc: ADD ESP,0xc
// 004b4edf: XOR ECX,ECX
// 004b4ee1: MOV EBX,dword ptr [ESP + 0x1394]
//   XREF to: Stack[-0x34] (READ)
// 004b4ee8: MOV dword ptr [ESP + 0x13a0],ECX
//   XREF to: Stack[-0x28] (WRITE)
// 004b4eef: CALL engine_fileio.cpp_logOffVersionControl_FUN_004b2830
//   XREF to: 004b2830 (UNCONDITIONAL_CALL)
// 004b4ef4: TEST EBX,EBX
// 004b4ef6: JNZ 0x004b4f62
//   XREF to: 004b4f62 (CONDITIONAL_JUMP)
// 004b4ef8: MOV ESI,dword ptr [ESP + 0x1388]
//   XREF to: Stack[-0x40] (READ)
// 004b4eff: PUSH ESI
// 004b4f00: LEA EAX,[ESP + 0x137c]
//   XREF to: Stack[-0x50] (DATA)
// 004b4f07: PUSH EAX
// 004b4f08: CALL engine_fileio.cpp_CCheckOutList_remove_FUN_004b2d70
//   XREF to: 004b2d70 (UNCONDITIONAL_CALL)
// 004b4f0d: ADD ESP,0x8
// 004b4f10: TEST EAX,EAX
// 004b4f12: JNZ 0x004b4f80
//   XREF to: 004b4f80 (CONDITIONAL_JUMP)
// 004b4f14: MOV EDI,dword ptr [ESP + 0x1380]
//   XREF to: Stack[-0x48] (READ)
// 004b4f1b: TEST EDI,EDI
// 004b4f1d: JZ 0x004b4f39
//   XREF to: 004b4f39 (CONDITIONAL_JUMP)
// 004b4f1f: PUSH 0xc4
// 004b4f24: PUSH 0x62604b
//   XREF to: 0062604b (DATA)
// 004b4f29: PUSH EDI
// 004b4f2a: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 004b4f2f: ADD ESP,0xc
// 004b4f32: MOV dword ptr [ESP + 0x1380],EBX
//   XREF to: Stack[-0x48] (WRITE)
// 004b4f39: PUSH 0x627473
//   Label: LAB_004b4f39
//   XREF to: 00627473 (DATA)
// 004b4f3e: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004b4f44: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 004b4f45: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 004b4f4a: ADD ESP,0x8
// 004b4f4d: LEA EAX,[ESP + 0x1378]
//   Label: LAB_004b4f4d
//   XREF to: Stack[-0x50] (DATA)
// 004b4f54: PUSH EAX
// 004b4f55: CALL engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860
//   XREF to: 004b2860 (UNCONDITIONAL_CALL)
// 004b4f5a: ADD ESP,0x4
// 004b4f5d: JMP 0x004b4768
//   XREF to: 004b4768 (UNCONDITIONAL_JUMP)
// 004b4f62: LEA EAX,[ESP + 0x1378]
//   Label: LAB_004b4f62
//   XREF to: Stack[-0x50] (DATA)
// 004b4f69: PUSH EAX
// 004b4f6a: MOV EBX,0x2
// 004b4f6f: CALL engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860
//   XREF to: 004b2860 (UNCONDITIONAL_CALL)
// 004b4f74: ADD ESP,0x4
// 004b4f77: MOV EAX,EBX
// 004b4f79: MOV ESP,EBP
// 004b4f7b: POP EBP
// 004b4f7c: POP EDI
// 004b4f7d: POP ESI
// 004b4f7e: POP EBX
// 004b4f7f: RET
// 004b4f80: LEA EAX,[ESP + 0x1380]
//   Label: LAB_004b4f80
//   XREF to: Stack[-0x48] (DATA)
// 004b4f87: PUSH EAX
// 004b4f88: LEA EAX,[ESP + 0x137c]
//   XREF to: Stack[-0x50] (DATA)
// 004b4f8f: PUSH EAX
// 004b4f90: CALL engine_fileio.cpp_CCheckOutList_write_FUN_004b2eb0
//   XREF to: 004b2eb0 (UNCONDITIONAL_CALL)
// 004b4f95: ADD ESP,0x8
// 004b4f98: TEST EAX,EAX
// 004b4f9a: JZ 0x004b4f4d
//   XREF to: 004b4f4d (CONDITIONAL_JUMP)
// 004b4f9c: MOV EBX,dword ptr [ESP + 0x1380]
//   XREF to: Stack[-0x48] (READ)
// 004b4fa3: TEST EBX,EBX
// 004b4fa5: JZ 0x004b4fc3
//   XREF to: 004b4fc3 (CONDITIONAL_JUMP)
// 004b4fa7: PUSH 0xc4
// 004b4fac: PUSH 0x62604b
//   XREF to: 0062604b (DATA)
// 004b4fb1: PUSH EBX
// 004b4fb2: XOR EDI,EDI
// 004b4fb4: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 004b4fb9: ADD ESP,0xc
// 004b4fbc: MOV dword ptr [ESP + 0x1380],EDI
//   XREF to: Stack[-0x48] (WRITE)
// 004b4fc3: LEA EAX,[ESP + 0x5bc]
//   Label: LAB_004b4fc3
//   XREF to: Stack[-0xe0c] (DATA)
// 004b4fca: PUSH EAX
// 004b4fcb: PUSH 0x0
// 004b4fcd: CALL engine_dosio.c_getFileTimestamp_FUN_00481960
//   XREF to: 00481960 (UNCONDITIONAL_CALL)
// 004b4fd2: ADD ESP,0x8
// 004b4fd5: MOV EBX,EAX
// 004b4fd7: TEST EAX,EAX
// 004b4fd9: JL 0x004b4ff2
//   XREF to: 004b4ff2 (CONDITIONAL_JUMP)
// 004b4fdb: OR AL,0x8
// 004b4fdd: PUSH EAX
// 004b4fde: LEA EAX,[ESP + 0x5c0]
//   XREF to: Stack[-0xe0c] (DATA)
// 004b4fe5: PUSH EAX
// 004b4fe6: CALL engine_dosio.c_setFileAttributes_FUN_004819f0
//   XREF to: 004819f0 (UNCONDITIONAL_CALL)
// 004b4feb: ADD ESP,0x8
// 004b4fee: TEST EAX,EAX
// 004b4ff0: JZ 0x004b4ff6
//   XREF to: 004b4ff6 (CONDITIONAL_JUMP)
// 004b4ff2: TEST EBX,EBX
//   Label: LAB_004b4ff2
// 004b4ff4: JGE 0x004b5011
//   XREF to: 004b5011 (CONDITIONAL_JUMP)
// 004b4ff6: LEA EAX,[ESP + 0x5bc]
//   Label: LAB_004b4ff6
//   XREF to: Stack[-0xe0c] (DATA)
// 004b4ffd: PUSH EAX
// 004b4ffe: PUSH 0x6274c1
//   XREF to: 006274c1 (DATA)
// 004b5003: MOV EAX,[0x00678a60]
//   XREF to: 00678a60 (READ)
// 004b5008: PUSH EAX
//   XREF to: 02cf1cd4 (DATA)
// 004b5009: CALL shape_edittool.cpp_CEditorTools_showWarning_FUN_0049e6f0
//   XREF to: 0049e6f0 (UNCONDITIONAL_CALL)
// 004b500e: ADD ESP,0xc
// 004b5011: LEA EAX,[ESP + 0x1378]
//   Label: LAB_004b5011
//   XREF to: Stack[-0x50] (DATA)
// 004b5018: PUSH EAX
// 004b5019: MOV EBX,0x1
// 004b501e: CALL engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860
//   XREF to: 004b2860 (UNCONDITIONAL_CALL)
// 004b5023: ADD ESP,0x4
// 004b5026: MOV EAX,EBX
// 004b5028: MOV ESP,EBP
// 004b502a: POP EBP
// 004b502b: POP EDI
// 004b502c: POP ESI
// 004b502d: POP EBX
// 004b502e: RET
