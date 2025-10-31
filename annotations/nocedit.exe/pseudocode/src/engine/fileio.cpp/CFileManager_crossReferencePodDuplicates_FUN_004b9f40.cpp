// Name: engine_fileio.cpp_CFileManager_crossReferencePodDuplicates_FUN_004b9f40
// Address: 004b9f40
// Address Range: [[004b9f40, 004ba4ec]]
// Convention: __cdecl
// Signature: void engine_fileio.cpp_CFileManager_crossReferencePodDuplicates_FUN_004b9f40(CFileManager * this_ptr, char * pod_filename)
// Cross-references:
//   core_fileman.cpp_CDemonFileManager_showEditorMenu_FUN_004be270 (004be270) at 004be4af [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Enter_directory_containi_00628b75
//   TerminatedCString s_Scanning_pods_00628bb7
//   TerminatedCString s_pod_00628bc8
//   TerminatedCString s_No_POD_files_found_in_s_00628bce
//   TerminatedCString s_engine_fileio_cpp_00628be7
//   TerminatedCString s_engine_fileio_cpp_00628bfc
//   TerminatedCString s_Out_of_memory_00628c11
//   TerminatedCString s_Scanning_pods_00628c1f
//   TerminatedCString s_Can_t_mount_s_00628c30
//   TerminatedCString s_engine_fileio_cpp_00628c3f
//   TerminatedCString s_Finding_duplicates_00628c54
//   undefined4 DAT_00628c6a
//   TerminatedCString s_s_s_08X_00628c6b
//   TerminatedCString s_s_08X_00628c76
//   TerminatedCString s_engine_fileio_cpp_00628c7f
//   TerminatedCString s_No_duplicates_found_00628c94
//   TerminatedCString s_List_of_duplicates_00628ca9
//   WatcomTypeInfo g_CPodFileTypeInfo
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   char[260] g_DirectoryBufferTemplate
//   undefined4 DAT_0067a054
//   char* g_CurrentDebugFilename = 0067d200
//   CEditorTools g_CEditorToolsPtr
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   int g_CurrentDebugLine
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_io.c_getcwd_wrapper_FUN_00608d20
//   crt_memory.c_constructTypedObjectArray_FUN_00601272
//   crt_memory.c_free_FUN_005fe659
//   crt_memory.c_freeSingleInstance_FUN_005fe632
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   engine_pod.cpp_CPodFile_findFileIndex_FUN_00550140
//   engine_pod.cpp_CPodFile_mountFromFile_FUN_0054f650
//   shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0
//   shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
//   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0
//   shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
//   shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530
//   shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   shape_edittool.cpp_CPickList_setCancelButtonText_FUN_004a3d90
//   shape_edittool.cpp_CPickList_setSelectedResult_FUN_004a3e10
//   shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   shape_edittool.cpp_CStrList_ctor_FUN_004a2a20
//   shape_edittool.cpp_CStrList_dtor_FUN_004a2a40
//   shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   shape_edittool.cpp_CStrList_populateWithFullPaths_FUN_004a39e0
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1f0

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
  undefined1 auStack_140 [20];
  char acStack_12c [4];
  char acStack_128 [4];
  char acStack_124 [4];
  char acStack_120 [220];
  undefined1 auStack_44 [8];
  char **local_3c;
  undefined1 local_38 [16];
  CStrList local_28;
  CPodFile *local_18;
  char **local_14;
  CPodFile *pCVar7;
  char **ppcVar8;
  CStrList_vtable *pCVar9;
  
  pcVar6 = g_DirectoryBufferTemplate;
  pcVar5 = local_154;
  for (iVar4 = 0x41; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar6;
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
       (char **)crt_memory_c_constructTypedObjectArray_FUN_00601272
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
                               *(undefined4 *)(pCVar9[0x25].sort + (int)pCVar9 + 0x10));
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


// Assembly code:
// 004b9f40: PUSH EBX
//   Label: engine_fileio.cpp_CFileManager_crossReferencePodDuplicates_FUN_004b9f40
// 004b9f41: PUSH ESI
// 004b9f42: PUSH EDI
// 004b9f43: PUSH EBP
// 004b9f44: SUB ESP,0x4ec
// 004b9f4a: MOV EAX,dword ptr [ESP + 0x504]
//   XREF to: Stack[0x8] (READ)
// 004b9f51: MOV ECX,0x41
// 004b9f56: LEA EDI,[ESP + 0x3a8]
//   XREF to: Stack[-0x154] (DATA)
// 004b9f5d: MOV ESI,0x67a050
//   XREF to: 0067a050 (DATA)
// 004b9f62: MOVSD.REP ES:EDI,ESI
//   XREF to: 0067a050 (READ)
//   XREF to: 0067a054 (READ)
// 004b9f64: TEST EAX,EAX
// 004b9f66: JZ 0x004b9fbd
//   XREF to: 004b9fbd (CONDITIONAL_JUMP)
// 004b9f68: LEA EDI,[ESP + 0x3a8]
//   XREF to: Stack[-0x154] (DATA)
// 004b9f6f: MOV ESI,EAX
// 004b9f71: PUSH EDI
// 004b9f72: MOV AL,byte ptr [ESI]
//   Label: LAB_004b9f72
// 004b9f74: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x154] (DATA)
// 004b9f76: CMP AL,0x0
// 004b9f78: JZ 0x004b9f8a
//   XREF to: 004b9f8a (CONDITIONAL_JUMP)
// 004b9f7a: MOV AL,byte ptr [ESI + 0x1]
// 004b9f7d: ADD ESI,0x2
// 004b9f80: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x153] (WRITE)
// 004b9f83: ADD EDI,0x2
// 004b9f86: CMP AL,0x0
// 004b9f88: JNZ 0x004b9f72
//   XREF to: 004b9f72 (CONDITIONAL_JUMP)
// 004b9f8a: POP EDI
//   Label: LAB_004b9f8a
// 004b9f8b: PUSH 0x1
//   Label: LAB_004b9f8b
// 004b9f8d: PUSH 0x104
// 004b9f92: LEA EAX,[ESP + 0x3b0]
//   XREF to: Stack[-0x154] (DATA)
// 004b9f99: PUSH EAX
// 004b9f9a: PUSH 0x628b75
//   XREF to: 00628b75 (DATA)
// 004b9f9f: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 004b9fa5: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 004b9fa6: CALL shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
//   XREF to: 004a03d0 (UNCONDITIONAL_CALL)
// 004b9fab: ADD ESP,0x14
// 004b9fae: TEST EAX,EAX
// 004b9fb0: JNZ 0x004b9fd4
//   XREF to: 004b9fd4 (CONDITIONAL_JUMP)
// 004b9fb2: ADD ESP,0x4ec
// 004b9fb8: POP EBP
// 004b9fb9: POP EDI
// 004b9fba: POP ESI
// 004b9fbb: POP EBX
// 004b9fbc: RET
// 004b9fbd: PUSH 0x104
//   Label: LAB_004b9fbd
// 004b9fc2: LEA EAX,[ESP + 0x3ac]
//   XREF to: Stack[-0x154] (DATA)
// 004b9fc9: PUSH EAX
// 004b9fca: CALL crt_io.c_getcwd_wrapper_FUN_00608d20
//   XREF to: 0060128c (UNCONDITIONAL_CALL)
// 004b9fcf: ADD ESP,0x8
// 004b9fd2: JMP 0x004b9f8b
//   XREF to: 004b9f8b (UNCONDITIONAL_JUMP)
// 004b9fd4: PUSH 0x628bb7
//   Label: LAB_004b9fd4
//   XREF to: 00628bb7 (DATA)
// 004b9fd9: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 004b9fdf: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 004b9fe0: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 004b9fe5: ADD ESP,0x8
// 004b9fe8: LEA EAX,[ESP + 0x4ac]
//   XREF to: Stack[-0x50] (DATA)
// 004b9fef: PUSH EAX
// 004b9ff0: CALL shape_edittool.cpp_CStrList_ctor_FUN_004a2a20
//   XREF to: 004a2a20 (UNCONDITIONAL_CALL)
// 004b9ff5: ADD ESP,0x4
// 004b9ff8: PUSH 0x628bc8
//   XREF to: 00628bc8 (DATA)
// 004b9ffd: LEA EAX,[ESP + 0x3ac]
//   XREF to: Stack[-0x154] (DATA)
// 004ba004: PUSH EAX
// 004ba005: LEA EAX,[ESP + 0x4b4]
//   XREF to: Stack[-0x50] (DATA)
// 004ba00c: PUSH EAX
// 004ba00d: CALL shape_edittool.cpp_CStrList_populateWithFullPaths_FUN_004a39e0
//   XREF to: 004a39e0 (UNCONDITIONAL_CALL)
// 004ba012: ADD ESP,0xc
// 004ba015: MOV EBX,dword ptr [ESP + 0x4ac]
//   XREF to: Stack[-0x50] (READ)
// 004ba01c: CMP EBX,0x1
// 004ba01f: JL 0x004ba2ef
//   XREF to: 004ba2ef (CONDITIONAL_JUMP)
// 004ba025: PUSH 0x65d9b0
//   XREF to: 0065d9b0 (DATA)
// 004ba02a: MOV dword ptr [ESP + 0x4d8],EBX
//   XREF to: Stack[-0x28] (WRITE)
// 004ba031: PUSH EBX
// 004ba032: IMUL EAX,EBX,0x42c
// 004ba038: PUSH 0xe36
// 004ba03d: PUSH 0x628be7
//   XREF to: 00628be7 (DATA)
// 004ba042: ADD EAX,0x4
// 004ba045: PUSH EAX
// 004ba046: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1f0
//   XREF to: 0050f1f0 (UNCONDITIONAL_CALL)
// 004ba04b: ADD ESP,0xc
// 004ba04e: PUSH EAX
// 004ba04f: CALL crt_memory.c_constructTypedObjectArray_FUN_00601272
//   XREF to: 00601272 (UNCONDITIONAL_CALL)
// 004ba054: ADD ESP,0xc
// 004ba057: TEST EAX,EAX
// 004ba059: MOV dword ptr [ESP + 0x4c0],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 004ba060: JNZ 0x004ba084
//   XREF to: 004ba084 (CONDITIONAL_JUMP)
// 004ba062: MOV EBP,0x628bfc
//   XREF to: 00628bfc (DATA)
// 004ba067: MOV EAX,0xe37
// 004ba06c: PUSH 0x628c11
//   XREF to: 00628c11 (DATA)
// 004ba071: MOV dword ptr [0x02f0ca48],EBP
//   XREF to: 02f0ca48 (WRITE)
// 004ba077: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 004ba07c: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004ba081: ADD ESP,0x4
// 004ba084: PUSH 0x628c1f
//   Label: LAB_004ba084
//   XREF to: 00628c1f (DATA)
// 004ba089: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 004ba08f: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 004ba090: CALL shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
//   XREF to: 004a0430 (UNCONDITIONAL_CALL)
// 004ba095: ADD ESP,0x8
// 004ba098: MOV ECX,dword ptr [ESP + 0x4d4]
//   XREF to: Stack[-0x28] (READ)
// 004ba09f: XOR EBX,EBX
// 004ba0a1: TEST ECX,ECX
// 004ba0a3: JLE 0x004ba123
//   XREF to: 004ba123 (CONDITIONAL_JUMP)
// 004ba0a9: MOV ESI,dword ptr [ESP + 0x4c0]
//   XREF to: Stack[-0x3c] (READ)
// 004ba0b0: MOV EAX,dword ptr [ESP + 0x4d4]
//   Label: LAB_004ba0b0
//   XREF to: Stack[-0x28] (READ)
// 004ba0b7: MOV dword ptr [ESP + 0x4e8],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004ba0be: FILD dword ptr [ESP + 0x4e8]
//   XREF to: Stack[-0x14] (READ)
// 004ba0c5: SUB ESP,0x4
// 004ba0c8: MOV dword ptr [ESP + 0x4ec],EBX
//   XREF to: Stack[-0x14] (WRITE)
// 004ba0cf: FSTP float ptr [ESP]
//   XREF to: Stack[-0x500] (DATA)
// 004ba0d2: FILD dword ptr [ESP + 0x4ec]
//   XREF to: Stack[-0x14] (READ)
// 004ba0d9: SUB ESP,0x4
// 004ba0dc: MOV EDI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004ba0e2: FSTP float ptr [ESP]
//   XREF to: Stack[-0x504] (DATA)
// 004ba0e5: PUSH EDI
//   XREF to: 02cf1cd4 (DATA)
// 004ba0e6: CALL shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530
//   XREF to: 004a0530 (UNCONDITIONAL_CALL)
// 004ba0eb: ADD ESP,0xc
// 004ba0ee: PUSH EBX
// 004ba0ef: LEA EAX,[ESP + 0x4b0]
//   XREF to: Stack[-0x50] (DATA)
// 004ba0f6: PUSH EAX
// 004ba0f7: CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
// 004ba0fc: ADD ESP,0x8
// 004ba0ff: PUSH EAX
// 004ba100: PUSH ESI
// 004ba101: CALL engine_pod.cpp_CPodFile_mountFromFile_FUN_0054f650
//   XREF to: 0054f650 (UNCONDITIONAL_CALL)
// 004ba106: ADD ESP,0x8
// 004ba109: TEST EAX,EAX
// 004ba10b: JZ 0x004ba328
//   XREF to: 004ba328 (CONDITIONAL_JUMP)
// 004ba111: MOV EDI,dword ptr [ESP + 0x4d4]
//   XREF to: Stack[-0x28] (READ)
// 004ba118: INC EBX
// 004ba119: ADD ESI,0x42c
// 004ba11f: CMP EBX,EDI
// 004ba121: JL 0x004ba0b0
//   XREF to: 004ba0b0 (CONDITIONAL_JUMP)
// 004ba123: MOV EBP,dword ptr [0x00678a60]
//   Label: LAB_004ba123
//   XREF to: 00678a60 (READ)
// 004ba129: PUSH EBP
//   XREF to: 02cf1cd4 (DATA)
// 004ba12a: CALL shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0
//   XREF to: 004a0dd0 (UNCONDITIONAL_CALL)
// 004ba12f: ADD ESP,0x4
// 004ba132: MOV EAX,ESP
// 004ba134: PUSH EAX
// 004ba135: CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
// 004ba13a: ADD ESP,0x4
// 004ba13d: PUSH 0x628c54
//   XREF to: 00628c54 (DATA)
// 004ba142: MOV EAX,[0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 004ba147: PUSH EAX
//   XREF to: 02cf1cd4 (DATA)
// 004ba148: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 004ba14d: ADD ESP,0x8
// 004ba150: XOR EDX,EDX
// 004ba152: MOV ECX,dword ptr [ESP + 0x4d4]
//   XREF to: Stack[-0x28] (READ)
// 004ba159: MOV dword ptr [ESP + 0x4e0],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 004ba160: TEST ECX,ECX
// 004ba162: JLE 0x004ba272
//   XREF to: 004ba272 (CONDITIONAL_JUMP)
// 004ba168: MOV EAX,dword ptr [ESP + 0x4c0]
//   XREF to: Stack[-0x3c] (READ)
// 004ba16f: MOV dword ptr [ESP + 0x4bc],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 004ba176: XOR EDI,EDI
//   Label: LAB_004ba176
// 004ba178: MOV EAX,dword ptr [ESP + 0x4bc]
//   XREF to: Stack[-0x40] (READ)
// 004ba17f: MOV dword ptr [ESP + 0x4c4],EDI
//   XREF to: Stack[-0x38] (WRITE)
// 004ba186: MOV EBP,dword ptr [EAX + 0x410]
// 004ba18c: MOV dword ptr [ESP + 0x4d8],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 004ba193: TEST EBP,EBP
// 004ba195: JLE 0x004ba240
//   XREF to: 004ba240 (CONDITIONAL_JUMP)
// 004ba19b: ADD EAX,0x4
// 004ba19e: MOV dword ptr [ESP + 0x4c8],EDI
//   XREF to: Stack[-0x34] (WRITE)
// 004ba1a5: MOV dword ptr [ESP + 0x4cc],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 004ba1ac: MOV EBP,dword ptr [ESP + 0x4d8]
//   Label: LAB_004ba1ac
//   XREF to: Stack[-0x24] (READ)
// 004ba1b3: MOV ESI,dword ptr [ESP + 0x4c8]
//   XREF to: Stack[-0x34] (READ)
// 004ba1ba: MOV EDI,0x1
// 004ba1bf: MOV EBP,dword ptr [EBP + 0x414]
// 004ba1c5: MOV EAX,dword ptr [ESP + 0x4d4]
//   XREF to: Stack[-0x28] (READ)
// 004ba1cc: ADD EBP,ESI
// 004ba1ce: XOR EBX,EBX
// 004ba1d0: MOV dword ptr [ESP + 0x4e4],EDI
//   XREF to: Stack[-0x18] (WRITE)
// 004ba1d7: MOV EBP,dword ptr [EBP]
// 004ba1da: TEST EAX,EAX
// 004ba1dc: JLE 0x004ba20b
//   XREF to: 004ba20b (CONDITIONAL_JUMP)
// 004ba1de: MOV dword ptr [ESP + 0x4d0],ESI
//   XREF to: Stack[-0x2c] (WRITE)
// 004ba1e5: MOV ESI,dword ptr [ESP + 0x4c0]
//   XREF to: Stack[-0x3c] (READ)
// 004ba1ec: CMP EBX,dword ptr [ESP + 0x4e0]
//   Label: LAB_004ba1ec
//   XREF to: Stack[-0x1c] (READ)
// 004ba1f3: JNZ 0x004ba3ad
//   XREF to: 004ba3ad (CONDITIONAL_JUMP)
// 004ba1f9: MOV EDX,dword ptr [ESP + 0x4d4]
//   Label: LAB_004ba1f9
//   XREF to: Stack[-0x28] (READ)
// 004ba200: INC EBX
// 004ba201: ADD ESI,0x42c
// 004ba207: CMP EBX,EDX
// 004ba209: JL 0x004ba1ec
//   XREF to: 004ba1ec (CONDITIONAL_JUMP)
// 004ba20b: MOV EAX,dword ptr [ESP + 0x4c8]
//   Label: LAB_004ba20b
//   XREF to: Stack[-0x34] (READ)
// 004ba212: MOV EDX,dword ptr [ESP + 0x4c4]
//   XREF to: Stack[-0x38] (READ)
// 004ba219: ADD EAX,0x14
// 004ba21c: INC EDX
// 004ba21d: MOV dword ptr [ESP + 0x4c8],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 004ba224: MOV dword ptr [ESP + 0x4c4],EDX
//   XREF to: Stack[-0x38] (WRITE)
// 004ba22b: MOV EAX,EDX
// 004ba22d: MOV EDX,dword ptr [ESP + 0x4d8]
//   XREF to: Stack[-0x24] (READ)
// 004ba234: CMP EAX,dword ptr [EDX + 0x410]
// 004ba23a: JL 0x004ba1ac
//   XREF to: 004ba1ac (CONDITIONAL_JUMP)
// 004ba240: MOV ESI,dword ptr [ESP + 0x4bc]
//   Label: LAB_004ba240
//   XREF to: Stack[-0x40] (READ)
// 004ba247: MOV EDI,dword ptr [ESP + 0x4e0]
//   XREF to: Stack[-0x1c] (READ)
// 004ba24e: MOV EBP,dword ptr [ESP + 0x4d4]
//   XREF to: Stack[-0x28] (READ)
// 004ba255: ADD ESI,0x42c
// 004ba25b: INC EDI
// 004ba25c: MOV dword ptr [ESP + 0x4bc],ESI
//   XREF to: Stack[-0x40] (WRITE)
// 004ba263: MOV dword ptr [ESP + 0x4e0],EDI
//   XREF to: Stack[-0x1c] (WRITE)
// 004ba26a: CMP EDI,EBP
// 004ba26c: JL 0x004ba176
//   XREF to: 004ba176 (CONDITIONAL_JUMP)
// 004ba272: MOV EAX,0x628c7f
//   Label: LAB_004ba272
//   XREF to: 00628c7f (PARAM)
// 004ba277: PUSH 0x65d9b0
//   XREF to: 0065d9b0 (DATA)
// 004ba27c: MOV ECX,dword ptr [ESP + 0x4c4]
//   XREF to: Stack[-0x3c] (READ)
// 004ba283: MOV EDX,0xe63
// 004ba288: PUSH ECX
// 004ba289: MOV [0x0067d20c],EAX
//   XREF to: 0067d20c (WRITE)
// 004ba28e: MOV dword ptr [0x02f0d944],EDX
//   XREF to: 02f0d944 (WRITE)
// 004ba294: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 004ba299: ADD ESP,0x8
// 004ba29c: PUSH EAX
// 004ba29d: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 004ba2a2: ADD ESP,0x4
// 004ba2a5: CMP dword ptr [ESP],0x1
//   XREF to: Stack[-0x4fc] (DATA)
// 004ba2a9: JGE 0x004ba48d
//   XREF to: 004ba48d (CONDITIONAL_JUMP)
// 004ba2af: PUSH 0x628c94
//   XREF to: 00628c94 (DATA)
// 004ba2b4: MOV ESI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004ba2ba: PUSH ESI
//   XREF to: 02cf1cd4 (DATA)
// 004ba2bb: CALL shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0
//   XREF to: 0049e6a0 (UNCONDITIONAL_CALL)
// 004ba2c0: ADD ESP,0x8
// 004ba2c3: PUSH 0x0
// 004ba2c5: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x4fc] (DATA)
// 004ba2c9: PUSH EAX
// 004ba2ca: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 004ba2cf: ADD ESP,0x8
// 004ba2d2: PUSH 0x0
// 004ba2d4: LEA EAX,[ESP + 0x4b0]
//   XREF to: Stack[-0x50] (DATA)
// 004ba2db: PUSH EAX
// 004ba2dc: CALL shape_edittool.cpp_CStrList_dtor_FUN_004a2a40
//   XREF to: 004a2a40 (UNCONDITIONAL_CALL)
// 004ba2e1: ADD ESP,0x8
// 004ba2e4: ADD ESP,0x4ec
// 004ba2ea: POP EBP
// 004ba2eb: POP EDI
// 004ba2ec: POP ESI
// 004ba2ed: POP EBX
// 004ba2ee: RET
// 004ba2ef: LEA EAX,[ESP + 0x3a8]
//   Label: LAB_004ba2ef
//   XREF to: Stack[-0x154] (DATA)
// 004ba2f6: PUSH EAX
// 004ba2f7: PUSH 0x628bce
//   XREF to: 00628bce (DATA)
// 004ba2fc: MOV EBX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 004ba302: PUSH EBX
//   XREF to: 02cf1cd4 (DATA)
// 004ba303: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 004ba308: ADD ESP,0xc
// 004ba30b: PUSH 0x0
// 004ba30d: LEA EAX,[ESP + 0x4b0]
//   XREF to: Stack[-0x50] (DATA)
// 004ba314: PUSH EAX
// 004ba315: CALL shape_edittool.cpp_CStrList_dtor_FUN_004a2a40
//   XREF to: 004a2a40 (UNCONDITIONAL_CALL)
// 004ba31a: ADD ESP,0x8
// 004ba31d: ADD ESP,0x4ec
// 004ba323: POP EBP
// 004ba324: POP EDI
// 004ba325: POP ESI
// 004ba326: POP EBX
// 004ba327: RET
// 004ba328: MOV EBP,dword ptr [0x00678a60]
//   Label: LAB_004ba328
//   XREF to: 00678a60 (READ)
// 004ba32e: PUSH EBP
//   XREF to: 02cf1cd4 (DATA)
// 004ba32f: CALL shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0
//   XREF to: 004a0dd0 (UNCONDITIONAL_CALL)
// 004ba334: ADD ESP,0x4
// 004ba337: PUSH EBX
// 004ba338: LEA EAX,[ESP + 0x4b0]
//   XREF to: Stack[-0x50] (DATA)
// 004ba33f: PUSH EAX
// 004ba340: CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
// 004ba345: ADD ESP,0x8
// 004ba348: PUSH EAX
// 004ba349: PUSH 0x628c30
//   XREF to: 00628c30 (DATA)
// 004ba34e: MOV EAX,[0x00678a60]
//   XREF to: 00678a60 (READ)
// 004ba353: PUSH EAX
//   XREF to: 02cf1cd4 (DATA)
// 004ba354: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 004ba359: ADD ESP,0xc
// 004ba35c: MOV EDX,0x628c3f
//   XREF to: 00628c3f (PARAM)
// 004ba361: PUSH 0x65d9b0
//   XREF to: 0065d9b0 (DATA)
// 004ba366: MOV EBX,dword ptr [ESP + 0x4c4]
//   XREF to: Stack[-0x3c] (READ)
// 004ba36d: MOV ECX,0xe3f
// 004ba372: PUSH EBX
// 004ba373: MOV dword ptr [0x0067d20c],EDX
//   XREF to: 0067d20c (WRITE)
// 004ba379: MOV dword ptr [0x02f0d944],ECX
//   XREF to: 02f0d944 (WRITE)
// 004ba37f: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 004ba384: ADD ESP,0x8
// 004ba387: PUSH EAX
// 004ba388: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 004ba38d: ADD ESP,0x4
// 004ba390: PUSH 0x0
// 004ba392: LEA EAX,[ESP + 0x4b0]
//   XREF to: Stack[-0x50] (DATA)
// 004ba399: PUSH EAX
// 004ba39a: CALL shape_edittool.cpp_CStrList_dtor_FUN_004a2a40
//   XREF to: 004a2a40 (UNCONDITIONAL_CALL)
// 004ba39f: ADD ESP,0x8
// 004ba3a2: ADD ESP,0x4ec
// 004ba3a8: POP EBP
// 004ba3a9: POP EDI
// 004ba3aa: POP ESI
// 004ba3ab: POP EBX
// 004ba3ac: RET
// 004ba3ad: PUSH EBP
//   Label: LAB_004ba3ad
// 004ba3ae: PUSH ESI
// 004ba3af: CALL engine_pod.cpp_CPodFile_findFileIndex_FUN_00550140
//   XREF to: 00550140 (UNCONDITIONAL_CALL)
// 004ba3b4: ADD ESP,0x8
// 004ba3b7: MOV EDI,ESI
// 004ba3b9: MOV dword ptr [ESP + 0x4dc],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 004ba3c0: TEST EAX,EAX
// 004ba3c2: JL 0x004ba1f9
//   XREF to: 004ba1f9 (CONDITIONAL_JUMP)
// 004ba3c8: CMP EBX,dword ptr [ESP + 0x4e0]
//   XREF to: Stack[-0x1c] (READ)
// 004ba3cf: JL 0x004ba20b
//   XREF to: 004ba20b (CONDITIONAL_JUMP)
// 004ba3d5: CMP dword ptr [ESP + 0x4e4],0x0
//   XREF to: Stack[-0x18] (READ)
// 004ba3dd: JZ 0x004ba447
//   XREF to: 004ba447 (CONDITIONAL_JUMP)
// 004ba3df: PUSH 0x628c6a
//   XREF to: 00628c6a (DATA)
// 004ba3e4: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x4fc] (DATA)
// 004ba3e8: PUSH EAX
// 004ba3e9: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 004ba3ee: ADD ESP,0x8
// 004ba3f1: MOV EAX,dword ptr [ESP + 0x4d8]
//   XREF to: Stack[-0x24] (READ)
// 004ba3f8: MOV ECX,dword ptr [ESP + 0x4d0]
//   XREF to: Stack[-0x2c] (READ)
// 004ba3ff: MOV EAX,dword ptr [EAX + 0x414]
// 004ba405: ADD EAX,ECX
// 004ba407: MOV EDX,dword ptr [EAX + 0x10]
// 004ba40a: PUSH EDX
// 004ba40b: MOV ECX,dword ptr [ESP + 0x4d0]
//   XREF to: Stack[-0x30] (READ)
// 004ba412: PUSH ECX
// 004ba413: PUSH EBP
// 004ba414: PUSH 0x628c6b
//   XREF to: 00628c6b (DATA)
// 004ba419: LEA EAX,[ESP + 0x3b8]
//   XREF to: Stack[-0x154] (DATA)
// 004ba420: PUSH EAX
// 004ba421: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004ba426: ADD ESP,0x14
// 004ba429: LEA EAX,[ESP + 0x3a8]
//   XREF to: Stack[-0x154] (DATA)
// 004ba430: PUSH EAX
// 004ba431: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x4fc] (DATA)
// 004ba435: PUSH EAX
// 004ba436: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 004ba43b: ADD ESP,0x8
// 004ba43e: XOR EAX,EAX
// 004ba440: MOV dword ptr [ESP + 0x4e4],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 004ba447: IMUL EDX,dword ptr [ESP + 0x4dc],0x14
//   Label: LAB_004ba447
//   XREF to: Stack[-0x20] (READ)
// 004ba44f: MOV EAX,dword ptr [EDI + 0x414]
// 004ba455: MOV ECX,dword ptr [EDX + EAX*0x1 + 0x10]
// 004ba459: PUSH ECX
// 004ba45a: ADD EDI,0x4
// 004ba45d: PUSH EDI
// 004ba45e: PUSH 0x628c76
//   XREF to: 00628c76 (DATA)
// 004ba463: LEA EAX,[ESP + 0x3b4]
//   XREF to: Stack[-0x154] (DATA)
// 004ba46a: PUSH EAX
// 004ba46b: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004ba470: ADD ESP,0x10
// 004ba473: LEA EAX,[ESP + 0x3a8]
//   XREF to: Stack[-0x154] (DATA)
// 004ba47a: PUSH EAX
// 004ba47b: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x4fc] (DATA)
// 004ba47f: PUSH EAX
// 004ba480: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 004ba485: ADD ESP,0x8
// 004ba488: JMP 0x004ba1f9
//   XREF to: 004ba1f9 (UNCONDITIONAL_JUMP)
// 004ba48d: PUSH 0x1
//   Label: LAB_004ba48d
// 004ba48f: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x4fc] (DATA)
// 004ba493: PUSH EAX
// 004ba494: CALL shape_edittool.cpp_CPickList_setSelectedResult_FUN_004a3e10
//   XREF to: 004a3e10 (UNCONDITIONAL_CALL)
// 004ba499: ADD ESP,0x8
// 004ba49c: PUSH 0x0
// 004ba49e: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x4fc] (DATA)
// 004ba4a2: PUSH EAX
// 004ba4a3: CALL shape_edittool.cpp_CPickList_setCancelButtonText_FUN_004a3d90
//   XREF to: 004a3d90 (UNCONDITIONAL_CALL)
// 004ba4a8: ADD ESP,0x8
// 004ba4ab: PUSH 0x0
// 004ba4ad: PUSH -0x1
// 004ba4af: PUSH 0x628ca9
//   XREF to: 00628ca9 (DATA)
// 004ba4b4: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x4fc] (DATA)
// 004ba4b8: PUSH EAX
// 004ba4b9: CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
// 004ba4be: ADD ESP,0x10
// 004ba4c1: PUSH 0x0
// 004ba4c3: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x4fc] (DATA)
// 004ba4c7: PUSH EAX
// 004ba4c8: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 004ba4cd: ADD ESP,0x8
// 004ba4d0: PUSH 0x0
// 004ba4d2: LEA EAX,[ESP + 0x4b0]
//   XREF to: Stack[-0x50] (DATA)
// 004ba4d9: PUSH EAX
// 004ba4da: CALL shape_edittool.cpp_CStrList_dtor_FUN_004a2a40
//   XREF to: 004a2a40 (UNCONDITIONAL_CALL)
// 004ba4df: ADD ESP,0x8
// 004ba4e2: ADD ESP,0x4ec
// 004ba4e8: POP EBP
// 004ba4e9: POP EDI
// 004ba4ea: POP ESI
// 004ba4eb: POP EBX
// 004ba4ec: RET
