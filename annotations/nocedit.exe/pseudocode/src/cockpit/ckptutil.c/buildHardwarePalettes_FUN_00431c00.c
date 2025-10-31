// Name: cockpit_ckptutil.c_buildHardwarePalettes_FUN_00431c00
// Address: 00431c00
// Address Range: [[00431c00, 00431cf9]]
// Convention: __cdecl
// Signature: void cockpit_ckptutil.c_buildHardwarePalettes_FUN_00431c00(char * rgb_palette_data)
// Globals:
//   int g_BitsPerPixel = 0x8
//   byte* g_CurrentPalette
//   uint[256] g_Hardware32BitPalette
//   undefined4 g_GlobalPalette[1]
//   ushort[256] g_Hardware16BitPalette
//   int g_RedBitPosition
//   int g_RedScaleFactor
//   int g_GreenBitPosition
//   int g_GreenScaleFactor
//   int g_BlueBitPosition
//   int g_BlueScaleFactor

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x00431c6d) */

void __cdecl cockpit_ckptutil_c_buildHardwarePalettes_FUN_00431c00(char *rgb_palette_data)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  
  g_CurrentPalette = (byte *)rgb_palette_data;
  if (g_BitsPerPixel != 0x20) {
    iVar4 = 0;
    do {
      bVar3 = *rgb_palette_data;
      pbVar1 = (byte *)rgb_palette_data + 1;
      pbVar2 = (byte *)rgb_palette_data + 2;
      iVar5 = iVar4 + 2;
      rgb_palette_data = (char *)((byte *)rgb_palette_data + 3);
      *(ushort *)((int)g_Hardware16BitPalette + iVar4) =
           (ushort)((uint)*pbVar1 / (uint)g_GreenScaleFactor << ((byte)g_GreenBitPosition & 0x1f)) |
           (ushort)((uint)bVar3 / (uint)g_RedScaleFactor << ((byte)g_RedBitPosition & 0x1f)) |
           (ushort)((uint)*pbVar2 / (uint)g_BlueScaleFactor << ((byte)g_BlueBitPosition & 0x1f));
      iVar4 = iVar5;
    } while (iVar5 != 0x200);
    return;
  }
  iVar4 = 0;
  do {
    pbVar1 = (byte *)rgb_palette_data + 1;
    bVar3 = *rgb_palette_data;
    pbVar2 = (byte *)rgb_palette_data + 2;
    iVar5 = iVar4 + 4;
    rgb_palette_data = (char *)((byte *)rgb_palette_data + 3);
    *(uint *)((int)g_Hardware32BitPalette + iVar4) =
         (uint)*pbVar2 << ((byte)g_BlueBitPosition & 0x1f) |
         (uint)bVar3 << ((byte)g_RedBitPosition & 0x1f) |
         (uint)*pbVar1 << ((byte)g_GreenBitPosition & 0x1f);
    iVar4 = iVar5;
  } while (iVar5 != 0x400);
  return;
}


// Assembly code:
// 00431c00: PUSH EBX
//   Label: cockpit_ckptutil.c_buildHardwarePalettes_FUN_00431c00
// 00431c01: PUSH ESI
// 00431c02: PUSH EDI
// 00431c03: PUSH EBP
// 00431c04: SUB ESP,0x8
// 00431c07: MOV EBX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 00431c0b: MOV EDX,dword ptr [0x0067939c]
//   XREF to: 0067939c (READ)
// 00431c11: MOV dword ptr [0x02d01920],EBX
//   XREF to: 02d01920 (WRITE)
// 00431c17: CMP EDX,0x20
// 00431c1a: JNZ 0x00431c7b
//   XREF to: 00431c7b (CONDITIONAL_JUMP)
// 00431c1c: MOV EDX,dword ptr [0x0067939c]
//   XREF to: 0067939c (READ)
// 00431c22: XOR EAX,EAX
// 00431c24: MOVZX EBP,byte ptr [EBX + 0x1]
//   Label: LAB_00431c24
// 00431c28: MOVZX EDI,byte ptr [EBX]
// 00431c2b: MOVZX ESI,byte ptr [EBX + 0x2]
// 00431c2f: CMP EDX,0x20
// 00431c32: JNZ 0x00431c6d
//   XREF to: 00431c6d (CONDITIONAL_JUMP)
// 00431c34: MOV CL,byte ptr [0x02d01f24]
//   XREF to: 02d01f24 (READ)
// 00431c3a: SHL EDI,CL
// 00431c3c: MOV CL,byte ptr [0x02d01f30]
//   XREF to: 02d01f30 (READ)
// 00431c42: SHL EBP,CL
// 00431c44: MOV CL,byte ptr [0x02d01f3c]
//   XREF to: 02d01f3c (READ)
// 00431c4a: SHL ESI,CL
// 00431c4c: OR EDI,EBP
// 00431c4e: MOV ECX,ESI
// 00431c50: OR ECX,EDI
// 00431c52: ADD EAX,0x4
//   Label: LAB_00431c52
// 00431c55: ADD EBX,0x3
// 00431c58: MOV dword ptr [EAX + 0x2d01920],ECX
//   XREF to: 02d01924 (WRITE)
//   XREF to: 02d01928 (WRITE)
// 00431c5e: CMP EAX,0x400
// 00431c63: JNZ 0x00431c24
//   XREF to: 00431c24 (CONDITIONAL_JUMP)
// 00431c65: ADD ESP,0x8
// 00431c68: POP EBP
// 00431c69: POP EDI
// 00431c6a: POP ESI
// 00431c6b: POP EBX
// 00431c6c: RET
// 00431c6d: MOV ECX,EBP
//   Label: LAB_00431c6d
// 00431c6f: SHL EDI,0x10
// 00431c72: SHL ECX,0x8
// 00431c75: OR ECX,EDI
// 00431c77: OR ECX,ESI
// 00431c79: JMP 0x00431c52
//   XREF to: 00431c52 (UNCONDITIONAL_JUMP)
// 00431c7b: XOR ESI,ESI
//   Label: LAB_00431c7b
// 00431c7d: XOR EAX,EAX
//   Label: LAB_00431c7d
// 00431c7f: MOV EDI,dword ptr [0x02d01f28]
//   XREF to: 02d01f28 (READ)
// 00431c85: MOV AL,byte ptr [EBX]
// 00431c87: XOR EDX,EDX
// 00431c89: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x18] (DATA)
// 00431c8c: DIV EDI
// 00431c8e: XOR ECX,ECX
// 00431c90: MOV CL,byte ptr [EBX + 0x1]
// 00431c93: MOV dword ptr [ESP + 0x4],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 00431c97: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x18] (DATA)
// 00431c9a: XOR EDX,EDX
// 00431c9c: MOV EAX,ECX
// 00431c9e: DIV dword ptr [0x02d01f34]
//   XREF to: 02d01f34 (READ)
// 00431ca4: MOVZX EBP,byte ptr [EBX + 0x2]
// 00431ca8: MOV EDI,dword ptr [0x02d01f40]
//   XREF to: 02d01f40 (READ)
// 00431cae: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00431cb2: XOR EDX,EDX
// 00431cb4: MOV EAX,EBP
// 00431cb6: DIV EDI
// 00431cb8: MOV CL,byte ptr [0x02d01f24]
//   XREF to: 02d01f24 (READ)
// 00431cbe: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 00431cc1: MOV EDI,EAX
// 00431cc3: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x14] (READ)
// 00431cc7: SHL EDX,CL
// 00431cc9: MOV CL,byte ptr [0x02d01f30]
//   XREF to: 02d01f30 (READ)
// 00431ccf: SHL EAX,CL
// 00431cd1: MOV CL,byte ptr [0x02d01f3c]
//   XREF to: 02d01f3c (READ)
// 00431cd7: OR EAX,EDX
// 00431cd9: SHL EDI,CL
// 00431cdb: ADD ESI,0x2
// 00431cde: OR EAX,EDI
// 00431ce0: ADD EBX,0x3
// 00431ce3: MOV word ptr [ESI + 0x2d01d22],AX
//   XREF to: 02d01d24 (WRITE)
// 00431cea: CMP ESI,0x200
// 00431cf0: JNZ 0x00431c7d
//   XREF to: 00431c7d (CONDITIONAL_JUMP)
// 00431cf2: ADD ESP,0x8
// 00431cf5: POP EBP
// 00431cf6: POP EDI
// 00431cf7: POP ESI
// 00431cf8: POP EBX
// 00431cf9: RET
