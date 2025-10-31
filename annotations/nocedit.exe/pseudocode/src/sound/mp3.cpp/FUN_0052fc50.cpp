// Name: sound_mp3.cpp_FUN_0052fc50
// Address: 0052fc50
// Address Range: [[0052fc50, 0052fedc]]
// Convention: unknown
// Signature: undefined sound_mp3.cpp_FUN_0052fc50()
// Cross-references:
//   sound_mp3.cpp_MpegLoadMaybe_FUN_00534d40 (00534d40) at 0053542a [UNCONDITIONAL_CALL]
// Function calls:
//   sound_mp3.cpp_ReadOrWriteBits_FUN_0052ef40

#include "nocturne.h"

/* Signature: undefined1 sound_mp3.cpp_FUN_0052fc50(undefined4 param_1, undefined4 param_2,
   undefined4 param_3, undefined4 param_4) */

void sound_mp3_cpp_FUN_0052fc50(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  int in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  int local_4c;
  int local_48;
  int local_2c;
  int local_20;
  int *local_1c;
  int local_18;
  
  iVar1 = *(int *)(in_stack_00000010 + 0x10);
  iVar11 = *(int *)(in_stack_00000010 + 0x18);
  iVar10 = *(int *)(in_stack_00000010 + 0x14);
  iVar4 = *(int *)(in_stack_00000010 + 8);
  local_2c = 0;
  if (0 < iVar11) {
    local_48 = 0;
    local_4c = iVar4;
    do {
      local_18 = in_stack_00000008;
      local_1c = (int *)(local_48 + in_stack_0000000c);
      local_20 = 0;
      while( true ) {
        iVar3 = iVar1;
        if (iVar10 <= local_2c) {
          iVar3 = 1;
        }
        if (iVar3 <= local_20) break;
        if (*local_1c == 0) {
          puVar8 = (undefined4 *)(local_48 + local_18);
          do {
            *puVar8 = 0;
            puVar8 = puVar8 + 0x20;
          } while (puVar8 != (undefined4 *)(local_48 + 0x180 + local_18));
        }
        else {
          puVar5 = (uint *)(*local_1c * 0x10 + iVar4 + local_2c * 0x100);
          if (puVar5[2] == 3) {
            puVar8 = (undefined4 *)(local_48 + local_18);
            do {
              puVar9 = puVar8 + 0x20;
              uVar6 = sound_mp3_cpp_ReadOrWriteBits_FUN_0052ef40();
              *puVar8 = uVar6;
              puVar8 = puVar9;
            } while (puVar9 != (undefined4 *)(local_48 + 0x180 + local_18));
          }
          else {
            uVar2 = *puVar5;
            uVar7 = sound_mp3_cpp_ReadOrWriteBits_FUN_0052ef40();
            puVar5 = (uint *)(local_2c + local_4c);
            do {
              *puVar5 = uVar7 % uVar2;
              uVar7 = uVar7 / uVar2;
              puVar5 = puVar5 + 0x20;
            } while (puVar5 != (uint *)(local_2c + 0x180 + local_4c));
          }
        }
        if ((iVar1 == 2) && (iVar10 <= local_2c)) {
          puVar8 = (undefined4 *)(local_48 + in_stack_00000008);
          do {
            puVar9 = puVar8 + 0x20;
            puVar8[0x60] = *puVar8;
            puVar8 = puVar9;
          } while (puVar9 != (undefined4 *)(local_48 + 0x180 + in_stack_00000008));
        }
        local_1c = local_1c + 0x20;
        local_20 = local_20 + 1;
        local_18 = local_18 + 0x180;
      }
      local_48 = local_48 + 4;
      local_4c = local_4c + 0x100;
      local_2c = local_2c + 1;
    } while (local_2c < iVar11);
  }
  if (iVar11 < 0x20) {
    iVar11 = iVar11 * 4;
    do {
      iVar10 = 0;
      if (0 < iVar1) {
        do {
          iVar4 = iVar10 * 0x180 + in_stack_00000008;
          puVar8 = (undefined4 *)(iVar11 + iVar4);
          do {
            puVar9 = puVar8 + 0x20;
            *puVar8 = 0;
            puVar8 = puVar9;
          } while (puVar9 != (undefined4 *)(iVar4 + iVar11 + 0x180));
          iVar10 = iVar10 + 1;
        } while (iVar10 < iVar1);
      }
      iVar11 = iVar11 + 4;
    } while (iVar11 < 0x80);
  }
  return;
}


// Assembly code:
// 0052fc50: PUSH EBX
//   Label: sound_mp3.cpp_FUN_0052fc50
// 0052fc51: PUSH ESI
// 0052fc52: PUSH EDI
// 0052fc53: PUSH EBP
// 0052fc54: SUB ESP,0x40
// 0052fc57: MOV EBP,dword ptr [ESP + 0x54]
//   XREF to: Stack[0x4] (READ)
// 0052fc5b: MOV EAX,dword ptr [ESP + 0x60]
//   XREF to: Stack[0x10] (READ)
// 0052fc5f: MOV EDX,dword ptr [EAX + 0x10]
// 0052fc62: MOV dword ptr [ESP + 0x2c],EDX
//   XREF to: Stack[-0x24] (WRITE)
// 0052fc66: MOV EDX,dword ptr [EAX + 0x18]
// 0052fc69: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0x50] (DATA)
// 0052fc6c: MOV EDX,dword ptr [EAX + 0x14]
// 0052fc6f: MOV ECX,dword ptr [ESP]
//   XREF to: Stack[-0x50] (DATA)
// 0052fc72: MOV dword ptr [ESP + 0x14],EDX
//   XREF to: Stack[-0x3c] (WRITE)
// 0052fc76: MOV EAX,dword ptr [EAX + 0x8]
// 0052fc79: XOR EDX,EDX
// 0052fc7b: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 0052fc7f: MOV dword ptr [ESP + 0x24],EDX
//   XREF to: Stack[-0x2c] (WRITE)
// 0052fc83: TEST ECX,ECX
// 0052fc85: JLE 0x0052fd94
//   XREF to: 0052fd94 (CONDITIONAL_JUMP)
// 0052fc8b: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x4c] (WRITE)
// 0052fc8f: MOV dword ptr [ESP + 0x8],EDX
//   XREF to: Stack[-0x48] (WRITE)
// 0052fc93: MOV EAX,dword ptr [ESP + 0x8]
//   Label: LAB_0052fc93
//   XREF to: Stack[-0x48] (READ)
// 0052fc97: MOV dword ptr [ESP + 0x28],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 0052fc9b: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x2c] (READ)
// 0052fc9f: SHL EAX,0x8
// 0052fca2: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 0052fca6: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x4c] (READ)
// 0052fcaa: MOV dword ptr [ESP + 0x3c],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0052fcae: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x48] (READ)
// 0052fcb2: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 0052fcb6: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 0052fcba: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 0052fcbe: MOV EAX,dword ptr [ESP + 0x58]
//   XREF to: Stack[0x8] (READ)
// 0052fcc2: MOV EDI,dword ptr [ESP + 0x5c]
//   XREF to: Stack[0xc] (READ)
// 0052fcc6: MOV dword ptr [ESP + 0x38],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0052fcca: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x48] (READ)
// 0052fcce: XOR ESI,ESI
// 0052fcd0: ADD EAX,EDI
// 0052fcd2: MOV dword ptr [ESP + 0x30],ESI
//   XREF to: Stack[-0x20] (WRITE)
// 0052fcd6: MOV dword ptr [ESP + 0x34],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0052fcda: MOV EAX,dword ptr [ESP + 0x24]
//   Label: LAB_0052fcda
//   XREF to: Stack[-0x2c] (READ)
// 0052fcde: CMP EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x3c] (READ)
// 0052fce2: JGE 0x0052fdef
//   XREF to: 0052fdef (CONDITIONAL_JUMP)
// 0052fce8: MOV EAX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x24] (READ)
// 0052fcec: MOV ECX,dword ptr [ESP + 0x30]
//   Label: LAB_0052fcec
//   XREF to: Stack[-0x20] (READ)
// 0052fcf0: CMP EAX,ECX
// 0052fcf2: JLE 0x0052fd67
//   XREF to: 0052fd67 (CONDITIONAL_JUMP)
// 0052fcf4: MOV EAX,ECX
// 0052fcf6: MOV ECX,dword ptr [ESP + 0x5c]
//   XREF to: Stack[0xc] (READ)
// 0052fcfa: SHL EAX,0x7
// 0052fcfd: ADD ECX,EAX
// 0052fcff: MOV EAX,dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x1c] (READ)
// 0052fd03: MOV EBX,dword ptr [EAX]
// 0052fd05: TEST EBX,EBX
// 0052fd07: JNZ 0x0052fdf9
//   XREF to: 0052fdf9 (CONDITIONAL_JUMP)
// 0052fd0d: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x38] (READ)
// 0052fd11: MOV ECX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x38] (READ)
// 0052fd15: MOV ESI,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x18] (READ)
// 0052fd19: ADD EBX,0x180
// 0052fd1f: ADD ECX,ESI
// 0052fd21: ADD EBX,ESI
// 0052fd23: MOV dword ptr [ECX],0x0
//   Label: LAB_0052fd23
// 0052fd29: ADD ECX,0x80
// 0052fd2f: CMP ECX,EBX
// 0052fd31: JNZ 0x0052fd23
//   XREF to: 0052fd23 (CONDITIONAL_JUMP)
// 0052fd33: CMP dword ptr [ESP + 0x2c],0x2
//   Label: LAB_0052fd33
//   XREF to: Stack[-0x24] (READ)
// 0052fd38: JZ 0x0052fea0
//   XREF to: 0052fea0 (CONDITIONAL_JUMP)
// 0052fd3e: MOV EDX,dword ptr [ESP + 0x34]
//   Label: LAB_0052fd3e
//   XREF to: Stack[-0x1c] (READ)
// 0052fd42: MOV ECX,dword ptr [ESP + 0x30]
//   XREF to: Stack[-0x20] (READ)
// 0052fd46: MOV EAX,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x18] (READ)
// 0052fd4a: ADD EDX,0x80
// 0052fd50: INC ECX
// 0052fd51: ADD EAX,0x180
// 0052fd56: MOV dword ptr [ESP + 0x34],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 0052fd5a: MOV dword ptr [ESP + 0x30],ECX
//   XREF to: Stack[-0x20] (WRITE)
// 0052fd5e: MOV dword ptr [ESP + 0x38],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0052fd62: JMP 0x0052fcda
//   XREF to: 0052fcda (UNCONDITIONAL_JUMP)
// 0052fd67: MOV EBX,dword ptr [ESP + 0x8]
//   Label: LAB_0052fd67
//   XREF to: Stack[-0x48] (READ)
// 0052fd6b: MOV ESI,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x4c] (READ)
// 0052fd6f: MOV EDI,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x2c] (READ)
// 0052fd73: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x50] (DATA)
// 0052fd76: ADD EBX,0x4
// 0052fd79: ADD ESI,0x100
// 0052fd7f: INC EDI
// 0052fd80: MOV dword ptr [ESP + 0x8],EBX
//   XREF to: Stack[-0x48] (WRITE)
// 0052fd84: MOV dword ptr [ESP + 0x4],ESI
//   XREF to: Stack[-0x4c] (WRITE)
// 0052fd88: MOV dword ptr [ESP + 0x24],EDI
//   XREF to: Stack[-0x2c] (WRITE)
// 0052fd8c: CMP EDI,EDX
// 0052fd8e: JL 0x0052fc93
//   XREF to: 0052fc93 (CONDITIONAL_JUMP)
// 0052fd94: MOV ECX,dword ptr [ESP]
//   Label: LAB_0052fd94
//   XREF to: Stack[-0x50] (DATA)
// 0052fd97: CMP ECX,0x20
// 0052fd9a: JGE 0x0052fde7
//   XREF to: 0052fde7 (CONDITIONAL_JUMP)
// 0052fd9c: LEA EDI,[ECX*0x4 + 0x0]
// 0052fda3: XOR EBP,EBP
// 0052fda5: MOV EBX,dword ptr [ESP + 0x2c]
//   Label: LAB_0052fda5
//   XREF to: Stack[-0x24] (READ)
// 0052fda9: MOV EDX,EBP
// 0052fdab: CMP EBP,EBX
// 0052fdad: JGE 0x0052fddc
//   XREF to: 0052fddc (CONDITIONAL_JUMP)
// 0052fdaf: MOV EBX,EDI
// 0052fdb1: IMUL EAX,EDX,0x180
//   Label: LAB_0052fdb1
// 0052fdb7: ADD EAX,dword ptr [ESP + 0x58]
//   XREF to: Stack[0x8] (READ)
// 0052fdbb: LEA ECX,[EBX + EAX*0x1]
// 0052fdbe: LEA ESI,[EBX + 0x180]
// 0052fdc4: ADD EAX,ESI
// 0052fdc6: ADD ECX,0x80
//   Label: LAB_0052fdc6
// 0052fdcc: MOV dword ptr [ECX + -0x80],EBP
// 0052fdcf: CMP ECX,EAX
// 0052fdd1: JNZ 0x0052fdc6
//   XREF to: 0052fdc6 (CONDITIONAL_JUMP)
// 0052fdd3: MOV ESI,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x24] (READ)
// 0052fdd7: INC EDX
// 0052fdd8: CMP EDX,ESI
// 0052fdda: JL 0x0052fdb1
//   XREF to: 0052fdb1 (CONDITIONAL_JUMP)
// 0052fddc: ADD EDI,0x4
//   Label: LAB_0052fddc
// 0052fddf: CMP EDI,0x80
// 0052fde5: JL 0x0052fda5
//   XREF to: 0052fda5 (CONDITIONAL_JUMP)
// 0052fde7: ADD ESP,0x40
//   Label: LAB_0052fde7
// 0052fdea: POP EBP
// 0052fdeb: POP EDI
// 0052fdec: POP ESI
// 0052fded: POP EBX
// 0052fdee: RET
// 0052fdef: MOV EAX,0x1
//   Label: LAB_0052fdef
// 0052fdf4: JMP 0x0052fcec
//   XREF to: 0052fcec (UNCONDITIONAL_JUMP)
// 0052fdf9: MOV EDX,dword ptr [ESP + 0xc]
//   Label: LAB_0052fdf9
//   XREF to: Stack[-0x44] (READ)
// 0052fdfd: MOV EAX,EBX
// 0052fdff: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x40] (READ)
// 0052fe03: SHL EAX,0x4
// 0052fe06: ADD EDX,EBX
// 0052fe08: ADD EAX,EDX
// 0052fe0a: CMP dword ptr [EAX + 0x8],0x3
// 0052fe0e: JNZ 0x0052fe56
//   XREF to: 0052fe56 (CONDITIONAL_JUMP)
// 0052fe10: MOV EBX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x28] (READ)
// 0052fe14: MOV EDX,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x18] (READ)
// 0052fe18: MOV EDI,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x28] (READ)
// 0052fe1c: MOV ESI,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x28] (READ)
// 0052fe20: ADD EDI,0x180
// 0052fe26: ADD EBX,EDX
// 0052fe28: ADD ESI,ECX
// 0052fe2a: ADD EDI,EDX
// 0052fe2c: MOV EAX,dword ptr [ESI]
//   Label: LAB_0052fe2c
// 0052fe2e: MOV EDX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x14] (READ)
// 0052fe32: SHL EAX,0x4
// 0052fe35: ADD EAX,EDX
// 0052fe37: MOV EAX,dword ptr [EAX + 0x4]
// 0052fe3a: PUSH EAX
// 0052fe3b: PUSH EBP
// 0052fe3c: ADD EBX,0x80
// 0052fe42: CALL sound_mp3.cpp_ReadOrWriteBits_FUN_0052ef40
//   XREF to: 0052ef40 (UNCONDITIONAL_CALL)
// 0052fe47: ADD ESP,0x8
// 0052fe4a: MOV dword ptr [EBX + -0x80],EAX
// 0052fe4d: CMP EBX,EDI
// 0052fe4f: JNZ 0x0052fe2c
//   XREF to: 0052fe2c (CONDITIONAL_JUMP)
// 0052fe51: JMP 0x0052fd33
//   XREF to: 0052fd33 (UNCONDITIONAL_JUMP)
// 0052fe56: MOV ESI,dword ptr [EAX]
//   Label: LAB_0052fe56
// 0052fe58: MOV EAX,dword ptr [EAX + 0x4]
// 0052fe5b: PUSH EAX
// 0052fe5c: PUSH EBP
// 0052fe5d: CALL sound_mp3.cpp_ReadOrWriteBits_FUN_0052ef40
//   XREF to: 0052ef40 (UNCONDITIONAL_CALL)
// 0052fe62: ADD ESP,0x8
// 0052fe65: MOV EBX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x30] (READ)
// 0052fe69: MOV EDI,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x18] (READ)
// 0052fe6d: MOV ECX,EAX
// 0052fe6f: ADD EBX,EDI
// 0052fe71: MOV EDI,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x30] (READ)
// 0052fe75: MOV EAX,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x18] (READ)
// 0052fe79: ADD EDI,0x180
// 0052fe7f: ADD EDI,EAX
// 0052fe81: MOV EAX,ECX
//   Label: LAB_0052fe81
// 0052fe83: XOR EDX,EDX
// 0052fe85: DIV ESI
// 0052fe87: MOV EAX,ECX
// 0052fe89: MOV dword ptr [EBX],EDX
// 0052fe8b: XOR EDX,EDX
// 0052fe8d: DIV ESI
// 0052fe8f: ADD EBX,0x80
// 0052fe95: MOV ECX,EAX
// 0052fe97: CMP EBX,EDI
// 0052fe99: JNZ 0x0052fe81
//   XREF to: 0052fe81 (CONDITIONAL_JUMP)
// 0052fe9b: JMP 0x0052fd33
//   XREF to: 0052fd33 (UNCONDITIONAL_JUMP)
// 0052fea0: MOV EAX,dword ptr [ESP + 0x24]
//   Label: LAB_0052fea0
//   XREF to: Stack[-0x2c] (READ)
// 0052fea4: CMP EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x3c] (READ)
// 0052fea8: JL 0x0052fd3e
//   XREF to: 0052fd3e (CONDITIONAL_JUMP)
// 0052feae: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x34] (READ)
// 0052feb2: MOV ECX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x34] (READ)
// 0052feb6: MOV ESI,dword ptr [ESP + 0x58]
//   XREF to: Stack[0x8] (READ)
// 0052feba: ADD EDX,0x180
// 0052fec0: ADD ECX,ESI
// 0052fec2: ADD EDX,ESI
// 0052fec4: ADD ECX,0x80
//   Label: LAB_0052fec4
// 0052feca: MOV EAX,dword ptr [ECX + -0x80]
// 0052fecd: MOV dword ptr [ECX + 0x100],EAX
// 0052fed3: CMP ECX,EDX
// 0052fed5: JZ 0x0052fd3e
//   XREF to: 0052fd3e (CONDITIONAL_JUMP)
// 0052fedb: JMP 0x0052fec4
//   XREF to: 0052fec4 (UNCONDITIONAL_JUMP)
