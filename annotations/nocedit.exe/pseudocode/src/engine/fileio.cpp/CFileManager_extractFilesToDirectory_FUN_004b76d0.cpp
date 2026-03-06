// Name: engine_fileio.cpp_CFileManager_extractFilesToDirectory_FUN_004b76d0
// Address: 004b76d0
// Address Range: [[004b76d0, 004b7ab5]]
// Convention: __cdecl
// Signature: void __cdecl engine_fileio_cpp_CFileManager_extractFilesToDirectory_FUN_004b76d0(CFileManager *this_ptr)

#include "nocturne.h"

void __cdecl engine_fileio_cpp_CFileManager_extractFilesToDirectory_FUN_004b76d0(CFileManager *this_ptr)

{
  char cVar1;
  int iVar2;
  int iVar3;
  _tm *p_Var4;
  char *output_buffer;
  time_t *ptVar5;
  time_t *ptVar6;
  char *pcVar7;
  time_t *ptVar8;
  SFoundFileInfo *pSVar9;
  byte bVar10;
  time_t atStackY_30f4 [2034];
  CFileManager *this_ptr_00;
  _FILE *source_file;
  CPickList *this_ptr_01;
  int file_offset;
  CPodFile *this_ptr_02;
  SFoundFileInfo *info;
  CPodFile local_1108;
  SFoundFileInfo local_cdc;
  CPickList local_8dc;
  SFoundFileInfo local_534;
  char local_320 [256];
  char local_220 [256];
  char local_120 [256];
  char *local_20;
  time_t local_1c [4];
  _FILE *local_c;
  
  bVar10 = 0;
  iVar2 = shape_edittool_cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420
                    (g_CEditorToolsPtr,"Select POD file to extract",0x627e16,local_120);
  if (iVar2 == 0) {
    return;
  }
  engine_pod_cpp_CPodFile_ctor_FUN_0054f5a0(&local_1108);
  iVar2 = engine_pod_cpp_CPodFile_mountFromFile_FUN_0054f650(&local_1108,local_120);
  if (iVar2 == 0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Can't mount %s");
    engine_pod_cpp_CPodFile_dtor_FUN_0054f610(&local_1108,0);
    return;
  }
  local_c = shape_memdbg_cpp_openFile_FUN_0050f7a0
                      (local_1108.filename,(char *)0x0,"rb","..\\engine\\fileio.cpp",
                       0xa00);
  if (local_c == (_FILE *)0x0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Can't open %s");
    engine_pod_cpp_CPodFile_dtor_FUN_0054f610(&local_1108,0);
    return;
  }
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_8dc);
  iVar2 = 0;
  if (0 < local_1108.file_count) {
    do {
      _sprintf(local_120,"%s\t%d");
      shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_8dc.base,local_120);
      iVar2 = iVar2 + 1;
    } while (iVar2 < local_1108.file_count);
  }
  output_buffer = (char *)0xffffffff;
  while (0 < local_8dc.base.item_count) {
    if (local_8dc.base.item_count <= (int)output_buffer) {
      output_buffer = (char *)(local_8dc.base.item_count + -1);
    }
    output_buffer =
         (char *)shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                           (&local_8dc,"Select file to extract",(int)output_buffer,0);
    if ((int)output_buffer < 0) break;
    this_ptr_01 = &local_8dc;
    shape_edittool_cpp_CStrList_getFieldAt_FUN_004a2f80
              (&this_ptr_01->base,(int)local_120,output_buffer,0);
    this_ptr_02 = &local_1108;
    file_offset = 0x4b7851;
    iVar2 = engine_pod_cpp_CPodFile_findFileIndex_FUN_00550140(this_ptr_02,local_120);
    if (iVar2 < 0) {
      g_CurrentFilename = "..\\engine\\fileio.cpp";
      g_CurrentLineNumber = 0xa20;
      this_ptr_02 = (CPodFile *)0x4b7a8d;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Hell froze finding file in pod!");
    }
    ptVar5 = (time_t *)((int)(local_1108.directory_entries + iVar2) + (uint)bVar10 * -8 + 4);
    local_20 = local_1108.directory_entries[iVar2].name;
    ptVar8 = local_1c + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 1;
    ptVar6 = ptVar5 + (uint)bVar10 * -2 + 1;
    local_1c[(uint)bVar10 * -2] = *ptVar5;
    *ptVar8 = *ptVar6;
    ptVar8[(uint)bVar10 * -2 + 1] = ptVar6[(uint)bVar10 * -2 + 1];
    (ptVar8 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1] =
         (ptVar6 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
    info = &local_534;
    pcVar7 = local_20;
    pSVar9 = info;
    do {
      cVar1 = *pcVar7;
      pSVar9->found_path[0] = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar7[1];
      pcVar7 = pcVar7 + 2;
      pSVar9->found_path[1] = cVar1;
      pSVar9 = (SFoundFileInfo *)(pSVar9->found_path + 2);
    } while (cVar1 != '\0');
    iVar2 = 1;
    if (this_ptr->operation_mode != 0) {
      info = &local_534;
      this_ptr_02 = (CPodFile *)0x4b78be;
      iVar3 = engine_dosio_c_findFileNormally_FUN_004817c0(info);
      if (iVar3 != 0) {
        p_Var4 = _localtime((time_t *)&local_534.timestamp);
        _strftime(local_320,0x100,"%A, %B, %d, %Y, %I:%M:%S %p",p_Var4);
        p_Var4 = _localtime(local_1c + 2);
        _strftime(local_220,0x100,"%A, %B, %d, %Y, %I:%M:%S %p",p_Var4);
        this_ptr_01 = (CPickList *)local_534.file_size;
        _sprintf
                  (local_cdc.found_path,"%s already exists on disk.\n\nWould you like to replace the existing file\n\n%d bytes\nmodified on %s\n\nwith this one?\n\n%d bytes\nmodified on %s\n",local_534.target_path);
        info = &local_cdc;
        file_offset = 0x4b7970;
        this_ptr_02 = (CPodFile *)g_CEditorToolsPtr;
        iVar2 = shape_edittool_cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
                          (g_CEditorToolsPtr,info->found_path);
      }
    }
    if (iVar2 != 0) {
      ptVar6 = (time_t *)((int)&local_1108 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + -0x14);
      ptVar5 = local_1c + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 1;
      *(time_t *)((int)&local_1108 + (uint)bVar10 * -8 + -0x18) = local_1c[(uint)bVar10 * -2];
      ptVar8 = ptVar6 + (uint)bVar10 * -2 + 1;
      this_ptr_00 = this_ptr;
      source_file = local_c;
      pcVar7 = local_20;
      *ptVar6 = *ptVar5;
      *ptVar8 = ptVar5[(uint)bVar10 * -2 + 1];
      ptVar8[(uint)bVar10 * -2 + 1] = (ptVar5 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
      iVar2 = engine_fileio_cpp_CFileManager_extractFileWithTimestamp_FUN_004b7d50
                        (this_ptr_00,source_file,pcVar7,(int)this_ptr_01,file_offset,
                         (char *)this_ptr_02,(int)info);
      if (iVar2 == 0) {
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"Unable to extract file:\n%s");
      }
      else {
        shape_edittool_cpp_CStrList_removeAt_FUN_004a2de0(&local_8dc.base,(int)output_buffer);
      }
    }
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_c,"..\\engine\\fileio.cpp",0xa4b);
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_8dc,0);
  engine_pod_cpp_CPodFile_dtor_FUN_0054f610(&local_1108,0);
  return;
}
