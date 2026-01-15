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
  int iVar4;
  tm *ptVar5;
  uint unaff_EBX;
  char *output_buffer;
  uint unaff_ESI;
  time_t *ptVar6;
  time_t *ptVar7;
  char *pcVar8;
  time_t *ptVar9;
  SFoundFileInfo *pSVar10;
  byte bVar11;
  time_t atStackY_30f4 [2034];
  CFileManager *source_file;
  FILE *dest_filename;
  CPickList *this_ptr_00;
  int file_offset;
  CPodFile *this_ptr_01;
  SFoundFileInfo *info;
  uint in_stack_ffffeef8;
  uint in_stack_ffffeefc;
  uint in_stack_ffffef00;
  int local_cf8;
  CPodDirectoryEntry *local_cf4;
  SFoundFileInfo local_cdc;
  CPickList local_8dc;
  SFoundFileInfo local_534;
  char local_320 [256];
  char local_220 [256];
  char local_120 [256];
  char *local_20;
  time_t local_1c [4];
  FILE *local_c;
  
  bVar11 = 0;
  bVar2 = shape_edittool_cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420
                    (g_CEditorToolsPtr,"Select POD file to extract",true,local_120);
  if (CONCAT31 /* combine 2-byte values */(extraout_var,bVar2) == 0) {
    return;
  }
  engine_pod_cpp_CPodFile_ctor_FUN_0054f5a0((CPodFile *)&stack0xffffeef8);
  iVar3 = engine_pod_cpp_CPodFile_mountFromFile_FUN_0054f650((CPodFile *)&stack0xffffeef8,local_120)
  ;
  if (iVar3 == 0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Can't mount %s");
    engine_pod_cpp_CPodFile_dtor_FUN_0054f610((CPodFile *)&stack0xffffeef8);
    return;
  }
  local_c = shape_memdbg_cpp_openFile_FUN_0050f7a0
                      (&stack0xffffeefc,(char *)0x0,"rb","..\\engine\\fileio.cpp",0xa00
                      );
  if (local_c == (FILE *)0x0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Can't open %s");
    engine_pod_cpp_CPodFile_dtor_FUN_0054f610((CPodFile *)&stack0xffffeef8);
    return;
  }
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_8dc);
  iVar3 = 0;
  if (0 < local_cf8) {
    do {
      crt_stdio_c_sprintf_FUN_005fdbd0(local_120,"%s\t%d");
      shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_8dc.base_strlist,local_120);
      iVar3 = iVar3 + 1;
    } while (iVar3 < local_cf8);
  }
  output_buffer = (char *)0xffffffff;
  while (0 < local_8dc.base_strlist.item_count) {
    if (local_8dc.base_strlist.item_count <= (int)output_buffer) {
      output_buffer = (char *)(local_8dc.base_strlist.item_count + -1);
    }
    output_buffer =
         (char *)shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                           (&local_8dc,"Select file to extract",(int)output_buffer,0);
    if ((int)output_buffer < 0) break;
    this_ptr_00 = &local_8dc;
    shape_edittool_cpp_CStrList_getFieldAt_FUN_004a2f80
              (&this_ptr_00->base_strlist,(int)local_120,output_buffer,0);
    this_ptr_01 = (CPodFile *)&stack0xffffeef8;
    file_offset = 0x4b7851;
    iVar3 = engine_pod_cpp_CPodFile_findFileIndex_FUN_00550140(this_ptr_01,local_120);
    if (iVar3 < 0) {
      g_CurrentFilename = "..\\engine\\fileio.cpp";
      g_CurrentLineNumber = 0xa20;
      this_ptr_01 = (CPodFile *)0x4b7a8d;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Hell froze finding file in pod!");
    }
    ptVar6 = (time_t *)((int)(local_cf4 + iVar3) + (uint)bVar11 * -8 + 4);
    local_20 = (char *)local_cf4[iVar3].name_or_offset;
    ptVar9 = local_1c + (uint)bVar11 * -2 + (uint)bVar11 * -2 + 1;
    ptVar7 = ptVar6 + (uint)bVar11 * -2 + 1;
    local_1c[(uint)bVar11 * -2] = *ptVar6;
    *ptVar9 = *ptVar7;
    ptVar9[(uint)bVar11 * -2 + 1] = ptVar7[(uint)bVar11 * -2 + 1];
    (ptVar9 + (uint)bVar11 * -2 + 1)[(uint)bVar11 * -2 + 1] =
         (ptVar7 + (uint)bVar11 * -2 + 1)[(uint)bVar11 * -2 + 1];
    info = &local_534;
    pcVar8 = local_20;
    pSVar10 = info;
    do {
      cVar1 = *pcVar8;
      pSVar10->found_path[0] = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar8[1];
      pcVar8 = pcVar8 + 2;
      pSVar10->found_path[1] = cVar1;
      pSVar10 = (SFoundFileInfo *)(pSVar10->found_path + 2);
    } while (cVar1 != '\0');
    iVar3 = 1;
    if (this_ptr->operation_mode != 0) {
      info = &local_534;
      this_ptr_01 = (CPodFile *)0x4b78be;
      iVar4 = engine_dosio_c_findFileNormally_FUN_004817c0(info);
      if (iVar4 != 0) {
        ptVar5 = crt_time_c_localtime_FUN_00600288((time_t *)&local_534.timestamp);
        crt_time_c_strftime_FUN_006002d4(local_320,0x100,"%A, %B, %d, %Y, %I:%M:%S %p",ptVar5);
        ptVar5 = crt_time_c_localtime_FUN_00600288(local_1c + 2);
        crt_time_c_strftime_FUN_006002d4(local_220,0x100,"%A, %B, %d, %Y, %I:%M:%S %p",ptVar5);
        this_ptr_00 = (CPickList *)local_534.file_size;
        crt_stdio_c_sprintf_FUN_005fdbd0
                  (local_cdc.found_path,"%s already exists on disk.\n\nWould you like to replace the existing file\n\n%d bytes\nmodified on %s\n\nwith this one?\n\n%d bytes\nmodified on %s\n",local_534.target_path);
        info = &local_cdc;
        file_offset = 0x4b7970;
        this_ptr_01 = (CPodFile *)g_CEditorToolsPtr;
        iVar3 = shape_edittool_cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
                          (g_CEditorToolsPtr,info->found_path);
      }
    }
    if (iVar3 != 0) {
      ptVar7 = (time_t *)(&stack0xffffeee4 + (uint)bVar11 * -8 + (uint)bVar11 * -8);
      ptVar6 = local_1c + (uint)bVar11 * -2 + (uint)bVar11 * -2 + 1;
      *(time_t *)(&stack0xffffeee0 + (uint)bVar11 * -8) = local_1c[(uint)bVar11 * -2];
      source_file = this_ptr;
      dest_filename = local_c;
      pcVar8 = local_20;
      *ptVar7 = *ptVar6;
      ptVar7[(uint)bVar11 * -2 + 1] = ptVar6[(uint)bVar11 * -2 + 1];
      (ptVar7 + (uint)bVar11 * -2 + 1)[(uint)bVar11 * -2 + 1] =
           (ptVar6 + (uint)bVar11 * -2 + 1)[(uint)bVar11 * -2 + 1];
      iVar3 = engine_fileio_cpp_extractFileWithTimestamp_FUN_004b7d50
                        ((FILE *)source_file,(char *)dest_filename,pcVar8,(int)this_ptr_00,
                         file_offset,(int)this_ptr_01,(int)info);
      if (iVar3 == 0) {
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"Unable to extract file:\n%s");
      }
      else {
        shape_edittool_cpp_CStrList_removeAt_FUN_004a2de0
                  (&local_8dc.base_strlist,(int)output_buffer);
      }
    }
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_c,"..\\engine\\fileio.cpp",0xa4b);
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
            (&local_8dc,0,unaff_EBX,unaff_ESI,in_stack_ffffeef8,in_stack_ffffeefc,in_stack_ffffef00)
  ;
  engine_pod_cpp_CPodFile_dtor_FUN_0054f610((CPodFile *)&stack0xffffeef8);
  return;
}
