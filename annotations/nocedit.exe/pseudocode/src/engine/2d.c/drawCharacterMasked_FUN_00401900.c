// Name: engine_2d.c_drawCharacterMasked_FUN_00401900
// Address: 00401900
// Address Range: [[00401900, 00401a0c]]
// Convention: __cdecl
// Signature: int engine_2d.c_drawCharacterMasked_FUN_00401900(int char_code, int x_pos, int y_pos)
// Cross-references:
//   engine_2d.c_drawStringMasked_FUN_00402030 (00402030) at 00402067 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 g_FontTable
//   undefined4 DAT_00666041
//   undefined4 DAT_00666042
//   undefined4 g_FontTable[0].bitmap[0][2]
//   int g_BitsPerPixel = 0x8
//   void*[1024] g_ScreenBufferArray
//   undefined4 g_ScreenBufferArray[1]
//   ushort[256] g_ColorTable16
//   undefined4 g_ColorTable16[2]
//   int g_ClipLeft
//   int g_ClipTop
//   int g_ClipRight
//   int g_ClipBottom

#include "nocturne.h"

int __cdecl engine_2d_c_drawCharacterMasked_FUN_00401900(int char_code,int x_pos,int y_pos)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  ushort *puVar4;
  undefined1 *puVar5;
  ushort uVar6;
  uint uVar7;
  int iVar8;
  
  iVar3 = (char_code + -0x20) * 0x91;
  uVar7 = (uint)(byte)(&g_FontTable)[iVar3];
  if ((((x_pos < g_ClipLeft) || (y_pos < g_ClipTop)) || ((int)((g_ClipRight + 1) - uVar7) < x_pos))
     || (g_ClipBottom + -10 < y_pos)) {
    iVar3 = 0;
  }
  else {
    iVar8 = y_pos * 4;
    pcVar1 = &DAT_00666041 + iVar3;
    iVar3 = iVar8 + 0x2c;
    if (g_BitsPerPixel == 8) {
      do {
        iVar2 = 0;
        puVar5 = (undefined1 *)(*(int *)((int)g_ScreenBufferArray + iVar8) + x_pos);
        if (uVar7 != 0) {
          do {
            if (*pcVar1 == '\0') {
              *puVar5 = 0;
            }
            else {
              *puVar5 = 2;
            }
            pcVar1 = pcVar1 + 1;
            iVar2 = iVar2 + 1;
            puVar5 = puVar5 + 1;
          } while (iVar2 < (int)uVar7);
        }
        iVar8 = iVar8 + 4;
        *puVar5 = 0;
      } while (iVar8 != iVar3);
    }
    else {
      do {
        puVar4 = (ushort *)(*(int *)((int)g_ScreenBufferArray + iVar8) + x_pos * 2);
        iVar2 = 0;
        if (uVar7 != 0) {
          do {
            uVar6 = g_ColorTable16[0];
            if (*pcVar1 != '\0') {
              uVar6 = g_ColorTable16[2];
            }
            *puVar4 = uVar6;
            pcVar1 = pcVar1 + 1;
            iVar2 = iVar2 + 1;
            puVar4 = puVar4 + 1;
          } while (iVar2 < (int)uVar7);
        }
        iVar8 = iVar8 + 4;
        *puVar4 = g_ColorTable16[0];
      } while (iVar8 != iVar3);
    }
    iVar3 = uVar7 + 1;
  }
  return iVar3;
}


// Assembly code:
// 00401900: PUSH ESI
//   Label: engine_2d.c_drawCharacterMasked_FUN_00401900
// 00401901: PUSH EDI
// 00401902: PUSH EBP
// 00401903: SUB ESP,0x8
// 00401906: MOV EBP,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 0040190a: MOV EDI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0xc] (READ)
// 0040190e: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 00401912: SUB EDX,0x20
// 00401915: LEA EAX,[EDX*0x8 + 0x0]
// 0040191c: ADD EAX,EDX
// 0040191e: SHL EAX,0x4
// 00401921: ADD EAX,EDX
// 00401923: ADD EAX,0x666040
//   XREF to: 00666040 (DATA)
// 00401928: MOV EDX,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 0040192e: MOVZX ESI,byte ptr [EAX]
//   XREF to: 00666040 (DATA)
// 00401931: CMP EBP,EDX
// 00401933: JL 0x004019cb
//   XREF to: 004019cb (CONDITIONAL_JUMP)
// 00401939: CMP EDI,dword ptr [0x02d0255c]
//   XREF to: 02d0255c (READ)
// 0040193f: JL 0x004019cb
//   XREF to: 004019cb (CONDITIONAL_JUMP)
// 00401945: MOV EDX,dword ptr [0x02d02560]
//   XREF to: 02d02560 (READ)
// 0040194b: INC EDX
// 0040194c: SUB EDX,ESI
// 0040194e: CMP EBP,EDX
// 00401950: JG 0x004019cb
//   XREF to: 004019cb (CONDITIONAL_JUMP)
// 00401956: MOV EDX,dword ptr [0x02d02564]
//   XREF to: 02d02564 (READ)
// 0040195c: SUB EDX,0xa
// 0040195f: CMP EDI,EDX
// 00401961: JG 0x004019cb
//   XREF to: 004019cb (CONDITIONAL_JUMP)
// 00401963: PUSH EBX
// 00401964: MOV EBX,dword ptr [0x0067939c]
//   XREF to: 0067939c (READ)
// 0040196a: SHL EDI,0x2
// 0040196d: INC EAX
// 0040196e: LEA EDX,[EDI + 0x2c]
// 00401971: CMP EBX,0x8
// 00401974: JZ 0x004019cf
//   XREF to: 004019cf (CONDITIONAL_JUMP)
// 00401976: ADD EBP,EBP
// 00401978: MOV dword ptr [ESP + 0x4],EBP
//   XREF to: Stack[-0x14] (WRITE)
// 0040197c: MOV EBP,EDX
// 0040197e: MOV ECX,dword ptr [ESP + 0x4]
//   Label: LAB_0040197e
//   XREF to: Stack[-0x14] (READ)
// 00401982: MOV EDX,dword ptr [EDI + 0x2cf6a9c]
//   XREF to: 02cf6a9c (DATA)
//   XREF to: 02cf6aa0 (DATA)
// 00401988: ADD EDX,ECX
// 0040198a: XOR ECX,ECX
// 0040198c: TEST ESI,ESI
// 0040198e: JLE 0x004019ad
//   XREF to: 004019ad (CONDITIONAL_JUMP)
// 00401990: MOV BL,byte ptr [EAX]
//   Label: LAB_00401990
//   XREF to: 00666041 (DATA)
//   XREF to: 00666042 (DATA)
//   XREF to: 00666043 (DATA)
// 00401992: TEST BL,BL
// 00401994: JZ 0x00401a04
//   XREF to: 00401a04 (CONDITIONAL_JUMP)
// 0040199a: MOV BX,word ptr [0x02d01024]
//   XREF to: 02d01024 (READ)
// 004019a1: MOV word ptr [EDX],BX
//   Label: LAB_004019a1
// 004019a4: INC EAX
// 004019a5: INC ECX
// 004019a6: ADD EDX,0x2
// 004019a9: CMP ECX,ESI
// 004019ab: JL 0x00401990
//   XREF to: 00401990 (CONDITIONAL_JUMP)
// 004019ad: MOV BX,word ptr [0x02d01020]
//   Label: LAB_004019ad
//   XREF to: 02d01020 (READ)
// 004019b4: ADD EDI,0x4
// 004019b7: MOV word ptr [EDX],BX
// 004019ba: CMP EDI,EBP
// 004019bc: JNZ 0x0040197e
//   XREF to: 0040197e (CONDITIONAL_JUMP)
// 004019be: LEA ECX,[ESI + 0x1]
//   Label: LAB_004019be
// 004019c1: POP EBX
// 004019c2: MOV EAX,ECX
//   Label: LAB_004019c2
// 004019c4: ADD ESP,0x8
// 004019c7: POP EBP
// 004019c8: POP EDI
// 004019c9: POP ESI
// 004019ca: RET
// 004019cb: XOR ECX,ECX
//   Label: LAB_004019cb
// 004019cd: JMP 0x004019c2
//   XREF to: 004019c2 (UNCONDITIONAL_JUMP)
// 004019cf: MOV BH,0x2
//   Label: LAB_004019cf
// 004019d1: MOV dword ptr [ESP + 0x8],EDX
//   XREF to: Stack[-0x10] (WRITE)
// 004019d5: MOV EDX,dword ptr [EDI + 0x2cf6a9c]
//   Label: LAB_004019d5
//   XREF to: 02cf6a9c (DATA)
//   XREF to: 02cf6aa0 (DATA)
// 004019db: XOR ECX,ECX
// 004019dd: ADD EDX,EBP
// 004019df: TEST ESI,ESI
// 004019e1: JLE 0x004019f2
//   XREF to: 004019f2 (CONDITIONAL_JUMP)
// 004019e3: MOV BL,byte ptr [EAX]
//   Label: LAB_004019e3
//   XREF to: 00666041 (DATA)
//   XREF to: 00666042 (DATA)
//   XREF to: 00666043 (DATA)
// 004019e5: TEST BL,BL
// 004019e7: JZ 0x00401a00
//   XREF to: 00401a00 (CONDITIONAL_JUMP)
// 004019e9: MOV byte ptr [EDX],BH
// 004019eb: INC EAX
//   Label: LAB_004019eb
// 004019ec: INC ECX
// 004019ed: INC EDX
// 004019ee: CMP ECX,ESI
// 004019f0: JL 0x004019e3
//   XREF to: 004019e3 (CONDITIONAL_JUMP)
// 004019f2: ADD EDI,0x4
//   Label: LAB_004019f2
// 004019f5: MOV byte ptr [EDX],0x0
// 004019f8: CMP EDI,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x10] (READ)
// 004019fc: JZ 0x004019be
//   XREF to: 004019be (CONDITIONAL_JUMP)
// 004019fe: JMP 0x004019d5
//   XREF to: 004019d5 (UNCONDITIONAL_JUMP)
// 00401a00: MOV byte ptr [EDX],BL
//   Label: LAB_00401a00
// 00401a02: JMP 0x004019eb
//   XREF to: 004019eb (UNCONDITIONAL_JUMP)
// 00401a04: MOV BX,word ptr [0x02d01020]
//   Label: LAB_00401a04
//   XREF to: 02d01020 (READ)
// 00401a0b: JMP 0x004019a1
//   XREF to: 004019a1 (UNCONDITIONAL_JUMP)
