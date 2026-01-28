// Name: engine_fileio.cpp_CFileManager_compareLocalVsPod_FUN_004b82a0
// Address: 004b82a0
// Address Range: [[004b82a0, 004b8689]]
// Convention: __cdecl
// Signature: void __cdecl engine_fileio_cpp_CFileManager_compareLocalVsPod_FUN_004b82a0 (CFileManager *this_ptr,char *pod_filename)

#include "nocturne.h"

void __cdecl
engine_fileio_cpp_CFileManager_compareLocalVsPod_FUN_004b82a0
          (CFileManager *this_ptr,char *pod_filename)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint unaff_EBX;
  int iVar4;
  char *pcVar5;
  SFoundFileInfo *pSVar6;
  uint in_stack_ffffedf8;
  uint in_stack_ffffedfc;
  uint in_stack_ffffee00;
  uint in_stack_ffffee04;
  CPodFile local_a08;
  CPickList local_5dc;
  SFoundFileInfo local_234;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  pcVar5 = &stack0xffffedf8;
  if (pod_filename == (char *)0x0) {
    iVar2 = shape_edittool_cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420
                      (g_CEditorToolsPtr,"Select POD file to compare with local files",0x62822a,
                       &stack0xffffedf8);
    if (iVar2 == 0) {
      return;
    }
  }
  else {
    do {
      cVar1 = *pod_filename;
      *pcVar5 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pod_filename[1];
      pod_filename = pod_filename + 2;
      pcVar5[1] = cVar1;
      pcVar5 = pcVar5 + 2;
    } while (cVar1 != '\0');
  }
  engine_pod_cpp_CPodFile_ctor_FUN_0054f5a0(&local_a08);
  iVar2 = engine_pod_cpp_CPodFile_mountFromFile_FUN_0054f650(&local_a08,&stack0xffffedf8);
  if (iVar2 == 0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Can't mount %s to compare!",&stack0xffffedf8);
    engine_pod_cpp_CPodFile_dtor_FUN_0054f610(&local_a08);
    return;
  }
  iVar2 = 0;
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_5dc);
  iVar4 = 0;
  local_14 = 0;
  local_20 = 0;
  local_10 = 0;
  local_18 = 0;
  local_1c = 0;
  if (0 < local_a08.file_count) {
    do {
      pSVar6 = &local_234;
      pcVar5 = *(char **)((int)&(local_a08.directory_entries)->name_or_offset + iVar2);
      do {
        cVar1 = *pcVar5;
        pSVar6->found_path[0] = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar5[1];
        pcVar5 = pcVar5 + 2;
        pSVar6->found_path[1] = cVar1;
        pSVar6 = (SFoundFileInfo *)(pSVar6->found_path + 2);
      } while (cVar1 != '\0');
      iVar3 = engine_dosio_c_findFileNormally_FUN_004817c0(&local_234);
      if (iVar3 == 0) {
        crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffedf8,"%s\tNo local file",&local_234);
        shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_5dc.base,&stack0xffffedf8);
        local_20 = local_20 + 1;
      }
      else if (*(int *)((int)&(local_a08.directory_entries)->timestamp + iVar2) + 2U <
               local_234.timestamp) {
        crt_stdio_c_sprintf_FUN_005fdbd0
                  (&stack0xffffedf8,"%s\tLocal file is newer",&local_234);
        shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_5dc.base,&stack0xffffedf8);
        local_10 = local_10 + 1;
      }
      else if (local_234.timestamp <
               *(int *)((int)&(local_a08.directory_entries)->timestamp + iVar2) - 2U) {
        crt_stdio_c_sprintf_FUN_005fdbd0
                  (&stack0xffffedf8,"%s\tLocal file is older",&local_234);
        shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_5dc.base,&stack0xffffedf8);
        local_18 = local_18 + 1;
      }
      else if (local_234.file_size == *(uint *)((int)&(local_a08.directory_entries)->size + iVar2))
      {
        crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffedf8,"%s\tsame",&local_234);
        shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_5dc.base,&stack0xffffedf8);
        local_14 = local_14 + 1;
      }
      else {
        crt_stdio_c_sprintf_FUN_005fdbd0
                  (&stack0xffffedf8,"%s\tLocal file has different size",&local_234);
        shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_5dc.base,&stack0xffffedf8);
        local_1c = local_1c + 1;
      }
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + 0x14;
    } while (iVar4 < local_a08.file_count);
  }
  iVar2 = crt_stdio_c_sprintf_FUN_005fdbd0
                    (&stack0xffffedf8,"Comparing files in:\n%s\n",local_a08.filename);
  iVar4 = crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffedf8 + iVar2,"-----------------------\n");
  pcVar5 = &stack0xffffedf8 + iVar2 + iVar4;
  if (0 < local_14) {
    iVar2 = crt_stdio_c_sprintf_FUN_005fdbd0(pcVar5,"%d files in sync with local files\n",local_14);
    pcVar5 = pcVar5 + iVar2;
  }
  if (0 < local_20) {
    iVar2 = crt_stdio_c_sprintf_FUN_005fdbd0(pcVar5,"%d files in pod don't exist locally\n",local_20);
    pcVar5 = pcVar5 + iVar2;
  }
  if (0 < local_10) {
    iVar2 = crt_stdio_c_sprintf_FUN_005fdbd0(pcVar5,"%d files with local file newer than file in pod\n",local_10);
    pcVar5 = pcVar5 + iVar2;
  }
  if (0 < local_18) {
    iVar2 = crt_stdio_c_sprintf_FUN_005fdbd0(pcVar5,"%d files with local file older than file in pod\n",local_18);
    pcVar5 = pcVar5 + iVar2;
  }
  if (0 < local_1c) {
    iVar2 = crt_stdio_c_sprintf_FUN_005fdbd0(pcVar5,"%d sizeMismatch\n",local_1c);
    pcVar5 = pcVar5 + iVar2;
  }
  iVar2 = crt_stdio_c_sprintf_FUN_005fdbd0(pcVar5,"-----------------------\n");
  crt_stdio_c_sprintf_FUN_005fdbd0
            (pcVar5 + iVar2,"%d total files in pod",local_a08.file_count);
  shape_edittool_cpp_CPickList_setSelectedResult_FUN_004a3e10(&local_5dc,1);
  shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
            (&local_5dc,&stack0xffffedf8,-1,0);
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
            (&local_5dc,0,unaff_EBX,in_stack_ffffedf8,in_stack_ffffedfc,in_stack_ffffee00,
             in_stack_ffffee04);
  engine_pod_cpp_CPodFile_dtor_FUN_0054f610(&local_a08);
  return;
}
