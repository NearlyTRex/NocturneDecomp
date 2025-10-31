// Name: engine_fileio.cpp_CFileManager_verifyPodCRC_FUN_004b7c90
// Address: 004b7c90
// Address Range: [[004b7c90, 004b7d42]]
// Convention: __cdecl
// Signature: void engine_fileio.cpp_CFileManager_verifyPodCRC_FUN_004b7c90(CFileManager * this_ptr, char * pod_filename)
// Cross-references:
//   core_fileman.cpp_CDemonFileManager_showEditorMenu_FUN_004be270 (004be270) at 004be485 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_rebuildLastPod_FUN_004b5a50 (004b5a50) at 004b6bb1 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_pod_006280ad
//   TerminatedCString s_Select_POD_file_to_check_006280b3
//   TerminatedCString s_WARNING_CRC_is_invalid_T_006280cc
//   TerminatedCString s_CRC_check_is_valid_006280ff
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   CDemonPod* g_CDemonPodPtr = 030e5090
//   CEditorTools g_CEditorToolsPtr
//   CDemonPod g_CDemonPodInstance
// Function calls:
//   engine_pod.cpp_CPod_verifyIntegrity_FUN_00551280
//   shape_edittool.cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420
//   shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0

#include "nocturne.h"

void __cdecl
engine_fileio_cpp_CFileManager_verifyPodCRC_FUN_004b7c90(CFileManager *this_ptr,char *pod_filename)

{
  char cVar1;
  bool bVar2;
  undefined3 extraout_var;
  int iVar3;
  BADSPACEBASE *in_ESP;
  char *pcVar4;
  
  pcVar4 = &stack0xfffffef8;
  if (pod_filename == (char *)0x0) {
    bVar2 = shape_edittool_cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420
                      (g_CEditorToolsPtr,"Select POD file to check",true,&stack0xfffffef8);
    if (CONCAT31(extraout_var,bVar2) == 0) {
      return;
    }
  }
  else {
    do {
      cVar1 = *pod_filename;
      *pcVar4 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pod_filename[1];
      pod_filename = pod_filename + 2;
      pcVar4[1] = cVar1;
      pcVar4 = pcVar4 + 2;
    } while (cVar1 != '\0');
  }
  iVar3 = engine_pod_cpp_CPod_verifyIntegrity_FUN_00551280((CPod *)g_CDemonPodPtr,&stack0xfffffefc);
  if (iVar3 != 0) {
    shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
              (g_CEditorToolsPtr,"CRC check is valid",0);
    return;
  }
  shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
            (g_CEditorToolsPtr,"WARNING!  CRC is invalid.  This may be an old .POD");
  return;
}


// Assembly code:
// 004b7c90: PUSH ESI
//   Label: engine_fileio.cpp_CFileManager_verifyPodCRC_FUN_004b7c90
// 004b7c91: PUSH EDI
// 004b7c92: SUB ESP,0x100
// 004b7c98: MOV ESI,dword ptr [ESP + 0x110]
//   XREF to: Stack[0x8] (READ)
// 004b7c9f: TEST ESI,ESI
// 004b7ca1: JNZ 0x004b7ccf
//   XREF to: 004b7ccf (CONDITIONAL_JUMP)
// 004b7ca3: PUSH ESI
// 004b7ca4: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x108] (DATA)
// 004b7ca8: PUSH EAX
// 004b7ca9: PUSH 0x6280ad
//   XREF to: 006280ad (DATA)
// 004b7cae: PUSH 0x6280b3
//   XREF to: 006280b3 (DATA)
// 004b7cb3: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 004b7cb9: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 004b7cba: CALL shape_edittool.cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420
//   XREF to: 0049f420 (UNCONDITIONAL_CALL)
// 004b7cbf: ADD ESP,0x14
// 004b7cc2: TEST EAX,EAX
// 004b7cc4: JNZ 0x004b7ceb
//   XREF to: 004b7ceb (CONDITIONAL_JUMP)
// 004b7cc6: ADD ESP,0x100
// 004b7ccc: POP EDI
// 004b7ccd: POP ESI
// 004b7cce: RET
// 004b7ccf: MOV EDI,ESP
//   Label: LAB_004b7ccf
// 004b7cd1: PUSH EDI
// 004b7cd2: MOV AL,byte ptr [ESI]
//   Label: LAB_004b7cd2
// 004b7cd4: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x108] (DATA)
// 004b7cd6: CMP AL,0x0
// 004b7cd8: JZ 0x004b7cea
//   XREF to: 004b7cea (CONDITIONAL_JUMP)
// 004b7cda: MOV AL,byte ptr [ESI + 0x1]
// 004b7cdd: ADD ESI,0x2
// 004b7ce0: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x107] (WRITE)
// 004b7ce3: ADD EDI,0x2
// 004b7ce6: CMP AL,0x0
// 004b7ce8: JNZ 0x004b7cd2
//   XREF to: 004b7cd2 (CONDITIONAL_JUMP)
// 004b7cea: POP EDI
//   Label: LAB_004b7cea
// 004b7ceb: MOV EAX,ESP
//   Label: LAB_004b7ceb
// 004b7ced: PUSH EAX
// 004b7cee: MOV ECX,dword ptr [0x00680cdc]
//   XREF to: 030e5090 (PARAM)
//   XREF to: 00680cdc (READ)
// 004b7cf4: PUSH ECX
//   XREF to: 030e5090 (DATA)
// 004b7cf5: CALL engine_pod.cpp_CPod_verifyIntegrity_FUN_00551280
//   XREF to: 00551280 (UNCONDITIONAL_CALL)
// 004b7cfa: ADD ESP,0x8
// 004b7cfd: TEST EAX,EAX
// 004b7cff: JNZ 0x004b7d20
//   XREF to: 004b7d20 (CONDITIONAL_JUMP)
// 004b7d01: PUSH EAX
// 004b7d02: PUSH EAX
// 004b7d03: PUSH 0x6280cc
//   XREF to: 006280cc (DATA)
// 004b7d08: MOV ESI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004b7d0e: PUSH ESI
//   XREF to: 02cf1cd4 (DATA)
// 004b7d0f: CALL shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0
//   XREF to: 0049e6a0 (UNCONDITIONAL_CALL)
// 004b7d14: ADD ESP,0x10
// 004b7d17: ADD ESP,0x100
// 004b7d1d: POP EDI
// 004b7d1e: POP ESI
// 004b7d1f: RET
// 004b7d20: PUSH EBX
//   Label: LAB_004b7d20
// 004b7d21: PUSH 0x0
// 004b7d23: PUSH 0x0
// 004b7d25: PUSH 0x6280ff
//   XREF to: 006280ff (DATA)
// 004b7d2a: MOV EBX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 004b7d30: PUSH EBX
//   XREF to: 02cf1cd4 (DATA)
// 004b7d31: CALL shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0
//   XREF to: 0049e6a0 (UNCONDITIONAL_CALL)
// 004b7d36: ADD ESP,0x10
// 004b7d39: POP EBX
// 004b7d3a: ADD ESP,0x100
// 004b7d40: POP EDI
// 004b7d41: POP ESI
// 004b7d42: RET
