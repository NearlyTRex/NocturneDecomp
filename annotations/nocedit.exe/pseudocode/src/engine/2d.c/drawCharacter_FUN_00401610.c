// Name: engine_2d.c_drawCharacter_FUN_00401610
// Address: 00401610
// Address Range: [[00401610, 00401766]]
// Convention: __cdecl
// Signature: int engine_2d.c_drawCharacter_FUN_00401610(int char_code, int x_pos, int y_pos)
// Cross-references:
//   engine_2d.c_drawTextMultiline_FUN_00401cf0 (00401cf0) at 00401d3a [UNCONDITIONAL_CALL]
//   engine_2d.c_drawTextWrapped_FUN_00401c60 (00401c60) at 00401cb1 [UNCONDITIONAL_CALL]
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

int __cdecl engine_2d_c_drawCharacter_FUN_00401610(int char_code,int x_pos,int y_pos)

{
  byte bVar1;
  byte *pbVar2;
  ushort *puVar3;
  ushort *puVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint *puVar8;
  uint *puVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  
  iVar5 = (char_code + -0x20) * 0x91;
  uVar10 = (uint)(byte)(&g_FontTable)[iVar5];
  if ((((x_pos < g_ClipLeft) || (y_pos < g_ClipTop)) || ((int)((g_ClipRight + 1) - uVar10) < x_pos))
     || (g_ClipBottom + -10 < y_pos)) {
    iVar5 = 0;
  }
  else {
    iVar12 = y_pos * 4;
    pbVar2 = &DAT_00666041 + iVar5;
    iVar5 = iVar12 + 0x2c;
    if (g_BitsPerPixel == 8) {
      do {
        iVar11 = 0;
        pbVar6 = (byte *)(*(int *)((int)g_ScreenBufferArray + iVar12) + x_pos);
        pbVar7 = pbVar6;
        if (uVar10 != 0) {
          do {
            pbVar6 = pbVar7 + 1;
            bVar1 = *pbVar2;
            pbVar2 = pbVar2 + 1;
            iVar11 = iVar11 + 1;
            *pbVar7 = bVar1;
            pbVar7 = pbVar6;
          } while (iVar11 < (int)uVar10);
        }
        iVar12 = iVar12 + 4;
        *pbVar6 = 0;
      } while (iVar12 != iVar5);
    }
    else if (g_BitsPerPixel == 0x10) {
      do {
        iVar11 = 0;
        puVar3 = (ushort *)(*(int *)((int)g_ScreenBufferArray + iVar12) + x_pos * 2);
        puVar4 = puVar3;
        if (uVar10 != 0) {
          do {
            bVar1 = *pbVar2;
            pbVar2 = pbVar2 + 1;
            puVar3 = puVar4 + 1;
            iVar11 = iVar11 + 1;
            *puVar4 = g_ColorTable16[bVar1];
            puVar4 = puVar3;
          } while (iVar11 < (int)uVar10);
        }
        iVar12 = iVar12 + 4;
        *puVar3 = 0;
      } while (iVar12 != iVar5);
    }
    else {
      do {
        iVar11 = 0;
        puVar8 = (uint *)(*(int *)((int)g_ScreenBufferArray + iVar12) + x_pos * 4);
        puVar9 = puVar8;
        if (uVar10 != 0) {
          do {
            bVar1 = *pbVar2;
            pbVar2 = pbVar2 + 1;
            puVar8 = puVar9 + 1;
            iVar11 = iVar11 + 1;
            *puVar9 = g_ColorTable32[bVar1];
            puVar9 = puVar8;
          } while (iVar11 < (int)uVar10);
        }
        iVar12 = iVar12 + 4;
        *puVar8 = 0;
      } while (iVar12 != iVar5);
    }
    iVar5 = uVar10 + 1;
  }
  return iVar5;
}


// Assembly code:
// 00401610: PUSH EBX
//   Label: engine_2d.c_drawCharacter_FUN_00401610
// 00401611: PUSH EDI
// 00401612: PUSH EBP
// 00401613: SUB ESP,0x10
// 00401616: MOV EDI,dword ptr [ESP + 0x28]
//   XREF to: Stack[0xc] (READ)
// 0040161a: MOV EDX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 0040161e: SUB EDX,0x20
// 00401621: LEA EAX,[EDX*0x8 + 0x0]
// 00401628: ADD EAX,EDX
// 0040162a: SHL EAX,0x4
// 0040162d: ADD EAX,EDX
// 0040162f: MOV ECX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x8] (READ)
// 00401633: ADD EAX,0x666040
//   XREF to: 00666040 (DATA)
// 00401638: XOR EDX,EDX
// 0040163a: MOV EBX,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 00401640: MOV DL,byte ptr [EAX]
//   XREF to: 00666040 (DATA)
// 00401642: CMP ECX,EBX
// 00401644: JL 0x004016eb
//   XREF to: 004016eb (CONDITIONAL_JUMP)
// 0040164a: CMP EDI,dword ptr [0x02d0255c]
//   XREF to: 02d0255c (READ)
// 00401650: JL 0x004016eb
//   XREF to: 004016eb (CONDITIONAL_JUMP)
// 00401656: MOV ECX,dword ptr [0x02d02560]
//   XREF to: 02d02560 (READ)
// 0040165c: INC ECX
// 0040165d: MOV EBP,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x8] (READ)
// 00401661: SUB ECX,EDX
// 00401663: CMP ECX,EBP
// 00401665: JL 0x004016eb
//   XREF to: 004016eb (CONDITIONAL_JUMP)
// 0040166b: MOV ECX,dword ptr [0x02d02564]
//   XREF to: 02d02564 (READ)
// 00401671: SUB ECX,0xa
// 00401674: CMP EDI,ECX
// 00401676: JG 0x004016eb
//   XREF to: 004016eb (CONDITIONAL_JUMP)
// 0040167c: PUSH ESI
// 0040167d: MOV ECX,dword ptr [0x0067939c]
//   XREF to: 0067939c (READ)
// 00401683: SHL EDI,0x2
// 00401686: INC EAX
// 00401687: LEA EBP,[EDI + 0x2c]
// 0040168a: CMP ECX,0x8
// 0040168d: JZ 0x004016ef
//   XREF to: 004016ef (CONDITIONAL_JUMP)
// 0040168f: CMP ECX,0x10
// 00401692: JNZ 0x00401721
//   XREF to: 00401721 (CONDITIONAL_JUMP)
// 00401698: MOV ECX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x8] (READ)
// 0040169c: ADD ECX,ECX
// 0040169e: MOV dword ptr [ESP + 0x10],ECX
//   XREF to: Stack[-0x10] (WRITE)
// 004016a2: MOV dword ptr [ESP + 0x8],EBP
//   XREF to: Stack[-0x18] (WRITE)
// 004016a6: MOV EBP,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x10] (READ)
// 004016aa: MOV ECX,dword ptr [EDI + 0x2cf6a9c]
//   Label: LAB_004016aa
//   XREF to: 02cf6a9c (DATA)
//   XREF to: 02cf6aa0 (DATA)
// 004016b0: XOR EBX,EBX
// 004016b2: ADD ECX,EBP
// 004016b4: TEST EDX,EDX
// 004016b6: JLE 0x004016d0
//   XREF to: 004016d0 (CONDITIONAL_JUMP)
// 004016b8: MOVZX ESI,byte ptr [EAX]
//   Label: LAB_004016b8
//   XREF to: 00666041 (DATA)
//   XREF to: 00666042 (DATA)
//   XREF to: 00666043 (DATA)
// 004016bb: INC EAX
// 004016bc: ADD ECX,0x2
// 004016bf: MOV SI,word ptr [ESI*0x2 + 0x2d01020]
//   XREF to: 02d01020 (DATA)
// 004016c7: INC EBX
// 004016c8: MOV word ptr [ECX + -0x2],SI
// 004016cc: CMP EBX,EDX
// 004016ce: JL 0x004016b8
//   XREF to: 004016b8 (CONDITIONAL_JUMP)
// 004016d0: ADD EDI,0x4
//   Label: LAB_004016d0
// 004016d3: MOV word ptr [ECX],0x0
// 004016d8: CMP EDI,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x18] (READ)
// 004016dc: JNZ 0x004016aa
//   XREF to: 004016aa (CONDITIONAL_JUMP)
// 004016de: LEA ECX,[EDX + 0x1]
//   Label: LAB_004016de
// 004016e1: POP ESI
// 004016e2: MOV EAX,ECX
//   Label: LAB_004016e2
// 004016e4: ADD ESP,0x10
// 004016e7: POP EBP
// 004016e8: POP EDI
// 004016e9: POP EBX
// 004016ea: RET
// 004016eb: XOR ECX,ECX
//   Label: LAB_004016eb
// 004016ed: JMP 0x004016e2
//   XREF to: 004016e2 (UNCONDITIONAL_JUMP)
// 004016ef: MOV dword ptr [ESP + 0xc],EBP
//   Label: LAB_004016ef
//   XREF to: Stack[-0x14] (WRITE)
// 004016f3: MOV EBX,dword ptr [ESP + 0x28]
//   Label: LAB_004016f3
//   XREF to: Stack[0x8] (READ)
// 004016f7: MOV ECX,dword ptr [EDI + 0x2cf6a9c]
//   XREF to: 02cf6a9c (DATA)
//   XREF to: 02cf6aa0 (DATA)
// 004016fd: XOR ESI,ESI
// 004016ff: ADD ECX,EBX
// 00401701: TEST EDX,EDX
// 00401703: JLE 0x00401711
//   XREF to: 00401711 (CONDITIONAL_JUMP)
// 00401705: INC ECX
//   Label: LAB_00401705
// 00401706: MOV BL,byte ptr [EAX]
//   XREF to: 00666041 (DATA)
//   XREF to: 00666042 (DATA)
//   XREF to: 00666043 (DATA)
// 00401708: INC EAX
// 00401709: INC ESI
// 0040170a: MOV byte ptr [ECX + -0x1],BL
// 0040170d: CMP ESI,EDX
// 0040170f: JL 0x00401705
//   XREF to: 00401705 (CONDITIONAL_JUMP)
// 00401711: MOV ESI,dword ptr [ESP + 0xc]
//   Label: LAB_00401711
//   XREF to: Stack[-0x14] (READ)
// 00401715: ADD EDI,0x4
// 00401718: MOV byte ptr [ECX],0x0
// 0040171b: CMP EDI,ESI
// 0040171d: JZ 0x004016de
//   XREF to: 004016de (CONDITIONAL_JUMP)
// 0040171f: JMP 0x004016f3
//   XREF to: 004016f3 (UNCONDITIONAL_JUMP)
// 00401721: MOV ECX,dword ptr [ESP + 0x28]
//   Label: LAB_00401721
//   XREF to: Stack[0x8] (READ)
// 00401725: SHL ECX,0x2
// 00401728: MOV dword ptr [ESP + 0x4],ECX
//   XREF to: Stack[-0x1c] (WRITE)
// 0040172c: MOV ESI,dword ptr [ESP + 0x4]
//   Label: LAB_0040172c
//   XREF to: Stack[-0x1c] (READ)
// 00401730: MOV ECX,dword ptr [EDI + 0x2cf6a9c]
//   XREF to: 02cf6a9c (DATA)
//   XREF to: 02cf6aa0 (DATA)
// 00401736: XOR EBX,EBX
// 00401738: ADD ECX,ESI
// 0040173a: TEST EDX,EDX
// 0040173c: JLE 0x00401754
//   XREF to: 00401754 (CONDITIONAL_JUMP)
// 0040173e: MOVZX ESI,byte ptr [EAX]
//   Label: LAB_0040173e
//   XREF to: 00666041 (DATA)
//   XREF to: 00666042 (DATA)
//   XREF to: 00666043 (DATA)
// 00401741: INC EAX
// 00401742: ADD ECX,0x4
// 00401745: MOV ESI,dword ptr [ESI*0x4 + 0x2d01220]
//   XREF to: 02d01220 (DATA)
// 0040174c: INC EBX
// 0040174d: MOV dword ptr [ECX + -0x4],ESI
// 00401750: CMP EBX,EDX
// 00401752: JL 0x0040173e
//   XREF to: 0040173e (CONDITIONAL_JUMP)
// 00401754: ADD EDI,0x4
//   Label: LAB_00401754
// 00401757: MOV dword ptr [ECX],0x0
// 0040175d: CMP EDI,EBP
// 0040175f: JZ 0x004016de
//   XREF to: 004016de (CONDITIONAL_JUMP)
// 00401765: JMP 0x0040172c
//   XREF to: 0040172c (UNCONDITIONAL_JUMP)
