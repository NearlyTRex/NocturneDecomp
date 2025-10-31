// Name: shape_design.c_saveCurrentModel_FUN_00459de0
// Address: 00459de0
// Address Range: [[00459de0, 00459e7d]]
// Convention: __cdecl
// Signature: void shape_design.c_saveCurrentModel_FUN_00459de0(void)
// Cross-references:
//   shape_design.c_handleEditorHotkeys_FUN_0045b990 (0045b990) at 0045b9f5 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Model_name_to_save_0061ad80
//   TerminatedCString s_MDL_0061ad96
//   undefined4 DAT_0061ad97
//   undefined4 DAT_0061ad98
//   undefined4 DAT_0061ad99
// Function calls:
//   engine_2d.c_getInputWithPrompt_FUN_004032c0
//   shape_design.c_exportModelToMDL_FUN_00459e80
//   wincore_windll.cpp_clearScreen_FUN_005b3e70

#include "nocturne.h"

void __cdecl shape_design_c_saveCurrentModel_FUN_00459de0(void)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  BADSPACEBASE *in_ESP;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  byte bVar7;
  
  bVar7 = 0;
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  engine_2d_c_getInputWithPrompt_FUN_004032c0
            (&stack0xffffffa0,0x28,0,0,"Model name to save : ");
  pcVar5 = &stack0xffffffa0;
  do {
    pcVar4 = pcVar5;
    if (*pcVar5 == '.') goto LAB_00459e29;
    if (*pcVar5 == '\0') break;
    pcVar4 = pcVar5 + 1;
    if (*pcVar4 == '.') goto LAB_00459e29;
    pcVar5 = pcVar5 + 2;
  } while (*pcVar4 != '\0');
  pcVar4 = (char *)0x0;
LAB_00459e29:
  if (pcVar4 == (char *)0x0) {
    uVar2 = 0xffffffff;
    pcVar5 = &stack0xffffffa0;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + (uint)bVar7 * -2 + 1;
    } while (cVar1 != '\0');
    if (~uVar2 - 1 < 9) {
      pcVar4 = ".MDL";
      iVar3 = -1;
      pcVar5 = &stack0xffffffa0;
      do {
        pcVar6 = pcVar5;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
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
  shape_design_c_exportModelToMDL_FUN_00459e80(&stack0xffffffa0);
  return;
}


// Assembly code:
// 00459de0: PUSH EBX
//   Label: shape_design.c_saveCurrentModel_FUN_00459de0
// 00459de1: PUSH ESI
// 00459de2: PUSH EDI
// 00459de3: PUSH EBP
// 00459de4: MOV EBP,ESP
// 00459de6: SUB ESP,0x50
// 00459dec: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 00459df1: MOV EDX,0x61ad80
//   XREF to: 0061ad80 (DATA)
// 00459df6: PUSH EDX
//   XREF to: 0061ad80 (DATA)
// 00459df7: PUSH 0x0
// 00459df9: PUSH 0x0
// 00459dfb: PUSH 0x28
// 00459dfd: LEA EDX,[EBP + -0x50]
//   XREF to: Stack[-0x60] (DATA)
// 00459e00: PUSH EDX
// 00459e01: CALL engine_2d.c_getInputWithPrompt_FUN_004032c0
//   XREF to: 004032c0 (UNCONDITIONAL_CALL)
// 00459e06: ADD ESP,0x14
// 00459e09: MOV EDX,0x2e
// 00459e0e: LEA ESI,[EBP + -0x50]
//   XREF to: Stack[-0x60] (DATA)
// 00459e11: MOV AL,byte ptr [ESI]
//   Label: LAB_00459e11
//   XREF to: Stack[-0x60] (DATA)
// 00459e13: CMP AL,DL
// 00459e15: JZ 0x00459e29
//   XREF to: 00459e29 (CONDITIONAL_JUMP)
// 00459e17: CMP AL,0x0
// 00459e19: JZ 0x00459e27
//   XREF to: 00459e27 (CONDITIONAL_JUMP)
// 00459e1b: INC ESI
// 00459e1c: MOV AL,byte ptr [ESI]
//   XREF to: Stack[-0x5f] (DATA)
// 00459e1e: CMP AL,DL
// 00459e20: JZ 0x00459e29
//   XREF to: 00459e29 (CONDITIONAL_JUMP)
// 00459e22: INC ESI
// 00459e23: CMP AL,0x0
// 00459e25: JNZ 0x00459e11
//   XREF to: 00459e11 (CONDITIONAL_JUMP)
// 00459e27: SUB ESI,ESI
//   Label: LAB_00459e27
// 00459e29: TEST ESI,ESI
//   Label: LAB_00459e29
// 00459e2b: JNZ 0x00459e3f
//   XREF to: 00459e3f (CONDITIONAL_JUMP)
// 00459e2d: LEA EDI,[EBP + -0x50]
//   XREF to: Stack[-0x60] (DATA)
// 00459e30: SUB ECX,ECX
// 00459e32: DEC ECX
// 00459e33: XOR EAX,EAX
// 00459e35: SCASB.REPNE ES:EDI
// 00459e37: NOT ECX
// 00459e39: DEC ECX
// 00459e3a: CMP ECX,0x8
// 00459e3d: JBE 0x00459e41
//   XREF to: 00459e41 (CONDITIONAL_JUMP)
// 00459e3f: JMP 0x00459e6b
//   Label: LAB_00459e3f
//   XREF to: 00459e6b (UNCONDITIONAL_JUMP)
// 00459e41: MOV ESI,0x61ad96
//   Label: LAB_00459e41
//   XREF to: 0061ad96 (DATA)
// 00459e46: LEA EDI,[EBP + -0x50]
//   XREF to: Stack[-0x60] (DATA)
// 00459e49: PUSH EDI
// 00459e4a: SUB ECX,ECX
// 00459e4c: DEC ECX
// 00459e4d: MOV AL,0x0
// 00459e4f: SCASB.REPNE ES:EDI
// 00459e51: DEC EDI
// 00459e52: MOV AL,byte ptr [ESI]
//   Label: LAB_00459e52
//   XREF to: 0061ad96 (READ)
//   XREF to: 0061ad98 (READ)
// 00459e54: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x60] (DATA)
// 00459e56: CMP AL,0x0
// 00459e58: JZ 0x00459e6a
//   XREF to: 00459e6a (CONDITIONAL_JUMP)
// 00459e5a: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 0061ad97 (READ)
//   XREF to: 0061ad99 (READ)
// 00459e5d: ADD ESI,0x2
// 00459e60: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x5f] (WRITE)
// 00459e63: ADD EDI,0x2
// 00459e66: CMP AL,0x0
// 00459e68: JNZ 0x00459e52
//   XREF to: 00459e52 (CONDITIONAL_JUMP)
// 00459e6a: POP EDI
//   Label: LAB_00459e6a
// 00459e6b: LEA EAX,[EBP + -0x50]
//   Label: LAB_00459e6b
//   XREF to: Stack[-0x60] (DATA)
// 00459e6e: PUSH EAX
// 00459e6f: CALL shape_design.c_exportModelToMDL_FUN_00459e80
//   XREF to: 00459e80 (UNCONDITIONAL_CALL)
// 00459e74: ADD ESP,0x4
// 00459e77: MOV ESP,EBP
// 00459e79: POP EBP
// 00459e7a: POP EDI
// 00459e7b: POP ESI
// 00459e7c: POP EBX
// 00459e7d: RET
