// Name: engine_2d.c_wrapTextToWidth_FUN_00401d80
// Address: 00401d80
// Address Range: [[00401d80, 00401ea0]]
// Convention: __cdecl
// Signature: void engine_2d.c_wrapTextToWidth_FUN_00401d80(char * input_text, int max_width, char * output_buffer)
// Globals:
//   char[256] g_CharacterClassificationTable
// Function calls:
//   engine_2d.c_getStringWidth_FUN_004018a0

#include "nocturne.h"

void __cdecl
engine_2d_c_wrapTextToWidth_FUN_00401d80(char *input_text,int max_width,char *output_buffer)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  BADSPACEBASE *in_ESP;
  int unaff_EBP;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  byte bVar8;
  int in_stack_00000010;
  char acStack_110 [252];
  undefined4 local_14;
  
  bVar8 = 0;
  local_14 = 1;
  pcVar5 = output_buffer;
  if (*input_text == '\0') {
    *output_buffer = '\0';
  }
  else {
    do {
      cVar1 = *input_text;
      *pcVar5 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = input_text[1];
      input_text = input_text + 2;
      pcVar5[1] = cVar1;
      pcVar5 = pcVar5 + 2;
    } while (cVar1 != '\0');
    iVar2 = engine_2d_c_getStringWidth_FUN_004018a0(output_buffer);
    pcVar5 = output_buffer;
    if ((int)output_buffer < iVar2) {
      do {
        cVar1 = *output_buffer;
        if (((cVar1 == '\0') || ((g_CharacterClassificationTable[(byte)(cVar1 + 1)] & 2U) != 0)) ||
           (cVar1 == '\n')) {
          uVar4 = (int)output_buffer - (int)pcVar5;
          pcVar6 = pcVar5;
          pcVar7 = acStack_110;
          for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
            *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
            pcVar6 = pcVar6 + (uint)bVar8 * -8 + 4;
            pcVar7 = pcVar7 + (uint)bVar8 * -8 + 4;
          }
          for (uVar3 = uVar4 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
            *pcVar7 = *pcVar6;
            pcVar6 = pcVar6 + (uint)bVar8 * -2 + 1;
            pcVar7 = pcVar7 + (uint)bVar8 * -2 + 1;
          }
          acStack_110[uVar4] = '\0';
          iVar2 = engine_2d_c_getStringWidth_FUN_004018a0(acStack_110);
          if (in_stack_00000010 < iVar2) {
            cVar1 = output_buffer[-1];
            pcVar6 = output_buffer;
            while ((output_buffer = pcVar6 + -1, cVar1 != '\n' && (*output_buffer != ' '))) {
              cVar1 = pcVar6[-2];
              pcVar6 = output_buffer;
            }
            *output_buffer = '\n';
          }
          if (*output_buffer == '\n') {
            pcVar5 = output_buffer + 1;
          }
        }
        output_buffer = output_buffer + 1;
      } while (unaff_EBP != 0);
      return;
    }
  }
  return;
}


// Assembly code:
// 00401d80: PUSH EBX
//   Label: engine_2d.c_wrapTextToWidth_FUN_00401d80
// 00401d81: PUSH ESI
// 00401d82: PUSH EDI
// 00401d83: PUSH EBP
// 00401d84: SUB ESP,0x104
// 00401d8a: MOV ESI,dword ptr [ESP + 0x118]
//   XREF to: Stack[0x4] (READ)
// 00401d91: MOV EDX,0x1
// 00401d96: MOV AH,byte ptr [ESI]
// 00401d98: MOV dword ptr [ESP + 0x100],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 00401d9f: TEST AH,AH
// 00401da1: JNZ 0x00401db8
//   XREF to: 00401db8 (CONDITIONAL_JUMP)
// 00401da3: MOV EAX,dword ptr [ESP + 0x120]
//   XREF to: Stack[0xc] (READ)
// 00401daa: MOV byte ptr [EAX],0x0
// 00401dad: ADD ESP,0x104
//   Label: LAB_00401dad
// 00401db3: POP EBP
// 00401db4: POP EDI
// 00401db5: POP ESI
// 00401db6: POP EBX
// 00401db7: RET
// 00401db8: MOV EDI,dword ptr [ESP + 0x120]
//   Label: LAB_00401db8
//   XREF to: Stack[0xc] (READ)
// 00401dbf: PUSH EDI
// 00401dc0: MOV AL,byte ptr [ESI]
//   Label: LAB_00401dc0
// 00401dc2: MOV byte ptr [EDI],AL
// 00401dc4: CMP AL,0x0
// 00401dc6: JZ 0x00401dd8
//   XREF to: 00401dd8 (CONDITIONAL_JUMP)
// 00401dc8: MOV AL,byte ptr [ESI + 0x1]
// 00401dcb: ADD ESI,0x2
// 00401dce: MOV byte ptr [EDI + 0x1],AL
// 00401dd1: ADD EDI,0x2
// 00401dd4: CMP AL,0x0
// 00401dd6: JNZ 0x00401dc0
//   XREF to: 00401dc0 (CONDITIONAL_JUMP)
// 00401dd8: POP EDI
//   Label: LAB_00401dd8
// 00401dd9: PUSH EDI
// 00401dda: CALL engine_2d.c_getStringWidth_FUN_004018a0
//   XREF to: 004018a0 (UNCONDITIONAL_CALL)
// 00401ddf: ADD ESP,0x4
// 00401de2: CMP EAX,dword ptr [ESP + 0x11c]
//   XREF to: Stack[0x8] (READ)
// 00401de9: JLE 0x00401dad
//   XREF to: 00401dad (CONDITIONAL_JUMP)
// 00401deb: MOV EBP,EDI
// 00401ded: MOV EBX,EDI
// 00401def: MOV DL,byte ptr [EBX]
//   Label: LAB_00401def
// 00401df1: TEST DL,DL
// 00401df3: JZ 0x00401e0b
//   XREF to: 00401e0b (CONDITIONAL_JUMP)
// 00401df5: MOV AL,DL
// 00401df7: INC AL
// 00401df9: AND EAX,0xff
// 00401dfe: TEST byte ptr [EAX + 0x6849c4],0x2
//   XREF to: 006849c4 (DATA)
// 00401e05: JZ 0x00401e96
//   XREF to: 00401e96 (CONDITIONAL_JUMP)
// 00401e0b: MOV EDX,EBX
//   Label: LAB_00401e0b
// 00401e0d: MOV EDI,ESP
// 00401e0f: SUB EDX,EBP
// 00401e11: MOV ESI,EBP
// 00401e13: MOV ECX,EDX
// 00401e15: PUSH EDI
// 00401e16: MOV EAX,ECX
// 00401e18: SHR ECX,0x2
// 00401e1b: MOVSD.REP ES:EDI,ESI
// 00401e1d: MOV CL,AL
// 00401e1f: AND CL,0x3
// 00401e22: MOVSB.REP ES:EDI,ESI
// 00401e24: POP EDI
// 00401e25: MOV EAX,ESP
// 00401e27: XOR CH,CH
// 00401e29: PUSH EAX
// 00401e2a: MOV byte ptr [ESP + EDX*0x1 + 0x4],CH
// 00401e2e: CALL engine_2d.c_getStringWidth_FUN_004018a0
//   XREF to: 004018a0 (UNCONDITIONAL_CALL)
// 00401e33: ADD ESP,0x4
// 00401e36: CMP EAX,dword ptr [ESP + 0x11c]
//   XREF to: Stack[0x8] (READ)
// 00401e3d: JLE 0x00401e65
//   XREF to: 00401e65 (CONDITIONAL_JUMP)
// 00401e3f: MOV AL,byte ptr [EBX + -0x1]
// 00401e42: DEC EBX
// 00401e43: CMP AL,0xa
// 00401e45: JZ 0x00401e55
//   XREF to: 00401e55 (CONDITIONAL_JUMP)
// 00401e47: CMP byte ptr [EBX],0x20
//   Label: LAB_00401e47
// 00401e4a: JZ 0x00401e55
//   XREF to: 00401e55 (CONDITIONAL_JUMP)
// 00401e4c: MOV DL,byte ptr [EBX + -0x1]
// 00401e4f: DEC EBX
// 00401e50: CMP DL,0xa
// 00401e53: JNZ 0x00401e47
//   XREF to: 00401e47 (CONDITIONAL_JUMP)
// 00401e55: MOV EDI,dword ptr [ESP + 0x120]
//   Label: LAB_00401e55
//   XREF to: Stack[0xc] (READ)
// 00401e5c: MOV EAX,EBX
// 00401e5e: SUB EAX,EDI
// 00401e60: ADD EAX,EDI
// 00401e62: MOV byte ptr [EAX],0xa
// 00401e65: CMP byte ptr [EBX],0xa
//   Label: LAB_00401e65
// 00401e68: JNZ 0x00401e6d
//   XREF to: 00401e6d (CONDITIONAL_JUMP)
// 00401e6a: LEA EBP,[EBX + 0x1]
// 00401e6d: CMP byte ptr [EBX],0x0
//   Label: LAB_00401e6d
// 00401e70: JNZ 0x00401e7b
//   XREF to: 00401e7b (CONDITIONAL_JUMP)
// 00401e72: XOR ECX,ECX
// 00401e74: MOV dword ptr [ESP + 0x100],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 00401e7b: MOV ESI,dword ptr [ESP + 0x100]
//   Label: LAB_00401e7b
//   XREF to: Stack[-0x14] (READ)
// 00401e82: INC EBX
// 00401e83: TEST ESI,ESI
// 00401e85: JNZ 0x00401def
//   XREF to: 00401def (CONDITIONAL_JUMP)
// 00401e8b: ADD ESP,0x104
// 00401e91: POP EBP
// 00401e92: POP EDI
// 00401e93: POP ESI
// 00401e94: POP EBX
// 00401e95: RET
// 00401e96: CMP DL,0xa
//   Label: LAB_00401e96
// 00401e99: JZ 0x00401e0b
//   XREF to: 00401e0b (CONDITIONAL_JUMP)
// 00401e9f: JMP 0x00401e7b
//   XREF to: 00401e7b (UNCONDITIONAL_JUMP)
