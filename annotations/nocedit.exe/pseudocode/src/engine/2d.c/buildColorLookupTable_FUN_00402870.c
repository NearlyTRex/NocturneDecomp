// Name: engine_2d.c_buildColorLookupTable_FUN_00402870
// Address: 00402870
// Address Range: [[00402870, 0040292a]]
// Convention: __cdecl
// Signature: void engine_2d.c_buildColorLookupTable_FUN_00402870(void)
// Cross-references:
//   engine_2d.c_loadOrBuildColorMap_FUN_00402930 (00402930) at 004029c6 [UNCONDITIONAL_CALL]
// Globals:
//   double g_LuminanceScaleFactor = 0.577350270000000
//   float[256] g_PaletteLuminanceCache
//   undefined4 DAT_0077263c
//   uchar[32768] g_ColorCubeLookup
//   char[768] g_SourcePaletteData
//   undefined4 CHAR_ARRAY_02d01f49
//   undefined4 CHAR_ARRAY_02d01f4a
//   undefined4 CHAR_ARRAY_02d01f4b
//   undefined4 CHAR_ARRAY_02d01f4c
//   undefined4 CHAR_ARRAY_02d01f4d
// Function calls:
//   engine_2d.c_findBestPaletteMatch_FUN_00401460

#include "nocturne.h"

void __cdecl engine_2d_c_buildColorLookupTable_FUN_00402870(void)

{
  byte *pbVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uchar *puVar8;
  uchar *puVar9;
  
  iVar4 = 0;
  fVar2 = (float)g_LuminanceScaleFactor;
  iVar6 = 0;
  do {
    pbVar1 = (byte *)(g_SourcePaletteData + iVar4);
    iVar3 = iVar4 + 1;
    iVar5 = iVar4 + 2;
    iVar7 = iVar6 + 4;
    iVar4 = iVar4 + 3;
    *(float *)((int)g_PaletteLuminanceCache + iVar6) =
         SQRT((float)(byte)g_SourcePaletteData[iVar5] * (float)(byte)g_SourcePaletteData[iVar5] +
              (float)(byte)g_SourcePaletteData[iVar3] * (float)(byte)g_SourcePaletteData[iVar3] +
              (float)*pbVar1 * (float)*pbVar1) * fVar2;
    iVar6 = iVar7;
  } while (iVar7 != 0x400);
  puVar8 = g_ColorCubeLookup;
  iVar6 = 0;
  do {
    iVar4 = 0;
    do {
      iVar3 = 0;
      puVar9 = puVar8;
      do {
        puVar8 = puVar9 + 1;
        iVar5 = iVar3 + 8;
        iVar3 = engine_2d_c_findBestPaletteMatch_FUN_00401460(iVar6,iVar4,iVar3,10,0xe5);
        *puVar9 = (uchar)iVar3;
        iVar3 = iVar5;
        puVar9 = puVar8;
      } while (iVar5 < 0x100);
      iVar4 = iVar4 + 8;
    } while (iVar4 < 0x100);
    iVar6 = iVar6 + 8;
  } while (iVar6 < 0x100);
  g_ColorCubeLookup[0] = '\0';
  return;
}


// Assembly code:
// 00402870: PUSH EBX
//   Label: engine_2d.c_buildColorLookupTable_FUN_00402870
// 00402871: PUSH ESI
// 00402872: PUSH EDI
// 00402873: PUSH EBP
// 00402874: SUB ESP,0x10
// 00402877: XOR EBX,EBX
// 00402879: XOR ESI,ESI
// 0040287b: FLD double ptr [0x006130ec]
//   XREF to: 006130ec (READ)
// 00402881: XOR EAX,EAX
//   Label: LAB_00402881
// 00402883: MOV AL,byte ptr [EBX + 0x2d01f48]
//   XREF to: 02d01f48 (READ)
//   XREF to: 02d01f4b (READ)
// 00402889: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0040288d: XOR EAX,EAX
// 0040288f: FILD word ptr [ESP + 0xc]
//   XREF to: Stack[-0x14] (READ)
// 00402893: MOV AL,byte ptr [EBX + 0x2d01f49]
//   XREF to: 02d01f49 (READ)
//   XREF to: 02d01f4c (READ)
// 00402899: FLD ST0
// 0040289b: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0040289f: FMULP
// 004028a1: FILD word ptr [ESP + 0xc]
//   XREF to: Stack[-0x14] (READ)
// 004028a5: XOR EAX,EAX
// 004028a7: FLD ST0
// 004028a9: MOV AL,byte ptr [EBX + 0x2d01f4a]
//   XREF to: 02d01f4a (READ)
//   XREF to: 02d01f4d (READ)
// 004028af: FMULP
// 004028b1: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004028b5: FADDP
// 004028b7: FILD word ptr [ESP + 0xc]
//   XREF to: Stack[-0x14] (READ)
// 004028bb: FMUL ST0
// 004028bd: FADDP
// 004028bf: FSQRT
// 004028c1: FMUL ST1
// 004028c3: ADD ESI,0x4
// 004028c6: ADD EBX,0x3
// 004028c9: FSTP float ptr [ESI + 0x772634]
//   XREF to: 00772638 (WRITE)
//   XREF to: 0077263c (WRITE)
// 004028cf: CMP ESI,0x400
// 004028d5: JNZ 0x00402881
//   XREF to: 00402881 (CONDITIONAL_JUMP)
// 004028d7: FSTP ST0
// 004028d9: MOV ESI,0x2cf9020
//   XREF to: 02cf9020 (DATA)
// 004028de: XOR EBP,EBP
// 004028e0: XOR EDI,EDI
//   Label: LAB_004028e0
// 004028e2: XOR EBX,EBX
//   Label: LAB_004028e2
// 004028e4: PUSH 0xe5
//   Label: LAB_004028e4
// 004028e9: PUSH 0xa
// 004028eb: PUSH EBX
// 004028ec: PUSH EDI
// 004028ed: PUSH EBP
// 004028ee: INC ESI
// 004028ef: ADD EBX,0x8
// 004028f2: CALL engine_2d.c_findBestPaletteMatch_FUN_00401460
//   XREF to: 00401460 (UNCONDITIONAL_CALL)
// 004028f7: ADD ESP,0x14
// 004028fa: MOV byte ptr [ESI + -0x1],AL
//   XREF to: 02cf9020 (WRITE)
// 004028fd: CMP EBX,0x100
// 00402903: JL 0x004028e4
//   XREF to: 004028e4 (CONDITIONAL_JUMP)
// 00402905: ADD EDI,0x8
// 00402908: CMP EDI,0x100
// 0040290e: JL 0x004028e2
//   XREF to: 004028e2 (CONDITIONAL_JUMP)
// 00402910: ADD EBP,0x8
// 00402913: CMP EBP,0x100
// 00402919: JL 0x004028e0
//   XREF to: 004028e0 (CONDITIONAL_JUMP)
// 0040291b: XOR AH,AH
// 0040291d: MOV byte ptr [0x02cf9020],AH
//   XREF to: 02cf9020 (WRITE)
// 00402923: ADD ESP,0x10
// 00402926: POP EBP
// 00402927: POP EDI
// 00402928: POP ESI
// 00402929: POP EBX
// 0040292a: RET
