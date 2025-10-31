// Name: core_dcamera.cpp_renderVolumetricLightScanline_FUN_00450440
// Address: 00450440
// Address Range: [[00450440, 004505dc]]
// Convention: __cdecl
// Signature: void core_dcamera.cpp_renderVolumetricLightScanline_FUN_00450440(SEdgeData * left_edge, SEdgeData * right_edge, int scanline_y)
// Cross-references:
//   core_dlight.cpp_CDemonLight_renderExternalVolumetricShafts_FUN_004758d0 (004758d0) at 00475ee5 [DATA]
// Globals:
//   int g_BackdropSaveActive
//   int g_DitherPatternOffset
//   int[256] g_DitherPatternTable
//   undefined4 g_DitherPatternTable[1]
//   int g_CameraDownscaleIterations
//   SFogImagePlane g_CameraPlaneWorkBuffer
//   uint*[1024] g_ZBufferScanlineArray
//   int g_ClipLeft
//   int g_ClipTop

#include "nocturne.h"

void __cdecl
core_dcamera_cpp_renderVolumetricLightScanline_FUN_00450440
          (SEdgeData *left_edge,SEdgeData *right_edge,int scanline_y)

{
  int *piVar1;
  uint *puVar2;
  bool bVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  char *pcVar17;
  
  iVar8 = scanline_y;
  uVar7 = (int)left_edge - g_ClipTop;
  if (((g_CameraDownscaleIterations != 1) || ((uVar7 & 1) == 0)) &&
     ((g_CameraDownscaleIterations != 2 || ((uVar7 & 3) == 0)))) {
    iVar15 = (int)uVar7 >> ((byte)g_CameraDownscaleIterations & 0x1f);
    iVar13 = (right_edge->x_current >> 0x10) - g_ClipLeft >>
             ((byte)g_CameraDownscaleIterations & 0x1f);
    iVar16 = (*(int *)(scanline_y + 8) >> 0x10) - g_ClipLeft >>
             ((byte)g_CameraDownscaleIterations & 0x1f);
    iVar14 = iVar13;
    if (iVar16 < iVar13) {
      scanline_y = (int)right_edge;
      iVar14 = iVar16;
      iVar16 = iVar13;
      right_edge = (SEdgeData *)iVar8;
    }
    iVar8 = right_edge->z_current >> 0x1f;
    iVar5 = (int)((right_edge->z_current + iVar8 * -0x100) - (uint)(iVar8 << 7 < 0)) >> 8;
    iVar8 = *(int *)(scanline_y + 0x28);
    iVar9 = *(int *)(scanline_y + 0x28) >> 0x1f;
    iVar13 = right_edge->z_current;
    iVar10 = iVar13 >> 0x1f;
    iVar6 = (iVar16 - iVar14) + 1;
    iVar12 = right_edge->light_current;
    iVar11 = *(int *)(scanline_y + 0x10) - iVar12;
    bVar4 = (byte)g_CameraDownscaleIterations & 0x1f;
    puVar2 = g_ZBufferScanlineArray[iVar15 << ((byte)g_CameraDownscaleIterations & 0x1f)];
    pcVar17 = g_CameraPlaneWorkBuffer.pixels[iVar15] + iVar14;
    iVar16 = (iVar16 - iVar14) * 4;
    do {
      if (*(int *)((int)puVar2 + iVar16 + (iVar14 << bVar4) * 4) < iVar5) {
        piVar1 = (int *)((int)g_DitherPatternTable + g_DitherPatternOffset);
        g_DitherPatternOffset = g_DitherPatternOffset + 4U & 0x3fc;
        uVar7 = (uint)(byte)*pcVar17 * 0x100 + iVar12 + *piVar1 >> 8;
        if (0xfe < uVar7) {
          uVar7 = 0xff;
        }
        *pcVar17 = (byte)uVar7;
      }
      iVar12 = iVar12 + iVar11 / iVar6;
      iVar5 = iVar5 + (((int)((iVar8 + iVar9 * -0x100) - (uint)(iVar9 << 7 < 0)) >> 8) -
                      ((int)((iVar13 + iVar10 * -0x100) - (uint)(iVar10 << 7 < 0)) >> 8)) / iVar6;
      pcVar17 = pcVar17 + 1;
      iVar15 = iVar16 + -4;
      bVar3 = 3 < iVar16;
      iVar16 = iVar15;
    } while (iVar15 != 0 && bVar3);
    g_BackdropSaveActive = 1;
  }
  return;
}


// Assembly code:
// 00450440: PUSH EBX
//   Label: core_dcamera.cpp_renderVolumetricLightScanline_FUN_00450440
// 00450441: PUSH ESI
// 00450442: PUSH EDI
// 00450443: PUSH EBP
// 00450444: MOV EBP,ESP
// 00450446: SUB ESP,0x1c
// 00450449: MOV EDI,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0045044c: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0045044f: SUB EDX,dword ptr [0x02d0255c]
//   XREF to: 02d0255c (READ)
// 00450455: MOV ECX,dword ptr [0x013bc260]
//   XREF to: 013bc260 (READ)
// 0045045b: MOV dword ptr [EBP + 0x14],EDX
//   XREF to: Stack[0x4] (WRITE)
// 0045045e: CMP ECX,0x1
// 00450461: JNZ 0x0045046d
//   XREF to: 0045046d (CONDITIONAL_JUMP)
// 00450463: TEST byte ptr [EBP + 0x14],0x1
//   XREF to: Stack[0x4] (READ)
// 00450467: JNZ 0x004505d6
//   XREF to: 004505d6 (CONDITIONAL_JUMP)
// 0045046d: CMP dword ptr [0x013bc260],0x2
//   Label: LAB_0045046d
//   XREF to: 013bc260 (READ)
// 00450474: JNZ 0x00450480
//   XREF to: 00450480 (CONDITIONAL_JUMP)
// 00450476: TEST byte ptr [EBP + 0x14],0x3
//   XREF to: Stack[0x4] (READ)
// 0045047a: JNZ 0x004505d6
//   XREF to: 004505d6 (CONDITIONAL_JUMP)
// 00450480: MOV ESI,dword ptr [EBP + 0x14]
//   Label: LAB_00450480
//   XREF to: Stack[0x4] (READ)
// 00450483: MOV CL,byte ptr [0x013bc260]
//   XREF to: 013bc260 (READ)
// 00450489: SAR ESI,CL
// 0045048b: MOV dword ptr [EBP + 0x14],ESI
//   XREF to: Stack[0x4] (WRITE)
// 0045048e: MOV ESI,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 00450491: MOV EAX,[0x02d02558]
//   XREF to: 02d02558 (READ)
// 00450496: MOV EBX,dword ptr [EDI + 0x8]
// 00450499: MOV ESI,dword ptr [ESI + 0x8]
// 0045049c: SAR EBX,0x10
// 0045049f: SAR ESI,0x10
// 004504a2: SUB EBX,EAX
// 004504a4: SUB ESI,EAX
// 004504a6: SAR EBX,CL
// 004504a8: SAR ESI,CL
// 004504aa: CMP EBX,ESI
// 004504ac: JLE 0x004504bc
//   XREF to: 004504bc (CONDITIONAL_JUMP)
// 004504ae: MOV EAX,EBX
// 004504b0: MOV EBX,ESI
// 004504b2: MOV ESI,EAX
// 004504b4: MOV EAX,EDI
// 004504b6: MOV EDI,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 004504b9: MOV dword ptr [EBP + 0x1c],EAX
//   XREF to: Stack[0xc] (WRITE)
// 004504bc: MOV EAX,dword ptr [EDI + 0x28]
//   Label: LAB_004504bc
// 004504bf: MOV EDX,EAX
// 004504c1: SAR EDX,0x1f
// 004504c4: SHL EDX,0x8
// 004504c7: SBB EAX,EDX
// 004504c9: SAR EAX,0x8
// 004504cc: MOV dword ptr [EBP + -0x1c],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 004504cf: MOV EDX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 004504d2: MOV EAX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 004504d5: MOV EDX,dword ptr [EDX + 0x28]
// 004504d8: MOV EAX,dword ptr [EAX + 0x28]
// 004504db: SAR EDX,0x1f
// 004504de: SHL EDX,0x8
// 004504e1: SBB EAX,EDX
// 004504e3: SAR EAX,0x8
// 004504e6: MOV ECX,EAX
// 004504e8: MOV EAX,dword ptr [EDI + 0x28]
// 004504eb: MOV EDX,EAX
// 004504ed: SAR EDX,0x1f
// 004504f0: SHL EDX,0x8
// 004504f3: SBB EAX,EDX
// 004504f5: SAR EAX,0x8
// 004504f8: MOV EDX,ECX
// 004504fa: MOV ECX,ESI
// 004504fc: SUB EDX,EAX
// 004504fe: SUB ECX,EBX
// 00450500: MOV EAX,EDX
// 00450502: INC ECX
// 00450503: SAR EDX,0x1f
// 00450506: IDIV ECX
// 00450508: MOV dword ptr [EBP + -0x18],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 0045050b: MOV EAX,dword ptr [EDI + 0x10]
// 0045050e: MOV dword ptr [EBP + -0x14],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 00450511: MOV EDX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 00450514: MOV EDX,dword ptr [EDX + 0x10]
// 00450517: SUB EDX,EAX
// 00450519: MOV EAX,EDX
// 0045051b: SAR EDX,0x1f
// 0045051e: IDIV ECX
// 00450520: MOV dword ptr [EBP + -0x10],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 00450523: MOV CL,byte ptr [0x013bc260]
//   XREF to: 013bc260 (READ)
// 00450529: MOV EDX,EBX
// 0045052b: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0045052e: SHL EDX,CL
// 00450530: SHL EAX,CL
// 00450532: SHL EDX,0x2
// 00450535: MOV EAX,dword ptr [EAX*0x4 + 0x2cf7d5c]
//   XREF to: 02cf7d5c (DATA)
// 0045053c: ADD EAX,EDX
// 0045053e: MOV dword ptr [EBP + -0xc],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 00450541: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00450544: LEA EAX,[EDX*0x4 + 0x0]
// 0045054b: ADD EAX,EDX
// 0045054d: SHL EAX,0x6
// 00450550: ADD EAX,0x13da778
//   XREF to: 013da778 (DATA)
// 00450555: ADD EAX,EBX
// 00450557: MOV dword ptr [EBP + -0x8],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0045055a: SUB ESI,EBX
// 0045055c: MOV dword ptr [EBP + -0x4],ESI
//   XREF to: Stack[-0x14] (WRITE)
// 0045055f: MOV ECX,dword ptr [EBP + 0xfffffffc]
//   XREF to: Stack[-0x14] (READ)
// 00450565: SHL ECX,0x2
// 00450568: MOV ESI,dword ptr [EBP + 0xfffffff8]
//   XREF to: Stack[-0x18] (READ)
// 0045056e: MOV EDI,dword ptr [0x013bbe30]
//   XREF to: 013bbe30 (READ)
// 00450574: MOV EBX,dword ptr [EBP + 0xffffffe4]
//   XREF to: Stack[-0x2c] (READ)
// 0045057a: MOV EDX,dword ptr [EBP + 0xffffffec]
//   XREF to: Stack[-0x24] (READ)
// 00450580: MOV EAX,ECX
//   Label: LAB_00450580
// 00450582: ADD EAX,dword ptr [EBP + 0xfffffff4]
//   XREF to: Stack[-0x1c] (READ)
// 00450588: CMP EBX,dword ptr [EAX]
// 0045058a: JLE 0x004505b4
//   XREF to: 004505b4 (CONDITIONAL_JUMP)
// 0045058c: MOVZX EAX,byte ptr [ESI]
// 0045058f: SHL EAX,0x8
// 00450592: ADD EAX,EDX
// 00450594: ADD EAX,dword ptr [EDI + 0x13bbe34]
//   XREF to: 013bbe34 (DATA)
//   XREF to: 013bbe38 (DATA)
// 0045059a: ADD EDI,0x4
// 0045059d: AND EDI,0x3fc
// 004505a3: SHR EAX,0x8
// 004505a6: CMP EAX,0xff
// 004505ab: JC 0x004505b2
//   XREF to: 004505b2 (CONDITIONAL_JUMP)
// 004505ad: MOV EAX,0xff
// 004505b2: MOV byte ptr [ESI],AL
//   Label: LAB_004505b2
// 004505b4: ADD EDX,dword ptr [EBP + 0xfffffff0]
//   Label: LAB_004505b4
//   XREF to: Stack[-0x20] (READ)
// 004505ba: ADD EBX,dword ptr [EBP + 0xffffffe8]
//   XREF to: Stack[-0x28] (READ)
// 004505c0: INC ESI
// 004505c1: SUB ECX,0x4
// 004505c4: JG 0x00450580
//   XREF to: 00450580 (CONDITIONAL_JUMP)
// 004505c6: MOV dword ptr [0x013bbe30],EDI
//   XREF to: 013bbe30 (WRITE)
// 004505cc: MOV dword ptr [0x013bbe2c],0x1
//   XREF to: 013bbe2c (WRITE)
// 004505d6: MOV ESP,EBP
//   Label: LAB_004505d6
// 004505d8: POP EBP
// 004505d9: POP EDI
// 004505da: POP ESI
// 004505db: POP EBX
// 004505dc: RET
