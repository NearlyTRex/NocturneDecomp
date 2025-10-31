// Name: shape_edittool.cpp_CPickList_setCancelButtonText_FUN_004a3d90
// Address: 004a3d90
// Address Range: [[004a3d90, 004a3e01]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_CPickList_setCancelButtonText_FUN_004a3d90(CPickList * this_ptr, char * text)
// Cross-references:
//   core_msnedit.cpp_CDemonMission_showEditorMenu_FUN_005381e0 (005381e0) at 005388e0 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_BuildingThumbnailImages_FUN_00576da0 (00576da0) at 00576f8f [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_crossReferencePodDuplicates_FUN_004b9f40 (004b9f40) at 004ba4a3 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_managePodMounts_FUN_004bcec0 (004bcec0) at 004bcf87 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_shape_edittool_cpp_00623a32
//   TerminatedCString s_CPickList_setCancelButto_00623a48
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

void __cdecl
shape_edittool_cpp_CPickList_setCancelButtonText_FUN_004a3d90(CPickList *this_ptr,char *text)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  
  if (text == (char *)0x0) {
    this_ptr->cancel_button_text[0] = '\0';
    return;
  }
  uVar2 = 0xffffffff;
  pcVar3 = text;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  if (99 < ~uVar2 - 1) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 0xd87;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CPickList::setCancelButtonText - too long!");
  }
  pcVar3 = text + 0xa8;
  do {
    cVar1 = *text;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = text[1];
    text = text + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  return;
}


// Assembly code:
// 004a3d90: PUSH ESI
//   Label: shape_edittool.cpp_CPickList_setCancelButtonText_FUN_004a3d90
// 004a3d91: MOV ESI,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 004a3d95: TEST ESI,ESI
// 004a3d97: JNZ 0x004a3da6
//   XREF to: 004a3da6 (CONDITIONAL_JUMP)
// 004a3d99: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004a3d9d: MOV byte ptr [ECX + 0xa8],0x0
// 004a3da4: POP ESI
// 004a3da5: RET
// 004a3da6: PUSH EDI
//   Label: LAB_004a3da6
// 004a3da7: MOV EDI,ESI
// 004a3da9: SUB ECX,ECX
// 004a3dab: DEC ECX
// 004a3dac: XOR EAX,EAX
// 004a3dae: SCASB.REPNE ES:EDI
// 004a3db0: NOT ECX
// 004a3db2: DEC ECX
// 004a3db3: CMP ECX,0x64
// 004a3db6: JC 0x004a3ddb
//   XREF to: 004a3ddb (CONDITIONAL_JUMP)
// 004a3db8: MOV EDX,0x623a32
//   XREF to: 00623a32 (PARAM)
// 004a3dbd: MOV ECX,0xd87
// 004a3dc2: PUSH 0x623a48
//   XREF to: 00623a48 (DATA)
// 004a3dc7: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 004a3dcd: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 004a3dd3: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004a3dd8: ADD ESP,0x4
// 004a3ddb: MOV EDI,dword ptr [ESP + 0xc]
//   Label: LAB_004a3ddb
//   XREF to: Stack[0x4] (READ)
// 004a3ddf: ADD EDI,0xa8
// 004a3de5: PUSH EDI
// 004a3de6: MOV AL,byte ptr [ESI]
//   Label: LAB_004a3de6
// 004a3de8: MOV byte ptr [EDI],AL
// 004a3dea: CMP AL,0x0
// 004a3dec: JZ 0x004a3dfe
//   XREF to: 004a3dfe (CONDITIONAL_JUMP)
// 004a3dee: MOV AL,byte ptr [ESI + 0x1]
// 004a3df1: ADD ESI,0x2
// 004a3df4: MOV byte ptr [EDI + 0x1],AL
// 004a3df7: ADD EDI,0x2
// 004a3dfa: CMP AL,0x0
// 004a3dfc: JNZ 0x004a3de6
//   XREF to: 004a3de6 (CONDITIONAL_JUMP)
// 004a3dfe: POP EDI
//   Label: LAB_004a3dfe
// 004a3dff: POP EDI
// 004a3e00: POP ESI
// 004a3e01: RET
