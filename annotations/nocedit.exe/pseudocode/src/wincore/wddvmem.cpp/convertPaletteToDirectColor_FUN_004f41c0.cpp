// Name: wincore_wddvmem.cpp_convertPaletteToDirectColor_FUN_004f41c0
// Address: 004f41c0
// Address Range: [[004f41c0, 004f4372]]
// Convention: __cdecl
// Signature: void wincore_wddvmem.cpp_convertPaletteToDirectColor_FUN_004f41c0(void)
// Cross-references:
//   wincore_wddvmem.cpp_analyzePixelFormat_FUN_005ed730 (005ed730) at 005ed8ca [UNCONDITIONAL_CALL]
//   wincore_wddvmem.cpp_setupColorPalette_FUN_005ed8f0 (005ed8f0) at 005ed9f3 [UNCONDITIONAL_CALL]
//   wincore_windll.cpp_setColorTable16_FUN_005b7579 (005b7579) at 005b75a6 [UNCONDITIONAL_CALL]
//   wincore_windll.cpp_setResolutionAndColorTable_FUN_005b7460 (005b7460) at 005b74ce [UNCONDITIONAL_CALL]
// Globals:
//   int g_BitsPerPixel = 0x8
//   uint g_RedMask16 = 0xf800
//   uint g_GreenMask16 = 0x7e0
//   uint g_BlueMask16 = 0x1f
//   ulonglong g_RedMask32 = 0xf80000
//   ulonglong g_GreenMask32 = 0xfc00
//   ulonglong g_BlueMask32 = 0xf8
//   ulonglong g_TotalColorBits = 0x8
//   ulonglong g_GreenBlueBits = 0x5
//   ulonglong g_BlueBitShift = 0x3
//   ushort[256] g_ColorTable16
//   uint[256] g_ColorTable32
//   undefined4 g_ColorTable32[1]
//   int g_RedBitPosition
//   int g_RedScaleFactor
//   int g_RedBitCount
//   int g_GreenBitPosition
//   int g_GreenScaleFactor
//   int g_GreenBitCount
//   int g_BlueBitPosition
//   int g_BlueScaleFactor
//   int g_BlueBitCount
//   char[768] g_SourcePaletteData
//   undefined4 CHAR_ARRAY_02d01f49
//   undefined4 CHAR_ARRAY_02d01f4a
//   undefined4 CHAR_ARRAY_02d01f4b
//   undefined4 CHAR_ARRAY_02d01f4c
//   undefined4 CHAR_ARRAY_02d01f4d

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004f4365) */

void __cdecl wincore_wddvmem_cpp_convertPaletteToDirectColor_FUN_004f41c0(void)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  
  if (g_BitsPerPixel == 0x10) {
    iVar6 = 0;
    iVar5 = 0;
    do {
      pbVar1 = (byte *)(g_SourcePaletteData + iVar6);
      iVar2 = iVar6 + 1;
      iVar3 = iVar6 + 2;
      iVar8 = iVar5 + 2;
      iVar6 = iVar6 + 3;
      *(ushort *)((int)g_ColorTable16 + iVar5) =
           (ushort)((uint)(byte)g_SourcePaletteData[iVar3] / (uint)g_BlueScaleFactor <<
                   ((byte)g_BlueBitPosition & 0x1f)) |
           (ushort)((uint)*pbVar1 / (uint)g_RedScaleFactor << ((byte)g_RedBitPosition & 0x1f)) |
           (ushort)((uint)(byte)g_SourcePaletteData[iVar2] / (uint)g_GreenScaleFactor <<
                   ((byte)g_GreenBitPosition & 0x1f));
      iVar5 = iVar8;
    } while (iVar8 != 0x200);
    uVar4 = 0xff >> ((byte)g_RedBitCount & 0x1f);
    g_RedMask16 = uVar4 << ((byte)g_RedBitPosition & 0x1f);
    uVar7 = 0xff >> ((byte)g_GreenBitCount & 0x1f);
    g_GreenMask16 = uVar7 << ((byte)g_GreenBitPosition & 0x1f);
    uVar9 = 0xff >> ((byte)g_BlueBitCount & 0x1f);
    g_BlueMask16 = uVar9 << ((byte)g_BlueBitPosition & 0x1f);
    g_RedMask32._0_4_ = (uVar4 << ((byte)g_RedBitCount & 0x1f)) << 0x10;
    g_GreenMask32._0_4_ = (uVar7 << ((byte)g_GreenBitCount & 0x1f)) << 8;
    g_BlueBitShift._0_4_ = g_BlueBitCount;
    g_TotalColorBits._0_4_ = g_RedBitCount + g_GreenBitCount + g_BlueBitCount;
    g_BlueMask32._0_4_ = uVar9 << ((byte)g_BlueBitCount & 0x1f);
    g_GreenBlueBits._0_4_ = g_GreenBitCount + g_BlueBitCount;
  }
  if (g_BitsPerPixel == 0x20) {
    iVar6 = 0;
    iVar5 = 0;
    do {
      iVar2 = iVar6 + 1;
      iVar3 = iVar6 + 2;
      pbVar1 = (byte *)(g_SourcePaletteData + iVar6);
      iVar8 = iVar5 + 4;
      iVar6 = iVar6 + 3;
      *(uint *)((int)g_ColorTable32 + iVar5) =
           (uint)(byte)g_SourcePaletteData[iVar3] << ((byte)g_BlueBitPosition & 0x1f) |
           (uint)(byte)g_SourcePaletteData[iVar2] << ((byte)g_GreenBitPosition & 0x1f) |
           (uint)*pbVar1 << ((byte)g_RedBitPosition & 0x1f);
      iVar5 = iVar8;
    } while (iVar8 != 0x400);
  }
  return;
}


// Assembly code:
// 004f41c0: PUSH EBX
//   Label: wincore_wddvmem.cpp_convertPaletteToDirectColor_FUN_004f41c0
// 004f41c1: PUSH ESI
// 004f41c2: PUSH EDI
// 004f41c3: PUSH EBP
// 004f41c4: SUB ESP,0x8
// 004f41c7: CMP dword ptr [0x0067939c],0x10
//   XREF to: 0067939c (READ)
// 004f41ce: JNZ 0x004f42ff
//   XREF to: 004f42ff (CONDITIONAL_JUMP)
// 004f41d4: XOR EBX,EBX
// 004f41d6: XOR ESI,ESI
// 004f41d8: XOR EAX,EAX
//   Label: LAB_004f41d8
// 004f41da: MOV EDI,dword ptr [0x02d01f28]
//   XREF to: 02d01f28 (READ)
// 004f41e0: MOV AL,byte ptr [EBX + 0x2d01f48]
//   XREF to: 02d01f48 (READ)
//   XREF to: 02d01f4b (READ)
// 004f41e6: XOR EDX,EDX
// 004f41e8: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x18] (DATA)
// 004f41eb: DIV EDI
// 004f41ed: MOVZX EBP,byte ptr [EBX + 0x2d01f49]
//   XREF to: 02d01f49 (READ)
//   XREF to: 02d01f4c (READ)
// 004f41f4: MOV dword ptr [ESP + 0x4],EBP
//   XREF to: Stack[-0x14] (WRITE)
// 004f41f8: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x18] (DATA)
// 004f41fb: XOR EDX,EDX
// 004f41fd: MOV EAX,EBP
// 004f41ff: DIV dword ptr [0x02d01f34]
//   XREF to: 02d01f34 (READ)
// 004f4205: XOR ECX,ECX
// 004f4207: MOV CL,byte ptr [EBX + 0x2d01f4a]
//   XREF to: 02d01f4a (READ)
//   XREF to: 02d01f4d (READ)
// 004f420d: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004f4211: XOR EDX,EDX
// 004f4213: MOV EAX,ECX
// 004f4215: DIV dword ptr [0x02d01f40]
//   XREF to: 02d01f40 (READ)
// 004f421b: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 004f421e: MOV CL,byte ptr [0x02d01f24]
//   XREF to: 02d01f24 (READ)
// 004f4224: MOV EDI,EAX
// 004f4226: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x14] (READ)
// 004f422a: SHL EDX,CL
// 004f422c: MOV CL,byte ptr [0x02d01f30]
//   XREF to: 02d01f30 (READ)
// 004f4232: SHL EAX,CL
// 004f4234: MOV CL,byte ptr [0x02d01f3c]
//   XREF to: 02d01f3c (READ)
// 004f423a: OR EDX,EAX
// 004f423c: MOV EAX,EDI
// 004f423e: SHL EAX,CL
// 004f4240: ADD ESI,0x2
// 004f4243: OR EAX,EDX
// 004f4245: ADD EBX,0x3
// 004f4248: MOV word ptr [ESI + 0x2d0101e],AX
//   XREF to: 02d01020 (WRITE)
// 004f424f: CMP ESI,0x200
// 004f4255: JNZ 0x004f41d8
//   XREF to: 004f41d8 (CONDITIONAL_JUMP)
// 004f4257: MOV EAX,0xff
// 004f425c: MOV CL,byte ptr [0x02d01f2c]
//   XREF to: 02d01f2c (READ)
// 004f4262: SHR EAX,CL
// 004f4264: MOV ECX,dword ptr [0x02d01f24]
//   XREF to: 02d01f24 (READ)
// 004f426a: MOV EBX,EAX
// 004f426c: SHL EBX,CL
// 004f426e: MOV CL,byte ptr [0x02d01f38]
//   XREF to: 02d01f38 (READ)
// 004f4274: MOV dword ptr [0x00682748],EBX
//   XREF to: 00682748 (WRITE)
// 004f427a: MOV EBX,0xff
// 004f427f: SHR EBX,CL
// 004f4281: MOV ECX,dword ptr [0x02d01f30]
//   XREF to: 02d01f30 (READ)
// 004f4287: MOV ESI,EBX
// 004f4289: SHL ESI,CL
// 004f428b: MOV CL,byte ptr [0x02d01f44]
//   XREF to: 02d01f44 (READ)
// 004f4291: MOV dword ptr [0x00682750],ESI
//   XREF to: 00682750 (WRITE)
// 004f4297: MOV ESI,0xff
// 004f429c: SHR ESI,CL
// 004f429e: MOV ECX,dword ptr [0x02d01f3c]
//   XREF to: 02d01f3c (READ)
// 004f42a4: MOV EDI,ESI
// 004f42a6: SHL EDI,CL
// 004f42a8: MOV CL,byte ptr [0x02d01f2c]
//   XREF to: 02d01f2c (READ)
// 004f42ae: MOV dword ptr [0x00682758],EDI
//   XREF to: 00682758 (WRITE)
// 004f42b4: SHL EAX,CL
// 004f42b6: MOV CL,byte ptr [0x02d01f38]
//   XREF to: 02d01f38 (READ)
// 004f42bc: SHL EAX,0x10
// 004f42bf: SHL EBX,CL
// 004f42c1: MOV [0x00682760],EAX
//   XREF to: 00682760 (WRITE)
// 004f42c6: SHL EBX,0x8
// 004f42c9: MOV EAX,[0x02d01f2c]
//   XREF to: 02d01f2c (READ)
// 004f42ce: MOV dword ptr [0x00682780],EBX
//   XREF to: 00682780 (WRITE)
// 004f42d4: MOV EBX,dword ptr [0x02d01f38]
//   XREF to: 02d01f38 (READ)
// 004f42da: MOV ECX,dword ptr [0x02d01f44]
//   XREF to: 02d01f44 (READ)
// 004f42e0: ADD EAX,EBX
// 004f42e2: MOV dword ptr [0x006827e8],ECX
//   XREF to: 006827e8 (WRITE)
// 004f42e8: ADD EAX,ECX
// 004f42ea: SHL ESI,CL
// 004f42ec: MOV [0x006827a8],EAX
//   XREF to: 006827a8 (WRITE)
// 004f42f1: LEA EAX,[EBX + ECX*0x1]
// 004f42f4: MOV dword ptr [0x006827a0],ESI
//   XREF to: 006827a0 (WRITE)
// 004f42fa: MOV [0x006827c8],EAX
//   XREF to: 006827c8 (WRITE)
// 004f42ff: CMP dword ptr [0x0067939c],0x20
//   Label: LAB_004f42ff
//   XREF to: 0067939c (READ)
// 004f4306: JNZ 0x004f435d
//   XREF to: 004f435d (CONDITIONAL_JUMP)
// 004f4308: MOV EDX,dword ptr [0x0067939c]
//   XREF to: 0067939c (READ)
// 004f430e: XOR EAX,EAX
// 004f4310: XOR EBX,EBX
// 004f4312: MOVZX EDI,byte ptr [EBX + 0x2d01f49]
//   Label: LAB_004f4312
//   XREF to: 02d01f49 (READ)
//   XREF to: 02d01f4c (READ)
// 004f4319: MOVZX ESI,byte ptr [EBX + 0x2d01f4a]
//   XREF to: 02d01f4a (READ)
//   XREF to: 02d01f4d (READ)
// 004f4320: MOVZX EBP,byte ptr [EBX + 0x2d01f48]
//   XREF to: 02d01f48 (READ)
//   XREF to: 02d01f4b (READ)
// 004f4327: CMP EDX,0x20
// 004f432a: JNZ 0x004f4365
//   XREF to: 004f4365 (CONDITIONAL_JUMP)
// 004f432c: MOV CL,byte ptr [0x02d01f24]
//   XREF to: 02d01f24 (READ)
// 004f4332: SHL EBP,CL
// 004f4334: MOV CL,byte ptr [0x02d01f30]
//   XREF to: 02d01f30 (READ)
// 004f433a: SHL EDI,CL
// 004f433c: MOV CL,byte ptr [0x02d01f3c]
//   XREF to: 02d01f3c (READ)
// 004f4342: SHL ESI,CL
// 004f4344: OR EDI,EBP
// 004f4346: MOV ECX,ESI
// 004f4348: OR ECX,EDI
// 004f434a: ADD EAX,0x4
//   Label: LAB_004f434a
// 004f434d: ADD EBX,0x3
// 004f4350: MOV dword ptr [EAX + 0x2d0121c],ECX
//   XREF to: 02d01220 (WRITE)
//   XREF to: 02d01224 (WRITE)
// 004f4356: CMP EAX,0x400
// 004f435b: JNZ 0x004f4312
//   XREF to: 004f4312 (CONDITIONAL_JUMP)
// 004f435d: ADD ESP,0x8
//   Label: LAB_004f435d
// 004f4360: POP EBP
// 004f4361: POP EDI
// 004f4362: POP ESI
// 004f4363: POP EBX
// 004f4364: RET
// 004f4365: MOV ECX,EBP
//   Label: LAB_004f4365
// 004f4367: SHL EDI,0x8
// 004f436a: SHL ECX,0x10
// 004f436d: OR ECX,EDI
// 004f436f: OR ECX,ESI
// 004f4371: JMP 0x004f434a
//   XREF to: 004f434a (UNCONDITIONAL_JUMP)
