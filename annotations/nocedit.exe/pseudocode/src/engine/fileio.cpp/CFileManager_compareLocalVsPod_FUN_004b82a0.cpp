// Name: engine_fileio.cpp_CFileManager_compareLocalVsPod_FUN_004b82a0
// Address: 004b82a0
// Address Range: [[004b82a0, 004b8689]]
// Convention: __cdecl
// Signature: void engine_fileio.cpp_CFileManager_compareLocalVsPod_FUN_004b82a0(CFileManager * this_ptr, char * pod_filename)

#include "nocturne.h"

void __cdecl
engine_fileio_cpp_CFileManager_compareLocalVsPod_FUN_004b82a0
          (CFileManager *this_ptr,char *pod_filename)

{
  char cVar1;
  bool bVar2;
  undefined3 extraout_var;
  int iVar3;
  int iVar4;
  int iVar5;
  BADSPACEBASE *in_ESP;
  int iVar6;
  char *pcVar7;
  SFoundFileInfo *pSVar8;
  int in_stack_0000000c;
  uint in_stack_ffffee20;
  uint in_stack_ffffee24;
  uint in_stack_ffffee28;
  uint in_stack_ffffee2c;
  uint in_stack_ffffee30;
  byte local_a04 [12];
  byte auStack_9f8 [1036];
  char *pcStack_5ec;
  uint uStack_5e8;
  CPodDirectoryEntry *pCStack_5e4;
  byte auStack_5d0 [28];
  byte auStack_5b4 [912];
  SFoundFileInfo SStack_224;
  int local_10;
  int iVar9;
  
  pcVar7 = &stack0xffffedf8;
  if (pod_filename == (char *)0x0) {
    bVar2 = shape_edittool_cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420
                      (g_CEditorToolsPtr,"Select POD file to compare with local files",true,&stack0xffffedf8);
    if (CONCAT31 /* combine 2-byte values */(extraout_var,bVar2) == 0) {
      return;
    }
  }
  else {
    do {
      cVar1 = *pod_filename;
      *pcVar7 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pod_filename[1];
      pod_filename = pod_filename + 2;
      pcVar7[1] = cVar1;
      pcVar7 = pcVar7 + 2;
    } while (cVar1 != '\0');
  }
  engine_pod_cpp_CPodFile_ctor_FUN_0054f5a0((CPodFile *)local_a04);
  iVar3 = engine_pod_cpp_CPodFile_mountFromFile_FUN_0054f650
                    ((CPodFile *)(local_a04 + 4),&stack0xffffee00);
  if (iVar3 == 0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Can't mount %s to compare!");
    engine_pod_cpp_CPodFile_dtor_FUN_0054f610((CPodFile *)auStack_9f8);
    return;
  }
  iVar5 = 0;
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)auStack_5d0);
  iVar6 = 0;
  iVar9 = 0;
  local_10 = 0;
  iVar3 = 0;
  if (0 < (int)uStack_5e8) {
    do {
      pSVar8 = &SStack_224;
      pcVar7 = *(char **)((int)&pCStack_5e4->name_or_offset + iVar5);
      do {
        cVar1 = *pcVar7;
        pSVar8->found_path[0] = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar7[1];
        pcVar7 = pcVar7 + 2;
        pSVar8->found_path[1] = cVar1;
        pSVar8 = (SFoundFileInfo *)(pSVar8->found_path + 2);
      } while (cVar1 != '\0');
      iVar4 = engine_dosio_c_findFileNormally_FUN_004817c0(&SStack_224);
      if (iVar4 == 0) {
        crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffee00,"%s\tNo local file");
        shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)auStack_5d0,&stack0xffffee04);
        local_10 = local_10 + 1;
      }
      else if (*(int *)(pcStack_5ec + iVar5 + 0xc) + 2U < SStack_224.file_size) {
        crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffee00,"%s\tLocal file is newer");
        shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)auStack_5d0,&stack0xffffee04);
        iVar3 = iVar3 + 1;
      }
      else if (SStack_224.file_size < *(int *)(pcStack_5ec + iVar5 + 0xc) - 2U) {
        crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffee00,"%s\tLocal file is older");
        shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)auStack_5d0,&stack0xffffee04);
      }
      else if (SStack_224.target_path._252_4_ == *(int *)(pcStack_5ec + iVar5 + 4)) {
        crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffee00,"%s\tsame");
        shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)auStack_5d0,&stack0xffffee04);
        iVar9 = iVar9 + 1;
      }
      else {
        crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffee00,"%s\tLocal file has different size");
        shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)auStack_5d0,&stack0xffffee04);
      }
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 0x14;
    } while (iVar6 < (int)uStack_5e8);
  }
  iVar5 = crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffee08,"Comparing files in:\n%s\n");
  iVar6 = crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffee0c + iVar5,"-----------------------\n");
  pcVar7 = &stack0xffffee0c + iVar5 + iVar6;
  if (0 < (int)this_ptr) {
    iVar5 = crt_stdio_c_sprintf_FUN_005fdbd0(pcVar7,"%d files in sync with local files\n");
    pcVar7 = pcVar7 + iVar5;
  }
  if (0 < iVar9) {
    iVar9 = crt_stdio_c_sprintf_FUN_005fdbd0(pcVar7,"%d files in pod don't exist locally\n");
    pcVar7 = pcVar7 + iVar9;
  }
  if (0 < in_stack_0000000c) {
    iVar9 = crt_stdio_c_sprintf_FUN_005fdbd0(pcVar7,"%d files with local file newer than file in pod\n");
    pcVar7 = pcVar7 + iVar9;
  }
  if (0 < (int)this_ptr) {
    iVar9 = crt_stdio_c_sprintf_FUN_005fdbd0(pcVar7,"%d files with local file older than file in pod\n");
    pcVar7 = pcVar7 + iVar9;
  }
  if (0 < iVar3) {
    iVar3 = crt_stdio_c_sprintf_FUN_005fdbd0(pcVar7,"%d sizeMismatch\n");
    pcVar7 = pcVar7 + iVar3;
  }
  iVar3 = crt_stdio_c_sprintf_FUN_005fdbd0(pcVar7,"-----------------------\n");
  crt_stdio_c_sprintf_FUN_005fdbd0(pcVar7 + iVar3,"%d total files in pod");
  shape_edittool_cpp_CPickList_setSelectedResult_FUN_004a3e10((CPickList *)(auStack_5d0 + 0x18),1);
  shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
            ((CPickList *)auStack_5b4,&stack0xffffee20,-1,0);
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
            ((CPickList *)(auStack_5b4 + 4),0,in_stack_ffffee20,in_stack_ffffee24,in_stack_ffffee28,
             in_stack_ffffee2c,in_stack_ffffee30);
  engine_pod_cpp_CPodFile_dtor_FUN_0054f610((CPodFile *)(auStack_9f8 + 0x20));
  return;
}
