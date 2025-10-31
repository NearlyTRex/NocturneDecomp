// Name: wincore_wddvmem.cpp_initializeColorMasks_FUN_004f3ff0
// Address: 004f3ff0
// Address Range: [[004f3ff0, 004f4130]]
// Convention: __cdecl
// Signature: ulonglong wincore_wddvmem.cpp_initializeColorMasks_FUN_004f3ff0(void)
// Globals:
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

ulonglong __cdecl wincore_wddvmem_cpp_initializeColorMasks_FUN_004f3ff0(void)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  
  iVar5 = 0;
  iVar7 = 0;
  do {
    pbVar1 = (byte *)(g_SourcePaletteData + iVar5);
    iVar2 = iVar5 + 1;
    iVar3 = iVar5 + 2;
    iVar8 = iVar7 + 2;
    iVar5 = iVar5 + 3;
    *(ushort *)((int)g_ColorTable16 + iVar7) =
         (ushort)((uint)(byte)g_SourcePaletteData[iVar3] / (uint)g_BlueScaleFactor <<
                 ((byte)g_BlueBitPosition & 0x1f)) |
         (ushort)((uint)(byte)g_SourcePaletteData[iVar2] / (uint)g_GreenScaleFactor <<
                 ((byte)g_GreenBitPosition & 0x1f)) |
         (ushort)((uint)*pbVar1 / (uint)g_RedScaleFactor << ((byte)g_RedBitPosition & 0x1f));
    iVar7 = iVar8;
  } while (iVar8 != 0x200);
  uVar9 = 0xff >> ((byte)g_RedBitCount & 0x1f);
  g_RedMask16 = uVar9 << ((byte)g_RedBitPosition & 0x1f);
  uVar6 = 0xff >> ((byte)g_GreenBitCount & 0x1f);
  g_GreenMask16 = uVar6 << ((byte)g_GreenBitPosition & 0x1f);
  uVar4 = 0xff >> ((byte)g_BlueBitCount & 0x1f);
  g_BlueMask16 = uVar4 << ((byte)g_BlueBitPosition & 0x1f);
  g_BlueMask32._0_4_ = uVar4 << ((byte)g_BlueBitCount & 0x1f);
  g_RedMask32._0_4_ = (uVar9 << ((byte)g_RedBitCount & 0x1f)) << 0x10;
  g_GreenMask32._0_4_ = (uVar6 << ((byte)g_GreenBitCount & 0x1f)) << 8;
  g_TotalColorBits._0_4_ = g_RedBitCount + g_GreenBitCount + g_BlueBitCount;
  g_BlueBitShift._0_4_ = g_BlueBitCount;
  g_GreenBlueBits._0_4_ = g_GreenBitCount + g_BlueBitCount;
  return CONCAT44(g_GreenBitCount,g_GreenBitCount + g_BlueBitCount);
}


// Assembly code:
// 004f3ff0: PUSH EBX
//   Label: wincore_wddvmem.cpp_initializeColorMasks_FUN_004f3ff0
// 004f3ff1: PUSH ESI
// 004f3ff2: PUSH EDI
// 004f3ff3: PUSH EBP
// 004f3ff4: SUB ESP,0x8
// 004f3ff7: XOR EBX,EBX
// 004f3ff9: XOR ESI,ESI
// 004f3ffb: XOR EAX,EAX
//   Label: LAB_004f3ffb
// 004f3ffd: MOV EDI,dword ptr [0x02d01f28]
//   XREF to: 02d01f28 (READ)
// 004f4003: MOV AL,byte ptr [EBX + 0x2d01f48]
//   XREF to: 02d01f48 (READ)
//   XREF to: 02d01f4b (READ)
// 004f4009: XOR EDX,EDX
// 004f400b: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x18] (DATA)
// 004f400e: DIV EDI
// 004f4010: XOR ECX,ECX
// 004f4012: MOV CL,byte ptr [EBX + 0x2d01f49]
//   XREF to: 02d01f49 (READ)
//   XREF to: 02d01f4c (READ)
// 004f4018: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x18] (DATA)
// 004f401b: XOR EDX,EDX
// 004f401d: MOV EAX,ECX
// 004f401f: DIV dword ptr [0x02d01f34]
//   XREF to: 02d01f34 (READ)
// 004f4025: MOVZX EBP,byte ptr [EBX + 0x2d01f4a]
//   XREF to: 02d01f4a (READ)
//   XREF to: 02d01f4d (READ)
// 004f402c: MOV dword ptr [ESP + 0x4],EBP
//   XREF to: Stack[-0x14] (WRITE)
// 004f4030: MOV EDI,EAX
// 004f4032: XOR EDX,EDX
// 004f4034: MOV EAX,EBP
// 004f4036: DIV dword ptr [0x02d01f40]
//   XREF to: 02d01f40 (READ)
// 004f403c: MOV CL,byte ptr [0x02d01f24]
//   XREF to: 02d01f24 (READ)
// 004f4042: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004f4046: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 004f4049: SHL EAX,CL
// 004f404b: MOV CL,byte ptr [0x02d01f30]
//   XREF to: 02d01f30 (READ)
// 004f4051: SHL EDI,CL
// 004f4053: MOV CL,byte ptr [0x02d01f3c]
//   XREF to: 02d01f3c (READ)
// 004f4059: OR EDI,EAX
// 004f405b: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x14] (READ)
// 004f405f: SHL EAX,CL
// 004f4061: ADD ESI,0x2
// 004f4064: OR EAX,EDI
// 004f4066: ADD EBX,0x3
// 004f4069: MOV word ptr [ESI + 0x2d0101e],AX
//   XREF to: 02d01020 (WRITE)
// 004f4070: CMP ESI,0x200
// 004f4076: JNZ 0x004f3ffb
//   XREF to: 004f3ffb (CONDITIONAL_JUMP)
// 004f4078: MOV ESI,0xff
// 004f407d: MOV CL,byte ptr [0x02d01f2c]
//   XREF to: 02d01f2c (READ)
// 004f4083: SHR ESI,CL
// 004f4085: MOV ECX,dword ptr [0x02d01f24]
//   XREF to: 02d01f24 (READ)
// 004f408b: MOV EAX,ESI
// 004f408d: MOV EBX,0xff
// 004f4092: SHL EAX,CL
// 004f4094: MOV CL,byte ptr [0x02d01f38]
//   XREF to: 02d01f38 (READ)
// 004f409a: MOV [0x00682748],EAX
//   XREF to: 00682748 (WRITE)
// 004f409f: SHR EBX,CL
// 004f40a1: MOV ECX,dword ptr [0x02d01f30]
//   XREF to: 02d01f30 (READ)
// 004f40a7: MOV EAX,EBX
// 004f40a9: SHL EAX,CL
// 004f40ab: MOV CL,byte ptr [0x02d01f44]
//   XREF to: 02d01f44 (READ)
// 004f40b1: MOV [0x00682750],EAX
//   XREF to: 00682750 (WRITE)
// 004f40b6: MOV EAX,0xff
// 004f40bb: SHR EAX,CL
// 004f40bd: MOV ECX,dword ptr [0x02d01f3c]
//   XREF to: 02d01f3c (READ)
// 004f40c3: MOV EDI,EAX
// 004f40c5: SHL EDI,CL
// 004f40c7: MOV CL,byte ptr [0x02d01f2c]
//   XREF to: 02d01f2c (READ)
// 004f40cd: SHL ESI,CL
// 004f40cf: MOV CL,byte ptr [0x02d01f38]
//   XREF to: 02d01f38 (READ)
// 004f40d5: MOV EDX,dword ptr [0x02d01f38]
//   XREF to: 02d01f38 (READ)
// 004f40db: SHL EBX,CL
// 004f40dd: MOV ECX,dword ptr [0x02d01f44]
//   XREF to: 02d01f44 (READ)
// 004f40e3: MOV dword ptr [0x00682758],EDI
//   XREF to: 00682758 (WRITE)
// 004f40e9: SHL EAX,CL
// 004f40eb: SHL ESI,0x10
// 004f40ee: MOV [0x006827a0],EAX
//   XREF to: 006827a0 (WRITE)
// 004f40f3: MOV EAX,[0x02d01f2c]
//   XREF to: 02d01f2c (READ)
// 004f40f8: MOV dword ptr [0x00682760],ESI
//   XREF to: 00682760 (WRITE)
// 004f40fe: ADD EAX,EDX
// 004f4100: SHL EBX,0x8
// 004f4103: ADD EAX,ECX
// 004f4105: MOV dword ptr [0x00682780],EBX
//   XREF to: 00682780 (WRITE)
// 004f410b: MOV [0x006827a8],EAX
//   XREF to: 006827a8 (WRITE)
// 004f4110: LEA EAX,[EDX + ECX*0x1]
// 004f4113: MOV dword ptr [0x006827e8],ECX
//   XREF to: 006827e8 (WRITE)
// 004f4119: MOV [0x006827c8],EAX
//   XREF to: 006827c8 (WRITE)
// 004f411e: ADD ESP,0x8
// 004f4121: POP EBP
// 004f4122: POP EDI
// 004f4123: POP ESI
// 004f4124: POP EBX
// 004f4125: LEA EAX,[EAX]
// 004f412b: LEA EDX,[EDX]
// 004f412e: MOV EBX,EBX
// 004f4130: RET
