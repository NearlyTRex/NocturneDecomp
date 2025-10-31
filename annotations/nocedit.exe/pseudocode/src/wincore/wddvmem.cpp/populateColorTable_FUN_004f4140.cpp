// Name: wincore_wddvmem.cpp_populateColorTable_FUN_004f4140
// Address: 004f4140
// Address Range: [[004f4140, 004f41be]]
// Convention: __cdecl
// Signature: ulonglong wincore_wddvmem.cpp_populateColorTable_FUN_004f4140(void)
// Globals:
//   int g_BitsPerPixel = 0x8
//   uint[256] g_ColorTable32
//   undefined4 g_ColorTable32[1]
//   int g_RedBitPosition
//   int g_GreenBitPosition
//   int g_BlueBitPosition
//   char[768] g_SourcePaletteData
//   undefined4 CHAR_ARRAY_02d01f49
//   undefined4 CHAR_ARRAY_02d01f4a
//   undefined4 CHAR_ARRAY_02d01f4b
//   undefined4 CHAR_ARRAY_02d01f4c
//   undefined4 CHAR_ARRAY_02d01f4d

#include "nocturne.h"

ulonglong __cdecl wincore_wddvmem_cpp_populateColorTable_FUN_004f4140(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = 0;
  iVar3 = 0;
  do {
    if (g_BitsPerPixel == 0x20) {
      uVar2 = (uint)(byte)g_SourcePaletteData[iVar1 + 2] << ((byte)g_BlueBitPosition & 0x1f) |
              (uint)(byte)g_SourcePaletteData[iVar1] << ((byte)g_RedBitPosition & 0x1f) |
              (uint)(byte)g_SourcePaletteData[iVar1 + 1] << ((byte)g_GreenBitPosition & 0x1f);
    }
    else {
      uVar2 = (uint)(byte)g_SourcePaletteData[iVar1] << 0x10 |
              (uint)(byte)g_SourcePaletteData[iVar1 + 1] << 8 |
              (uint)(byte)g_SourcePaletteData[iVar1 + 2];
    }
    iVar4 = iVar3 + 4;
    iVar1 = iVar1 + 3;
    *(uint *)((int)g_ColorTable32 + iVar3) = uVar2;
    iVar3 = iVar4;
  } while (iVar4 != 0x400);
  return CONCAT44(0x400,iVar1);
}


// Assembly code:
// 004f4140: PUSH EBX
//   Label: wincore_wddvmem.cpp_populateColorTable_FUN_004f4140
// 004f4141: PUSH ESI
// 004f4142: PUSH EDI
// 004f4143: PUSH EBP
// 004f4144: MOV EBP,dword ptr [0x0067939c]
//   XREF to: 0067939c (READ)
// 004f414a: XOR EDX,EDX
// 004f414c: XOR EAX,EAX
// 004f414e: MOVZX ESI,byte ptr [EAX + 0x2d01f49]
//   Label: LAB_004f414e
//   XREF to: 02d01f49 (READ)
//   XREF to: 02d01f4c (READ)
// 004f4155: XOR EBX,EBX
// 004f4157: MOVZX EDI,byte ptr [EAX + 0x2d01f48]
//   XREF to: 02d01f48 (READ)
//   XREF to: 02d01f4b (READ)
// 004f415e: MOV BL,byte ptr [EAX + 0x2d01f4a]
//   XREF to: 02d01f4a (READ)
//   XREF to: 02d01f4d (READ)
// 004f4164: CMP EBP,0x20
// 004f4167: JNZ 0x004f41b1
//   XREF to: 004f41b1 (CONDITIONAL_JUMP)
// 004f4169: MOV CL,byte ptr [0x02d01f24]
//   XREF to: 02d01f24 (READ)
// 004f416f: SHL EDI,CL
// 004f4171: MOV CL,byte ptr [0x02d01f30]
//   XREF to: 02d01f30 (READ)
// 004f4177: SHL ESI,CL
// 004f4179: MOV CL,byte ptr [0x02d01f3c]
//   XREF to: 02d01f3c (READ)
// 004f417f: SHL EBX,CL
// 004f4181: OR EDI,ESI
// 004f4183: MOV ECX,EBX
// 004f4185: OR ECX,EDI
// 004f4187: ADD EDX,0x4
//   Label: LAB_004f4187
// 004f418a: ADD EAX,0x3
// 004f418d: MOV dword ptr [EDX + 0x2d0121c],ECX
//   XREF to: 02d01220 (WRITE)
//   XREF to: 02d01224 (WRITE)
// 004f4193: CMP EDX,0x400
// 004f4199: JNZ 0x004f414e
//   XREF to: 004f414e (CONDITIONAL_JUMP)
// 004f419b: MOV dword ptr [0x0067939c],EBP
//   XREF to: 0067939c (WRITE)
// 004f41a1: POP EBP
// 004f41a2: POP EDI
// 004f41a3: POP ESI
// 004f41a4: POP EBX
// 004f41a5: LEA EAX,[EAX]
// 004f41ab: LEA EDX,[EDX]
// 004f41ae: MOV EBX,EBX
// 004f41b0: RET
// 004f41b1: MOV ECX,EDI
//   Label: LAB_004f41b1
// 004f41b3: SHL ESI,0x8
// 004f41b6: SHL ECX,0x10
// 004f41b9: OR ECX,ESI
// 004f41bb: OR ECX,EBX
// 004f41bd: JMP 0x004f4187
//   XREF to: 004f4187 (UNCONDITIONAL_JUMP)
