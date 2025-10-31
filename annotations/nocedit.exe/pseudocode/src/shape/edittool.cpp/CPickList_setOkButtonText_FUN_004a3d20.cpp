// Name: shape_edittool.cpp_CPickList_setOkButtonText_FUN_004a3d20
// Address: 004a3d20
// Address Range: [[004a3d20, 004a3d8b]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_CPickList_setOkButtonText_FUN_004a3d20(CPickList * this_ptr, char * text)
// Cross-references:
//   engine_fileio.cpp_CFileManager_managePodMounts_FUN_004bcec0 (004bcec0) at 004bcf75 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_shape_edittool_cpp_006239f5
//   TerminatedCString s_CPickList_setOkButtonTex_00623a0b
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

void __cdecl
shape_edittool_cpp_CPickList_setOkButtonText_FUN_004a3d20(CPickList *this_ptr,char *text)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  
  if (text == (char *)0x0) {
    this_ptr->ok_button_text[0] = '\0';
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
    g_CurrentLineNumber = 0xd78;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CPickList::setOkButtonText - too long!");
  }
  pcVar3 = text + 0x44;
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
// 004a3d20: PUSH ESI
//   Label: shape_edittool.cpp_CPickList_setOkButtonText_FUN_004a3d20
// 004a3d21: MOV ESI,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 004a3d25: TEST ESI,ESI
// 004a3d27: JNZ 0x004a3d33
//   XREF to: 004a3d33 (CONDITIONAL_JUMP)
// 004a3d29: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004a3d2d: MOV byte ptr [ECX + 0x44],0x0
// 004a3d31: POP ESI
// 004a3d32: RET
// 004a3d33: PUSH EDI
//   Label: LAB_004a3d33
// 004a3d34: MOV EDI,ESI
// 004a3d36: SUB ECX,ECX
// 004a3d38: DEC ECX
// 004a3d39: XOR EAX,EAX
// 004a3d3b: SCASB.REPNE ES:EDI
// 004a3d3d: NOT ECX
// 004a3d3f: DEC ECX
// 004a3d40: CMP ECX,0x64
// 004a3d43: JC 0x004a3d68
//   XREF to: 004a3d68 (CONDITIONAL_JUMP)
// 004a3d45: MOV EDX,0x6239f5
//   XREF to: 006239f5 (PARAM)
// 004a3d4a: MOV ECX,0xd78
// 004a3d4f: PUSH 0x623a0b
//   XREF to: 00623a0b (DATA)
// 004a3d54: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 004a3d5a: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 004a3d60: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004a3d65: ADD ESP,0x4
// 004a3d68: MOV EDI,dword ptr [ESP + 0xc]
//   Label: LAB_004a3d68
//   XREF to: Stack[0x4] (READ)
// 004a3d6c: ADD EDI,0x44
// 004a3d6f: PUSH EDI
// 004a3d70: MOV AL,byte ptr [ESI]
//   Label: LAB_004a3d70
// 004a3d72: MOV byte ptr [EDI],AL
// 004a3d74: CMP AL,0x0
// 004a3d76: JZ 0x004a3d88
//   XREF to: 004a3d88 (CONDITIONAL_JUMP)
// 004a3d78: MOV AL,byte ptr [ESI + 0x1]
// 004a3d7b: ADD ESI,0x2
// 004a3d7e: MOV byte ptr [EDI + 0x1],AL
// 004a3d81: ADD EDI,0x2
// 004a3d84: CMP AL,0x0
// 004a3d86: JNZ 0x004a3d70
//   XREF to: 004a3d70 (CONDITIONAL_JUMP)
// 004a3d88: POP EDI
//   Label: LAB_004a3d88
// 004a3d89: POP EDI
// 004a3d8a: POP ESI
// 004a3d8b: RET
