// Name: engine_font.cpp_drawAlphaBlendedPixels_FUN_004ce240
// Address: 004ce240
// Address Range: [[004ce240, 004ce2cc]]
// Convention: __cdecl
// Signature: void engine_font.cpp_drawAlphaBlendedPixels_FUN_004ce240(uint * dest_buffer, uchar * src_indices, uint * color_table, int pixel_count, uint blend_color)
// Cross-references:
//   engine_font.cpp_CBitFont_drawCharacter_FUN_004ce7a0 (004ce7a0) at 004cfda0 [UNCONDITIONAL_CALL]
// Globals:
//   int g_CurrentRenderColor = 0xffffff

#include "nocturne.h"

void __cdecl
engine_font_cpp_drawAlphaBlendedPixels_FUN_004ce240
          (uint *dest_buffer,uchar *src_indices,uint *color_table,int pixel_count,uint blend_color)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ushort uVar10;
  ushort uVar12;
  uint5 uVar11;
  ushort uVar13;
  ushort uVar14;
  uint5 uVar15;
  ushort uVar16;
  ushort uVar17;
  ushort uVar18;
  ushort uVar19;
  ulonglong uVar20;
  byte bVar21;
  
  uVar8 = (uint)g_CurrentRenderColor >> 0x10;
  uVar4 = (ushort)(((uint7)(byte)((uint)g_CurrentRenderColor >> 0x18) << 0x30) >> 0x28);
  uVar7 = (uint)g_CurrentRenderColor >> 8;
  bVar21 = (byte)g_CurrentRenderColor;
  do {
    if (*src_indices != 0) {
      uVar1 = color_table[*src_indices];
      uVar2 = *dest_buffer;
      uVar5 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(blend_color >> 0x18) << 0x30)
                                                     >> 0x28),
                                              CONCAT14((char)(blend_color >> 0x10),blend_color)) >>
                                    0x20),blend_color) >> 0x18);
      uVar11 = (uint5)uVar5 & 0xffffffff00;
      uVar6 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(uVar2 >> 0x18) << 0x30) >> 0x28
                                                     ),CONCAT14((char)(uVar2 >> 0x10),uVar2)) >>
                                    0x20),uVar2) >> 0x18);
      uVar15 = (uint5)uVar6 & 0xffffffff00;
      uVar10 = (ushort)(((uint7)(byte)(uVar1 >> 0x18) << 0x30) >> 0x28);
      uVar16 = (ushort)(((ushort)uVar1 & 0xff) * (ushort)bVar21) >> 8;
      uVar17 = (ushort)((ushort)(byte)(uVar1 >> 8) * (ushort)(byte)uVar7) >> 8;
      uVar18 = (ushort)((short)(CONCAT25(uVar10,CONCAT14((char)(uVar1 >> 0x10),uVar1)) >> 0x20) *
                       (short)CONCAT21(uVar4,(char)uVar8)) >> 8;
      uVar19 = (ushort)((uVar10 >> 8) * (uVar4 >> 8)) >> 8;
      uVar20 = CONCAT26(uVar19,CONCAT24(uVar18,CONCAT22(uVar17,uVar16))) ^ 0xff00ff00ff00ff;
      uVar10 = (byte)blend_color * uVar16 + ((ushort)uVar2 & 0xff) * (short)uVar20;
      uVar17 = ((ushort)CONCAT41(uVar5,(char)(blend_color >> 8)) & 0xff) * uVar17 +
               ((ushort)(CONCAT43(uVar6,CONCAT12((char)(uVar2 >> 8),(ushort)uVar2)) >> 0x10) & 0xff)
               * (short)(uVar20 >> 0x10);
      uVar12 = (short)(uVar11 >> 8) * uVar18 + (short)(uVar15 >> 8) * (short)(uVar20 >> 0x20);
      uVar13 = (short)(uVar11 >> 0x18) * uVar19 + (short)(uVar15 >> 0x18) * (short)(uVar20 >> 0x30);
      uVar16 = uVar10 >> 8;
      uVar18 = uVar17 >> 8;
      uVar19 = uVar12 >> 8;
      uVar14 = uVar13 >> 8;
      *dest_buffer = CONCAT13((uVar14 != 0) * (uVar14 < 0x100) * (char)(uVar13 >> 8) -
                              (0xff < uVar14),
                              CONCAT12((uVar19 != 0) * (uVar19 < 0x100) * (char)(uVar12 >> 8) -
                                       (0xff < uVar19),
                                       CONCAT11((uVar18 != 0) * (uVar18 < 0x100) *
                                                (char)(uVar17 >> 8) - (0xff < uVar18),
                                                (uVar16 != 0) * (uVar16 < 0x100) *
                                                (char)(uVar10 >> 8) - (0xff < uVar16))));
    }
    src_indices = src_indices + 1;
    dest_buffer = dest_buffer + 1;
    iVar9 = pixel_count + -1;
    bVar3 = 0 < pixel_count;
    pixel_count = iVar9;
  } while (iVar9 != 0 && bVar3);
  return;
}


// Assembly code:
// 004ce240: PUSH EBX
//   Label: engine_font.cpp_drawAlphaBlendedPixels_FUN_004ce240
// 004ce241: PUSH ESI
// 004ce242: PUSH EDI
// 004ce243: PUSH EBP
// 004ce244: MOV EBP,ESP
// 004ce246: MOV EDI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004ce24c: MOV ESI,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004ce252: MOV EDX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 004ce258: MOV ECX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 004ce25e: PXOR MM7,MM7
// 004ce261: MOVD MM4,dword ptr [0x0066df84]
//   XREF to: 0066df84 (READ)
// 004ce268: PUNPCKLBW MM4,MM7
// 004ce26b: MOV EAX,0xffffffff
// 004ce270: MOVD MM6,EAX
// 004ce273: PUNPCKLBW MM6,MM7
// 004ce276: MOVZX EAX,byte ptr [ESI]
//   Label: LAB_004ce276
// 004ce279: CMP EAX,0x0
// 004ce27c: JZ 0x004ce2bd
//   XREF to: 004ce2bd (CONDITIONAL_JUMP)
// 004ce27e: SHL EAX,0x2
// 004ce281: MOV EAX,dword ptr [EAX + EDX*0x1]
// 004ce284: MOVD MM2,EAX
// 004ce287: MOVD MM0,dword ptr [EBP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 004ce28e: MOVD MM1,dword ptr [EDI]
// 004ce291: PUNPCKLBW MM0,MM7
// 004ce294: PUNPCKLBW MM1,MM7
// 004ce297: PUNPCKLBW MM2,MM7
// 004ce29a: PUNPCKLBW MM3,MM7
// 004ce29d: PMULLW MM2,MM4
// 004ce2a0: PSRLW MM2,0x8
// 004ce2a4: MOVQ MM3,MM2
// 004ce2a7: PXOR MM3,MM6
// 004ce2aa: PMULLW MM0,MM2
// 004ce2ad: PMULLW MM1,MM3
// 004ce2b0: PADDW MM0,MM1
// 004ce2b3: PSRLW MM0,0x8
// 004ce2b7: PACKUSWB MM0,MM7
// 004ce2ba: MOVD dword ptr [EDI],MM0
// 004ce2bd: INC ESI
//   Label: LAB_004ce2bd
// 004ce2be: ADD EDI,0x4
// 004ce2c1: DEC ECX
// 004ce2c2: JG 0x004ce276
//   XREF to: 004ce276 (CONDITIONAL_JUMP)
// 004ce2c4: EMMS
// 004ce2c6: MOV ESP,EBP
// 004ce2c8: POP EBP
// 004ce2c9: POP EDI
// 004ce2ca: POP ESI
// 004ce2cb: POP EBX
// 004ce2cc: RET
