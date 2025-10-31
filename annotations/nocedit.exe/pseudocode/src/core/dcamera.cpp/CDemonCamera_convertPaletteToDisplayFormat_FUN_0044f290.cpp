// Name: core_dcamera.cpp_CDemonCamera_convertPaletteToDisplayFormat_FUN_0044f290
// Address: 0044f290
// Address Range: [[0044f290, 0044f303]]
// Convention: __cdecl
// Signature: void core_dcamera.cpp_CDemonCamera_convertPaletteToDisplayFormat_FUN_0044f290(CDemonCamera * this_ptr)
// Globals:
//   int g_BitsPerPixel = 0x8
//   SRGBColorPalette g_CameraImagePaletteData
//   undefined4 DAT_00c196f9
//   undefined4 DAT_00c196fa
//   undefined4 DAT_00c196fb
//   undefined4 DAT_00c196fc
//   undefined4 DAT_00c196fd
//   uint[256] g_CameraConvertedPalette
//   undefined4 DAT_00c19a00
//   int g_RedBitPosition
//   int g_GreenBitPosition
//   int g_BlueBitPosition

#include "nocturne.h"

void __cdecl
core_dcamera_cpp_CDemonCamera_convertPaletteToDisplayFormat_FUN_0044f290(CDemonCamera *this_ptr)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  iVar1 = 0;
  iVar3 = 0;
  do {
    uVar5 = (uint)(&g_CameraImagePaletteData.colors[0].g)[iVar1];
    uVar6 = (uint)(&g_CameraImagePaletteData.colors[0].r)[iVar1];
    uVar2 = (uint)(&g_CameraImagePaletteData.colors[0].b)[iVar1];
    if (g_BitsPerPixel == 0x20) {
      uVar2 = uVar2 << ((byte)g_BlueBitPosition & 0x1f) |
              uVar6 << ((byte)g_RedBitPosition & 0x1f) | uVar5 << ((byte)g_GreenBitPosition & 0x1f);
    }
    else {
      uVar2 = uVar6 << 0x10 | uVar5 << 8 | uVar2;
    }
    iVar4 = iVar3 + 4;
    iVar1 = iVar1 + 3;
    *(uint *)((int)g_CameraConvertedPalette + iVar3) = uVar2;
    iVar3 = iVar4;
  } while (iVar4 != 0x400);
  return;
}


// Assembly code:
// 0044f290: PUSH EBX
//   Label: core_dcamera.cpp_CDemonCamera_convertPaletteToDisplayFormat_FUN_0044f290
// 0044f291: PUSH ESI
// 0044f292: PUSH EDI
// 0044f293: PUSH EBP
// 0044f294: MOV EBP,dword ptr [0x0067939c]
//   XREF to: 0067939c (READ)
// 0044f29a: XOR EDX,EDX
// 0044f29c: XOR EAX,EAX
// 0044f29e: MOVZX ESI,byte ptr [EAX + 0xc196f9]
//   Label: LAB_0044f29e
//   XREF to: 00c196f9 (READ)
//   XREF to: 00c196fc (READ)
// 0044f2a5: XOR EBX,EBX
// 0044f2a7: MOVZX EDI,byte ptr [EAX + 0xc196f8]
//   XREF to: 00c196f8 (READ)
//   XREF to: 00c196fb (READ)
// 0044f2ae: MOV BL,byte ptr [EAX + 0xc196fa]
//   XREF to: 00c196fa (READ)
//   XREF to: 00c196fd (READ)
// 0044f2b4: CMP EBP,0x20
// 0044f2b7: JNZ 0x0044f2f6
//   XREF to: 0044f2f6 (CONDITIONAL_JUMP)
// 0044f2b9: MOV CL,byte ptr [0x02d01f24]
//   XREF to: 02d01f24 (READ)
// 0044f2bf: SHL EDI,CL
// 0044f2c1: MOV CL,byte ptr [0x02d01f30]
//   XREF to: 02d01f30 (READ)
// 0044f2c7: SHL ESI,CL
// 0044f2c9: MOV CL,byte ptr [0x02d01f3c]
//   XREF to: 02d01f3c (READ)
// 0044f2cf: SHL EBX,CL
// 0044f2d1: OR EDI,ESI
// 0044f2d3: MOV ECX,EBX
// 0044f2d5: OR ECX,EDI
// 0044f2d7: ADD EDX,0x4
//   Label: LAB_0044f2d7
// 0044f2da: ADD EAX,0x3
// 0044f2dd: MOV dword ptr [EDX + 0xc199f8],ECX
//   XREF to: 00c199fc (WRITE)
//   XREF to: 00c19a00 (WRITE)
// 0044f2e3: CMP EDX,0x400
// 0044f2e9: JNZ 0x0044f29e
//   XREF to: 0044f29e (CONDITIONAL_JUMP)
// 0044f2eb: MOV dword ptr [0x0067939c],EBP
//   XREF to: 0067939c (WRITE)
// 0044f2f1: POP EBP
// 0044f2f2: POP EDI
// 0044f2f3: POP ESI
// 0044f2f4: POP EBX
// 0044f2f5: RET
// 0044f2f6: MOV ECX,EDI
//   Label: LAB_0044f2f6
// 0044f2f8: SHL ESI,0x8
// 0044f2fb: SHL ECX,0x10
// 0044f2fe: OR ECX,ESI
// 0044f300: OR ECX,EBX
// 0044f302: JMP 0x0044f2d7
//   XREF to: 0044f2d7 (UNCONDITIONAL_JUMP)
