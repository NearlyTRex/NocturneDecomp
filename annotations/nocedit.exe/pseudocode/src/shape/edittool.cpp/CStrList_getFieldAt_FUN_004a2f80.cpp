// Name: shape_edittool.cpp_CStrList_getFieldAt_FUN_004a2f80
// Address: 004a2f80
// Address Range: [[004a2f80, 004a3022]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_CStrList_getFieldAt_FUN_004a2f80(CStrList * this_ptr, int string_index, char * output_buffer, int field_number)
// Cross-references:
//   core_actor.cpp_AnotherActorParser_FUN_0040eed0 (0040eed0) at 0040f5cb [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_0053b510 (0053b510) at 0053b7ae [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_RelevantActorsToTesting_FUN_0053b030 (0053b030) at 0053b2ce [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_00562920 (00562920) at 00563911 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_EditingGroundTypesAndSaving_FUN_00578630 (00578630) at 00578723 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CCheckOutItem_findFileToCheckOut_FUN_004b5030 (004b5030) at 004b5216 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_extractFilesToDirectory_FUN_004b76d0 (004b76d0) at 004b7837 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420 (0049f420) at 0049fa2f [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270 (0049f270) at 0049f300 [UNCONDITIONAL_CALL]
// Function calls:
//   shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70

#include "nocturne.h"

void __cdecl
shape_edittool_cpp_CStrList_getFieldAt_FUN_004a2f80
          (CStrList *this_ptr,int string_index,char *output_buffer,int field_number)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  BADSPACEBASE *in_ESP;
  char acStack_130 [296];
  
  pcVar3 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(this_ptr,(int)output_buffer);
  for (; (pcVar3 != (char *)0x0 && (0 < field_number)); field_number = field_number + -1) {
    cVar1 = *pcVar3;
    pcVar4 = acStack_130;
    pcVar2 = pcVar3;
    while ((pcVar3 = pcVar2, cVar1 != '\0' && (pcVar3 = pcVar2 + 1, *pcVar2 != '\t'))) {
      *pcVar4 = *pcVar2;
      pcVar4 = pcVar4 + 1;
      cVar1 = *pcVar3;
      pcVar2 = pcVar3;
    }
    *pcVar4 = '\0';
  }
  if (pcVar3 != (char *)0x0) {
    cVar1 = *pcVar3;
    while ((cVar1 != '\0' && (*pcVar3 != '\t'))) {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      *output_buffer = cVar1;
      cVar1 = *pcVar3;
      output_buffer = output_buffer + 1;
    }
    *output_buffer = '\0';
    return;
  }
  *output_buffer = '\0';
  return;
}


// Assembly code:
// 004a2f80: PUSH EBX
//   Label: shape_edittool.cpp_CStrList_getFieldAt_FUN_004a2f80
// 004a2f81: PUSH ESI
// 004a2f82: SUB ESP,0x12c
// 004a2f88: MOV ESI,dword ptr [ESP + 0x144]
//   XREF to: Stack[0x10] (READ)
// 004a2f8f: MOV EDX,dword ptr [ESP + 0x140]
//   XREF to: Stack[0xc] (READ)
// 004a2f96: PUSH EDX
// 004a2f97: MOV ECX,dword ptr [ESP + 0x13c]
//   XREF to: Stack[0x4] (READ)
// 004a2f9e: PUSH ECX
// 004a2f9f: CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
// 004a2fa4: ADD ESP,0x8
// 004a2fa7: MOV ECX,EAX
// 004a2fa9: TEST EAX,EAX
// 004a2fab: JZ 0x004a2fd1
//   XREF to: 004a2fd1 (CONDITIONAL_JUMP)
// 004a2fad: TEST ESI,ESI
//   Label: LAB_004a2fad
// 004a2faf: JLE 0x004a2fd1
//   XREF to: 004a2fd1 (CONDITIONAL_JUMP)
// 004a2fb1: MOV EDX,ESP
// 004a2fb3: MOV BH,byte ptr [ECX]
// 004a2fb5: MOV EAX,ECX
// 004a2fb7: TEST BH,BH
// 004a2fb9: JZ 0x004a2fc7
//   XREF to: 004a2fc7 (CONDITIONAL_JUMP)
// 004a2fbb: MOV BH,byte ptr [EAX]
//   Label: LAB_004a2fbb
// 004a2fbd: LEA ECX,[EAX + 0x1]
// 004a2fc0: CMP BH,0x9
// 004a2fc3: JNZ 0x004a3001
//   XREF to: 004a3001 (CONDITIONAL_JUMP)
// 004a2fc5: MOV EAX,ECX
// 004a2fc7: MOV byte ptr [EDX],0x0
//   Label: LAB_004a2fc7
//   XREF to: Stack[-0x134] (DATA)
// 004a2fca: MOV ECX,EAX
// 004a2fcc: DEC ESI
// 004a2fcd: TEST EAX,EAX
// 004a2fcf: JNZ 0x004a2fad
//   XREF to: 004a2fad (CONDITIONAL_JUMP)
// 004a2fd1: TEST ECX,ECX
//   Label: LAB_004a2fd1
// 004a2fd3: JZ 0x004a3010
//   XREF to: 004a3010 (CONDITIONAL_JUMP)
// 004a2fd5: MOV EDX,dword ptr [ESP + 0x13c]
//   XREF to: Stack[0x8] (READ)
// 004a2fdc: MOV BL,byte ptr [ECX]
// 004a2fde: MOV EAX,ECX
// 004a2fe0: TEST BL,BL
// 004a2fe2: JZ 0x004a2ff5
//   XREF to: 004a2ff5 (CONDITIONAL_JUMP)
// 004a2fe4: CMP byte ptr [EAX],0x9
//   Label: LAB_004a2fe4
// 004a2fe7: JZ 0x004a2ff5
//   XREF to: 004a2ff5 (CONDITIONAL_JUMP)
// 004a2fe9: MOV CL,byte ptr [EAX]
// 004a2feb: INC EAX
// 004a2fec: MOV byte ptr [EDX],CL
// 004a2fee: MOV CL,byte ptr [EAX]
// 004a2ff0: INC EDX
// 004a2ff1: TEST CL,CL
// 004a2ff3: JNZ 0x004a2fe4
//   XREF to: 004a2fe4 (CONDITIONAL_JUMP)
// 004a2ff5: MOV byte ptr [EDX],0x0
//   Label: LAB_004a2ff5
// 004a2ff8: ADD ESP,0x12c
// 004a2ffe: POP ESI
// 004a2fff: POP EBX
// 004a3000: RET
// 004a3001: MOV AL,byte ptr [EAX]
//   Label: LAB_004a3001
// 004a3003: MOV byte ptr [EDX],AL
//   XREF to: Stack[-0x134] (DATA)
// 004a3005: INC EDX
// 004a3006: MOV BL,byte ptr [ECX]
// 004a3008: MOV EAX,ECX
// 004a300a: TEST BL,BL
// 004a300c: JNZ 0x004a2fbb
//   XREF to: 004a2fbb (CONDITIONAL_JUMP)
// 004a300e: JMP 0x004a2fc7
//   XREF to: 004a2fc7 (UNCONDITIONAL_JUMP)
// 004a3010: MOV EAX,dword ptr [ESP + 0x13c]
//   Label: LAB_004a3010
//   XREF to: Stack[0x8] (READ)
// 004a3017: MOV byte ptr [EAX],0x0
// 004a301a: ADD ESP,0x12c
// 004a3020: POP ESI
// 004a3021: POP EBX
// 004a3022: RET
