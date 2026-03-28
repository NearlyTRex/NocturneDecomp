// Name: engine_fileio.cpp_CFileManager_crossReferencePodDuplicates_FUN_004b9f40
// Address: 004b9f40
// Address Range: [[004b9f40, 004ba4ec]]
// Convention: __cdecl
// Signature: void __cdecl engine_fileio_cpp_CFileManager_crossReferencePodDuplicates_FUN_004b9f40(CFileManager *this_ptr,char *pod_filename)

#include "nocturne.h"

void __cdecl engine_fileio_cpp_CFileManager_crossReferencePodDuplicates_FUN_004b9f40(CFileManager *this_ptr,char *pod_filename)

{
  char cVar2;
  bool bVar3;
  int iVar5;
  void *pvVar2;
  CPodFile *object_ptr;
  char *pcVar8;
  int iVar3;
  void *pvVar9;
  int iVar10;
  int iVar4;
  CPodFile *this_ptr_00;
  CPodFile *pCVar5;
  char *pcVar6;
  char *pcVar7;
  CPickList local_4fc;
  char local_154 [260];
  CStrList local_50;
  CPodFile *local_40;
  CPodFile *local_3c;
  int local_38;
  int local_34;
  char *local_30;
  int local_2c;
  int local_28;
  CPodFile *local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  WatcomTypeInfo *type_info;
  char cVar1;
  
  pcVar8 = g_DirectoryBufferTemplate;
  pcVar6 = local_154;
  for (iVar4 = 0x41; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(uint *)pcVar6 = *(uint *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar6 = pcVar6 + 4;
  }
  if (pod_filename == (char *)0x0) {
    _getcwd(local_154,0x104);
  }
  else {
    pcVar7 = local_154;
    do {
      cVar1 = *pod_filename;
      *pcVar7 = cVar1;
      if (cVar1 == '\0') break;
      cVar2 = pod_filename[1];
      pod_filename = pod_filename + 2;
      pcVar7[1] = cVar2;
      pcVar7 = pcVar7 + 2;
    } while (cVar2 != '\0');
  }
  iVar5 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                    (g_CEditorToolsPtr,"Enter directory containing PODS to cross reference for duplicates",local_154,0x104,1);
  if (iVar5 == 0) {
    return;
  }
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Scanning pods...");
  shape_edittool_cpp_CStrList_ctor_FUN_004a2a20(&local_50);
  shape_edittool_cpp_CStrList_populateWithFullPaths_FUN_004a39e0(&local_50,local_154,"*.pod")
  ;
  if (local_50.item_count < 1) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"No POD files found in %s",local_154);
    shape_edittool_cpp_CStrList_dtor_FUN_004a2a40(&local_50,0);
    return;
  }
  type_info = &g_CPodFileTypeInfo;
  iVar5 = local_50.item_count;
  pvVar2 = shape_memdbg_cpp_debugAllocTracked_FUN_0050f1f0
                     (local_50.item_count * 0x42c + 4,"..\\engine\\fileio.cpp",0xe36);
  object_ptr = __vec_new(pvVar2,iVar5,type_info);
  if (object_ptr == (CPodFile *)0x0) {
    g_CurrentFilename = "..\\engine\\fileio.cpp";
    g_CurrentLineNumber = 0xe37;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory");
  }
  shape_edittool_cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
            (g_CEditorToolsPtr,"Scanning pods...");
  iVar5 = 0;
  this_ptr_00 = object_ptr;
  if (0 < local_50.item_count) {
    do {
      shape_edittool_cpp_CEditorTools_updatePercentage_FUN_004a0530
                (g_CEditorToolsPtr,(float)iVar5,(float)local_50.item_count);
      pcVar8 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&local_50,iVar5);
      iVar3 = engine_pod_cpp_CPodFile_mountFromFile_FUN_0054f650(this_ptr_00,pcVar8);
      if (iVar3 == 0) {
        shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
        pcVar8 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&local_50,iVar5);
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"Can't mount %s",pcVar8);
        g_CurrentDebugFilename = "..\\engine\\fileio.cpp";
        g_CurrentDebugLine = 0xe3f;
        pvVar9 = __vec_delete(object_ptr,&g_CPodFileTypeInfo);
        shape_memdbg_cpp_free_FUN_005fe659(pvVar9);
        shape_edittool_cpp_CStrList_dtor_FUN_004a2a40(&local_50,0);
        return;
      }
      iVar5 = iVar5 + 1;
      this_ptr_00 = this_ptr_00 + 1;
    } while (iVar5 < local_50.item_count);
  }
  shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_4fc);
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Finding duplicates...");
  local_1c = 0;
  local_40 = object_ptr;
  if (0 < local_50.item_count) {
    do {
      local_38 = 0;
      if (0 < local_40->file_count) {
        local_34 = 0;
        do {
          iVar5 = 0;
          bVar3 = true;
          pcVar8 = *(char **)((int)&local_40->directory_entries->name + local_34);
          pCVar5 = object_ptr;
          if (0 < local_50.item_count) {
            do {
              if ((iVar5 != local_1c) &&
                 (iVar10 = engine_pod_cpp_CPodFile_findFileIndex_FUN_00550140(pCVar5,pcVar8),
                 -1 < iVar10)) {
                if (iVar5 < local_1c) break;
                if (bVar3) {
                  shape_edittool_cpp_CStrList_add_FUN_004a2b80
                            (&local_4fc.base,&s_EmptyChar_00628c6a);
                  _sprintf
                            (local_154,"%s\t%s\t%08X",pcVar8,local_40->filename,
                             *(uint *)((int)&local_40->directory_entries->checksum + local_34)
                            );
                  shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_4fc.base,local_154);
                  bVar3 = false;
                }
                _sprintf
                          (local_154,"\t%s\t%08X",pCVar5->filename,
                           pCVar5->directory_entries[iVar10].checksum);
                shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_4fc.base,local_154);
              }
              iVar5 = iVar5 + 1;
              pCVar5 = pCVar5 + 1;
            } while (iVar5 < local_50.item_count);
          }
          local_34 = local_34 + 0x14;
          local_38 = local_38 + 1;
        } while (local_38 < local_40->file_count);
      }
      local_1c = local_1c + 1;
      local_40 = local_40 + 1;
    } while (local_1c < local_50.item_count);
  }
  g_CurrentDebugFilename = "..\\engine\\fileio.cpp";
  g_CurrentDebugLine = 0xe63;
  pvVar9 = __vec_delete(object_ptr,&g_CPodFileTypeInfo);
  shape_memdbg_cpp_free_FUN_005fe659(pvVar9);
  if (0 < local_4fc.base.item_count) {
    shape_edittool_cpp_CPickList_setSelectedResult_FUN_004a3e10(&local_4fc,1);
    shape_edittool_cpp_CPickList_setCancelButtonText_FUN_004a3d90(&local_4fc,(char *)0x0);
    shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
              (&local_4fc,"List of duplicates",-1,0);
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_4fc,0);
    shape_edittool_cpp_CStrList_dtor_FUN_004a2a40(&local_50,0);
    return;
  }
  shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
            (g_CEditorToolsPtr,"No duplicates found.");
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_4fc,0);
  shape_edittool_cpp_CStrList_dtor_FUN_004a2a40(&local_50,0);
  return;
}
