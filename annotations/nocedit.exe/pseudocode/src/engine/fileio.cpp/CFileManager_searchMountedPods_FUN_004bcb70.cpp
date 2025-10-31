// Name: engine_fileio.cpp_CFileManager_searchMountedPods_FUN_004bcb70
// Address: 004bcb70
// Address Range: [[004bcb70, 004bcce1]]
// Convention: __cdecl
// Signature: void engine_fileio.cpp_CFileManager_searchMountedPods_FUN_004bcb70(CFileManager * this_ptr, char * default_wildcard)
// Cross-references:
//   core_fileman.cpp_CDemonFileManager_showEditorMenu_FUN_004be270 (004be270) at 004be4be [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_DefaultWildcard_0062920f
//   undefined4 DAT_00629210
//   TerminatedCString s_Enter_filename_wildcard_00629211
//   TerminatedCString s_s_s_00629229
//   TerminatedCString s_No_files_found_matching__0062922f
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   CDemonPod* g_CDemonPodPtr = 030e5090
//   CEditorTools g_CEditorToolsPtr
//   CDemonPod g_CDemonPodInstance
// Function calls:
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   engine_pod.cpp_CPod_getNextSearchResult_FUN_00550ef0
//   engine_pod.cpp_CPod_initSearch_FUN_00550ea0
//   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
//   shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   shape_edittool.cpp_CStrList_sort_FUN_004a2ec0

#include "nocturne.h"

void __cdecl
engine_fileio_cpp_CFileManager_searchMountedPods_FUN_004bcb70
          (CFileManager *this_ptr,char *default_wildcard)

{
  char cVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  char *pcVar3;
  char **in_stack_fffff64c;
  CStrList_vtable *in_stack_fffff650;
  char **in_stack_fffff654;
  CStrList_vtable *in_stack_fffff658;
  CStrList_vtable *in_stack_fffff65c;
  CStrList_vtable *in_stack_fffff660;
  uint in_stack_fffff664;
  undefined1 auStack_61c [16];
  char cStack_60c;
  char acStack_2fc [4];
  char acStack_2f8 [496];
  char local_108 [8];
  char acStack_100 [20];
  char acStack_ec [228];
  
  if (default_wildcard == (char *)0x0) {
    default_wildcard = "*";
  }
  pcVar3 = local_108;
  do {
    cVar1 = *default_wildcard;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = default_wildcard[1];
    default_wildcard = default_wildcard + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  iVar2 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                    (g_CEditorToolsPtr,"Enter filename wildcard",local_108,0x100,1);
  if (iVar2 == 0) {
    return;
  }
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xfffff638);
  engine_pod_cpp_CPod_initSearch_FUN_00550ea0
            ((CPod *)g_CDemonPodPtr,acStack_100,(CPodSearchContext *)auStack_61c);
  while (auStack_61c[4] != '\0') {
    crt_stdio_c_sprintf_FUN_005fdbd0(acStack_2fc,"%s\t%s",auStack_61c + 4);
    shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffff644,acStack_2f8);
    engine_pod_cpp_CPod_getNextSearchResult_FUN_00550ef0
              ((CPod *)g_CDemonPodPtr,(CPodSearchContext *)(auStack_61c + 0xc));
    auStack_61c[4] = cStack_60c;
  }
  if ((int)in_stack_fffff64c < 1) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"No files found matching %s");
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              ((CPickList *)&stack0xfffff650,0,(uint)in_stack_fffff650,(uint)in_stack_fffff654,
               (uint)in_stack_fffff658,(uint)in_stack_fffff65c,(uint)in_stack_fffff660);
    return;
  }
  shape_edittool_cpp_CStrList_sort_FUN_004a2ec0((CStrList *)&stack0xfffff64c);
  shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
            ((CPickList *)&stack0xfffff650,acStack_ec,-1,0);
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
            ((CPickList *)&stack0xfffff654,0,(uint)in_stack_fffff654,(uint)in_stack_fffff658,
             (uint)in_stack_fffff65c,(uint)in_stack_fffff660,in_stack_fffff664);
  return;
}


// Assembly code:
// 004bcb70: PUSH ESI
//   Label: engine_fileio.cpp_CFileManager_searchMountedPods_FUN_004bcb70
// 004bcb71: PUSH EDI
// 004bcb72: SUB ESP,0x9c4
// 004bcb78: MOV ESI,dword ptr [ESP + 0x9d4]
//   XREF to: Stack[0x8] (READ)
// 004bcb7f: TEST ESI,ESI
// 004bcb81: JZ 0x004bcbd4
//   XREF to: 004bcbd4 (CONDITIONAL_JUMP)
// 004bcb83: LEA EDI,[ESP + 0x8c4]
//   Label: LAB_004bcb83
//   XREF to: Stack[-0x108] (DATA)
// 004bcb8a: PUSH EDI
// 004bcb8b: MOV AL,byte ptr [ESI]
//   Label: LAB_004bcb8b
//   XREF to: 0062920f (READ)
// 004bcb8d: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x108] (DATA)
// 004bcb8f: CMP AL,0x0
// 004bcb91: JZ 0x004bcba3
//   XREF to: 004bcba3 (CONDITIONAL_JUMP)
// 004bcb93: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 00629210 (READ)
// 004bcb96: ADD ESI,0x2
// 004bcb99: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x107] (WRITE)
// 004bcb9c: ADD EDI,0x2
// 004bcb9f: CMP AL,0x0
// 004bcba1: JNZ 0x004bcb8b
//   XREF to: 004bcb8b (CONDITIONAL_JUMP)
// 004bcba3: POP EDI
//   Label: LAB_004bcba3
// 004bcba4: PUSH 0x1
// 004bcba6: PUSH 0x100
// 004bcbab: LEA EAX,[ESP + 0x8cc]
//   XREF to: Stack[-0x108] (DATA)
// 004bcbb2: PUSH EAX
// 004bcbb3: PUSH 0x629211
//   XREF to: 00629211 (DATA)
// 004bcbb8: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 004bcbbe: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 004bcbbf: CALL shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
//   XREF to: 004a03d0 (UNCONDITIONAL_CALL)
// 004bcbc4: ADD ESP,0x14
// 004bcbc7: TEST EAX,EAX
// 004bcbc9: JNZ 0x004bcbdb
//   XREF to: 004bcbdb (CONDITIONAL_JUMP)
// 004bcbcb: ADD ESP,0x9c4
// 004bcbd1: POP EDI
// 004bcbd2: POP ESI
// 004bcbd3: RET
// 004bcbd4: MOV ESI,0x62920f
//   Label: LAB_004bcbd4
//   XREF to: 0062920f (DATA)
// 004bcbd9: JMP 0x004bcb83
//   XREF to: 004bcb83 (UNCONDITIONAL_JUMP)
// 004bcbdb: MOV EAX,ESP
//   Label: LAB_004bcbdb
// 004bcbdd: PUSH EAX
// 004bcbde: CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
// 004bcbe3: ADD ESP,0x4
// 004bcbe6: LEA EAX,[ESP + 0x3a8]
//   XREF to: Stack[-0x624] (DATA)
// 004bcbed: PUSH EAX
// 004bcbee: LEA EAX,[ESP + 0x8c8]
//   XREF to: Stack[-0x108] (DATA)
// 004bcbf5: PUSH EAX
// 004bcbf6: MOV ECX,dword ptr [0x00680cdc]
//   XREF to: 030e5090 (PARAM)
//   XREF to: 00680cdc (READ)
// 004bcbfc: PUSH ECX
//   XREF to: 030e5090 (DATA)
// 004bcbfd: CALL engine_pod.cpp_CPod_initSearch_FUN_00550ea0
//   XREF to: 00550ea0 (UNCONDITIONAL_CALL)
// 004bcc02: ADD ESP,0xc
// 004bcc05: CMP byte ptr [ESP + 0x3a8],0x0
//   XREF to: Stack[-0x624] (READ)
// 004bcc0d: JZ 0x004bcc6c
//   XREF to: 004bcc6c (CONDITIONAL_JUMP)
// 004bcc0f: PUSH EBX
// 004bcc10: LEA EAX,[ESP + 0x4ac]
//   Label: LAB_004bcc10
//   XREF to: Stack[-0x524] (DATA)
// 004bcc17: PUSH EAX
// 004bcc18: LEA EAX,[ESP + 0x3b0]
//   XREF to: Stack[-0x624] (DATA)
// 004bcc1f: PUSH EAX
// 004bcc20: PUSH 0x629229
//   XREF to: 00629229 (DATA)
// 004bcc25: LEA EAX,[ESP + 0x6d4]
//   XREF to: Stack[-0x308] (DATA)
// 004bcc2c: PUSH EAX
// 004bcc2d: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004bcc32: ADD ESP,0x10
// 004bcc35: LEA EAX,[ESP + 0x6c8]
//   XREF to: Stack[-0x308] (DATA)
// 004bcc3c: PUSH EAX
// 004bcc3d: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x9cc] (DATA)
// 004bcc41: PUSH EAX
// 004bcc42: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 004bcc47: ADD ESP,0x8
// 004bcc4a: LEA EAX,[ESP + 0x3ac]
//   XREF to: Stack[-0x624] (DATA)
// 004bcc51: PUSH EAX
// 004bcc52: MOV EBX,dword ptr [0x00680cdc]
//   XREF to: 030e5090 (PARAM)
//   XREF to: 00680cdc (READ)
// 004bcc58: PUSH EBX
//   XREF to: 030e5090 (DATA)
// 004bcc59: CALL engine_pod.cpp_CPod_getNextSearchResult_FUN_00550ef0
//   XREF to: 00550ef0 (UNCONDITIONAL_CALL)
// 004bcc5e: ADD ESP,0x8
// 004bcc61: CMP byte ptr [ESP + 0x3ac],0x0
//   XREF to: Stack[-0x624] (READ)
// 004bcc69: JNZ 0x004bcc10
//   XREF to: 004bcc10 (CONDITIONAL_JUMP)
// 004bcc6b: POP EBX
// 004bcc6c: CMP dword ptr [ESP],0x1
//   Label: LAB_004bcc6c
//   XREF to: Stack[-0x9cc] (DATA)
// 004bcc70: JGE 0x004bcca6
//   XREF to: 004bcca6 (CONDITIONAL_JUMP)
// 004bcc72: LEA EAX,[ESP + 0x8c4]
//   XREF to: Stack[-0x108] (DATA)
// 004bcc79: PUSH EAX
// 004bcc7a: PUSH 0x62922f
//   XREF to: 0062922f (DATA)
// 004bcc7f: MOV EDI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004bcc85: PUSH EDI
//   XREF to: 02cf1cd4 (DATA)
// 004bcc86: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 004bcc8b: ADD ESP,0xc
// 004bcc8e: PUSH 0x0
// 004bcc90: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x9cc] (DATA)
// 004bcc94: PUSH EAX
// 004bcc95: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 004bcc9a: ADD ESP,0x8
// 004bcc9d: ADD ESP,0x9c4
// 004bcca3: POP EDI
// 004bcca4: POP ESI
// 004bcca5: RET
// 004bcca6: MOV EAX,ESP
//   Label: LAB_004bcca6
// 004bcca8: PUSH EAX
// 004bcca9: CALL shape_edittool.cpp_CStrList_sort_FUN_004a2ec0
//   XREF to: 004a2ec0 (UNCONDITIONAL_CALL)
// 004bccae: ADD ESP,0x4
// 004bccb1: PUSH 0x0
// 004bccb3: PUSH -0x1
// 004bccb5: LEA EAX,[ESP + 0x8cc]
//   XREF to: Stack[-0x108] (DATA)
// 004bccbc: PUSH EAX
// 004bccbd: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x9cc] (DATA)
// 004bccc1: PUSH EAX
// 004bccc2: CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
// 004bccc7: ADD ESP,0x10
// 004bccca: PUSH 0x0
// 004bcccc: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x9cc] (DATA)
// 004bccd0: PUSH EAX
// 004bccd1: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 004bccd6: ADD ESP,0x8
// 004bccd9: ADD ESP,0x9c4
// 004bccdf: POP EDI
// 004bcce0: POP ESI
// 004bcce1: RET
