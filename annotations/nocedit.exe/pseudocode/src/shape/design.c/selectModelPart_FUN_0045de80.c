// Name: shape_design.c_selectModelPart_FUN_0045de80
// Address: 0045de80
// Address Range: [[0045de80, 0045df53]]
// Convention: unknown
// Signature: undefined shape_design.c_selectModelPart_FUN_0045de80()
// Globals:
//   TerminatedCString s_Part_name_0061b4a2
//   SModelPartName[500] g_ModelPartNames
//   undefined4 DAT_01e50191
//   undefined4 DAT_01e50192
//   undefined4 DAT_01e50193
//   int g_PartsCount
//   int g_CurrentPartIndex
// Function calls:
//   crt_string.c_strcmp_FUN_005fef20
//   engine_2d.c_getInputWithPrompt_FUN_004032c0

#include "nocturne.h"

void shape_design_c_selectModelPart_FUN_0045de80(void)

{
  char cVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  char *pcVar3;
  char *pcVar4;
  byte bVar5;
  int local_18;
  int local_14;
  
  bVar5 = 0;
  engine_2d_c_getInputWithPrompt_FUN_004032c0(&stack0xffffffd4,0x13,0,0xb,"Part name : ");
  iVar2 = -1;
  pcVar3 = &stack0xffffffd4;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + (uint)bVar5 * -2 + 1;
  } while (cVar1 != '\0');
  if (iVar2 != -2) {
    local_14 = -1;
    for (local_18 = 0; local_18 < g_PartsCount; local_18 = local_18 + 1) {
      iVar2 = crt_string_c_strcmp_FUN_005fef20(&stack0xffffffd4,g_ModelPartNames[local_18].name);
      if (iVar2 == 0) {
        local_14 = local_18;
        break;
      }
    }
    if (local_14 == -1) {
      pcVar3 = &stack0xffffffd4;
      pcVar4 = g_ModelPartNames[g_PartsCount].name;
      do {
        cVar1 = *pcVar3;
        *pcVar4 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar3[1];
        pcVar3 = pcVar3 + 2;
        pcVar4[1] = cVar1;
        pcVar4 = pcVar4 + 2;
      } while (cVar1 != '\0');
      g_CurrentPartIndex = g_PartsCount;
      g_PartsCount = g_PartsCount + 1;
    }
    else {
      g_CurrentPartIndex = local_14;
    }
  }
  return;
}


// Assembly code:
// 0045de80: PUSH EBX
//   Label: shape_design.c_selectModelPart_FUN_0045de80
// 0045de81: PUSH ESI
// 0045de82: PUSH EDI
// 0045de83: PUSH EBP
// 0045de84: MOV EBP,ESP
// 0045de86: SUB ESP,0x1c
// 0045de8c: MOV ECX,0x61b4a2
//   XREF to: 0061b4a2 (DATA)
// 0045de91: PUSH ECX
//   XREF to: 0061b4a2 (DATA)
// 0045de92: PUSH 0xb
// 0045de94: PUSH 0x0
// 0045de96: PUSH 0x13
// 0045de98: LEA ECX,[EBP + -0x1c]
//   XREF to: Stack[-0x2c] (DATA)
// 0045de9b: PUSH ECX
// 0045de9c: CALL engine_2d.c_getInputWithPrompt_FUN_004032c0
//   XREF to: 004032c0 (UNCONDITIONAL_CALL)
// 0045dea1: ADD ESP,0x14
// 0045dea4: LEA EDI,[EBP + -0x1c]
//   XREF to: Stack[-0x2c] (DATA)
// 0045dea7: SUB ECX,ECX
// 0045dea9: DEC ECX
// 0045deaa: XOR EAX,EAX
// 0045deac: SCASB.REPNE ES:EDI
// 0045deae: NOT ECX
// 0045deb0: DEC ECX
// 0045deb1: TEST ECX,ECX
// 0045deb3: JZ 0x0045df4d
//   XREF to: 0045df4d (CONDITIONAL_JUMP)
// 0045deb9: MOV dword ptr [EBP + -0x4],0xffffffff
//   XREF to: Stack[-0x14] (WRITE)
// 0045dec0: MOV dword ptr [EBP + -0x8],0x0
//   XREF to: Stack[-0x18] (WRITE)
// 0045dec7: JMP 0x0045decf
//   XREF to: 0045decf (UNCONDITIONAL_JUMP)
// 0045dec9: MOV EAX,dword ptr [EBP + -0x8]
//   Label: LAB_0045dec9
//   XREF to: Stack[-0x18] (READ)
// 0045decc: INC dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ_WRITE)
// 0045decf: MOV EAX,dword ptr [EBP + -0x8]
//   Label: LAB_0045decf
//   XREF to: Stack[-0x18] (READ)
// 0045ded2: CMP EAX,dword ptr [0x01e528a0]
//   XREF to: 01e528a0 (READ)
// 0045ded8: JGE 0x0045df00
//   XREF to: 0045df00 (CONDITIONAL_JUMP)
// 0045deda: IMUL EDX,dword ptr [EBP + -0x8],0x14
//   XREF to: Stack[-0x18] (READ)
// 0045dede: MOV EAX,0x1e50190
//   XREF to: 01e50190 (DATA)
// 0045dee3: ADD EAX,EDX
// 0045dee5: PUSH EAX
// 0045dee6: LEA EAX,[EBP + -0x1c]
//   XREF to: Stack[-0x2c] (DATA)
// 0045dee9: PUSH EAX
// 0045deea: CALL crt_string.c_strcmp_FUN_005fef20
//   XREF to: 005fef20 (UNCONDITIONAL_CALL)
// 0045deef: ADD ESP,0x8
// 0045def2: TEST EAX,EAX
// 0045def4: JNZ 0x0045defe
//   XREF to: 0045defe (CONDITIONAL_JUMP)
// 0045def6: MOV EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 0045def9: MOV dword ptr [EBP + -0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0045defc: JMP 0x0045df00
//   XREF to: 0045df00 (UNCONDITIONAL_JUMP)
// 0045defe: JMP 0x0045dec9
//   Label: LAB_0045defe
//   XREF to: 0045dec9 (UNCONDITIONAL_JUMP)
// 0045df00: CMP dword ptr [EBP + -0x4],-0x1
//   Label: LAB_0045df00
//   XREF to: Stack[-0x14] (READ)
// 0045df04: JZ 0x0045df10
//   XREF to: 0045df10 (CONDITIONAL_JUMP)
// 0045df06: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045df09: MOV [0x01e6614c],EAX
//   XREF to: 01e6614c (WRITE)
// 0045df0e: JMP 0x0045df4d
//   XREF to: 0045df4d (UNCONDITIONAL_JUMP)
// 0045df10: LEA ESI,[EBP + -0x1c]
//   Label: LAB_0045df10
//   XREF to: Stack[-0x2c] (DATA)
// 0045df13: IMUL EAX,dword ptr [0x01e528a0],0x14
//   XREF to: 01e528a0 (READ)
// 0045df1a: MOV EDI,0x1e50190
//   XREF to: 01e50190 (DATA)
// 0045df1f: ADD EDI,EAX
// 0045df21: PUSH EDI
// 0045df22: MOV AL,byte ptr [ESI]
//   Label: LAB_0045df22
//   XREF to: Stack[-0x2c] (DATA)
// 0045df24: MOV byte ptr [EDI],AL
//   XREF to: 01e50190 (DATA)
//   XREF to: 01e50192 (DATA)
// 0045df26: CMP AL,0x0
// 0045df28: JZ 0x0045df3a
//   XREF to: 0045df3a (CONDITIONAL_JUMP)
// 0045df2a: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: Stack[-0x2b] (READ)
// 0045df2d: ADD ESI,0x2
// 0045df30: MOV byte ptr [EDI + 0x1],AL
//   XREF to: 01e50191 (DATA)
//   XREF to: 01e50193 (DATA)
// 0045df33: ADD EDI,0x2
// 0045df36: CMP AL,0x0
// 0045df38: JNZ 0x0045df22
//   XREF to: 0045df22 (CONDITIONAL_JUMP)
// 0045df3a: POP EDI
//   Label: LAB_0045df3a
// 0045df3b: MOV ESI,dword ptr [0x01e528a0]
//   XREF to: 01e528a0 (READ)
// 0045df41: MOV dword ptr [0x01e6614c],ESI
//   XREF to: 01e6614c (WRITE)
// 0045df47: INC dword ptr [0x01e528a0]
//   XREF to: 01e528a0 (READ_WRITE)
// 0045df4d: MOV ESP,EBP
//   Label: LAB_0045df4d
// 0045df4f: POP EBP
// 0045df50: POP EDI
// 0045df51: POP ESI
// 0045df52: POP EBX
// 0045df53: RET
