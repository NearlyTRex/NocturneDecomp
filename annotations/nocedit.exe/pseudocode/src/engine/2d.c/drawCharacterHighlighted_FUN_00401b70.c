// Name: engine_2d.c_drawCharacterHighlighted_FUN_00401b70
// Address: 00401b70
// Address Range: [[00401b70, 00401c5a]]
// Convention: __cdecl
// Signature: int engine_2d.c_drawCharacterHighlighted_FUN_00401b70(int char_code, int x_pos, int y_pos)
// Cross-references:
//   engine_2d.c_drawStringHighlighted_FUN_004020e0 (004020e0) at 00402117 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 g_FontTable
//   undefined4 DAT_00666041
//   undefined4 DAT_00666042
//   undefined4 g_FontTable[0].bitmap[0][2]
//   int g_BitsPerPixel = 0x8
//   void*[1024] g_ScreenBufferArray
//   undefined4 g_ScreenBufferArray[1]
//   undefined4 g_ColorTable16[255]
//   int g_ClipLeft
//   int g_ClipTop
//   int g_ClipRight
//   int g_ClipBottom

#include "nocturne.h"

int __cdecl engine_2d_c_drawCharacterHighlighted_FUN_00401b70(int char_code,int x_pos,int y_pos)

{
  char *pcVar1;
  int iVar2;
  undefined1 *puVar3;
  ushort *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  iVar5 = (char_code + -0x20) * 0x91;
  uVar6 = (uint)(byte)(&g_FontTable)[iVar5];
  if ((((x_pos < g_ClipLeft) || (y_pos < g_ClipTop)) || ((int)((g_ClipRight + 1) - uVar6) < x_pos))
     || (g_ClipBottom + -10 < y_pos)) {
    iVar5 = 0;
  }
  else {
    iVar7 = y_pos * 4;
    pcVar1 = &DAT_00666041 + iVar5;
    iVar5 = iVar7 + 0x2c;
    if (g_BitsPerPixel == 8) {
      do {
        iVar2 = 0;
        puVar3 = (undefined1 *)(*(int *)((int)g_ScreenBufferArray + iVar7) + x_pos);
        if (uVar6 != 0) {
          do {
            if (*pcVar1 != '\0') {
              *puVar3 = 0xff;
            }
            pcVar1 = pcVar1 + 1;
            iVar2 = iVar2 + 1;
            puVar3 = puVar3 + 1;
          } while (iVar2 < (int)uVar6);
        }
        iVar7 = iVar7 + 4;
      } while (iVar7 != iVar5);
    }
    else {
      do {
        iVar2 = 0;
        puVar4 = (ushort *)(*(int *)((int)g_ScreenBufferArray + iVar7) + x_pos * 2);
        if (uVar6 != 0) {
          do {
            if (*pcVar1 != '\0') {
              *puVar4 = g_ColorTable16[0xff];
            }
            pcVar1 = pcVar1 + 1;
            iVar2 = iVar2 + 1;
            puVar4 = puVar4 + 1;
          } while (iVar2 < (int)uVar6);
        }
        iVar7 = iVar7 + 4;
      } while (iVar7 != iVar5);
    }
    iVar5 = uVar6 + 1;
  }
  return iVar5;
}


// Assembly code:
// 00401b70: PUSH ESI
//   Label: engine_2d.c_drawCharacterHighlighted_FUN_00401b70
// 00401b71: PUSH EDI
// 00401b72: PUSH EBP
// 00401b73: SUB ESP,0x8
// 00401b76: MOV EBP,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 00401b7a: MOV EDI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0xc] (READ)
// 00401b7e: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 00401b82: SUB EDX,0x20
// 00401b85: LEA EAX,[EDX*0x8 + 0x0]
// 00401b8c: ADD EAX,EDX
// 00401b8e: SHL EAX,0x4
// 00401b91: ADD EAX,EDX
// 00401b93: ADD EAX,0x666040
//   XREF to: 00666040 (DATA)
// 00401b98: MOV EDX,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 00401b9e: MOVZX ESI,byte ptr [EAX]
//   XREF to: 00666040 (DATA)
// 00401ba1: CMP EBP,EDX
// 00401ba3: JL 0x00401c27
//   XREF to: 00401c27 (CONDITIONAL_JUMP)
// 00401ba9: CMP EDI,dword ptr [0x02d0255c]
//   XREF to: 02d0255c (READ)
// 00401baf: JL 0x00401c27
//   XREF to: 00401c27 (CONDITIONAL_JUMP)
// 00401bb5: MOV EDX,dword ptr [0x02d02560]
//   XREF to: 02d02560 (READ)
// 00401bbb: INC EDX
// 00401bbc: SUB EDX,ESI
// 00401bbe: CMP EBP,EDX
// 00401bc0: JG 0x00401c27
//   XREF to: 00401c27 (CONDITIONAL_JUMP)
// 00401bc2: MOV EDX,dword ptr [0x02d02564]
//   XREF to: 02d02564 (READ)
// 00401bc8: SUB EDX,0xa
// 00401bcb: CMP EDI,EDX
// 00401bcd: JG 0x00401c27
//   XREF to: 00401c27 (CONDITIONAL_JUMP)
// 00401bcf: PUSH EBX
// 00401bd0: MOV EBX,dword ptr [0x0067939c]
//   XREF to: 0067939c (READ)
// 00401bd6: SHL EDI,0x2
// 00401bd9: INC EAX
// 00401bda: LEA EDX,[EDI + 0x2c]
// 00401bdd: CMP EBX,0x8
// 00401be0: JZ 0x00401c2b
//   XREF to: 00401c2b (CONDITIONAL_JUMP)
// 00401be2: MOV dword ptr [ESP + 0x4],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 00401be6: ADD EBP,EBP
// 00401be8: MOV EDX,dword ptr [EDI + 0x2cf6a9c]
//   Label: LAB_00401be8
//   XREF to: 02cf6a9c (DATA)
//   XREF to: 02cf6aa0 (DATA)
// 00401bee: XOR ECX,ECX
// 00401bf0: ADD EDX,EBP
// 00401bf2: TEST ESI,ESI
// 00401bf4: JLE 0x00401c0f
//   XREF to: 00401c0f (CONDITIONAL_JUMP)
// 00401bf6: MOV BL,byte ptr [EAX]
//   Label: LAB_00401bf6
//   XREF to: 00666041 (DATA)
//   XREF to: 00666042 (DATA)
//   XREF to: 00666043 (DATA)
// 00401bf8: TEST BL,BL
// 00401bfa: JZ 0x00401c06
//   XREF to: 00401c06 (CONDITIONAL_JUMP)
// 00401bfc: MOV BX,word ptr [0x02d0121e]
//   XREF to: 02d0121e (READ)
// 00401c03: MOV word ptr [EDX],BX
// 00401c06: INC EAX
//   Label: LAB_00401c06
// 00401c07: INC ECX
// 00401c08: ADD EDX,0x2
// 00401c0b: CMP ECX,ESI
// 00401c0d: JL 0x00401bf6
//   XREF to: 00401bf6 (CONDITIONAL_JUMP)
// 00401c0f: MOV EDX,dword ptr [ESP + 0x4]
//   Label: LAB_00401c0f
//   XREF to: Stack[-0x14] (READ)
// 00401c13: ADD EDI,0x4
// 00401c16: CMP EDI,EDX
// 00401c18: JNZ 0x00401be8
//   XREF to: 00401be8 (CONDITIONAL_JUMP)
// 00401c1a: LEA EDX,[ESI + 0x1]
//   Label: LAB_00401c1a
// 00401c1d: POP EBX
// 00401c1e: MOV EAX,EDX
//   Label: LAB_00401c1e
// 00401c20: ADD ESP,0x8
// 00401c23: POP EBP
// 00401c24: POP EDI
// 00401c25: POP ESI
// 00401c26: RET
// 00401c27: XOR EDX,EDX
//   Label: LAB_00401c27
// 00401c29: JMP 0x00401c1e
//   XREF to: 00401c1e (UNCONDITIONAL_JUMP)
// 00401c2b: MOV BH,0xff
//   Label: LAB_00401c2b
// 00401c2d: MOV dword ptr [ESP + 0x8],EDX
//   XREF to: Stack[-0x10] (WRITE)
// 00401c31: MOV ECX,dword ptr [EDI + 0x2cf6a9c]
//   Label: LAB_00401c31
//   XREF to: 02cf6a9c (DATA)
//   XREF to: 02cf6aa0 (DATA)
// 00401c37: XOR EDX,EDX
// 00401c39: ADD ECX,EBP
// 00401c3b: TEST ESI,ESI
// 00401c3d: JLE 0x00401c4e
//   XREF to: 00401c4e (CONDITIONAL_JUMP)
// 00401c3f: MOV BL,byte ptr [EAX]
//   Label: LAB_00401c3f
//   XREF to: 00666041 (DATA)
//   XREF to: 00666042 (DATA)
//   XREF to: 00666043 (DATA)
// 00401c41: TEST BL,BL
// 00401c43: JZ 0x00401c47
//   XREF to: 00401c47 (CONDITIONAL_JUMP)
// 00401c45: MOV byte ptr [ECX],BH
// 00401c47: INC EAX
//   Label: LAB_00401c47
// 00401c48: INC EDX
// 00401c49: INC ECX
// 00401c4a: CMP EDX,ESI
// 00401c4c: JL 0x00401c3f
//   XREF to: 00401c3f (CONDITIONAL_JUMP)
// 00401c4e: MOV ECX,dword ptr [ESP + 0x8]
//   Label: LAB_00401c4e
//   XREF to: Stack[-0x10] (READ)
// 00401c52: ADD EDI,0x4
// 00401c55: CMP EDI,ECX
// 00401c57: JZ 0x00401c1a
//   XREF to: 00401c1a (CONDITIONAL_JUMP)
// 00401c59: JMP 0x00401c31
//   XREF to: 00401c31 (UNCONDITIONAL_JUMP)
