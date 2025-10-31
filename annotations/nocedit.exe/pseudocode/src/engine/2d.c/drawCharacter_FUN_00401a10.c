// Name: engine_2d.c_drawCharacter_FUN_00401a10
// Address: 00401a10
// Address Range: [[00401a10, 00401b66]]
// Convention: __cdecl
// Signature: int engine_2d.c_drawCharacter_FUN_00401a10(int char_code, int x_pos, int y_pos, int color)
// Cross-references:
//   engine_2d.c_drawString_FUN_00402080 (00402080) at 004020bc [UNCONDITIONAL_CALL]
//   engine_2d.c_drawTextMultilineColor_FUN_00401f40 (00401f40) at 00401f8f [UNCONDITIONAL_CALL]
//   engine_2d.c_drawTextWrappedColor_FUN_00401eb0 (00401eb0) at 00401f06 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 g_FontTable
//   undefined4 DAT_00666041
//   undefined4 DAT_00666042
//   undefined4 g_FontTable[0].bitmap[0][2]
//   int g_BitsPerPixel = 0x8
//   void*[1024] g_ScreenBufferArray
//   undefined4 g_ScreenBufferArray[1]
//   ushort[256] g_ColorTable16
//   uint[256] g_ColorTable32
//   int g_ClipLeft
//   int g_ClipTop
//   int g_ClipRight
//   int g_ClipBottom

#include "nocturne.h"

int __cdecl engine_2d_c_drawCharacter_FUN_00401a10(int char_code,int x_pos,int y_pos,int color)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  undefined1 *puVar7;
  ushort *puVar8;
  
  iVar3 = (char_code + -0x20) * 0x91;
  uVar5 = (uint)(byte)(&g_FontTable)[iVar3];
  if ((((x_pos < g_ClipLeft) || (y_pos < g_ClipTop)) || ((int)((g_ClipRight + 1) - uVar5) < x_pos))
     || (g_ClipBottom + -10 < y_pos)) {
    iVar3 = 0;
  }
  else {
    iVar6 = y_pos * 4;
    pcVar1 = &DAT_00666041 + iVar3;
    iVar3 = iVar6 + 0x2c;
    if (g_BitsPerPixel == 8) {
      do {
        puVar7 = (undefined1 *)(*(int *)((int)g_ScreenBufferArray + iVar6) + x_pos);
        iVar2 = 0;
        if (uVar5 != 0) {
          do {
            if (*pcVar1 != '\0') {
              *puVar7 = (undefined1)color;
            }
            pcVar1 = pcVar1 + 1;
            iVar2 = iVar2 + 1;
            puVar7 = puVar7 + 1;
          } while (iVar2 < (int)uVar5);
        }
        iVar6 = iVar6 + 4;
      } while (iVar6 != iVar3);
    }
    else if (g_BitsPerPixel == 0x10) {
      do {
        puVar8 = (ushort *)(*(int *)((int)g_ScreenBufferArray + iVar6) + x_pos * 2);
        iVar2 = 0;
        if (uVar5 != 0) {
          do {
            if (*pcVar1 != '\0') {
              *puVar8 = g_ColorTable16[color];
            }
            pcVar1 = pcVar1 + 1;
            iVar2 = iVar2 + 1;
            puVar8 = puVar8 + 1;
          } while (iVar2 < (int)uVar5);
        }
        iVar6 = iVar6 + 4;
      } while (iVar6 != iVar3);
    }
    else {
      do {
        iVar2 = 0;
        puVar4 = (uint *)(*(int *)((int)g_ScreenBufferArray + iVar6) + x_pos * 4);
        if (uVar5 != 0) {
          do {
            if (*pcVar1 != '\0') {
              *puVar4 = g_ColorTable32[color];
            }
            pcVar1 = pcVar1 + 1;
            iVar2 = iVar2 + 1;
            puVar4 = puVar4 + 1;
          } while (iVar2 < (int)uVar5);
        }
        iVar6 = iVar6 + 4;
      } while (iVar6 != iVar3);
    }
    iVar3 = uVar5 + 1;
  }
  return iVar3;
}


// Assembly code:
// 00401a10: PUSH EBX
//   Label: engine_2d.c_drawCharacter_FUN_00401a10
// 00401a11: PUSH EDI
// 00401a12: PUSH EBP
// 00401a13: SUB ESP,0x10
// 00401a16: MOV EBP,dword ptr [ESP + 0x28]
//   XREF to: Stack[0xc] (READ)
// 00401a1a: MOV EDX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 00401a1e: SUB EDX,0x20
// 00401a21: LEA EAX,[EDX*0x8 + 0x0]
// 00401a28: ADD EAX,EDX
// 00401a2a: SHL EAX,0x4
// 00401a2d: ADD EAX,EDX
// 00401a2f: MOV ECX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x8] (READ)
// 00401a33: ADD EAX,0x666040
//   XREF to: 00666040 (DATA)
// 00401a38: XOR EDX,EDX
// 00401a3a: MOV EBX,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 00401a40: MOV DL,byte ptr [EAX]
//   XREF to: 00666040 (DATA)
// 00401a42: CMP ECX,EBX
// 00401a44: JL 0x00401ac2
//   XREF to: 00401ac2 (CONDITIONAL_JUMP)
// 00401a4a: CMP EBP,dword ptr [0x02d0255c]
//   XREF to: 02d0255c (READ)
// 00401a50: JL 0x00401ac2
//   XREF to: 00401ac2 (CONDITIONAL_JUMP)
// 00401a56: MOV ECX,dword ptr [0x02d02560]
//   XREF to: 02d02560 (READ)
// 00401a5c: INC ECX
// 00401a5d: MOV EDI,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x8] (READ)
// 00401a61: SUB ECX,EDX
// 00401a63: CMP ECX,EDI
// 00401a65: JL 0x00401ac2
//   XREF to: 00401ac2 (CONDITIONAL_JUMP)
// 00401a67: MOV ECX,dword ptr [0x02d02564]
//   XREF to: 02d02564 (READ)
// 00401a6d: SUB ECX,0xa
// 00401a70: CMP EBP,ECX
// 00401a72: JG 0x00401ac2
//   XREF to: 00401ac2 (CONDITIONAL_JUMP)
// 00401a74: PUSH ESI
// 00401a75: MOV EBX,dword ptr [0x0067939c]
//   XREF to: 0067939c (READ)
// 00401a7b: SHL EBP,0x2
// 00401a7e: INC EAX
// 00401a7f: LEA ECX,[EBP + 0x2c]
// 00401a82: CMP EBX,0x8
// 00401a85: JNZ 0x00401ac6
//   XREF to: 00401ac6 (CONDITIONAL_JUMP)
// 00401a87: MOV EDI,ECX
// 00401a89: MOV ECX,dword ptr [ESP + 0x28]
//   Label: LAB_00401a89
//   XREF to: Stack[0x8] (READ)
// 00401a8d: MOV ESI,dword ptr [EBP + 0x2cf6a9c]
//   XREF to: 02cf6a9c (DATA)
//   XREF to: 02cf6aa0 (DATA)
// 00401a93: ADD ESI,ECX
// 00401a95: XOR ECX,ECX
// 00401a97: TEST EDX,EDX
// 00401a99: JLE 0x00401aae
//   XREF to: 00401aae (CONDITIONAL_JUMP)
// 00401a9b: MOV BL,byte ptr [EAX]
//   Label: LAB_00401a9b
//   XREF to: 00666041 (DATA)
//   XREF to: 00666042 (DATA)
//   XREF to: 00666043 (DATA)
// 00401a9d: TEST BL,BL
// 00401a9f: JZ 0x00401aa7
//   XREF to: 00401aa7 (CONDITIONAL_JUMP)
// 00401aa1: MOV BL,byte ptr [ESP + 0x30]
//   XREF to: Stack[0x10] (READ)
// 00401aa5: MOV byte ptr [ESI],BL
// 00401aa7: INC EAX
//   Label: LAB_00401aa7
// 00401aa8: INC ECX
// 00401aa9: INC ESI
// 00401aaa: CMP ECX,EDX
// 00401aac: JL 0x00401a9b
//   XREF to: 00401a9b (CONDITIONAL_JUMP)
// 00401aae: ADD EBP,0x4
//   Label: LAB_00401aae
// 00401ab1: CMP EBP,EDI
// 00401ab3: JNZ 0x00401a89
//   XREF to: 00401a89 (CONDITIONAL_JUMP)
// 00401ab5: LEA ECX,[EDX + 0x1]
//   Label: LAB_00401ab5
// 00401ab8: POP ESI
// 00401ab9: MOV EAX,ECX
//   Label: LAB_00401ab9
// 00401abb: ADD ESP,0x10
// 00401abe: POP EBP
// 00401abf: POP EDI
// 00401ac0: POP EBX
// 00401ac1: RET
// 00401ac2: XOR ECX,ECX
//   Label: LAB_00401ac2
// 00401ac4: JMP 0x00401ab9
//   XREF to: 00401ab9 (UNCONDITIONAL_JUMP)
// 00401ac6: CMP EBX,0x10
//   Label: LAB_00401ac6
// 00401ac9: JNZ 0x00401b17
//   XREF to: 00401b17 (CONDITIONAL_JUMP)
// 00401acb: MOV EBX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x8] (READ)
// 00401acf: MOV EDI,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x10] (READ)
// 00401ad3: MOV dword ptr [ESP + 0x10],ECX
//   XREF to: Stack[-0x10] (WRITE)
// 00401ad7: ADD EBX,EBX
// 00401ad9: ADD EDI,EDI
// 00401adb: MOV dword ptr [ESP + 0x4],EBX
//   XREF to: Stack[-0x1c] (WRITE)
// 00401adf: MOV ECX,dword ptr [ESP + 0x4]
//   Label: LAB_00401adf
//   XREF to: Stack[-0x1c] (READ)
// 00401ae3: MOV ESI,dword ptr [EBP + 0x2cf6a9c]
//   XREF to: 02cf6a9c (DATA)
//   XREF to: 02cf6aa0 (DATA)
// 00401ae9: ADD ESI,ECX
// 00401aeb: XOR ECX,ECX
// 00401aed: TEST EDX,EDX
// 00401aef: JLE 0x00401b0a
//   XREF to: 00401b0a (CONDITIONAL_JUMP)
// 00401af1: MOV BL,byte ptr [EAX]
//   Label: LAB_00401af1
//   XREF to: 00666041 (DATA)
//   XREF to: 00666042 (DATA)
//   XREF to: 00666043 (DATA)
// 00401af3: TEST BL,BL
// 00401af5: JZ 0x00401b01
//   XREF to: 00401b01 (CONDITIONAL_JUMP)
// 00401af7: MOV BX,word ptr [EDI + 0x2d01020]
//   XREF to: 02d01020 (DATA)
// 00401afe: MOV word ptr [ESI],BX
// 00401b01: INC EAX
//   Label: LAB_00401b01
// 00401b02: INC ECX
// 00401b03: ADD ESI,0x2
// 00401b06: CMP ECX,EDX
// 00401b08: JL 0x00401af1
//   XREF to: 00401af1 (CONDITIONAL_JUMP)
// 00401b0a: MOV EBX,dword ptr [ESP + 0x10]
//   Label: LAB_00401b0a
//   XREF to: Stack[-0x10] (READ)
// 00401b0e: ADD EBP,0x4
// 00401b11: CMP EBP,EBX
// 00401b13: JZ 0x00401ab5
//   XREF to: 00401ab5 (CONDITIONAL_JUMP)
// 00401b15: JMP 0x00401adf
//   XREF to: 00401adf (UNCONDITIONAL_JUMP)
// 00401b17: MOV EBX,dword ptr [ESP + 0x28]
//   Label: LAB_00401b17
//   XREF to: Stack[0x8] (READ)
// 00401b1b: MOV EDI,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x10] (READ)
// 00401b1f: MOV dword ptr [ESP + 0x8],ECX
//   XREF to: Stack[-0x18] (WRITE)
// 00401b23: SHL EBX,0x2
// 00401b26: SHL EDI,0x2
// 00401b29: MOV dword ptr [ESP + 0xc],EBX
//   XREF to: Stack[-0x14] (WRITE)
// 00401b2d: MOV EBX,dword ptr [ESP + 0xc]
//   Label: LAB_00401b2d
//   XREF to: Stack[-0x14] (READ)
// 00401b31: MOV ECX,dword ptr [EBP + 0x2cf6a9c]
//   XREF to: 02cf6a9c (DATA)
//   XREF to: 02cf6aa0 (DATA)
// 00401b37: XOR ESI,ESI
// 00401b39: ADD ECX,EBX
// 00401b3b: TEST EDX,EDX
// 00401b3d: JLE 0x00401b56
//   XREF to: 00401b56 (CONDITIONAL_JUMP)
// 00401b3f: MOV BL,byte ptr [EAX]
//   Label: LAB_00401b3f
//   XREF to: 00666041 (DATA)
//   XREF to: 00666042 (DATA)
//   XREF to: 00666043 (DATA)
// 00401b41: TEST BL,BL
// 00401b43: JZ 0x00401b4d
//   XREF to: 00401b4d (CONDITIONAL_JUMP)
// 00401b45: MOV EBX,dword ptr [EDI + 0x2d01220]
//   XREF to: 02d01220 (DATA)
// 00401b4b: MOV dword ptr [ECX],EBX
// 00401b4d: INC EAX
//   Label: LAB_00401b4d
// 00401b4e: INC ESI
// 00401b4f: ADD ECX,0x4
// 00401b52: CMP ESI,EDX
// 00401b54: JL 0x00401b3f
//   XREF to: 00401b3f (CONDITIONAL_JUMP)
// 00401b56: MOV ESI,dword ptr [ESP + 0x8]
//   Label: LAB_00401b56
//   XREF to: Stack[-0x18] (READ)
// 00401b5a: ADD EBP,0x4
// 00401b5d: CMP EBP,ESI
// 00401b5f: JZ 0x00401ab5
//   XREF to: 00401ab5 (CONDITIONAL_JUMP)
// 00401b65: JMP 0x00401b2d
//   XREF to: 00401b2d (UNCONDITIONAL_JUMP)
