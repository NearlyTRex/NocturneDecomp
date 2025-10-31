// Name: core_dcamera.cpp_CDemonCamera_uploadBackdropTexture_FUN_0044f310
// Address: 0044f310
// Address Range: [[0044f310, 0044f3de]]
// Convention: __cdecl
// Signature: void core_dcamera.cpp_CDemonCamera_uploadBackdropTexture_FUN_0044f310(CDemonCamera * this_ptr)
// Globals:
//   SMRGLTextureBasic g_CameraBackdropTexture
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   SRGBColorPalette g_CameraImagePaletteData
//   undefined4 DAT_00c196fc
//   undefined4 DAT_00c196fd
//   char[307200] g_CameraIndexedImageData
//   uint[16384] g_CameraTextureWorkBuffer
//   undefined4 DAT_01566fa8+1
//   undefined4 DAT_01566fac
//   undefined4 DAT_01566fad
//   CDemonRenderer g_CDemonRendererInstance
//   byte* g_CurrentPalette
//   void* g_CurrentTextureData
// Function calls:
//   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   engine_drender.cpp_CDemonRenderer_updateTexture_FUN_0048dc30

#include "nocturne.h"

void __cdecl
core_dcamera_cpp_CDemonCamera_uploadBackdropTexture_FUN_0044f310(CDemonCamera *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  SRGBColorPalette *pSVar7;
  int iVar8;
  uint *puVar9;
  byte *pbVar10;
  byte bVar11;
  
  bVar11 = 0;
  iVar8 = 0;
  iVar5 = 0;
  do {
    iVar2 = 0;
    iVar4 = iVar5;
    do {
      iVar3 = iVar2 >> 0x1f;
      iVar1 = iVar2 + iVar3 * -0x100;
      iVar2 = iVar2 + 0x280;
      *(char *)((int)g_CameraTextureWorkBuffer + iVar4) =
           g_CameraIndexedImageData
           [((int)(iVar1 - (uint)(iVar3 << 7 < 0)) >> 8) +
            ((int)((iVar8 + (iVar8 >> 0x1f) * -0x100) - (uint)((iVar8 >> 0x1f) << 7 < 0)) >> 8) *
            0x280];
      iVar4 = iVar4 + 1;
    } while (iVar2 != 0x28000);
    iVar5 = iVar5 + 0x100;
    iVar8 = iVar8 + 0x1e0;
  } while (iVar5 != 0x10000);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
            (g_CDemonRendererPtr,&g_CameraBackdropTexture);
  puVar6 = g_CameraTextureWorkBuffer;
  puVar9 = (uint *)g_CurrentTextureData;
  for (iVar5 = 0x4000; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar9 = *puVar6;
    puVar6 = puVar6 + (uint)bVar11 * -2 + 1;
    puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
  }
  for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(char *)puVar9 = (char)*puVar6;
    puVar6 = (uint *)((int)puVar6 + (uint)bVar11 * -2 + 1);
    puVar9 = (uint *)((int)puVar9 + (uint)bVar11 * -2 + 1);
  }
  pSVar7 = &g_CameraImagePaletteData;
  pbVar10 = g_CurrentPalette;
  for (iVar5 = 0xc0; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(undefined4 *)pbVar10 = *(undefined4 *)pSVar7->colors;
    pSVar7 = (SRGBColorPalette *)((int)pSVar7 + (uint)bVar11 * -8 + 4);
    pbVar10 = pbVar10 + (uint)bVar11 * -8 + 4;
  }
  for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
    *pbVar10 = pSVar7->colors[0].r;
    pSVar7 = (SRGBColorPalette *)((int)pSVar7 + (uint)bVar11 * -2 + 1);
    pbVar10 = pbVar10 + (uint)bVar11 * -2 + 1;
  }
  engine_drender_cpp_CDemonRenderer_updateTexture_FUN_0048dc30
            (g_CDemonRendererPtr,&g_CameraBackdropTexture,&g_CameraImagePaletteData);
  return;
}


// Assembly code:
// 0044f310: PUSH EBX
//   Label: core_dcamera.cpp_CDemonCamera_uploadBackdropTexture_FUN_0044f310
// 0044f311: PUSH ESI
// 0044f312: PUSH EDI
// 0044f313: PUSH EBP
// 0044f314: XOR EDI,EDI
// 0044f316: XOR EBP,EBP
// 0044f318: MOV EDX,EDI
//   Label: LAB_0044f318
// 0044f31a: MOV EAX,EDI
// 0044f31c: SAR EDX,0x1f
// 0044f31f: SHL EDX,0x8
// 0044f322: SBB EAX,EDX
// 0044f324: SAR EAX,0x8
// 0044f327: MOV EBX,EBP
// 0044f329: XOR ECX,ECX
// 0044f32b: IMUL ESI,EAX,0x280
// 0044f331: MOV EDX,ECX
//   Label: LAB_0044f331
// 0044f333: MOV EAX,ECX
// 0044f335: SAR EDX,0x1f
// 0044f338: SHL EDX,0x8
// 0044f33b: SBB EAX,EDX
// 0044f33d: SAR EAX,0x8
// 0044f340: INC EBX
// 0044f341: MOV AL,byte ptr [ESI + EAX*0x1 + 0x151bfa8]
//   XREF to: 0151bfa8 (DATA)
// 0044f348: ADD ECX,0x280
// 0044f34e: MOV byte ptr [EBX + 0x1566fa7],AL
//   XREF to: 01566fa8 (WRITE)
//   XREF to: 01566fa9 (WRITE)
// 0044f354: CMP ECX,0x28000
// 0044f35a: JNZ 0x0044f331
//   XREF to: 0044f331 (CONDITIONAL_JUMP)
// 0044f35c: ADD EBP,0x100
// 0044f362: ADD EDI,0x1e0
// 0044f368: CMP EBP,0x10000
// 0044f36e: JNZ 0x0044f318
//   XREF to: 0044f318 (CONDITIONAL_JUMP)
// 0044f370: PUSH 0x66ed50
//   XREF to: 0066ed50 (DATA)
// 0044f375: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 0044f37b: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 0044f37c: MOV ESI,0x1566fa8
//   XREF to: 01566fa8 (DATA)
// 0044f381: CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   XREF to: 0048db80 (UNCONDITIONAL_CALL)
// 0044f386: ADD ESP,0x8
// 0044f389: MOV EDI,dword ptr [0x02d03e80]
//   XREF to: 02d03e80 (READ)
// 0044f38f: MOV ECX,EBP
// 0044f391: PUSH EDI
// 0044f392: MOV EAX,ECX
// 0044f394: SHR ECX,0x2
// 0044f397: MOVSD.REP ES:EDI,ESI
//   XREF to: 01566fa8 (READ)
//   XREF to: 01566fac (READ)
// 0044f399: MOV CL,AL
// 0044f39b: AND CL,0x3
// 0044f39e: MOVSB.REP ES:EDI,ESI
//   XREF to: 01566fac (READ)
//   XREF to: 01566fad (READ)
// 0044f3a0: POP EDI
// 0044f3a1: MOV ECX,0x300
// 0044f3a6: MOV ESI,0xc196f8
//   XREF to: 00c196f8 (DATA)
// 0044f3ab: MOV EDI,dword ptr [0x02d01920]
//   XREF to: 02d01920 (READ)
// 0044f3b1: PUSH EDI
// 0044f3b2: MOV EAX,ECX
// 0044f3b4: SHR ECX,0x2
// 0044f3b7: MOVSD.REP ES:EDI,ESI
//   XREF to: 00c196f8 (READ)
//   XREF to: 00c196fc (READ)
// 0044f3b9: MOV CL,AL
// 0044f3bb: AND CL,0x3
// 0044f3be: MOVSB.REP ES:EDI,ESI
//   XREF to: 00c196fc (READ)
//   XREF to: 00c196fd (READ)
// 0044f3c0: POP EDI
// 0044f3c1: PUSH 0xc196f8
//   XREF to: 00c196f8 (DATA)
// 0044f3c6: PUSH 0x66ed50
//   XREF to: 0066ed50 (DATA)
// 0044f3cb: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 0044f3d1: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 0044f3d2: CALL engine_drender.cpp_CDemonRenderer_updateTexture_FUN_0048dc30
//   XREF to: 0048dc30 (UNCONDITIONAL_CALL)
// 0044f3d7: ADD ESP,0xc
// 0044f3da: POP EBP
// 0044f3db: POP EDI
// 0044f3dc: POP ESI
// 0044f3dd: POP EBX
// 0044f3de: RET
