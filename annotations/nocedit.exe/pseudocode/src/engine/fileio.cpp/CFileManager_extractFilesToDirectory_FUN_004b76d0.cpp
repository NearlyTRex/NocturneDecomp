// Name: engine_fileio.cpp_CFileManager_extractFilesToDirectory_FUN_004b76d0
// Address: 004b76d0
// Address Range: [[004b76d0, 004b7ab5]]
// Convention: __cdecl
// Signature: void engine_fileio.cpp_CFileManager_extractFilesToDirectory_FUN_004b76d0(CFileManager * this_ptr)

#include "nocturne.h"

void __cdecl
engine_fileio_cpp_CFileManager_extractFilesToDirectory_FUN_004b76d0(CFileManager *this_ptr)

{
  char cVar1;
  bool bVar2;
  undefined3 extraout_var;
  int iVar3;
  FILE *pFVar4;
  char *output_buffer;
  int iVar5;
  tm *ptVar6;
  BADSPACEBASE *in_ESP;
  char *pcVar7;
  char *pcVar8;
  uint *puVar9;
  SFoundFileInfo *pSVar10;
  uint *puVar11;
  byte bVar12;
  FILE *in_stack_00000008;
  uint auStackY_30e0 [2032];
  CFileManager *source_file;
  CPodFile *this_ptr_00;
  CEditorTools *filename;
  char *format_string;
  SFoundFileInfo *info;
  uint in_stack_ffffef08;
  uint in_stack_ffffef0c;
  uint in_stack_ffffef10;
  uint in_stack_ffffef14;
  uint in_stack_ffffef18;
  uint auStack_ff4 [196];
  CPodDirectoryEntry *pCStack_ce4;
  CPodDirectoryEntry *pCStack_ce0;
  char acStack_cd0 [4];
  char acStack_ccc [1016];
  byte auStack_8d4 [8];
  byte auStack_8cc [8];
  byte auStack_8c4 [933];
  char acStack_51f [247];
  byte auStack_428 [252];
  time_t atStack_32c [2];
  uint uStack_324;
  char local_320 [12];
  byte auStack_314 [252];
  char acStack_218 [248];
  char local_120 [8];
  char acStack_118 [4];
  CEditorTools aCStack_114 [4];
  char acStack_110 [4];
  char acStack_10c [252];
  time_t tStack_10;
  char *local_c;
  
  bVar12 = 0;
  bVar2 = shape_edittool_cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420
                    (g_CEditorToolsPtr,"Select POD file to extract",true,local_120);
  if (CONCAT31 /* combine 2-byte values */(extraout_var,bVar2) == 0) {
    return;
  }
  engine_pod_cpp_CPodFile_ctor_FUN_0054f5a0((CPodFile *)&stack0xffffeefc);
  iVar3 = engine_pod_cpp_CPodFile_mountFromFile_FUN_0054f650
                    ((CPodFile *)&stack0xffffef00,acStack_118);
  if (iVar3 == 0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Can't mount %s");
    engine_pod_cpp_CPodFile_dtor_FUN_0054f610((CPodFile *)&stack0xffffef08);
    return;
  }
  pFVar4 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                     (&stack0xffffef08,(char *)0x0,"rb","..\\engine\\fileio.cpp",0xa00)
  ;
  if (pFVar4 == (FILE *)0x0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Can't open %s");
    engine_pod_cpp_CPodFile_dtor_FUN_0054f610((CPodFile *)&stack0xffffef0c);
    return;
  }
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)auStack_8cc);
  iVar3 = 0;
  if (0 < (int)pCStack_ce4) {
    do {
      crt_stdio_c_sprintf_FUN_005fdbd0(acStack_10c,"%s\t%d");
      shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)auStack_8cc,acStack_110);
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)pCStack_ce4);
  }
  output_buffer = (char *)0xffffffff;
  while (format_string = output_buffer, 0 < (int)auStack_8cc._4_4_) {
    if ((int)auStack_8cc._4_4_ <= (int)format_string) {
      format_string =
           (char *)((int)&((CStrList_vtable *)(auStack_8cc._4_4_ + -0x1c))->handleInput + 3);
    }
    output_buffer =
         (char *)shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                           ((CPickList *)(auStack_8cc + 4),"Select file to extract",
                            (int)format_string,0);
    if ((int)output_buffer < 0) break;
    shape_edittool_cpp_CStrList_getFieldAt_FUN_004a2f80
              ((CStrList *)auStack_8d4,(int)acStack_118,output_buffer,0);
    filename = aCStack_114;
    this_ptr_00 = (CPodFile *)&stack0xffffef04;
    iVar3 = engine_pod_cpp_CPodFile_findFileIndex_FUN_00550140(this_ptr_00,&filename->field0_0x0);
    if (iVar3 < 0) {
      format_string = "Hell froze finding file in pod!";
      g_CurrentFilename = "..\\engine\\fileio.cpp";
      g_CurrentLineNumber = 0xa20;
      filename = (CEditorTools *)0x4b7a8d;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Hell froze finding file in pod!");
    }
    pcVar7 = (char *)((int)(pCStack_ce0 + iVar3) + (uint)bVar12 * -8 + 4);
    local_c = (char *)pCStack_ce0[iVar3].name_or_offset;
    puVar9 = (uint *)(&stack0xfffffffc + (uint)bVar12 * -8 + (uint)bVar12 * -8);
    pcVar8 = pcVar7 + ((uint)bVar12 * -2 + 1) * 4;
    *(uint *)(&stack0xfffffff8 + (uint)bVar12 * -8) = *(uint *)pcVar7;
    *puVar9 = *(uint *)pcVar8;
    puVar9[(uint)bVar12 * -2 + 1] = *(uint *)(pcVar8 + ((uint)bVar12 * -2 + 1) * 4);
    (puVar9 + (uint)bVar12 * -2 + 1)[(uint)bVar12 * -2 + 1] =
         *(uint *)(pcVar8 + ((uint)bVar12 * -2 + 1) * 4 + ((uint)bVar12 * -2 + 1) * 4);
    info = (SFoundFileInfo *)(auStack_8c4 + 0x3a4);
    pcVar7 = local_c;
    pSVar10 = info;
    do {
      cVar1 = *pcVar7;
      pSVar10->found_path[0] = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar7[1];
      pcVar7 = pcVar7 + 2;
      pSVar10->found_path[1] = cVar1;
      pSVar10 = (SFoundFileInfo *)(pSVar10->found_path + 2);
    } while (cVar1 != '\0');
    iVar3 = 1;
    if (this_ptr->operation_mode != 0) {
      info = (SFoundFileInfo *)(auStack_8c4 + 0x3a4);
      iVar5 = engine_dosio_c_findFileNormally_FUN_004817c0(info);
      if (iVar5 != 0) {
        ptVar6 = crt_time_c_localtime_FUN_00600288(atStack_32c);
        crt_time_c_strftime_FUN_006002d4(local_320,0x100,"%A, %B, %d, %Y, %I:%M:%S %p",ptVar6);
        ptVar6 = crt_time_c_localtime_FUN_00600288(&tStack_10);
        crt_time_c_strftime_FUN_006002d4(acStack_218,0x100,"%A, %B, %d, %Y, %I:%M:%S %p",ptVar6);
        crt_stdio_c_sprintf_FUN_005fdbd0
                  (acStack_cd0,"%s already exists on disk.\n\nWould you like to replace the existing file\n\n%d bytes\nmodified on %s\n\nwith this one?\n\n%d bytes\nmodified on %s\n",auStack_428,uStack_324,
                   auStack_314);
        format_string = acStack_ccc;
        this_ptr_00 = (CPodFile *)0x4b7970;
        filename = g_CEditorToolsPtr;
        iVar3 = shape_edittool_cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
                          (g_CEditorToolsPtr,format_string);
      }
    }
    if (iVar3 != 0) {
      puVar11 = (uint *)(&stack0xffffeef8 + (uint)bVar12 * -8 + (uint)bVar12 * -8);
      puVar9 = (uint *)(&stack0xfffffffc + (uint)bVar12 * -8 + (uint)bVar12 * -8);
      *(uint *)(&stack0xffffeef4 + (uint)bVar12 * -8) =
           *(uint *)(&stack0xfffffff8 + (uint)bVar12 * -8);
      source_file = this_ptr;
      pFVar4 = in_stack_00000008;
      pcVar7 = local_c;
      *puVar11 = *puVar9;
      puVar11[(uint)bVar12 * -2 + 1] = puVar9[(uint)bVar12 * -2 + 1];
      (puVar11 + (uint)bVar12 * -2 + 1)[(uint)bVar12 * -2 + 1] =
           (puVar9 + (uint)bVar12 * -2 + 1)[(uint)bVar12 * -2 + 1];
      iVar3 = engine_fileio_cpp_extractFileWithTimestamp_FUN_004b7d50
                        ((FILE *)source_file,(char *)pFVar4,pcVar7,(int)this_ptr_00,(int)filename,
                         (int)format_string,(int)info);
      if (iVar3 == 0) {
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"Unable to extract file:\n%s");
      }
      else {
        shape_edittool_cpp_CStrList_removeAt_FUN_004a2de0
                  ((CStrList *)auStack_8cc,(int)output_buffer);
      }
    }
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(in_stack_00000008,"..\\engine\\fileio.cpp",0xa4b);
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
            ((CPickList *)auStack_8c4,0,in_stack_ffffef08,in_stack_ffffef0c,in_stack_ffffef10,
             in_stack_ffffef14,in_stack_ffffef18);
  engine_pod_cpp_CPodFile_dtor_FUN_0054f610((CPodFile *)&stack0xffffef14);
  return;
}
