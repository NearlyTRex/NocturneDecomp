// Name: shape_design.c_promptForModelNameAndLoad_FUN_00458a10
// Address: 00458a10
// Address Range: [[00458a10, 00458ab3]]
// Convention: __cdecl
// Signature: int shape_design.c_promptForModelNameAndLoad_FUN_00458a10(void)
// Cross-references:
//   shape_design.c_handleEditorHotkeys_FUN_0045b990 (0045b990) at 0045b9bc [UNCONDITIONAL_CALL]
//   shape_design.c_tileTextureMaps_FUN_0046a180 (0046a180) at 0046a1ad [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Model_name_to_load_0061a9b6
//   TerminatedCString s_MDL_0061a9cc
//   undefined4 DAT_0061a9cd
//   undefined4 DAT_0061a9ce
//   undefined4 DAT_0061a9cf
// Function calls:
//   engine_2d.c_getInputWithPrompt_FUN_004032c0
//   shape_design.c_loadModelFile_FUN_00458ac0
//   wincore_windll.cpp_clearScreen_FUN_005b3e70

#include "nocturne.h"

int __cdecl shape_design_c_promptForModelNameAndLoad_FUN_00458a10(void)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  BADSPACEBASE *in_ESP;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  byte bVar7;
  
  bVar7 = 0;
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  engine_2d_c_getInputWithPrompt_FUN_004032c0
            (&stack0xffffff9c,0x28,0,0,"Model name to load : ");
  pcVar5 = &stack0xffffff9c;
  do {
    pcVar4 = pcVar5;
    if (*pcVar5 == '.') goto LAB_00458a59;
    if (*pcVar5 == '\0') break;
    pcVar4 = pcVar5 + 1;
    if (*pcVar4 == '.') goto LAB_00458a59;
    pcVar5 = pcVar5 + 2;
  } while (*pcVar4 != '\0');
  pcVar4 = (char *)0x0;
LAB_00458a59:
  if (pcVar4 == (char *)0x0) {
    uVar3 = 0xffffffff;
    pcVar5 = &stack0xffffff9c;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + (uint)bVar7 * -2 + 1;
    } while (cVar1 != '\0');
    if (~uVar3 - 1 < 9) {
      pcVar4 = ".MDL";
      iVar2 = -1;
      pcVar5 = &stack0xffffff9c;
      do {
        pcVar6 = pcVar5;
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        pcVar6 = pcVar5 + (uint)bVar7 * -2 + 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar6;
      } while (cVar1 != '\0');
      pcVar6 = pcVar6 + -1;
      do {
        cVar1 = *pcVar4;
        *pcVar6 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar6[1] = cVar1;
        pcVar6 = pcVar6 + 2;
      } while (cVar1 != '\0');
    }
  }
  iVar2 = shape_design_c_loadModelFile_FUN_00458ac0(&stack0xffffff9c);
  return iVar2;
}


// Assembly code:
// 00458a10: PUSH EBX
//   Label: shape_design.c_promptForModelNameAndLoad_FUN_00458a10
// 00458a11: PUSH ESI
// 00458a12: PUSH EDI
// 00458a13: PUSH EBP
// 00458a14: MOV EBP,ESP
// 00458a16: SUB ESP,0x54
// 00458a1c: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 00458a21: MOV EDX,0x61a9b6
//   XREF to: 0061a9b6 (DATA)
// 00458a26: PUSH EDX
//   XREF to: 0061a9b6 (DATA)
// 00458a27: PUSH 0x0
// 00458a29: PUSH 0x0
// 00458a2b: PUSH 0x28
// 00458a2d: LEA EDX,[EBP + -0x54]
//   XREF to: Stack[-0x64] (DATA)
// 00458a30: PUSH EDX
// 00458a31: CALL engine_2d.c_getInputWithPrompt_FUN_004032c0
//   XREF to: 004032c0 (UNCONDITIONAL_CALL)
// 00458a36: ADD ESP,0x14
// 00458a39: MOV EDX,0x2e
// 00458a3e: LEA ESI,[EBP + -0x54]
//   XREF to: Stack[-0x64] (DATA)
// 00458a41: MOV AL,byte ptr [ESI]
//   Label: LAB_00458a41
//   XREF to: Stack[-0x64] (DATA)
// 00458a43: CMP AL,DL
// 00458a45: JZ 0x00458a59
//   XREF to: 00458a59 (CONDITIONAL_JUMP)
// 00458a47: CMP AL,0x0
// 00458a49: JZ 0x00458a57
//   XREF to: 00458a57 (CONDITIONAL_JUMP)
// 00458a4b: INC ESI
// 00458a4c: MOV AL,byte ptr [ESI]
//   XREF to: Stack[-0x63] (DATA)
// 00458a4e: CMP AL,DL
// 00458a50: JZ 0x00458a59
//   XREF to: 00458a59 (CONDITIONAL_JUMP)
// 00458a52: INC ESI
// 00458a53: CMP AL,0x0
// 00458a55: JNZ 0x00458a41
//   XREF to: 00458a41 (CONDITIONAL_JUMP)
// 00458a57: SUB ESI,ESI
//   Label: LAB_00458a57
// 00458a59: TEST ESI,ESI
//   Label: LAB_00458a59
// 00458a5b: JNZ 0x00458a6f
//   XREF to: 00458a6f (CONDITIONAL_JUMP)
// 00458a5d: LEA EDI,[EBP + -0x54]
//   XREF to: Stack[-0x64] (DATA)
// 00458a60: SUB ECX,ECX
// 00458a62: DEC ECX
// 00458a63: XOR EAX,EAX
// 00458a65: SCASB.REPNE ES:EDI
// 00458a67: NOT ECX
// 00458a69: DEC ECX
// 00458a6a: CMP ECX,0x8
// 00458a6d: JBE 0x00458a71
//   XREF to: 00458a71 (CONDITIONAL_JUMP)
// 00458a6f: JMP 0x00458a9b
//   Label: LAB_00458a6f
//   XREF to: 00458a9b (UNCONDITIONAL_JUMP)
// 00458a71: MOV ESI,0x61a9cc
//   Label: LAB_00458a71
//   XREF to: 0061a9cc (DATA)
// 00458a76: LEA EDI,[EBP + -0x54]
//   XREF to: Stack[-0x64] (DATA)
// 00458a79: PUSH EDI
// 00458a7a: SUB ECX,ECX
// 00458a7c: DEC ECX
// 00458a7d: MOV AL,0x0
// 00458a7f: SCASB.REPNE ES:EDI
// 00458a81: DEC EDI
// 00458a82: MOV AL,byte ptr [ESI]
//   Label: LAB_00458a82
//   XREF to: 0061a9cc (READ)
//   XREF to: 0061a9ce (READ)
// 00458a84: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x64] (DATA)
// 00458a86: CMP AL,0x0
// 00458a88: JZ 0x00458a9a
//   XREF to: 00458a9a (CONDITIONAL_JUMP)
// 00458a8a: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 0061a9cd (READ)
//   XREF to: 0061a9cf (READ)
// 00458a8d: ADD ESI,0x2
// 00458a90: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x63] (WRITE)
// 00458a93: ADD EDI,0x2
// 00458a96: CMP AL,0x0
// 00458a98: JNZ 0x00458a82
//   XREF to: 00458a82 (CONDITIONAL_JUMP)
// 00458a9a: POP EDI
//   Label: LAB_00458a9a
// 00458a9b: LEA EAX,[EBP + -0x54]
//   Label: LAB_00458a9b
//   XREF to: Stack[-0x64] (DATA)
// 00458a9e: PUSH EAX
// 00458a9f: CALL shape_design.c_loadModelFile_FUN_00458ac0
//   XREF to: 00458ac0 (UNCONDITIONAL_CALL)
// 00458aa4: ADD ESP,0x4
// 00458aa7: MOV dword ptr [EBP + -0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00458aaa: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 00458aad: MOV ESP,EBP
// 00458aaf: POP EBP
// 00458ab0: POP EDI
// 00458ab1: POP ESI
// 00458ab2: POP EBX
// 00458ab3: RET
