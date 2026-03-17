// Name: engine_fileio.cpp_CFileManager_extractFilesToDirectory_FUN_004b76d0
// Address: 004b76d0
// Address Range: [[004b76d0, 004b7ab5]]
// Convention: __cdecl
// Signature: void __cdecl engine_fileio_cpp_CFileManager_extractFilesToDirectory_FUN_004b76d0(CFileManager *this_ptr)

#include "nocturne.h"

void __cdecl engine_fileio_cpp_CFileManager_extractFilesToDirectory_FUN_004b76d0(CFileManager *this_ptr)

{
  char cVar2;
  int iVar2;
  int iVar4;
  _FILE *file_ptr;
  int iVar3;
  _tm *p_Var4;
  _tm *time_ptr;
  char *output_buffer;
  time_t *ptVar5;
  time_t *ptVar6;
  char *pcVar7;
  time_t *ptVar7;
  time_t *ptVar8;
  SFoundFileInfo *pSVar9;
  time_t *ptVar9;
  time_t *ptVar10;
  byte bVar10;
  time_t atStackY_30f4 [2034];
  CFileManager *this_ptr_03;
  _FILE *source_file_00;
  char *dest_filename;
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
  CFileManager *this_ptr_00;
  char cVar1;
  SFoundFileInfo *info;
  int file_offset;
  CPodFile *this_ptr_02;
  _FILE *source_file;
  CPickList *this_ptr_01;
  
  bVar10 = 0;
  iVar2 = shape_edittool_cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420
                    (g_CEditorToolsPtr,"Select POD file to extract","*.pod",local_120,
                     0);
  if (iVar2 == 0) {
    return;
  }
  engine_pod_cpp_CPodFile_ctor_FUN_0054f5a0(&local_1108);
  iVar4 = engine_pod_cpp_CPodFile_mountFromFile_FUN_0054f650(&local_1108,local_120);
  if (iVar4 == 0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Can't mount %s");
    engine_pod_cpp_CPodFile_dtor_FUN_0054f610(&local_1108,0);
    return;
  }
  file_ptr = shape_memdbg_cpp_openFile_FUN_0050f7a0
                       (local_1108.filename,(char *)0x0,"rb","..\\engine\\fileio.cpp",
                        0xa00);
  if (file_ptr == (_FILE *)0x0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Can't open %s");
    engine_pod_cpp_CPodFile_dtor_FUN_0054f610(&local_1108,0);
    return;
  }
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_8dc);
  iVar4 = 0;
  if (0 < local_1108.file_count) {
    do {
      _sprintf(local_120,"%s\t%d");
      shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_8dc.base,local_120);
      iVar4 = iVar4 + 1;
    } while (iVar4 < local_1108.file_count);
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
              (&this_ptr_01->base,local_120,(int)output_buffer,0);
    this_ptr_02 = &local_1108;
    file_offset = 0x4b7851;
    iVar4 = engine_pod_cpp_CPodFile_findFileIndex_FUN_00550140(this_ptr_02,local_120);
    this_ptr_00 = (CFileManager *)this_ptr_01;
    source_file = (_FILE *)file_offset;
    if (iVar4 < 0) {
      g_CurrentFilename = "..\\engine\\fileio.cpp";
      g_CurrentLineNumber = 0xa20;
      this_ptr_02 = (CPodFile *)0x4b7a8d;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Hell froze finding file in pod!");
      this_ptr_00 = (CFileManager *)this_ptr_01;
      source_file = (_FILE *)file_offset;
    }
    ptVar5 = (time_t *)((int)(local_1108.directory_entries + iVar4) + (uint)bVar10 * -8 + 4);
    dest_filename = local_1108.directory_entries[iVar4].name;
    ptVar8 = local_1c + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 1;
    ptVar6 = ptVar5 + (uint)bVar10 * -2 + 1;
    local_1c[(uint)bVar10 * -2] = *ptVar5;
    *ptVar8 = *ptVar6;
    ptVar8[(uint)bVar10 * -2 + 1] = ptVar6[(uint)bVar10 * -2 + 1];
    (ptVar8 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1] =
         (ptVar6 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
    info = &local_534;
    pcVar7 = dest_filename;
    pSVar9 = info;
    do {
      cVar1 = *pcVar7;
      pSVar9->found_path[0] = cVar1;
      if (cVar1 == '\0') break;
      cVar2 = pcVar7[1];
      pcVar7 = pcVar7 + 2;
      pSVar9->found_path[1] = cVar2;
      pSVar9 = (SFoundFileInfo *)(pSVar9->found_path + 2);
    } while (cVar2 != '\0');
    iVar4 = 1;
    if (this_ptr->operation_mode != 0) {
      info = &local_534;
      this_ptr_02 = (CPodFile *)0x4b78be;
      iVar3 = engine_dosio_c_findFileNormally_FUN_004817c0(info);
      if (iVar3 != 0) {
        p_Var4 = _localtime((time_t *)&local_534.timestamp);
        _strftime(local_320,0x100,"%A, %B, %d, %Y, %I:%M:%S %p",p_Var4);
        time_ptr = _localtime(local_1c + 2);
        _strftime(local_220,0x100,"%A, %B, %d, %Y, %I:%M:%S %p",time_ptr);
        this_ptr_00 = (CFileManager *)local_534.file_size;
        _sprintf
                  (local_cdc.found_path,"%s already exists on disk.\n\nWould you like to replace the existing file\n\n%d bytes\nmodified on %s\n\nwith this one?\n\n%d bytes\nmodified on %s\n",local_534.target_path);
        info = &local_cdc;
        source_file = (_FILE *)0x4b7970;
        this_ptr_02 = (CPodFile *)g_CEditorToolsPtr;
        iVar4 = shape_edittool_cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
                          (g_CEditorToolsPtr,info->found_path);
      }
    }
    if (iVar4 != 0) {
      ptVar9 = (time_t *)((int)&local_1108 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + -0x14);
      ptVar7 = local_1c + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 1;
      *(time_t *)((int)&local_1108 + (uint)bVar10 * -8 + -0x18) = local_1c[(uint)bVar10 * -2];
      ptVar10 = ptVar9 + (uint)bVar10 * -2 + 1;
      this_ptr_03 = this_ptr;
      source_file_00 = file_ptr;
      *ptVar9 = *ptVar7;
      *ptVar10 = ptVar7[(uint)bVar10 * -2 + 1];
      ptVar10[(uint)bVar10 * -2 + 1] = (ptVar7 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
      iVar4 = engine_fileio_cpp_CFileManager_extractFileWithTimestamp_FUN_004b7d50
                        (this_ptr_03,source_file_00,dest_filename,(int)this_ptr_00,(int)source_file,
                         (char *)this_ptr_02,(int)info);
      if (iVar4 == 0) {
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"Unable to extract file:\n%s");
      }
      else {
        shape_edittool_cpp_CStrList_removeAt_FUN_004a2de0(&local_8dc.base,(int)output_buffer);
      }
    }
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_ptr,"..\\engine\\fileio.cpp",0xa4b);
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_8dc,0);
  engine_pod_cpp_CPodFile_dtor_FUN_0054f610(&local_1108,0);
  return;
}
