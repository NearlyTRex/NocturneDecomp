// Name: engine_palette.cpp_CPaletteManager_addTexture_FUN_00544fc0
// Address: 00544fc0
// Address Range: [[00544fc0, 00545051]]
// Convention: unknown
// Signature: undefined engine_palette.cpp_CPaletteManager_addTexture_FUN_00544fc0()
// Cross-references:
//   engine_palette.cpp_CPaletteManager_FUN_00545060 (00545060) at 005450a8 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_engine_palette_cpp_0063e482
//   TerminatedCString s_paletteManager_addTextur_0063e498
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_string.c_strcmp_FUN_005fef20

#include "nocturne.h"

void engine_palette_cpp_CPaletteManager_addTexture_FUN_00544fc0(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int *in_stack_00000004;
  char *in_stack_00000008;
  
  iVar4 = 0;
  if (0 < *in_stack_00000004) {
    iVar3 = 0;
    do {
      iVar2 = crt_string_c_strcmp_FUN_005fef20
                        ((char *)(in_stack_00000004[1] + iVar3),in_stack_00000008);
      if (iVar2 == 0) {
        return;
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 0x40;
    } while (iVar4 < *in_stack_00000004);
  }
  pcVar5 = (char *)(in_stack_00000004[1] + *in_stack_00000004 * 0x40);
  do {
    cVar1 = *in_stack_00000008;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = in_stack_00000008[1];
    in_stack_00000008 = in_stack_00000008 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  iVar4 = *in_stack_00000004;
  *in_stack_00000004 = iVar4 + 1;
  if (iVar4 + 1 < 0x400) {
    return;
  }
  g_CurrentFilename = "..\\engine\\palette.cpp";
  g_CurrentLineNumber = 0x5d;
  core_main_c_displayErrorAndQuit_FUN_00506f10("paletteManager::addTexture - Too many textures!");
  return;
}


// Assembly code:
// 00544fc0: PUSH EBX
//   Label: engine_palette.cpp_CPaletteManager_addTexture_FUN_00544fc0
// 00544fc1: PUSH ESI
// 00544fc2: PUSH EDI
// 00544fc3: PUSH EBP
// 00544fc4: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00544fc8: MOV EBP,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00544fcc: MOV EDX,dword ptr [EBX]
// 00544fce: XOR EDI,EDI
// 00544fd0: TEST EDX,EDX
// 00544fd2: JLE 0x00544ff3
//   XREF to: 00544ff3 (CONDITIONAL_JUMP)
// 00544fd4: XOR ESI,ESI
// 00544fd6: MOV EAX,dword ptr [EBX + 0x4]
//   Label: LAB_00544fd6
// 00544fd9: PUSH EBP
// 00544fda: ADD EAX,ESI
// 00544fdc: PUSH EAX
// 00544fdd: CALL crt_string.c_strcmp_FUN_005fef20
//   XREF to: 005fef20 (UNCONDITIONAL_CALL)
// 00544fe2: ADD ESP,0x8
// 00544fe5: TEST EAX,EAX
// 00544fe7: JZ 0x00545026
//   XREF to: 00545026 (CONDITIONAL_JUMP)
// 00544fe9: INC EDI
// 00544fea: MOV ECX,dword ptr [EBX]
// 00544fec: ADD ESI,0x40
// 00544fef: CMP EDI,ECX
// 00544ff1: JL 0x00544fd6
//   XREF to: 00544fd6 (CONDITIONAL_JUMP)
// 00544ff3: MOV EAX,dword ptr [EBX]
//   Label: LAB_00544ff3
// 00544ff5: MOV EDI,dword ptr [EBX + 0x4]
// 00544ff8: SHL EAX,0x6
// 00544ffb: MOV ESI,EBP
// 00544ffd: ADD EDI,EAX
// 00544fff: PUSH EDI
// 00545000: MOV AL,byte ptr [ESI]
//   Label: LAB_00545000
// 00545002: MOV byte ptr [EDI],AL
// 00545004: CMP AL,0x0
// 00545006: JZ 0x00545018
//   XREF to: 00545018 (CONDITIONAL_JUMP)
// 00545008: MOV AL,byte ptr [ESI + 0x1]
// 0054500b: ADD ESI,0x2
// 0054500e: MOV byte ptr [EDI + 0x1],AL
// 00545011: ADD EDI,0x2
// 00545014: CMP AL,0x0
// 00545016: JNZ 0x00545000
//   XREF to: 00545000 (CONDITIONAL_JUMP)
// 00545018: POP EDI
//   Label: LAB_00545018
// 00545019: MOV ESI,dword ptr [EBX]
// 0054501b: INC ESI
// 0054501c: MOV dword ptr [EBX],ESI
// 0054501e: CMP ESI,0x400
// 00545024: JGE 0x0054502b
//   XREF to: 0054502b (CONDITIONAL_JUMP)
// 00545026: POP EBP
//   Label: LAB_00545026
// 00545027: POP EDI
// 00545028: POP ESI
// 00545029: POP EBX
// 0054502a: RET
// 0054502b: MOV EBP,0x63e482
//   Label: LAB_0054502b
//   XREF to: 0063e482 (DATA)
// 00545030: MOV EAX,0x5d
// 00545035: PUSH 0x63e498
//   XREF to: 0063e498 (DATA)
// 0054503a: MOV dword ptr [0x02f0ca48],EBP
//   XREF to: 02f0ca48 (WRITE)
// 00545040: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 00545045: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0054504a: ADD ESP,0x4
// 0054504d: POP EBP
// 0054504e: POP EDI
// 0054504f: POP ESI
// 00545050: POP EBX
// 00545051: RET
