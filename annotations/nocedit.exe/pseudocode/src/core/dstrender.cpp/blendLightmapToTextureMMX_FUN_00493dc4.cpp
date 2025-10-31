// Name: core_dstrender.cpp_blendLightmapToTextureMMX_FUN_00493dc4
// Address: 00493dc4
// Address Range: [[00493dc4, 004940e8]]
// Convention: __cdecl
// Signature: void core_dstrender.cpp_blendLightmapToTextureMMX_FUN_00493dc4(ulonglong * output_buffer, ulonglong * texture_buffer, byte * texture_indices, byte * lightmap_indices, int pixel_count)
// Cross-references:
//   core_dcamera.cpp_CDemonCamera_compositeLightmapToFramebuffer_FUN_00453270 (00453270) at 00453460 [UNCONDITIONAL_CALL]
// Globals:
//   ulonglong g_AmbientLightMMX1 = 0x4000400040004
//   ulonglong g_AmbientLightMMX2 = 0xc000c000c000c
//   ushort[384] g_LightmapData
//   double g_LightmapXorMask = 0.126945525291829
//   ulonglong g_RedMask32 = 0xf80000
//   ulonglong g_GreenMask32 = 0xfc00
//   ulonglong g_BlueMask32 = 0xf8
//   ulonglong g_TotalColorBits = 0x8
//   ulonglong g_GreenBlueBits = 0x5
//   ulonglong g_BlueBitShift = 0x3
//   uint[256] g_LightmapTexturePalette
//   int g_SolidColorMode

#include "nocturne.h"

void __cdecl
core_dstrender_cpp_blendLightmapToTextureMMX_FUN_00493dc4
          (ulonglong *output_buffer,ulonglong *texture_buffer,byte *texture_indices,
          byte *lightmap_indices,int pixel_count)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  ushort uVar5;
  ushort uVar9;
  ushort uVar10;
  undefined8 uVar6;
  ushort uVar11;
  ulonglong uVar7;
  ulonglong uVar8;
  uint5 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  uVar14 = psllw((ulonglong)
                 CONCAT52(CONCAT41((int)(((uint7)CONCAT21((short)(((uint7)(byte)((uint)
                                                  g_SolidColorMode >> 0x18) << 0x30) >> 0x28),
                                                  (char)((uint)g_SolidColorMode >> 0x10)) << 0x20)
                                        >> 0x18),(char)((uint)g_SolidColorMode >> 8)),
                          (ushort)(byte)g_SolidColorMode),6);
  do {
    uVar7 = *texture_buffer;
    uVar1 = g_LightmapTexturePalette[*texture_indices];
    uVar5 = (ushort)(((uint7)(byte)(uVar7 >> 0x18) << 0x30) >> 0x28);
    uVar3 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(uVar1 >> 0x18) << 0x30) >> 0x28),
                                            CONCAT14((char)(uVar1 >> 0x10),uVar1)) >> 0x20),uVar1)
                  >> 0x18);
    uVar12 = (uint5)uVar3 & 0xffffffff00;
    uVar6 = pmulhw(CONCAT26((uVar5 >> 8) * (short)(uVar12 >> 0x18),
                            CONCAT24((short)CONCAT21(uVar5,(char)(uVar7 >> 0x10)) *
                                     (short)(uVar12 >> 8),
                                     CONCAT22((ushort)(byte)(uVar7 >> 8) *
                                              ((ushort)CONCAT41(uVar3,(char)(uVar1 >> 8)) & 0xff),
                                              ((ushort)uVar7 & 0xff) * (ushort)(byte)uVar1))),
                   *(ulonglong *)
                    (g_LightmapData + ((uint)*lightmap_indices + (uint)(*texture_indices >> 1)) * 4)
                   ^ (ulonglong)g_LightmapXorMask);
    uVar13 = pmulhw(uVar14,*(ulonglong *)
                            (g_LightmapData +
                            ((uint)*lightmap_indices + (uint)(*texture_indices >> 1)) * 4));
    uVar5 = (ushort)((short)uVar6 + (short)uVar13 + (short)g_AmbientLightMMX1) >> 4;
    uVar9 = (ushort)((short)((ulonglong)uVar6 >> 0x10) + (short)((ulonglong)uVar13 >> 0x10) +
                    (short)(g_AmbientLightMMX1 >> 0x10)) >> 4;
    uVar10 = (ushort)((short)((ulonglong)uVar6 >> 0x20) + (short)((ulonglong)uVar13 >> 0x20) +
                     (short)(g_AmbientLightMMX1 >> 0x20)) >> 4;
    uVar11 = (ushort)((short)((ulonglong)uVar6 >> 0x30) + (short)((ulonglong)uVar13 >> 0x30) +
                     (short)(g_AmbientLightMMX1 >> 0x30)) >> 4;
    uVar7 = (ulonglong)
            CONCAT13((uVar11 != 0) * (uVar11 < 0x100) * (char)uVar11 - (0xff < uVar11),
                     CONCAT12((uVar10 != 0) * (uVar10 < 0x100) * (char)uVar10 - (0xff < uVar10),
                              CONCAT11((uVar9 != 0) * (uVar9 < 0x100) * (char)uVar9 - (0xff < uVar9)
                                       ,(uVar5 != 0) * (uVar5 < 0x100) * (char)uVar5 -
                                        (0xff < uVar5))));
    uVar6 = *(undefined8 *)((int)texture_buffer + 4);
    uVar1 = g_LightmapTexturePalette[texture_indices[1]];
    uVar5 = (ushort)(((uint7)(byte)((ulonglong)uVar6 >> 0x18) << 0x30) >> 0x28);
    uVar9 = (ushort)(((uint7)(byte)(uVar1 >> 0x18) << 0x30) >> 0x28);
    uVar6 = pmulhw(CONCAT26((uVar5 >> 8) * (uVar9 >> 8),
                            CONCAT24((short)CONCAT21(uVar5,(char)((ulonglong)uVar6 >> 0x10)) *
                                     (short)(CONCAT25(uVar9,CONCAT14((char)(uVar1 >> 0x10),uVar1))
                                            >> 0x20),
                                     CONCAT22((ushort)(byte)((ulonglong)uVar6 >> 8) *
                                              (ushort)(byte)(uVar1 >> 8),
                                              ((ushort)uVar6 & 0xff) * ((ushort)uVar1 & 0xff)))),
                   *(ulonglong *)
                    (g_LightmapData +
                    ((uint)lightmap_indices[1] + (uint)(texture_indices[1] >> 1)) * 4) ^
                   (ulonglong)g_LightmapXorMask);
    uVar13 = pmulhw(uVar14,*(ulonglong *)
                            (g_LightmapData +
                            ((uint)lightmap_indices[1] + (uint)(texture_indices[1] >> 1)) * 4));
    uVar5 = (ushort)((short)uVar6 + (short)uVar13 + (short)g_AmbientLightMMX2) >> 4;
    uVar9 = (ushort)((short)((ulonglong)uVar6 >> 0x10) + (short)((ulonglong)uVar13 >> 0x10) +
                    (short)(g_AmbientLightMMX2 >> 0x10)) >> 4;
    uVar10 = (ushort)((short)((ulonglong)uVar6 >> 0x20) + (short)((ulonglong)uVar13 >> 0x20) +
                     (short)(g_AmbientLightMMX2 >> 0x20)) >> 4;
    uVar11 = (ushort)((short)((ulonglong)uVar6 >> 0x30) + (short)((ulonglong)uVar13 >> 0x30) +
                     (short)(g_AmbientLightMMX2 >> 0x30)) >> 4;
    uVar8 = (ulonglong)
            CONCAT13((uVar11 != 0) * (uVar11 < 0x100) * (char)uVar11 - (0xff < uVar11),
                     CONCAT12((uVar10 != 0) * (uVar10 < 0x100) * (char)uVar10 - (0xff < uVar10),
                              CONCAT11((uVar9 != 0) * (uVar9 < 0x100) * (char)uVar9 - (0xff < uVar9)
                                       ,(uVar5 != 0) * (uVar5 < 0x100) * (char)uVar5 -
                                        (0xff < uVar5))));
    *(uint *)output_buffer =
         (uint)(((uVar8 & g_BlueMask32) >> g_BlueBitShift |
                 (uVar8 & g_GreenMask32) >> g_GreenBlueBits |
                (uVar8 & g_RedMask32) >> g_TotalColorBits) << 0x10) |
         (uint)((uVar7 & g_BlueMask32) >> g_BlueBitShift) |
         (uint)((uVar7 & g_GreenMask32) >> g_GreenBlueBits) |
         (uint)((uVar7 & g_RedMask32) >> g_TotalColorBits);
    texture_buffer = texture_buffer + 1;
    texture_indices = texture_indices + 2;
    lightmap_indices = lightmap_indices + 2;
    output_buffer = (ulonglong *)((int)output_buffer + 4);
    iVar4 = pixel_count + -2;
    bVar2 = 1 < pixel_count;
    pixel_count = iVar4;
  } while (iVar4 != 0 && bVar2);
  return;
}


// Assembly code:
// 00493dc4: PUSH EBP
//   Label: core_dstrender.cpp_blendLightmapToTextureMMX_FUN_00493dc4
// 00493dc5: MOV EBP,ESP
// 00493dc7: PUSH ESI
// 00493dc8: PUSH EDI
// 00493dc9: PUSH EBP
// 00493dca: MOV ECX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x14] (READ)
// 00493dcd: MOV EDI,dword ptr [EBP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00493dd0: MOV ESI,dword ptr [EBP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00493dd3: MOV EBX,dword ptr [EBP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 00493dd6: MOV EBP,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x10] (READ)
// 00493dd9: PXOR MM7,MM7
// 00493ddc: MOVD MM5,dword ptr [0x02d052a8]
//   XREF to: 02d052a8 (READ)
// 00493de3: PUNPCKLBW MM5,MM7
// 00493de6: PSLLW MM5,0x6
// 00493dea: MOV EAX,dword ptr [ESI]
// 00493dec: MOV EAX,dword ptr [ESI + 0x20]
// 00493def: MOV EAX,dword ptr [ESI + 0x40]
// 00493df2: MOV EAX,dword ptr [ESI + 0x60]
// 00493df5: MOV EAX,dword ptr [ESI + 0x80]
// 00493dfb: MOV EAX,dword ptr [ESI + 0xa0]
// 00493e01: MOV EAX,dword ptr [ESI + 0xc0]
// 00493e07: MOV EAX,dword ptr [ESI + 0xe0]
// 00493e0d: MOV EAX,dword ptr [ESI + 0x100]
// 00493e13: MOV EAX,dword ptr [ESI + 0x120]
// 00493e19: MOV EAX,dword ptr [ESI + 0x140]
// 00493e1f: MOV EAX,dword ptr [ESI + 0x160]
// 00493e25: MOV EAX,dword ptr [ESI + 0x180]
// 00493e2b: MOV EAX,dword ptr [ESI + 0x1a0]
// 00493e31: MOV EAX,dword ptr [ESI + 0x1c0]
// 00493e37: MOV EAX,dword ptr [ESI + 0x1e0]
// 00493e3d: MOV EAX,dword ptr [ESI + 0x200]
// 00493e43: MOV EAX,dword ptr [ESI + 0x220]
// 00493e49: MOV EAX,dword ptr [ESI + 0x240]
// 00493e4f: MOV EAX,dword ptr [ESI + 0x260]
// 00493e55: MOV EAX,dword ptr [ESI + 0x280]
// 00493e5b: MOV EAX,dword ptr [ESI + 0x2a0]
// 00493e61: MOV EAX,dword ptr [ESI + 0x2c0]
// 00493e67: MOV EAX,dword ptr [ESI + 0x2e0]
// 00493e6d: MOV EAX,dword ptr [ESI + 0x300]
// 00493e73: MOV EAX,dword ptr [ESI + 0x320]
// 00493e79: MOV EAX,dword ptr [ESI + 0x340]
// 00493e7f: MOV EAX,dword ptr [ESI + 0x360]
// 00493e85: MOV EAX,dword ptr [ESI + 0x380]
// 00493e8b: MOV EAX,dword ptr [ESI + 0x3a0]
// 00493e91: MOV EAX,dword ptr [ESI + 0x3c0]
// 00493e97: MOV EAX,dword ptr [ESI + 0x3e0]
// 00493e9d: MOV EAX,dword ptr [ESI + 0x400]
// 00493ea3: MOV EAX,dword ptr [ESI + 0x420]
// 00493ea9: MOV EAX,dword ptr [ESI + 0x440]
// 00493eaf: MOV EAX,dword ptr [ESI + 0x460]
// 00493eb5: MOV EAX,dword ptr [ESI + 0x480]
// 00493ebb: MOV EAX,dword ptr [ESI + 0x4a0]
// 00493ec1: MOV EAX,dword ptr [ESI + 0x4c0]
// 00493ec7: MOV EAX,dword ptr [ESI + 0x4e0]
// 00493ecd: MOV EAX,dword ptr [ESI + 0x500]
// 00493ed3: MOV EAX,dword ptr [ESI + 0x520]
// 00493ed9: MOV EAX,dword ptr [ESI + 0x540]
// 00493edf: MOV EAX,dword ptr [ESI + 0x560]
// 00493ee5: MOV EAX,dword ptr [ESI + 0x580]
// 00493eeb: MOV EAX,dword ptr [ESI + 0x5a0]
// 00493ef1: MOV EAX,dword ptr [ESI + 0x5c0]
// 00493ef7: MOV EAX,dword ptr [ESI + 0x5e0]
// 00493efd: MOV EAX,dword ptr [ESI + 0x600]
// 00493f03: MOV EAX,dword ptr [ESI + 0x620]
// 00493f09: MOV EAX,dword ptr [ESI + 0x640]
// 00493f0f: MOV EAX,dword ptr [ESI + 0x660]
// 00493f15: MOV EAX,dword ptr [ESI + 0x680]
// 00493f1b: MOV EAX,dword ptr [ESI + 0x6a0]
// 00493f21: MOV EAX,dword ptr [ESI + 0x6c0]
// 00493f27: MOV EAX,dword ptr [ESI + 0x6e0]
// 00493f2d: MOV EAX,dword ptr [ESI + 0x700]
// 00493f33: MOV EAX,dword ptr [ESI + 0x720]
// 00493f39: MOV EAX,dword ptr [ESI + 0x740]
// 00493f3f: MOV EAX,dword ptr [ESI + 0x760]
// 00493f45: MOV EAX,dword ptr [ESI + 0x780]
// 00493f4b: MOV EAX,dword ptr [ESI + 0x7a0]
// 00493f51: MOV EAX,dword ptr [ESI + 0x7c0]
// 00493f57: MOV EAX,dword ptr [ESI + 0x7e0]
// 00493f5d: MOV EAX,dword ptr [ESI + 0x800]
// 00493f63: MOV EAX,dword ptr [ESI + 0x820]
// 00493f69: MOV EAX,dword ptr [ESI + 0x840]
// 00493f6f: MOV EAX,dword ptr [ESI + 0x860]
// 00493f75: MOV EAX,dword ptr [ESI + 0x880]
// 00493f7b: MOV EAX,dword ptr [ESI + 0x8a0]
// 00493f81: MOV EAX,dword ptr [ESI + 0x8c0]
// 00493f87: MOV EAX,dword ptr [ESI + 0x8e0]
// 00493f8d: MOV EAX,dword ptr [ESI + 0x900]
// 00493f93: MOV EAX,dword ptr [ESI + 0x920]
// 00493f99: MOV EAX,dword ptr [ESI + 0x940]
// 00493f9f: MOV EAX,dword ptr [ESI + 0x960]
// 00493fa5: MOV EAX,dword ptr [ESI + 0x980]
// 00493fab: MOV EAX,dword ptr [ESI + 0x9a0]
// 00493fb1: MOV EAX,dword ptr [ESI + 0x9c0]
// 00493fb7: MOV EAX,dword ptr [ESI + 0x9e0]
// 00493fbd: MOVZX EDX,byte ptr [EBX]
//   Label: LAB_00493fbd
// 00493fc0: MOVQ MM0,qword ptr [ESI]
// 00493fc3: MOVD MM2,dword ptr [EDX*0x4 + 0xc19dfc]
//   XREF to: 00c19dfc (DATA)
// 00493fcb: MOVZX EAX,byte ptr [EBP]
// 00493fcf: PUNPCKLBW MM0,MM7
// 00493fd2: SHR EDX,0x1
// 00493fd4: PUNPCKLBW MM2,MM7
// 00493fd7: ADD EAX,EDX
// 00493fd9: PMULLW MM0,MM2
// 00493fdc: MOVQ MM3,qword ptr [EAX*0x8 + 0x6779f0]
//   XREF to: 006779f0 (DATA)
// 00493fe4: MOVQ MM2,MM3
// 00493fe7: MOVQ MM4,MM5
// 00493fea: PXOR MM2,qword ptr [0x006781e8]
//   XREF to: 006781e8 (READ)
// 00493ff1: PMULHW MM0,MM2
// 00493ff4: PMULHW MM4,MM3
// 00493ff7: PADDW MM0,MM4
// 00493ffa: PADDW MM0,qword ptr [0x00676488]
//   XREF to: 00676488 (READ)
// 00494001: PSRLW MM0,0x4
// 00494005: PACKUSWB MM0,MM7
// 00494008: MOVQ MM2,MM0
// 0049400b: MOVQ MM3,MM0
// 0049400e: PAND MM0,qword ptr [0x006827a0]
//   XREF to: 006827a0 (READ)
// 00494015: PAND MM2,qword ptr [0x00682780]
//   XREF to: 00682780 (READ)
// 0049401c: PAND MM3,qword ptr [0x00682760]
//   XREF to: 00682760 (READ)
// 00494023: PSRLQ MM0,qword ptr [0x006827e8]
//   XREF to: 006827e8 (READ)
// 0049402a: PSRLQ MM2,qword ptr [0x006827c8]
//   XREF to: 006827c8 (READ)
// 00494031: PSRLQ MM3,qword ptr [0x006827a8]
//   XREF to: 006827a8 (READ)
// 00494038: POR MM0,MM2
// 0049403b: POR MM0,MM3
// 0049403e: MOVQ MM6,MM0
// 00494041: ADD ESI,0x4
// 00494044: INC EBX
// 00494045: INC EBP
// 00494046: MOVZX EDX,byte ptr [EBX]
// 00494049: MOVQ MM0,qword ptr [ESI]
// 0049404c: MOVD MM2,dword ptr [EDX*0x4 + 0xc19dfc]
//   XREF to: 00c19dfc (DATA)
// 00494054: MOVZX EAX,byte ptr [EBP]
// 00494058: PUNPCKLBW MM0,MM7
// 0049405b: SHR EDX,0x1
// 0049405d: PUNPCKLBW MM2,MM7
// 00494060: ADD EAX,EDX
// 00494062: PMULLW MM0,MM2
// 00494065: MOVQ MM3,qword ptr [EAX*0x8 + 0x6779f0]
//   XREF to: 006779f0 (DATA)
// 0049406d: MOVQ MM2,MM3
// 00494070: MOVQ MM4,MM5
// 00494073: PXOR MM2,qword ptr [0x006781e8]
//   XREF to: 006781e8 (READ)
// 0049407a: PMULHW MM0,MM2
// 0049407d: PMULHW MM4,MM3
// 00494080: PADDW MM0,MM4
// 00494083: PADDW MM0,qword ptr [0x00676490]
//   XREF to: 00676490 (READ)
// 0049408a: PSRLW MM0,0x4
// 0049408e: PACKUSWB MM0,MM7
// 00494091: MOVQ MM2,MM0
// 00494094: MOVQ MM3,MM0
// 00494097: PAND MM0,qword ptr [0x006827a0]
//   XREF to: 006827a0 (READ)
// 0049409e: PAND MM2,qword ptr [0x00682780]
//   XREF to: 00682780 (READ)
// 004940a5: PAND MM3,qword ptr [0x00682760]
//   XREF to: 00682760 (READ)
// 004940ac: PSRLQ MM0,qword ptr [0x006827e8]
//   XREF to: 006827e8 (READ)
// 004940b3: PSRLQ MM2,qword ptr [0x006827c8]
//   XREF to: 006827c8 (READ)
// 004940ba: PSRLQ MM3,qword ptr [0x006827a8]
//   XREF to: 006827a8 (READ)
// 004940c1: POR MM0,MM2
// 004940c4: POR MM0,MM3
// 004940c7: PSLLQ MM0,0x10
// 004940cb: POR MM0,MM6
// 004940ce: MOVD dword ptr [EDI],MM0
// 004940d1: ADD ESI,0x4
// 004940d4: INC EBX
// 004940d5: INC EBP
// 004940d6: ADD EDI,0x4
// 004940d9: SUB ECX,0x2
// 004940dc: JG 0x00493fbd
//   XREF to: 00493fbd (CONDITIONAL_JUMP)
// 004940e2: POP EBP
// 004940e3: EMMS
// 004940e5: POP EDI
// 004940e6: POP ESI
// 004940e7: LEAVE
// 004940e8: RET
