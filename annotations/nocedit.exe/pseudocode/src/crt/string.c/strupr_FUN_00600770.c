// Name: crt_string.c_strupr_FUN_00600770
// Address: 00600770
// Address Range: [[00600770, 0060078d]]
// Convention: __cdecl
// Signature: char * crt_string.c_strupr_FUN_00600770(char * string)
// Cross-references:
//   core_event.cpp_CEventList_FUN_004b0330 (004b0330) at 004b03db [UNCONDITIONAL_CALL]
//   core_event.cpp_CEventList_FUN_004b0470 (004b0470) at 004b051b [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_showEditorMenu_FUN_00584940 (00584940) at 00584e21 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_DementedCameraEditor_FUN_0057e7c0 (0057e7c0) at 0057ecfd [UNCONDITIONAL_CALL]
//   core_setedit.cpp_DementedFogEditor_FUN_00580730 (00580730) at 00580eb5 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_showDementedLightEditor_FUN_0057c5d0 (0057c5d0) at 0057cd2b [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_catalogPodFile_FUN_004b7460 (004b7460) at 004b75fa [UNCONDITIONAL_CALL]
//   engine_font.cpp_CBitFont_loadBitmap_FUN_004ccff0 (004ccff0) at 004cd052 [UNCONDITIONAL_CALL]
//   shape_design.c_cramTextureList_FUN_0046bb80 (0046bb80) at 0046cf09 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420 (0049f420) at 0049f964 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70 (0049fb70) at 0049fc6a [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CStrList_insertSortedFileRecord_FUN_004a3360 (004a3360) at 004a3565 [UNCONDITIONAL_CALL]

#include "nocturne.h"

char * __cdecl crt_string_c_strupr_FUN_00600770(char *string)

{
  char cVar1;
  char *pcVar2;
  
  for (pcVar2 = string; cVar1 = *pcVar2, cVar1 != '\0'; pcVar2 = pcVar2 + 1) {
    if ((byte)(cVar1 + 0x9fU) < 0x1a) {
      *pcVar2 = cVar1 + -0x20;
    }
  }
  return string;
}


// Assembly code:
// 00600770: PUSH EBX
//   Label: crt_string.c_strupr_FUN_00600770
// 00600771: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00600775: MOV EDX,EBX
// 00600777: MOV AL,byte ptr [EDX]
//   Label: LAB_00600777
// 00600779: TEST AL,AL
// 0060077b: JZ 0x0060078a
//   XREF to: 0060078a (CONDITIONAL_JUMP)
// 0060077d: SUB AL,0x61
// 0060077f: CMP AL,0x19
// 00600781: JA 0x00600787
//   XREF to: 00600787 (CONDITIONAL_JUMP)
// 00600783: ADD AL,0x41
// 00600785: MOV byte ptr [EDX],AL
// 00600787: INC EDX
//   Label: LAB_00600787
// 00600788: JMP 0x00600777
//   XREF to: 00600777 (UNCONDITIONAL_JUMP)
// 0060078a: MOV EAX,EBX
//   Label: LAB_0060078a
// 0060078c: POP EBX
// 0060078d: RET
