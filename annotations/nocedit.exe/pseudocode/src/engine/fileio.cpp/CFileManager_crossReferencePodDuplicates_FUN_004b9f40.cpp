// Name: engine_fileio.cpp_CFileManager_crossReferencePodDuplicates_FUN_004b9f40
// Address: 004b9f40
// Address Range: [[004b9f40, 004ba4ec]]
// Convention: __cdecl
// Signature: void __cdecl engine_fileio_cpp_CFileManager_crossReferencePodDuplicates_FUN_004b9f40 (CFileManager *this_ptr,char *pod_filename)

#include "nocturne.h"

void __cdecl
engine_fileio_cpp_CFileManager_crossReferencePodDuplicates_FUN_004b9f40
          (CFileManager *this_ptr,char *pod_filename)

{
  char cVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  CPodFile *pCVar5;
  char *pcVar6;
  char *pcVar7;
  WatcomTypeInfo *type_info;
  uint in_stack_fffffb04;
  uint in_stack_fffffb08;
  char **in_stack_fffffb0c;
  CStrList_vtable *in_stack_fffffb10;
  uint in_stack_fffffb14;
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
  
  pcVar7 = g_DirectoryBufferTemplate;
  pcVar6 = local_154;
  for (iVar4 = 0x41; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(uint *)pcVar6 = *(uint *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar6 = pcVar6 + 4;
  }
  if (pod_filename == (char *)0x0) {
    crt_io_c_getcwd_wrapper_FUN_00608d20(local_154,0x104);
  }
  else {
    pcVar7 = local_154;
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
  iVar4 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                    (g_CEditorToolsPtr,"Enter directory containing PODS to cross reference for duplicates",local_154,0x104,1);
  if (iVar4 == 0) {
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
    shape_edittool_cpp_CStrList_dtor_FUN_004a2a40(&local_50,0,in_stack_fffffb04);
    return;
  }
  type_info = &g_CPodFileTypeInfo;
  local_28 = local_50.item_count;
  pvVar2 = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                     (local_50.item_count * 0x42c + 4,"..\\engine\\fileio.cpp",0xe36);
  local_3c = crt_memory_c_constructTypedObjectArray_FUN_00601272
                       (pvVar2,local_50.item_count,type_info);
  if (local_3c == (CPodFile *)0x0) {
    g_CurrentFilename = "..\\engine\\fileio.cpp";
    g_CurrentLineNumber = 0xe37;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory");
  }
  shape_edittool_cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
            (g_CEditorToolsPtr,"Scanning pods...");
  iVar4 = 0;
  pCVar5 = local_3c;
  if (0 < local_28) {
    do {
      local_14 = iVar4;
      shape_edittool_cpp_CEditorTools_updatePercentage_FUN_004a0530
                (g_CEditorToolsPtr,(float)iVar4,(float)local_28);
      pcVar7 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&local_50,iVar4);
      iVar3 = engine_pod_cpp_CPodFile_mountFromFile_FUN_0054f650(pCVar5,pcVar7);
      if (iVar3 == 0) {
        shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
        pcVar7 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&local_50,iVar4);
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"Can't mount %s",pcVar7);
        g_CurrentDebugFilename = "..\\engine\\fileio.cpp";
        g_CurrentDebugLine = 0xe3f;
        pvVar2 = crt_memory_c_freeSingleInstance_FUN_005fe632(local_3c,&g_CPodFileTypeInfo);
        crt_memory_c_free_FUN_005fe659(pvVar2);
        shape_edittool_cpp_CStrList_dtor_FUN_004a2a40(&local_50,0,in_stack_fffffb04);
        return;
      }
      iVar4 = iVar4 + 1;
      pCVar5 = pCVar5 + 1;
    } while (iVar4 < local_28);
  }
  shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xfffffb04);
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Finding duplicates...");
  local_1c = 0;
  if (0 < local_28) {
    local_40 = local_3c;
    do {
      local_38 = 0;
      local_24 = local_40;
      if (0 < local_40->file_count) {
        local_30 = local_40->filename;
        local_34 = 0;
        do {
          iVar4 = 0;
          local_18 = 1;
          pcVar7 = *(char **)((int)&local_24->directory_entries->name_or_offset + local_34);
          if (0 < local_28) {
            local_2c = local_34;
            pCVar5 = local_3c;
            do {
              if ((iVar4 != local_1c) &&
                 (local_20 = engine_pod_cpp_CPodFile_findFileIndex_FUN_00550140(pCVar5,pcVar7),
                 -1 < local_20)) {
                if (iVar4 < local_1c) break;
                if (local_18 != 0) {
                  shape_edittool_cpp_CStrList_add_FUN_004a2b80
                            ((CStrList *)&stack0xfffffb04,&DAT_00628c6a);
                  crt_stdio_c_sprintf_FUN_005fdbd0
                            (local_154,"%s\t%s\t%08X",pcVar7,local_30,
                             *(uint *)((int)&local_24->directory_entries->checksum + local_2c)
                            );
                  shape_edittool_cpp_CStrList_add_FUN_004a2b80
                            ((CStrList *)&stack0xfffffb04,local_154);
                  local_18 = 0;
                }
                crt_stdio_c_sprintf_FUN_005fdbd0
                          (local_154,"\t%s\t%08X",pCVar5->filename,
                           pCVar5->directory_entries[local_20].checksum);
                shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffffb04,local_154)
                ;
              }
              iVar4 = iVar4 + 1;
              pCVar5 = pCVar5 + 1;
            } while (iVar4 < local_28);
          }
          local_34 = local_34 + 0x14;
          local_38 = local_38 + 1;
        } while (local_38 < local_24->file_count);
      }
      local_40 = local_40 + 1;
      local_1c = local_1c + 1;
    } while (local_1c < local_28);
  }
  g_CurrentDebugFilename = "..\\engine\\fileio.cpp";
  g_CurrentDebugLine = 0xe63;
  pvVar2 = crt_memory_c_freeSingleInstance_FUN_005fe632(local_3c,&g_CPodFileTypeInfo);
  crt_memory_c_free_FUN_005fe659(pvVar2);
  if (0 < (int)in_stack_fffffb04) {
    shape_edittool_cpp_CPickList_setSelectedResult_FUN_004a3e10((CPickList *)&stack0xfffffb04,1);
    shape_edittool_cpp_CPickList_setCancelButtonText_FUN_004a3d90
              ((CPickList *)&stack0xfffffb04,(char *)0x0);
    shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
              ((CPickList *)&stack0xfffffb04,"List of duplicates",-1,0);
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              ((CPickList *)&stack0xfffffb04,0,in_stack_fffffb04,in_stack_fffffb08,
               (uint)in_stack_fffffb0c,(uint)in_stack_fffffb10,in_stack_fffffb14);
    shape_edittool_cpp_CStrList_dtor_FUN_004a2a40(&local_50,0,in_stack_fffffb04);
    return;
  }
  shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
            (g_CEditorToolsPtr,"No duplicates found.");
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
            ((CPickList *)&stack0xfffffb04,0,in_stack_fffffb04,in_stack_fffffb08,
             (uint)in_stack_fffffb0c,(uint)in_stack_fffffb10,in_stack_fffffb14);
  shape_edittool_cpp_CStrList_dtor_FUN_004a2a40(&local_50,0,in_stack_fffffb04);
  return;
}
