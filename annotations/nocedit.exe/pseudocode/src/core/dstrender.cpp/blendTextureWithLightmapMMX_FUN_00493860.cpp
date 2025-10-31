// Name: core_dstrender.cpp_blendTextureWithLightmapMMX_FUN_00493860
// Address: 00493860
// Address Range: [[00493860, 00493dc3]]
// Convention: __cdecl
// Signature: void core_dstrender.cpp_blendTextureWithLightmapMMX_FUN_00493860(uint * output_buffer, uint * texture_buffer, byte * texture_indices, byte * lightmap_indices, int pixel_count)
// Cross-references:
//   core_dcamera.cpp_CDemonCamera_compositeLightmapToFramebuffer_FUN_00453270 (00453270) at 004533ec [UNCONDITIONAL_CALL]
// Globals:
//   ulonglong g_LightmapBlendBias1 = 0x0
//   ulonglong g_LightmapBlendBias2 = 0x8000800080008
//   ushort[384] g_LightmapData
//   undefined4 g_LightmapData[16]
//   undefined4 g_LightmapData[32]
//   undefined4 g_LightmapData[48]
//   undefined4 g_LightmapData[64]
//   undefined4 g_LightmapData[80]
//   undefined4 g_LightmapData[96]
//   undefined4 g_LightmapData[112]
//   undefined4 g_LightmapData[128]
//   undefined4 g_LightmapData[144]
//   undefined4 g_LightmapData[160]
//   undefined4 g_LightmapData[176]
//   undefined4 g_LightmapData[192]
//   undefined4 g_LightmapData[208]
//   undefined4 g_LightmapData[224]
//   undefined4 g_LightmapData[240]
//   undefined4 g_LightmapData[256]
//   undefined4 g_LightmapData[272]
//   undefined4 g_LightmapData[288]
//   undefined4 g_LightmapData[304]
//   undefined4 g_LightmapData[320]
//   undefined4 g_LightmapData[336]
//   undefined4 g_LightmapData[352]
//   undefined4 g_LightmapData[368]
//   undefined4 DAT_00677cf0
//   undefined4 DAT_00677d10
//   undefined4 DAT_00677d30
//   undefined4 DAT_00677d50
//   undefined4 DAT_00677d70
//   undefined4 DAT_00677d90
//   undefined4 DAT_00677db0
//   undefined4 DAT_00677dd0
//   undefined4 DAT_00677df0
//   undefined4 DAT_00677e10
//   undefined4 DAT_00677e30
//   undefined4 DAT_00677e50
//   undefined4 DAT_00677e70
//   undefined4 DAT_00677e90
//   undefined4 DAT_00677eb0
//   undefined4 DAT_00677ed0
//   undefined4 DAT_00677ef0
//   undefined4 DAT_00677f10
//   undefined4 DAT_00677f30
//   undefined4 DAT_00677f50
//   undefined4 DAT_00677f70
//   undefined4 DAT_00677f90
//   undefined4 DAT_00677fb0
//   undefined4 DAT_00677fd0
//   undefined4 DAT_00677ff0
//   undefined4 DAT_00678010
//   undefined4 DAT_00678030
//   undefined4 DAT_00678050
//   undefined4 DAT_00678070
//   undefined4 DAT_00678090
//   undefined4 DAT_006780b0
//   undefined4 DAT_006780d0
//   undefined4 DAT_006780f0
//   undefined4 DAT_00678110
//   undefined4 DAT_00678130
//   undefined4 DAT_00678150
//   undefined4 DAT_00678170
//   undefined4 DAT_00678190
//   undefined4 DAT_006781b0
//   undefined4 DAT_006781d0
//   double g_LightmapXorMask = 0.126945525291829
//   ulonglong g_RedMask32 = 0xf80000
//   ulonglong g_GreenMask32 = 0xfc00
//   ulonglong g_BlueMask32 = 0xf8
//   ulonglong g_TotalColorBits = 0x8
//   ulonglong g_GreenBlueBits = 0x5
//   ulonglong g_BlueBitShift = 0x3
//   uint[256] g_LightmapTexturePalette
//   undefined4 g_LightmapTexturePalette[8]
//   undefined4 g_LightmapTexturePalette[16]
//   undefined4 g_LightmapTexturePalette[24]
//   undefined4 g_LightmapTexturePalette[32]
//   undefined4 g_LightmapTexturePalette[40]
//   undefined4 g_LightmapTexturePalette[48]
//   undefined4 g_LightmapTexturePalette[56]
//   undefined4 g_LightmapTexturePalette[64]
//   undefined4 g_LightmapTexturePalette[72]
//   undefined4 g_LightmapTexturePalette[80]
//   undefined4 g_LightmapTexturePalette[88]
//   undefined4 g_LightmapTexturePalette[96]
//   undefined4 g_LightmapTexturePalette[104]
//   undefined4 g_LightmapTexturePalette[112]
//   undefined4 g_LightmapTexturePalette[120]
//   undefined4 g_LightmapTexturePalette[128]
//   undefined4 g_LightmapTexturePalette[136]
//   undefined4 g_LightmapTexturePalette[144]
//   undefined4 g_LightmapTexturePalette[152]
//   undefined4 g_LightmapTexturePalette[160]
//   undefined4 g_LightmapTexturePalette[168]
//   undefined4 g_LightmapTexturePalette[176]
//   undefined4 g_LightmapTexturePalette[184]
//   undefined4 g_LightmapTexturePalette[192]
//   undefined4 g_LightmapTexturePalette[200]
//   undefined4 g_LightmapTexturePalette[208]
//   undefined4 g_LightmapTexturePalette[216]
//   undefined4 g_LightmapTexturePalette[224]
//   undefined4 g_LightmapTexturePalette[232]
//   undefined4 g_LightmapTexturePalette[240]
//   undefined4 g_LightmapTexturePalette[248]
//   int g_SolidColorMode

#include "nocturne.h"

void __cdecl
core_dstrender_cpp_blendTextureWithLightmapMMX_FUN_00493860
          (uint *output_buffer,uint *texture_buffer,byte *texture_indices,byte *lightmap_indices,
          int pixel_count)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ushort uVar7;
  ushort uVar11;
  ushort uVar13;
  uint5 uVar12;
  undefined8 uVar8;
  ushort uVar14;
  ulonglong uVar9;
  ulonglong uVar10;
  uint5 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  uVar17 = psllw((ulonglong)
                 CONCAT52(CONCAT41((int)(((uint7)CONCAT21((short)(((uint7)(byte)((uint)
                                                  g_SolidColorMode >> 0x18) << 0x30) >> 0x28),
                                                  (char)((uint)g_SolidColorMode >> 0x10)) << 0x20)
                                        >> 0x18),(char)((uint)g_SolidColorMode >> 8)),
                          (ushort)(byte)g_SolidColorMode),6);
  do {
    uVar1 = *texture_buffer;
    uVar2 = g_LightmapTexturePalette[*texture_indices];
    uVar4 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(uVar1 >> 0x18) << 0x30) >> 0x28),
                                            CONCAT14((char)(uVar1 >> 0x10),uVar1)) >> 0x20),uVar1)
                  >> 0x18);
    uVar12 = (uint5)uVar4 & 0xffffffff00;
    uVar5 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(uVar2 >> 0x18) << 0x30) >> 0x28),
                                            CONCAT14((char)(uVar2 >> 0x10),uVar2)) >> 0x20),uVar2)
                  >> 0x18);
    uVar15 = (uint5)uVar5 & 0xffffffff00;
    uVar8 = pmulhw(CONCAT26((short)(uVar12 >> 0x18) * (short)(uVar15 >> 0x18),
                            CONCAT24((short)(uVar12 >> 8) * (short)(uVar15 >> 8),
                                     CONCAT22(((ushort)(CONCAT43(uVar4,CONCAT12((char)(uVar1 >> 8),
                                                                                (ushort)uVar1)) >>
                                                       0x10) & 0xff) *
                                              ((ushort)CONCAT41(uVar5,(char)(uVar2 >> 8)) & 0xff),
                                              ((ushort)uVar1 & 0xff) * (ushort)(byte)uVar2))),
                   *(ulonglong *)
                    (g_LightmapData + ((uint)*lightmap_indices + (uint)(*texture_indices >> 1)) * 4)
                   ^ (ulonglong)g_LightmapXorMask);
    uVar16 = pmulhw(uVar17,*(ulonglong *)
                            (g_LightmapData +
                            ((uint)*lightmap_indices + (uint)(*texture_indices >> 1)) * 4));
    uVar7 = (ushort)((short)uVar8 + (short)uVar16 + (short)g_LightmapBlendBias1) >> 4;
    uVar11 = (ushort)((short)((ulonglong)uVar8 >> 0x10) + (short)((ulonglong)uVar16 >> 0x10) +
                     (short)(g_LightmapBlendBias1 >> 0x10)) >> 4;
    uVar13 = (ushort)((short)((ulonglong)uVar8 >> 0x20) + (short)((ulonglong)uVar16 >> 0x20) +
                     (short)(g_LightmapBlendBias1 >> 0x20)) >> 4;
    uVar14 = (ushort)((short)((ulonglong)uVar8 >> 0x30) + (short)((ulonglong)uVar16 >> 0x30) +
                     (short)(g_LightmapBlendBias1 >> 0x30)) >> 4;
    uVar9 = (ulonglong)
            CONCAT13((uVar14 != 0) * (uVar14 < 0x100) * (char)uVar14 - (0xff < uVar14),
                     CONCAT12((uVar13 != 0) * (uVar13 < 0x100) * (char)uVar13 - (0xff < uVar13),
                              CONCAT11((uVar11 != 0) * (uVar11 < 0x100) * (char)uVar11 -
                                       (0xff < uVar11),
                                       (uVar7 != 0) * (uVar7 < 0x100) * (char)uVar7 - (0xff < uVar7)
                                      )));
    uVar1 = texture_buffer[1];
    uVar2 = g_LightmapTexturePalette[texture_indices[1]];
    uVar4 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(uVar1 >> 0x18) << 0x30) >> 0x28),
                                            CONCAT14((char)(uVar1 >> 0x10),uVar1)) >> 0x20),uVar1)
                  >> 0x18);
    uVar12 = (uint5)uVar4 & 0xffffffff00;
    uVar7 = (ushort)(((uint7)(byte)(uVar2 >> 0x18) << 0x30) >> 0x28);
    uVar8 = pmulhw(CONCAT26((short)(uVar12 >> 0x18) * (uVar7 >> 8),
                            CONCAT24((short)(uVar12 >> 8) *
                                     (short)(CONCAT25(uVar7,CONCAT14((char)(uVar2 >> 0x10),uVar2))
                                            >> 0x20),
                                     CONCAT22(((ushort)(CONCAT43(uVar4,CONCAT12((char)(uVar1 >> 8),
                                                                                (ushort)uVar1)) >>
                                                       0x10) & 0xff) * (ushort)(byte)(uVar2 >> 8),
                                              ((ushort)uVar1 & 0xff) * ((ushort)uVar2 & 0xff)))),
                   *(ulonglong *)
                    (g_LightmapData +
                    ((uint)lightmap_indices[1] + (uint)(texture_indices[1] >> 1)) * 4) ^
                   (ulonglong)g_LightmapXorMask);
    uVar16 = pmulhw(uVar17,*(ulonglong *)
                            (g_LightmapData +
                            ((uint)lightmap_indices[1] + (uint)(texture_indices[1] >> 1)) * 4));
    uVar7 = (ushort)((short)uVar8 + (short)uVar16 + (short)g_LightmapBlendBias2) >> 4;
    uVar11 = (ushort)((short)((ulonglong)uVar8 >> 0x10) + (short)((ulonglong)uVar16 >> 0x10) +
                     (short)(g_LightmapBlendBias2 >> 0x10)) >> 4;
    uVar13 = (ushort)((short)((ulonglong)uVar8 >> 0x20) + (short)((ulonglong)uVar16 >> 0x20) +
                     (short)(g_LightmapBlendBias2 >> 0x20)) >> 4;
    uVar14 = (ushort)((short)((ulonglong)uVar8 >> 0x30) + (short)((ulonglong)uVar16 >> 0x30) +
                     (short)(g_LightmapBlendBias2 >> 0x30)) >> 4;
    uVar10 = (ulonglong)
             CONCAT13((uVar14 != 0) * (uVar14 < 0x100) * (char)uVar14 - (0xff < uVar14),
                      CONCAT12((uVar13 != 0) * (uVar13 < 0x100) * (char)uVar13 - (0xff < uVar13),
                               CONCAT11((uVar11 != 0) * (uVar11 < 0x100) * (char)uVar11 -
                                        (0xff < uVar11),
                                        (uVar7 != 0) * (uVar7 < 0x100) * (char)uVar7 -
                                        (0xff < uVar7))));
    *output_buffer =
         (uint)(((uVar10 & g_BlueMask32) >> g_BlueBitShift |
                 (uVar10 & g_GreenMask32) >> g_GreenBlueBits |
                (uVar10 & g_RedMask32) >> g_TotalColorBits) << 0x10) |
         (uint)((uVar9 & g_BlueMask32) >> g_BlueBitShift) |
         (uint)((uVar9 & g_GreenMask32) >> g_GreenBlueBits) |
         (uint)((uVar9 & g_RedMask32) >> g_TotalColorBits);
    texture_buffer = texture_buffer + 2;
    texture_indices = texture_indices + 2;
    lightmap_indices = lightmap_indices + 2;
    output_buffer = output_buffer + 1;
    iVar6 = pixel_count + -2;
    bVar3 = 1 < pixel_count;
    pixel_count = iVar6;
  } while (iVar6 != 0 && bVar3);
  return;
}


// Assembly code:
// 00493860: PUSH EBP
//   Label: core_dstrender.cpp_blendTextureWithLightmapMMX_FUN_00493860
// 00493861: MOV EBP,ESP
// 00493863: PUSH ESI
// 00493864: PUSH EDI
// 00493865: PUSH EBP
// 00493866: MOV ECX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x14] (READ)
// 00493869: MOV EDI,dword ptr [EBP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0049386c: MOV ESI,dword ptr [EBP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0049386f: MOV EBX,dword ptr [EBP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 00493872: MOV EBP,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x10] (READ)
// 00493875: PXOR MM7,MM7
// 00493878: MOVD MM5,dword ptr [0x02d052a8]
//   XREF to: 02d052a8 (READ)
// 0049387f: PUNPCKLBW MM5,MM7
// 00493882: PSLLW MM5,0x6
// 00493886: MOV EAX,dword ptr [EBX]
// 00493888: MOV EAX,dword ptr [EBX + 0x20]
// 0049388b: MOV EAX,dword ptr [EBX + 0x40]
// 0049388e: MOV EAX,dword ptr [EBX + 0x60]
// 00493891: MOV EAX,dword ptr [EBX + 0x80]
// 00493897: MOV EAX,dword ptr [EBX + 0xa0]
// 0049389d: MOV EAX,dword ptr [EBX + 0xc0]
// 004938a3: MOV EAX,dword ptr [EBX + 0xe0]
// 004938a9: MOV EAX,dword ptr [EBX + 0x100]
// 004938af: MOV EAX,dword ptr [EBX + 0x120]
// 004938b5: MOV EDX,dword ptr [EBP]
// 004938b8: MOV EDX,dword ptr [EBP + 0x20]
// 004938bb: MOV EDX,dword ptr [EBP + 0x40]
// 004938be: MOV EDX,dword ptr [EBP + 0x60]
// 004938c1: MOV EDX,dword ptr [EBP + 0x80]
// 004938c7: MOV EDX,dword ptr [EBP + 0xa0]
// 004938cd: MOV EDX,dword ptr [EBP + 0xc0]
// 004938d3: MOV EDX,dword ptr [EBP + 0xe0]
// 004938d9: MOV EDX,dword ptr [EBP + 0x100]
// 004938df: MOV EDX,dword ptr [EBP + 0x120]
// 004938e5: MOV EAX,dword ptr [ESI]
// 004938e7: MOV EAX,dword ptr [ESI + 0x20]
// 004938ea: MOV EAX,dword ptr [ESI + 0x40]
// 004938ed: MOV EAX,dword ptr [ESI + 0x60]
// 004938f0: MOV EAX,dword ptr [ESI + 0x80]
// 004938f6: MOV EAX,dword ptr [ESI + 0xa0]
// 004938fc: MOV EAX,dword ptr [ESI + 0xc0]
// 00493902: MOV EAX,dword ptr [ESI + 0xe0]
// 00493908: MOV EAX,dword ptr [ESI + 0x100]
// 0049390e: MOV EAX,dword ptr [ESI + 0x120]
// 00493914: MOV EAX,dword ptr [ESI + 0x140]
// 0049391a: MOV EAX,dword ptr [ESI + 0x160]
// 00493920: MOV EAX,dword ptr [ESI + 0x180]
// 00493926: MOV EAX,dword ptr [ESI + 0x1a0]
// 0049392c: MOV EAX,dword ptr [ESI + 0x1c0]
// 00493932: MOV EAX,dword ptr [ESI + 0x1e0]
// 00493938: MOV EAX,dword ptr [ESI + 0x200]
// 0049393e: MOV EAX,dword ptr [ESI + 0x220]
// 00493944: MOV EAX,dword ptr [ESI + 0x240]
// 0049394a: MOV EAX,dword ptr [ESI + 0x260]
// 00493950: MOV EAX,dword ptr [ESI + 0x280]
// 00493956: MOV EAX,dword ptr [ESI + 0x2a0]
// 0049395c: MOV EAX,dword ptr [ESI + 0x2c0]
// 00493962: MOV EAX,dword ptr [ESI + 0x2e0]
// 00493968: MOV EAX,dword ptr [ESI + 0x300]
// 0049396e: MOV EAX,dword ptr [ESI + 0x320]
// 00493974: MOV EAX,dword ptr [ESI + 0x340]
// 0049397a: MOV EAX,dword ptr [ESI + 0x360]
// 00493980: MOV EAX,dword ptr [ESI + 0x380]
// 00493986: MOV EAX,dword ptr [ESI + 0x3a0]
// 0049398c: MOV EAX,dword ptr [ESI + 0x3c0]
// 00493992: MOV EAX,dword ptr [ESI + 0x3e0]
// 00493998: MOV EAX,dword ptr [ESI + 0x400]
// 0049399e: MOV EAX,dword ptr [ESI + 0x420]
// 004939a4: MOV EAX,dword ptr [ESI + 0x440]
// 004939aa: MOV EAX,dword ptr [ESI + 0x460]
// 004939b0: MOV EAX,dword ptr [ESI + 0x480]
// 004939b6: MOV EAX,dword ptr [ESI + 0x4a0]
// 004939bc: MOV EAX,dword ptr [ESI + 0x4c0]
// 004939c2: MOV EAX,dword ptr [ESI + 0x4e0]
// 004939c8: MOV EAX,dword ptr [ESI + 0x500]
// 004939ce: MOV EAX,dword ptr [ESI + 0x520]
// 004939d4: MOV EAX,dword ptr [ESI + 0x540]
// 004939da: MOV EAX,dword ptr [ESI + 0x560]
// 004939e0: MOV EAX,dword ptr [ESI + 0x580]
// 004939e6: MOV EAX,dword ptr [ESI + 0x5a0]
// 004939ec: MOV EAX,dword ptr [ESI + 0x5c0]
// 004939f2: MOV EAX,dword ptr [ESI + 0x5e0]
// 004939f8: MOV EAX,dword ptr [ESI + 0x600]
// 004939fe: MOV EAX,dword ptr [ESI + 0x620]
// 00493a04: MOV EAX,dword ptr [ESI + 0x640]
// 00493a0a: MOV EAX,dword ptr [ESI + 0x660]
// 00493a10: MOV EAX,dword ptr [ESI + 0x680]
// 00493a16: MOV EAX,dword ptr [ESI + 0x6a0]
// 00493a1c: MOV EAX,dword ptr [ESI + 0x6c0]
// 00493a22: MOV EAX,dword ptr [ESI + 0x6e0]
// 00493a28: MOV EAX,dword ptr [ESI + 0x700]
// 00493a2e: MOV EAX,dword ptr [ESI + 0x720]
// 00493a34: MOV EAX,dword ptr [ESI + 0x740]
// 00493a3a: MOV EAX,dword ptr [ESI + 0x760]
// 00493a40: MOV EAX,dword ptr [ESI + 0x780]
// 00493a46: MOV EAX,dword ptr [ESI + 0x7a0]
// 00493a4c: MOV EAX,dword ptr [ESI + 0x7c0]
// 00493a52: MOV EAX,dword ptr [ESI + 0x7e0]
// 00493a58: MOV EAX,dword ptr [ESI + 0x800]
// 00493a5e: MOV EAX,dword ptr [ESI + 0x820]
// 00493a64: MOV EAX,dword ptr [ESI + 0x840]
// 00493a6a: MOV EAX,dword ptr [ESI + 0x860]
// 00493a70: MOV EAX,dword ptr [ESI + 0x880]
// 00493a76: MOV EAX,dword ptr [ESI + 0x8a0]
// 00493a7c: MOV EAX,dword ptr [ESI + 0x8c0]
// 00493a82: MOV EAX,dword ptr [ESI + 0x8e0]
// 00493a88: MOV EAX,dword ptr [ESI + 0x900]
// 00493a8e: MOV EAX,dword ptr [ESI + 0x920]
// 00493a94: MOV EAX,dword ptr [ESI + 0x940]
// 00493a9a: MOV EAX,dword ptr [ESI + 0x960]
// 00493aa0: MOV EAX,dword ptr [ESI + 0x980]
// 00493aa6: MOV EAX,dword ptr [ESI + 0x9a0]
// 00493aac: MOV EAX,dword ptr [ESI + 0x9c0]
// 00493ab2: MOV EAX,dword ptr [ESI + 0x9e0]
// 00493ab8: MOV EAX,[0x00c19dfc]
//   XREF to: 00c19dfc (READ)
// 00493abd: MOV EAX,[0x00c19e1c]
//   XREF to: 00c19e1c (READ)
// 00493ac2: MOV EAX,[0x00c19e3c]
//   XREF to: 00c19e3c (READ)
// 00493ac7: MOV EAX,[0x00c19e5c]
//   XREF to: 00c19e5c (READ)
// 00493acc: MOV EAX,[0x00c19e7c]
//   XREF to: 00c19e7c (READ)
// 00493ad1: MOV EAX,[0x00c19e9c]
//   XREF to: 00c19e9c (READ)
// 00493ad6: MOV EAX,[0x00c19ebc]
//   XREF to: 00c19ebc (READ)
// 00493adb: MOV EAX,[0x00c19edc]
//   XREF to: 00c19edc (READ)
// 00493ae0: MOV EAX,[0x00c19efc]
//   XREF to: 00c19efc (READ)
// 00493ae5: MOV EAX,[0x00c19f1c]
//   XREF to: 00c19f1c (READ)
// 00493aea: MOV EAX,[0x00c19f3c]
//   XREF to: 00c19f3c (READ)
// 00493aef: MOV EAX,[0x00c19f5c]
//   XREF to: 00c19f5c (READ)
// 00493af4: MOV EAX,[0x00c19f7c]
//   XREF to: 00c19f7c (READ)
// 00493af9: MOV EAX,[0x00c19f9c]
//   XREF to: 00c19f9c (READ)
// 00493afe: MOV EAX,[0x00c19fbc]
//   XREF to: 00c19fbc (READ)
// 00493b03: MOV EAX,[0x00c19fdc]
//   XREF to: 00c19fdc (READ)
// 00493b08: MOV EAX,[0x00c19ffc]
//   XREF to: 00c19ffc (READ)
// 00493b0d: MOV EAX,[0x00c1a01c]
//   XREF to: 00c1a01c (READ)
// 00493b12: MOV EAX,[0x00c1a03c]
//   XREF to: 00c1a03c (READ)
// 00493b17: MOV EAX,[0x00c1a05c]
//   XREF to: 00c1a05c (READ)
// 00493b1c: MOV EAX,[0x00c1a07c]
//   XREF to: 00c1a07c (READ)
// 00493b21: MOV EAX,[0x00c1a09c]
//   XREF to: 00c1a09c (READ)
// 00493b26: MOV EAX,[0x00c1a0bc]
//   XREF to: 00c1a0bc (READ)
// 00493b2b: MOV EAX,[0x00c1a0dc]
//   XREF to: 00c1a0dc (READ)
// 00493b30: MOV EAX,[0x00c1a0fc]
//   XREF to: 00c1a0fc (READ)
// 00493b35: MOV EAX,[0x00c1a11c]
//   XREF to: 00c1a11c (READ)
// 00493b3a: MOV EAX,[0x00c1a13c]
//   XREF to: 00c1a13c (READ)
// 00493b3f: MOV EAX,[0x00c1a15c]
//   XREF to: 00c1a15c (READ)
// 00493b44: MOV EAX,[0x00c1a17c]
//   XREF to: 00c1a17c (READ)
// 00493b49: MOV EAX,[0x00c1a19c]
//   XREF to: 00c1a19c (READ)
// 00493b4e: MOV EAX,[0x00c1a1bc]
//   XREF to: 00c1a1bc (READ)
// 00493b53: MOV EAX,[0x00c1a1dc]
//   XREF to: 00c1a1dc (READ)
// 00493b58: MOV EAX,[0x006779f0]
//   XREF to: 006779f0 (READ)
// 00493b5d: MOV EAX,[0x00677a10]
//   XREF to: 00677a10 (READ)
// 00493b62: MOV EAX,[0x00677a30]
//   XREF to: 00677a30 (READ)
// 00493b67: MOV EAX,[0x00677a50]
//   XREF to: 00677a50 (READ)
// 00493b6c: MOV EAX,[0x00677a70]
//   XREF to: 00677a70 (READ)
// 00493b71: MOV EAX,[0x00677a90]
//   XREF to: 00677a90 (READ)
// 00493b76: MOV EAX,[0x00677ab0]
//   XREF to: 00677ab0 (READ)
// 00493b7b: MOV EAX,[0x00677ad0]
//   XREF to: 00677ad0 (READ)
// 00493b80: MOV EAX,[0x00677af0]
//   XREF to: 00677af0 (READ)
// 00493b85: MOV EAX,[0x00677b10]
//   XREF to: 00677b10 (READ)
// 00493b8a: MOV EAX,[0x00677b30]
//   XREF to: 00677b30 (READ)
// 00493b8f: MOV EAX,[0x00677b50]
//   XREF to: 00677b50 (READ)
// 00493b94: MOV EAX,[0x00677b70]
//   XREF to: 00677b70 (READ)
// 00493b99: MOV EAX,[0x00677b90]
//   XREF to: 00677b90 (READ)
// 00493b9e: MOV EAX,[0x00677bb0]
//   XREF to: 00677bb0 (READ)
// 00493ba3: MOV EAX,[0x00677bd0]
//   XREF to: 00677bd0 (READ)
// 00493ba8: MOV EAX,[0x00677bf0]
//   XREF to: 00677bf0 (READ)
// 00493bad: MOV EAX,[0x00677c10]
//   XREF to: 00677c10 (READ)
// 00493bb2: MOV EAX,[0x00677c30]
//   XREF to: 00677c30 (READ)
// 00493bb7: MOV EAX,[0x00677c50]
//   XREF to: 00677c50 (READ)
// 00493bbc: MOV EAX,[0x00677c70]
//   XREF to: 00677c70 (READ)
// 00493bc1: MOV EAX,[0x00677c90]
//   XREF to: 00677c90 (READ)
// 00493bc6: MOV EAX,[0x00677cb0]
//   XREF to: 00677cb0 (READ)
// 00493bcb: MOV EAX,[0x00677cd0]
//   XREF to: 00677cd0 (READ)
// 00493bd0: MOV EAX,[0x00677cf0]
//   XREF to: 00677cf0 (READ)
// 00493bd5: MOV EAX,[0x00677d10]
//   XREF to: 00677d10 (READ)
// 00493bda: MOV EAX,[0x00677d30]
//   XREF to: 00677d30 (READ)
// 00493bdf: MOV EAX,[0x00677d50]
//   XREF to: 00677d50 (READ)
// 00493be4: MOV EAX,[0x00677d70]
//   XREF to: 00677d70 (READ)
// 00493be9: MOV EAX,[0x00677d90]
//   XREF to: 00677d90 (READ)
// 00493bee: MOV EAX,[0x00677db0]
//   XREF to: 00677db0 (READ)
// 00493bf3: MOV EAX,[0x00677dd0]
//   XREF to: 00677dd0 (READ)
// 00493bf8: MOV EAX,[0x00677df0]
//   XREF to: 00677df0 (READ)
// 00493bfd: MOV EAX,[0x00677e10]
//   XREF to: 00677e10 (READ)
// 00493c02: MOV EAX,[0x00677e30]
//   XREF to: 00677e30 (READ)
// 00493c07: MOV EAX,[0x00677e50]
//   XREF to: 00677e50 (READ)
// 00493c0c: MOV EAX,[0x00677e70]
//   XREF to: 00677e70 (READ)
// 00493c11: MOV EAX,[0x00677e90]
//   XREF to: 00677e90 (READ)
// 00493c16: MOV EAX,[0x00677eb0]
//   XREF to: 00677eb0 (READ)
// 00493c1b: MOV EAX,[0x00677ed0]
//   XREF to: 00677ed0 (READ)
// 00493c20: MOV EAX,[0x00677ef0]
//   XREF to: 00677ef0 (READ)
// 00493c25: MOV EAX,[0x00677f10]
//   XREF to: 00677f10 (READ)
// 00493c2a: MOV EAX,[0x00677f30]
//   XREF to: 00677f30 (READ)
// 00493c2f: MOV EAX,[0x00677f50]
//   XREF to: 00677f50 (READ)
// 00493c34: MOV EAX,[0x00677f70]
//   XREF to: 00677f70 (READ)
// 00493c39: MOV EAX,[0x00677f90]
//   XREF to: 00677f90 (READ)
// 00493c3e: MOV EAX,[0x00677fb0]
//   XREF to: 00677fb0 (READ)
// 00493c43: MOV EAX,[0x00677fd0]
//   XREF to: 00677fd0 (READ)
// 00493c48: MOV EAX,[0x00677ff0]
//   XREF to: 00677ff0 (READ)
// 00493c4d: MOV EAX,[0x00678010]
//   XREF to: 00678010 (READ)
// 00493c52: MOV EAX,[0x00678030]
//   XREF to: 00678030 (READ)
// 00493c57: MOV EAX,[0x00678050]
//   XREF to: 00678050 (READ)
// 00493c5c: MOV EAX,[0x00678070]
//   XREF to: 00678070 (READ)
// 00493c61: MOV EAX,[0x00678090]
//   XREF to: 00678090 (READ)
// 00493c66: MOV EAX,[0x006780b0]
//   XREF to: 006780b0 (READ)
// 00493c6b: MOV EAX,[0x006780d0]
//   XREF to: 006780d0 (READ)
// 00493c70: MOV EAX,[0x006780f0]
//   XREF to: 006780f0 (READ)
// 00493c75: MOV EAX,[0x00678110]
//   XREF to: 00678110 (READ)
// 00493c7a: MOV EAX,[0x00678130]
//   XREF to: 00678130 (READ)
// 00493c7f: MOV EAX,[0x00678150]
//   XREF to: 00678150 (READ)
// 00493c84: MOV EAX,[0x00678170]
//   XREF to: 00678170 (READ)
// 00493c89: MOV EAX,[0x00678190]
//   XREF to: 00678190 (READ)
// 00493c8e: MOV EAX,[0x006781b0]
//   XREF to: 006781b0 (READ)
// 00493c93: MOV EAX,[0x006781d0]
//   XREF to: 006781d0 (READ)
// 00493c98: MOVZX EDX,byte ptr [EBX]
//   Label: LAB_00493c98
// 00493c9b: MOVD MM0,dword ptr [ESI]
// 00493c9e: MOVD MM2,dword ptr [EDX*0x4 + 0xc19dfc]
//   XREF to: 00c19dfc (DATA)
// 00493ca6: MOVZX EAX,byte ptr [EBP]
// 00493caa: PUNPCKLBW MM0,MM7
// 00493cad: SHR EDX,0x1
// 00493caf: PUNPCKLBW MM2,MM7
// 00493cb2: ADD EAX,EDX
// 00493cb4: PMULLW MM0,MM2
// 00493cb7: MOVQ MM3,qword ptr [EAX*0x8 + 0x6779f0]
//   XREF to: 006779f0 (DATA)
// 00493cbf: MOVQ MM2,MM3
// 00493cc2: MOVQ MM4,MM5
// 00493cc5: PXOR MM2,qword ptr [0x006781e8]
//   XREF to: 006781e8 (READ)
// 00493ccc: PMULHW MM0,MM2
// 00493ccf: PMULHW MM4,MM3
// 00493cd2: PADDW MM0,MM4
// 00493cd5: PADDW MM0,qword ptr [0x00676478]
//   XREF to: 00676478 (READ)
// 00493cdc: PSRLW MM0,0x4
// 00493ce0: PACKUSWB MM0,MM7
// 00493ce3: MOVQ MM2,MM0
// 00493ce6: MOVQ MM3,MM0
// 00493ce9: PAND MM0,qword ptr [0x006827a0]
//   XREF to: 006827a0 (READ)
// 00493cf0: PAND MM2,qword ptr [0x00682780]
//   XREF to: 00682780 (READ)
// 00493cf7: PAND MM3,qword ptr [0x00682760]
//   XREF to: 00682760 (READ)
// 00493cfe: PSRLQ MM0,qword ptr [0x006827e8]
//   XREF to: 006827e8 (READ)
// 00493d05: PSRLQ MM2,qword ptr [0x006827c8]
//   XREF to: 006827c8 (READ)
// 00493d0c: PSRLQ MM3,qword ptr [0x006827a8]
//   XREF to: 006827a8 (READ)
// 00493d13: POR MM0,MM2
// 00493d16: POR MM0,MM3
// 00493d19: MOVQ MM6,MM0
// 00493d1c: ADD ESI,0x4
// 00493d1f: INC EBX
// 00493d20: INC EBP
// 00493d21: MOVZX EDX,byte ptr [EBX]
// 00493d24: MOVD MM0,dword ptr [ESI]
// 00493d27: MOVD MM2,dword ptr [EDX*0x4 + 0xc19dfc]
//   XREF to: 00c19dfc (DATA)
// 00493d2f: MOVZX EAX,byte ptr [EBP]
// 00493d33: PUNPCKLBW MM0,MM7
// 00493d36: SHR EDX,0x1
// 00493d38: PUNPCKLBW MM2,MM7
// 00493d3b: ADD EAX,EDX
// 00493d3d: PMULLW MM0,MM2
// 00493d40: MOVQ MM3,qword ptr [EAX*0x8 + 0x6779f0]
//   XREF to: 006779f0 (DATA)
// 00493d48: MOVQ MM2,MM3
// 00493d4b: MOVQ MM4,MM5
// 00493d4e: PXOR MM2,qword ptr [0x006781e8]
//   XREF to: 006781e8 (READ)
// 00493d55: PMULHW MM0,MM2
// 00493d58: PMULHW MM4,MM3
// 00493d5b: PADDW MM0,MM4
// 00493d5e: PADDW MM0,qword ptr [0x00676480]
//   XREF to: 00676480 (READ)
// 00493d65: PSRLW MM0,0x4
// 00493d69: PACKUSWB MM0,MM7
// 00493d6c: MOVQ MM2,MM0
// 00493d6f: MOVQ MM3,MM0
// 00493d72: PAND MM0,qword ptr [0x006827a0]
//   XREF to: 006827a0 (READ)
// 00493d79: PAND MM2,qword ptr [0x00682780]
//   XREF to: 00682780 (READ)
// 00493d80: PAND MM3,qword ptr [0x00682760]
//   XREF to: 00682760 (READ)
// 00493d87: PSRLQ MM0,qword ptr [0x006827e8]
//   XREF to: 006827e8 (READ)
// 00493d8e: PSRLQ MM2,qword ptr [0x006827c8]
//   XREF to: 006827c8 (READ)
// 00493d95: PSRLQ MM3,qword ptr [0x006827a8]
//   XREF to: 006827a8 (READ)
// 00493d9c: POR MM0,MM2
// 00493d9f: POR MM0,MM3
// 00493da2: PSLLQ MM0,0x10
// 00493da6: POR MM0,MM6
// 00493da9: MOVD dword ptr [EDI],MM0
// 00493dac: ADD ESI,0x4
// 00493daf: INC EBX
// 00493db0: INC EBP
// 00493db1: ADD EDI,0x4
// 00493db4: SUB ECX,0x2
// 00493db7: JG 0x00493c98
//   XREF to: 00493c98 (CONDITIONAL_JUMP)
// 00493dbd: POP EBP
// 00493dbe: EMMS
// 00493dc0: POP EDI
// 00493dc1: POP ESI
// 00493dc2: LEAVE
// 00493dc3: RET
