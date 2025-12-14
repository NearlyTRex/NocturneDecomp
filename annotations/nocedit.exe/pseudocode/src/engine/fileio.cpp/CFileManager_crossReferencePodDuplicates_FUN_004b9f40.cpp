// Name: engine_fileio.cpp_CFileManager_crossReferencePodDuplicates_FUN_004b9f40
// Address: 004b9f40
// Address Range: [[004b9f40, 004ba4ec]]
// Convention: __cdecl
// Signature: void engine_fileio.cpp_CFileManager_crossReferencePodDuplicates_FUN_004b9f40(CFileManager * this_ptr, char * pod_filename)

#include "nocturne.h"

void __cdecl
engine_fileio_cpp_CFileManager_crossReferencePodDuplicates_FUN_004b9f40
          (CFileManager *this_ptr,char *pod_filename)

{
  char cVar1;
  bool bVar2;
  void *pvVar3;
  int iVar4;
  int unaff_EBX;
  BADSPACEBASE *in_ESP;
  char *pcVar5;
  CPodFile *this_ptr_00;
  CPodFile *unaff_EDI;
  char *pcVar6;
  int in_stack_00000010;
  int iStack00000014;
  WatcomTypeInfo *element_count;
  WatcomTypeInfo *in_stack_fffffb18;
  uint in_stack_fffffb1c;
  CStrList_vtable *in_stack_fffffb3c;
  CStrList_vtable *in_stack_fffffb40;
  CStrList_vtable *in_stack_fffffb44;
  CStrList_vtable *in_stack_fffffb48;
  CStrList_vtable *in_stack_fffffb4c;
  CStrList_vtable *in_stack_fffffb50;
  CStrList_vtable *in_stack_fffffb54;
  uint in_stack_fffffb58;
  char local_154 [16];
  char acStack_144 [4];
  byte auStack_140 [20];
  char acStack_12c [4];
  char acStack_128 [4];
  char acStack_124 [4];
  char acStack_120 [220];
  byte auStack_44 [8];
  char **local_3c;
  byte local_38 [16];
  CStrList local_28;
  CPodFile *local_18;
  char **local_14;
  CPodFile *pCVar7;
  char **ppcVar8;
  CStrList_vtable *pCVar9;
  
  pcVar6 = g_DirectoryBufferTemplate;
  pcVar5 = local_154;
  for (iVar4 = 0x41; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(uint *)pcVar5 = *(uint *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar5 = pcVar5 + 4;
  }
  if (pod_filename == (char *)0x0) {
    crt_io_c_getcwd_wrapper_FUN_00608d20(local_154,0x104);
  }
  else {
    pcVar6 = local_154;
    pcVar5 = pod_filename;
    do {
      cVar1 = *pcVar5;
      *pcVar6 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar5[1];
      pcVar5 = pcVar5 + 2;
      pcVar6[1] = cVar1;
      pcVar6 = pcVar6 + 2;
    } while (cVar1 != '\0');
  }
  iVar4 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                    (g_CEditorToolsPtr,"Enter directory containing PODS to cross reference for duplicates",local_154 + 4,0x104,1);
  if (iVar4 == 0) {
    return;
  }
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Scanning pods...");
  shape_edittool_cpp_CStrList_ctor_FUN_004a2a20((CStrList *)auStack_44);
  shape_edittool_cpp_CStrList_populateWithFullPaths_FUN_004a39e0
            ((CStrList *)(auStack_44 + 4),acStack_144,"*.pod");
  if ((int)local_3c < 1) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"No POD files found in %s",auStack_140);
    shape_edittool_cpp_CStrList_dtor_FUN_004a2a40((CStrList *)local_38,0,in_stack_fffffb1c);
    return;
  }
  element_count = &g_CPodFileTypeInfo;
  local_14 = local_3c;
  pvVar3 = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                     ((int)local_3c * 0x42c + 4,"..\\engine\\fileio.cpp",0xe36);
  local_28.data_array =
       crt_memory_c_constructTypedObjectArray_FUN_00601272
                 (pvVar3,(int)element_count,in_stack_fffffb18);
  if (local_28.data_array == (char **)0x0) {
    g_CurrentFilename = "..\\engine\\fileio.cpp";
    g_CurrentLineNumber = 0xe37;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory");
  }
  shape_edittool_cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
            (g_CEditorToolsPtr,"Scanning pods...");
  iVar4 = 0;
  if (0 < unaff_EBX) {
    do {
      in_stack_00000010 = iVar4;
      shape_edittool_cpp_CEditorTools_updatePercentage_FUN_004a0530
                (g_CEditorToolsPtr,(float)in_stack_00000010,(float)unaff_EBX);
      pcVar6 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                         ((CStrList *)(local_38 + 4),in_stack_00000010);
      iVar4 = engine_pod_cpp_CPodFile_mountFromFile_FUN_0054f650(local_18,pcVar6);
      if (iVar4 == 0) {
        shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
        shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&local_28,in_stack_00000010);
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"Can't mount %s");
        g_CurrentDebugFilename = "..\\engine\\fileio.cpp";
        g_CurrentDebugLine = 0xe3f;
        pvVar3 = crt_memory_c_freeSingleInstance_FUN_005fe632(unaff_EDI,&g_CPodFileTypeInfo);
        crt_memory_c_free_FUN_005fe659(pvVar3);
        shape_edittool_cpp_CStrList_dtor_FUN_004a2a40
                  ((CStrList *)&local_18,0,(uint)in_stack_fffffb3c);
        return;
      }
      iVar4 = in_stack_00000010 + 1;
      local_18 = local_18 + 1;
    } while (in_stack_00000010 + 1 < unaff_EBX);
  }
  shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xfffffb2c);
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Finding duplicates...");
  iStack00000014 = 0;
  pCVar7 = unaff_EDI;
  if (0 < (int)pod_filename) {
    do {
      ppcVar8 = (char **)0x0;
      if (0 < pCVar7->file_count) {
        pCVar9 = (CStrList_vtable *)0x0;
        do {
          iVar4 = 0;
          bVar2 = true;
          pcVar6 = *(char **)((int)&pCVar9->dtor + (int)&pCVar7->directory_entries->name_or_offset);
          this_ptr_00 = unaff_EDI;
          if (0 < (int)pod_filename) {
            do {
              if (iVar4 != in_stack_00000010) {
                in_stack_00000010 =
                     engine_pod_cpp_CPodFile_findFileIndex_FUN_00550140(this_ptr_00,pcVar6);
                if (-1 < in_stack_00000010) {
                  if (iVar4 < iStack00000014) break;
                  if (bVar2) {
                    shape_edittool_cpp_CStrList_add_FUN_004a2b80
                              ((CStrList *)&stack0xfffffb34,&DAT_00628c6a);
                    crt_stdio_c_sprintf_FUN_005fdbd0
                              (acStack_12c,"%s\t%s\t%08X",pcVar6,ppcVar8,
                               *(uint *)(pCVar9[0x25].sort + (int)pCVar9 + 0x10));
                    shape_edittool_cpp_CStrList_add_FUN_004a2b80
                              ((CStrList *)&stack0xfffffb30,acStack_128);
                    bVar2 = false;
                  }
                  crt_stdio_c_sprintf_FUN_005fdbd0(acStack_124,"\t%s\t%08X");
                  shape_edittool_cpp_CStrList_add_FUN_004a2b80
                            ((CStrList *)&stack0xfffffb38,acStack_120);
                }
              }
              iVar4 = iVar4 + 1;
              this_ptr_00 = this_ptr_00 + 1;
            } while (iVar4 < (int)pod_filename);
          }
          pCVar9 = (CStrList_vtable *)&pCVar9->clear;
          ppcVar8 = (char **)((int)ppcVar8 + 1);
        } while ((int)ppcVar8 < pCVar7->file_count);
      }
      iStack00000014 = iStack00000014 + 1;
      pCVar7 = pCVar7 + 1;
    } while (iStack00000014 < (int)pod_filename);
  }
  g_CurrentDebugFilename = "..\\engine\\fileio.cpp";
  g_CurrentDebugLine = 0xe63;
  pvVar3 = crt_memory_c_freeSingleInstance_FUN_005fe632(unaff_EDI,&g_CPodFileTypeInfo);
  crt_memory_c_free_FUN_005fe659(pvVar3);
  if (0 < (int)in_stack_fffffb3c) {
    shape_edittool_cpp_CPickList_setSelectedResult_FUN_004a3e10((CPickList *)&stack0xfffffb3c,1);
    shape_edittool_cpp_CPickList_setCancelButtonText_FUN_004a3d90
              ((CPickList *)&stack0xfffffb40,(char *)0x0);
    shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
              ((CPickList *)&stack0xfffffb44,"List of duplicates",-1,0);
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              ((CPickList *)&stack0xfffffb48,0,(uint)in_stack_fffffb48,(uint)in_stack_fffffb4c,
               (uint)in_stack_fffffb50,(uint)in_stack_fffffb54,in_stack_fffffb58);
    shape_edittool_cpp_CStrList_dtor_FUN_004a2a40
              ((CStrList *)&stack0xfffffff8,0,(uint)in_stack_fffffb4c);
    return;
  }
  shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
            (g_CEditorToolsPtr,"No duplicates found.");
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
            ((CPickList *)&stack0xfffffb40,0,(uint)in_stack_fffffb40,(uint)in_stack_fffffb44,
             (uint)in_stack_fffffb48,(uint)in_stack_fffffb4c,(uint)in_stack_fffffb50);
  shape_edittool_cpp_CStrList_dtor_FUN_004a2a40
            ((CStrList *)&stack0xfffffff0,0,(uint)in_stack_fffffb44);
  return;
}
