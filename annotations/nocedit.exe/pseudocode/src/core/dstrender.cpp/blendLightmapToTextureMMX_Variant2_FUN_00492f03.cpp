// Name: core_dstrender.cpp_blendLightmapToTextureMMX_Variant2_FUN_00492f03
// Address: 00492f03
// Address Range: [[00492f03, 0049333c] [00493340, 0049344f]]
// Convention: __cdecl
// Signature: void core_dstrender.cpp_blendLightmapToTextureMMX_Variant2_FUN_00492f03(uint * output_buffer, ulonglong * texture_buffer, byte * texture_indices, byte * lightmap_indices, int pixel_count)
// Cross-references:
//   core_dcamera.cpp_CDemonCamera_compositeLightmapToFramebuffer_FUN_00453270 (00453270) at 0045343a [UNCONDITIONAL_CALL]
// Globals:
//   ulonglong g_LightmapBlendBias5 = 0x0
//   ulonglong g_LightmapBlendBias6 = 0x40004000400040
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
core_dstrender_cpp_blendLightmapToTextureMMX_Variant2_FUN_00492f03
          (uint *output_buffer,ulonglong *texture_buffer,byte *texture_indices,
          byte *lightmap_indices,int pixel_count)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ushort uVar7;
  ushort uVar10;
  ushort uVar11;
  undefined8 uVar8;
  ushort uVar12;
  ulonglong uVar9;
  ushort uVar13;
  ushort uVar15;
  ushort uVar16;
  undefined8 uVar14;
  ushort uVar17;
  short sVar20;
  uint5 uVar19;
  short sVar21;
  ulonglong uVar18;
  undefined8 uVar22;
  short sVar23;
  undefined8 uVar24;
  uint5 uVar25;
  
  uVar24 = psllw((ulonglong)
                 CONCAT52(CONCAT41((int)(((uint7)CONCAT21((short)(((uint7)(byte)((uint)
                                                  g_SolidColorMode >> 0x18) << 0x30) >> 0x28),
                                                  (char)((uint)g_SolidColorMode >> 0x10)) << 0x20)
                                        >> 0x18),(char)((uint)g_SolidColorMode >> 8)),
                          (ushort)(byte)g_SolidColorMode),6);
  do {
    uVar9 = *texture_buffer;
    uVar1 = g_LightmapTexturePalette[*texture_indices];
    uVar2 = g_LightmapTexturePalette[texture_indices[1]];
    uVar4 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(uVar2 >> 0x18) << 0x30) >> 0x28),
                                            CONCAT14((char)(uVar2 >> 0x10),uVar2)) >> 0x20),uVar2)
                  >> 0x18);
    uVar25 = (uint5)uVar4 & 0xffffffff00;
    uVar7 = (ushort)(((uint7)(byte)(uVar9 >> 0x18) << 0x30) >> 0x28);
    uVar5 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(uVar1 >> 0x18) << 0x30) >> 0x28),
                                            CONCAT14((char)(uVar1 >> 0x10),uVar1)) >> 0x20),uVar1)
                  >> 0x18);
    uVar19 = (uint5)uVar5 & 0xffffffff00;
    uVar12 = (ushort)(CONCAT43(uVar5,CONCAT12((char)(uVar1 >> 8),(ushort)uVar1)) >> 0x10) & 0xff;
    uVar11 = (ushort)uVar1 & 0xff;
    sVar20 = (short)(uVar19 >> 8);
    sVar21 = (short)(uVar19 >> 0x18);
    uVar10 = (ushort)(((uint7)(byte)(uVar9 >> 0x38) << 0x30) >> 0x28);
    uVar18 = *(ulonglong *)
              (g_LightmapData + ((uint)*lightmap_indices + (uint)(texture_indices[1] >> 1)) * 4) ^
             (ulonglong)g_LightmapXorMask;
    uVar8 = pmulhw(CONCAT26((uVar7 >> 8) * sVar21,
                            CONCAT24((short)CONCAT21(uVar7,(char)(uVar9 >> 0x10)) * sVar20,
                                     CONCAT22((byte)(uVar9 >> 8) * uVar12,(byte)uVar9 * uVar11))),
                   uVar18);
    uVar14 = pmulhw(CONCAT26((uVar10 >> 8) * ((ushort)((short)(uVar25 >> 0x18) + sVar21) >> 1),
                             CONCAT24((short)CONCAT21(uVar10,(char)(uVar9 >> 0x30)) *
                                      ((ushort)((short)(uVar25 >> 8) + sVar20) >> 1),
                                      CONCAT22((ushort)(byte)(uVar9 >> 0x28) *
                                               ((ushort)(((ushort)(CONCAT43(uVar4,CONCAT12((char)(
                                                  uVar2 >> 8),(ushort)uVar2)) >> 0x10) & 0xff) +
                                                  uVar12) >> 1),
                                               ((ushort)(uVar9 >> 0x20) & 0xff) *
                                               ((ushort)(((ushort)uVar2 & 0xff) + uVar11) >> 1)))),
                    uVar18);
    uVar22 = pmulhw(uVar24,*(ulonglong *)
                            (g_LightmapData +
                            ((uint)*lightmap_indices + (uint)(texture_indices[1] >> 1)) * 4));
    sVar20 = (short)((ulonglong)uVar22 >> 0x10);
    sVar21 = (short)((ulonglong)uVar22 >> 0x20);
    sVar23 = (short)((ulonglong)uVar22 >> 0x30);
    uVar7 = (ushort)((short)uVar8 + (short)uVar22 + (short)g_LightmapBlendBias5) >> 4;
    uVar10 = (ushort)((short)((ulonglong)uVar8 >> 0x10) + sVar20 +
                     (short)(g_LightmapBlendBias5 >> 0x10)) >> 4;
    uVar11 = (ushort)((short)((ulonglong)uVar8 >> 0x20) + sVar21 +
                     (short)(g_LightmapBlendBias5 >> 0x20)) >> 4;
    uVar12 = (ushort)((short)((ulonglong)uVar8 >> 0x30) + sVar23 +
                     (short)(g_LightmapBlendBias5 >> 0x30)) >> 4;
    uVar13 = (ushort)((short)uVar14 + (short)uVar22 + (short)g_LightmapBlendBias6) >> 4;
    uVar15 = (ushort)((short)((ulonglong)uVar14 >> 0x10) + sVar20 +
                     (short)(g_LightmapBlendBias6 >> 0x10)) >> 4;
    uVar16 = (ushort)((short)((ulonglong)uVar14 >> 0x20) + sVar21 +
                     (short)(g_LightmapBlendBias6 >> 0x20)) >> 4;
    uVar17 = (ushort)((short)((ulonglong)uVar14 >> 0x30) + sVar23 +
                     (short)(g_LightmapBlendBias6 >> 0x30)) >> 4;
    uVar9 = (ulonglong)
            CONCAT13((uVar12 != 0) * (uVar12 < 0x100) * (char)uVar12 - (0xff < uVar12),
                     CONCAT12((uVar11 != 0) * (uVar11 < 0x100) * (char)uVar11 - (0xff < uVar11),
                              CONCAT11((uVar10 != 0) * (uVar10 < 0x100) * (char)uVar10 -
                                       (0xff < uVar10),
                                       (uVar7 != 0) * (uVar7 < 0x100) * (char)uVar7 - (0xff < uVar7)
                                      )));
    uVar18 = (ulonglong)
             CONCAT13((uVar17 != 0) * (uVar17 < 0x100) * (char)uVar17 - (0xff < uVar17),
                      CONCAT12((uVar16 != 0) * (uVar16 < 0x100) * (char)uVar16 - (0xff < uVar16),
                               CONCAT11((uVar15 != 0) * (uVar15 < 0x100) * (char)uVar15 -
                                        (0xff < uVar15),
                                        (uVar13 != 0) * (uVar13 < 0x100) * (char)uVar13 -
                                        (0xff < uVar13))));
    texture_buffer = texture_buffer + 1;
    texture_indices = texture_indices + 1;
    lightmap_indices = lightmap_indices + 1;
    *output_buffer =
         (uint)((uVar9 & g_BlueMask32) >> g_BlueBitShift) |
         (uint)((uVar9 & g_GreenMask32) >> g_GreenBlueBits) |
         (uint)((uVar9 & g_RedMask32) >> g_TotalColorBits) |
         (uint)(((uVar18 & g_BlueMask32) >> g_BlueBitShift |
                 (uVar18 & g_GreenMask32) >> g_GreenBlueBits |
                (uVar18 & g_RedMask32) >> g_TotalColorBits) << 0x10);
    output_buffer = output_buffer + 1;
    iVar6 = pixel_count + -2;
    bVar3 = 1 < pixel_count;
    pixel_count = iVar6;
  } while (iVar6 != 0 && bVar3);
  return;
}


// Assembly code:
// 00492f03: PUSH EBP
//   Label: core_dstrender.cpp_blendLightmapToTextureMMX_Variant2_FUN_00492f03
// 00492f04: MOV EBP,ESP
// 00492f06: PUSH ESI
// 00492f07: PUSH EDI
// 00492f08: PUSH EBP
// 00492f09: MOV ECX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x14] (READ)
// 00492f0c: MOV EDI,dword ptr [EBP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00492f0f: MOV ESI,dword ptr [EBP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00492f12: MOV EBX,dword ptr [EBP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 00492f15: MOV EBP,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x10] (READ)
// 00492f18: PXOR MM7,MM7
// 00492f1b: MOVD MM5,dword ptr [0x02d052a8]
//   XREF to: 02d052a8 (READ)
// 00492f22: PUNPCKLBW MM5,MM7
// 00492f25: PSLLW MM5,0x6
// 00492f29: MOV EAX,dword ptr [EBX]
// 00492f2b: MOV EAX,dword ptr [EBX + 0x20]
// 00492f2e: MOV EAX,dword ptr [EBX + 0x40]
// 00492f31: MOV EAX,dword ptr [EBX + 0x60]
// 00492f34: MOV EAX,dword ptr [EBX + 0x80]
// 00492f3a: MOV EAX,dword ptr [EBX + 0xa0]
// 00492f40: MOV EAX,dword ptr [EBX + 0xc0]
// 00492f46: MOV EAX,dword ptr [EBX + 0xe0]
// 00492f4c: MOV EAX,dword ptr [EBX + 0x100]
// 00492f52: MOV EAX,dword ptr [EBX + 0x120]
// 00492f58: MOV EDX,dword ptr [EBP]
// 00492f5b: MOV EDX,dword ptr [EBP + 0x20]
// 00492f5e: MOV EDX,dword ptr [EBP + 0x40]
// 00492f61: MOV EDX,dword ptr [EBP + 0x60]
// 00492f64: MOV EDX,dword ptr [EBP + 0x80]
// 00492f6a: MOV EDX,dword ptr [EBP + 0xa0]
// 00492f70: MOV EDX,dword ptr [EBP + 0xc0]
// 00492f76: MOV EDX,dword ptr [EBP + 0xe0]
// 00492f7c: MOV EDX,dword ptr [EBP + 0x100]
// 00492f82: MOV EDX,dword ptr [EBP + 0x120]
// 00492f88: MOV EAX,dword ptr [ESI]
// 00492f8a: MOV EAX,dword ptr [ESI + 0x20]
// 00492f8d: MOV EAX,dword ptr [ESI + 0x40]
// 00492f90: MOV EAX,dword ptr [ESI + 0x60]
// 00492f93: MOV EAX,dword ptr [ESI + 0x80]
// 00492f99: MOV EAX,dword ptr [ESI + 0xa0]
// 00492f9f: MOV EAX,dword ptr [ESI + 0xc0]
// 00492fa5: MOV EAX,dword ptr [ESI + 0xe0]
// 00492fab: MOV EAX,dword ptr [ESI + 0x100]
// 00492fb1: MOV EAX,dword ptr [ESI + 0x120]
// 00492fb7: MOV EAX,dword ptr [ESI + 0x140]
// 00492fbd: MOV EAX,dword ptr [ESI + 0x160]
// 00492fc3: MOV EAX,dword ptr [ESI + 0x180]
// 00492fc9: MOV EAX,dword ptr [ESI + 0x1a0]
// 00492fcf: MOV EAX,dword ptr [ESI + 0x1c0]
// 00492fd5: MOV EAX,dword ptr [ESI + 0x1e0]
// 00492fdb: MOV EAX,dword ptr [ESI + 0x200]
// 00492fe1: MOV EAX,dword ptr [ESI + 0x220]
// 00492fe7: MOV EAX,dword ptr [ESI + 0x240]
// 00492fed: MOV EAX,dword ptr [ESI + 0x260]
// 00492ff3: MOV EAX,dword ptr [ESI + 0x280]
// 00492ff9: MOV EAX,dword ptr [ESI + 0x2a0]
// 00492fff: MOV EAX,dword ptr [ESI + 0x2c0]
// 00493005: MOV EAX,dword ptr [ESI + 0x2e0]
// 0049300b: MOV EAX,dword ptr [ESI + 0x300]
// 00493011: MOV EAX,dword ptr [ESI + 0x320]
// 00493017: MOV EAX,dword ptr [ESI + 0x340]
// 0049301d: MOV EAX,dword ptr [ESI + 0x360]
// 00493023: MOV EAX,dword ptr [ESI + 0x380]
// 00493029: MOV EAX,dword ptr [ESI + 0x3a0]
// 0049302f: MOV EAX,dword ptr [ESI + 0x3c0]
// 00493035: MOV EAX,dword ptr [ESI + 0x3e0]
// 0049303b: MOV EAX,dword ptr [ESI + 0x400]
// 00493041: MOV EAX,dword ptr [ESI + 0x420]
// 00493047: MOV EAX,dword ptr [ESI + 0x440]
// 0049304d: MOV EAX,dword ptr [ESI + 0x460]
// 00493053: MOV EAX,dword ptr [ESI + 0x480]
// 00493059: MOV EAX,dword ptr [ESI + 0x4a0]
// 0049305f: MOV EAX,dword ptr [ESI + 0x4c0]
// 00493065: MOV EAX,dword ptr [ESI + 0x4e0]
// 0049306b: MOV EAX,dword ptr [ESI + 0x500]
// 00493071: MOV EAX,dword ptr [ESI + 0x520]
// 00493077: MOV EAX,dword ptr [ESI + 0x540]
// 0049307d: MOV EAX,dword ptr [ESI + 0x560]
// 00493083: MOV EAX,dword ptr [ESI + 0x580]
// 00493089: MOV EAX,dword ptr [ESI + 0x5a0]
// 0049308f: MOV EAX,dword ptr [ESI + 0x5c0]
// 00493095: MOV EAX,dword ptr [ESI + 0x5e0]
// 0049309b: MOV EAX,dword ptr [ESI + 0x600]
// 004930a1: MOV EAX,dword ptr [ESI + 0x620]
// 004930a7: MOV EAX,dword ptr [ESI + 0x640]
// 004930ad: MOV EAX,dword ptr [ESI + 0x660]
// 004930b3: MOV EAX,dword ptr [ESI + 0x680]
// 004930b9: MOV EAX,dword ptr [ESI + 0x6a0]
// 004930bf: MOV EAX,dword ptr [ESI + 0x6c0]
// 004930c5: MOV EAX,dword ptr [ESI + 0x6e0]
// 004930cb: MOV EAX,dword ptr [ESI + 0x700]
// 004930d1: MOV EAX,dword ptr [ESI + 0x720]
// 004930d7: MOV EAX,dword ptr [ESI + 0x740]
// 004930dd: MOV EAX,dword ptr [ESI + 0x760]
// 004930e3: MOV EAX,dword ptr [ESI + 0x780]
// 004930e9: MOV EAX,dword ptr [ESI + 0x7a0]
// 004930ef: MOV EAX,dword ptr [ESI + 0x7c0]
// 004930f5: MOV EAX,dword ptr [ESI + 0x7e0]
// 004930fb: MOV EAX,dword ptr [ESI + 0x800]
// 00493101: MOV EAX,dword ptr [ESI + 0x820]
// 00493107: MOV EAX,dword ptr [ESI + 0x840]
// 0049310d: MOV EAX,dword ptr [ESI + 0x860]
// 00493113: MOV EAX,dword ptr [ESI + 0x880]
// 00493119: MOV EAX,dword ptr [ESI + 0x8a0]
// 0049311f: MOV EAX,dword ptr [ESI + 0x8c0]
// 00493125: MOV EAX,dword ptr [ESI + 0x8e0]
// 0049312b: MOV EAX,dword ptr [ESI + 0x900]
// 00493131: MOV EAX,dword ptr [ESI + 0x920]
// 00493137: MOV EAX,dword ptr [ESI + 0x940]
// 0049313d: MOV EAX,dword ptr [ESI + 0x960]
// 00493143: MOV EAX,dword ptr [ESI + 0x980]
// 00493149: MOV EAX,dword ptr [ESI + 0x9a0]
// 0049314f: MOV EAX,dword ptr [ESI + 0x9c0]
// 00493155: MOV EAX,dword ptr [ESI + 0x9e0]
// 0049315b: MOV EAX,[0x00c19dfc]
//   XREF to: 00c19dfc (READ)
// 00493160: MOV EAX,[0x00c19e1c]
//   XREF to: 00c19e1c (READ)
// 00493165: MOV EAX,[0x00c19e3c]
//   XREF to: 00c19e3c (READ)
// 0049316a: MOV EAX,[0x00c19e5c]
//   XREF to: 00c19e5c (READ)
// 0049316f: MOV EAX,[0x00c19e7c]
//   XREF to: 00c19e7c (READ)
// 00493174: MOV EAX,[0x00c19e9c]
//   XREF to: 00c19e9c (READ)
// 00493179: MOV EAX,[0x00c19ebc]
//   XREF to: 00c19ebc (READ)
// 0049317e: MOV EAX,[0x00c19edc]
//   XREF to: 00c19edc (READ)
// 00493183: MOV EAX,[0x00c19efc]
//   XREF to: 00c19efc (READ)
// 00493188: MOV EAX,[0x00c19f1c]
//   XREF to: 00c19f1c (READ)
// 0049318d: MOV EAX,[0x00c19f3c]
//   XREF to: 00c19f3c (READ)
// 00493192: MOV EAX,[0x00c19f5c]
//   XREF to: 00c19f5c (READ)
// 00493197: MOV EAX,[0x00c19f7c]
//   XREF to: 00c19f7c (READ)
// 0049319c: MOV EAX,[0x00c19f9c]
//   XREF to: 00c19f9c (READ)
// 004931a1: MOV EAX,[0x00c19fbc]
//   XREF to: 00c19fbc (READ)
// 004931a6: MOV EAX,[0x00c19fdc]
//   XREF to: 00c19fdc (READ)
// 004931ab: MOV EAX,[0x00c19ffc]
//   XREF to: 00c19ffc (READ)
// 004931b0: MOV EAX,[0x00c1a01c]
//   XREF to: 00c1a01c (READ)
// 004931b5: MOV EAX,[0x00c1a03c]
//   XREF to: 00c1a03c (READ)
// 004931ba: MOV EAX,[0x00c1a05c]
//   XREF to: 00c1a05c (READ)
// 004931bf: MOV EAX,[0x00c1a07c]
//   XREF to: 00c1a07c (READ)
// 004931c4: MOV EAX,[0x00c1a09c]
//   XREF to: 00c1a09c (READ)
// 004931c9: MOV EAX,[0x00c1a0bc]
//   XREF to: 00c1a0bc (READ)
// 004931ce: MOV EAX,[0x00c1a0dc]
//   XREF to: 00c1a0dc (READ)
// 004931d3: MOV EAX,[0x00c1a0fc]
//   XREF to: 00c1a0fc (READ)
// 004931d8: MOV EAX,[0x00c1a11c]
//   XREF to: 00c1a11c (READ)
// 004931dd: MOV EAX,[0x00c1a13c]
//   XREF to: 00c1a13c (READ)
// 004931e2: MOV EAX,[0x00c1a15c]
//   XREF to: 00c1a15c (READ)
// 004931e7: MOV EAX,[0x00c1a17c]
//   XREF to: 00c1a17c (READ)
// 004931ec: MOV EAX,[0x00c1a19c]
//   XREF to: 00c1a19c (READ)
// 004931f1: MOV EAX,[0x00c1a1bc]
//   XREF to: 00c1a1bc (READ)
// 004931f6: MOV EAX,[0x00c1a1dc]
//   XREF to: 00c1a1dc (READ)
// 004931fb: MOV EAX,[0x006779f0]
//   XREF to: 006779f0 (READ)
// 00493200: MOV EAX,[0x00677a10]
//   XREF to: 00677a10 (READ)
// 00493205: MOV EAX,[0x00677a30]
//   XREF to: 00677a30 (READ)
// 0049320a: MOV EAX,[0x00677a50]
//   XREF to: 00677a50 (READ)
// 0049320f: MOV EAX,[0x00677a70]
//   XREF to: 00677a70 (READ)
// 00493214: MOV EAX,[0x00677a90]
//   XREF to: 00677a90 (READ)
// 00493219: MOV EAX,[0x00677ab0]
//   XREF to: 00677ab0 (READ)
// 0049321e: MOV EAX,[0x00677ad0]
//   XREF to: 00677ad0 (READ)
// 00493223: MOV EAX,[0x00677af0]
//   XREF to: 00677af0 (READ)
// 00493228: MOV EAX,[0x00677b10]
//   XREF to: 00677b10 (READ)
// 0049322d: MOV EAX,[0x00677b30]
//   XREF to: 00677b30 (READ)
// 00493232: MOV EAX,[0x00677b50]
//   XREF to: 00677b50 (READ)
// 00493237: MOV EAX,[0x00677b70]
//   XREF to: 00677b70 (READ)
// 0049323c: MOV EAX,[0x00677b90]
//   XREF to: 00677b90 (READ)
// 00493241: MOV EAX,[0x00677bb0]
//   XREF to: 00677bb0 (READ)
// 00493246: MOV EAX,[0x00677bd0]
//   XREF to: 00677bd0 (READ)
// 0049324b: MOV EAX,[0x00677bf0]
//   XREF to: 00677bf0 (READ)
// 00493250: MOV EAX,[0x00677c10]
//   XREF to: 00677c10 (READ)
// 00493255: MOV EAX,[0x00677c30]
//   XREF to: 00677c30 (READ)
// 0049325a: MOV EAX,[0x00677c50]
//   XREF to: 00677c50 (READ)
// 0049325f: MOV EAX,[0x00677c70]
//   XREF to: 00677c70 (READ)
// 00493264: MOV EAX,[0x00677c90]
//   XREF to: 00677c90 (READ)
// 00493269: MOV EAX,[0x00677cb0]
//   XREF to: 00677cb0 (READ)
// 0049326e: MOV EAX,[0x00677cd0]
//   XREF to: 00677cd0 (READ)
// 00493273: MOV EAX,[0x00677cf0]
//   XREF to: 00677cf0 (READ)
// 00493278: MOV EAX,[0x00677d10]
//   XREF to: 00677d10 (READ)
// 0049327d: MOV EAX,[0x00677d30]
//   XREF to: 00677d30 (READ)
// 00493282: MOV EAX,[0x00677d50]
//   XREF to: 00677d50 (READ)
// 00493287: MOV EAX,[0x00677d70]
//   XREF to: 00677d70 (READ)
// 0049328c: MOV EAX,[0x00677d90]
//   XREF to: 00677d90 (READ)
// 00493291: MOV EAX,[0x00677db0]
//   XREF to: 00677db0 (READ)
// 00493296: MOV EAX,[0x00677dd0]
//   XREF to: 00677dd0 (READ)
// 0049329b: MOV EAX,[0x00677df0]
//   XREF to: 00677df0 (READ)
// 004932a0: MOV EAX,[0x00677e10]
//   XREF to: 00677e10 (READ)
// 004932a5: MOV EAX,[0x00677e30]
//   XREF to: 00677e30 (READ)
// 004932aa: MOV EAX,[0x00677e50]
//   XREF to: 00677e50 (READ)
// 004932af: MOV EAX,[0x00677e70]
//   XREF to: 00677e70 (READ)
// 004932b4: MOV EAX,[0x00677e90]
//   XREF to: 00677e90 (READ)
// 004932b9: MOV EAX,[0x00677eb0]
//   XREF to: 00677eb0 (READ)
// 004932be: MOV EAX,[0x00677ed0]
//   XREF to: 00677ed0 (READ)
// 004932c3: MOV EAX,[0x00677ef0]
//   XREF to: 00677ef0 (READ)
// 004932c8: MOV EAX,[0x00677f10]
//   XREF to: 00677f10 (READ)
// 004932cd: MOV EAX,[0x00677f30]
//   XREF to: 00677f30 (READ)
// 004932d2: MOV EAX,[0x00677f50]
//   XREF to: 00677f50 (READ)
// 004932d7: MOV EAX,[0x00677f70]
//   XREF to: 00677f70 (READ)
// 004932dc: MOV EAX,[0x00677f90]
//   XREF to: 00677f90 (READ)
// 004932e1: MOV EAX,[0x00677fb0]
//   XREF to: 00677fb0 (READ)
// 004932e6: MOV EAX,[0x00677fd0]
//   XREF to: 00677fd0 (READ)
// 004932eb: MOV EAX,[0x00677ff0]
//   XREF to: 00677ff0 (READ)
// 004932f0: MOV EAX,[0x00678010]
//   XREF to: 00678010 (READ)
// 004932f5: MOV EAX,[0x00678030]
//   XREF to: 00678030 (READ)
// 004932fa: MOV EAX,[0x00678050]
//   XREF to: 00678050 (READ)
// 004932ff: MOV EAX,[0x00678070]
//   XREF to: 00678070 (READ)
// 00493304: MOV EAX,[0x00678090]
//   XREF to: 00678090 (READ)
// 00493309: MOV EAX,[0x006780b0]
//   XREF to: 006780b0 (READ)
// 0049330e: MOV EAX,[0x006780d0]
//   XREF to: 006780d0 (READ)
// 00493313: MOV EAX,[0x006780f0]
//   XREF to: 006780f0 (READ)
// 00493318: MOV EAX,[0x00678110]
//   XREF to: 00678110 (READ)
// 0049331d: MOV EAX,[0x00678130]
//   XREF to: 00678130 (READ)
// 00493322: MOV EAX,[0x00678150]
//   XREF to: 00678150 (READ)
// 00493327: MOV EAX,[0x00678170]
//   XREF to: 00678170 (READ)
// 0049332c: MOV EAX,[0x00678190]
//   XREF to: 00678190 (READ)
// 00493331: MOV EAX,[0x006781b0]
//   XREF to: 006781b0 (READ)
// 00493336: MOV EAX,[0x006781d0]
//   XREF to: 006781d0 (READ)
// 0049333b: JMP 0x00493340
//   XREF to: 00493340 (UNCONDITIONAL_JUMP)
// 00493340: MOVZX EDX,byte ptr [EBX]
//   Label: LAB_00493340
// 00493343: MOVQ MM0,qword ptr [ESI]
// 00493346: MOVD MM2,dword ptr [EDX*0x4 + 0xc19dfc]
//   XREF to: 00c19dfc (DATA)
// 0049334e: MOVZX EDX,byte ptr [EBX + 0x1]
// 00493352: MOVZX EAX,byte ptr [EBP]
// 00493356: MOVD MM6,dword ptr [EDX*0x4 + 0xc19dfc]
//   XREF to: 00c19dfc (DATA)
// 0049335e: MOVQ MM1,MM0
// 00493361: PUNPCKLBW MM6,MM7
// 00493364: PUNPCKLBW MM0,MM7
// 00493367: SHR EDX,0x1
// 00493369: PSRLQ MM1,0x20
// 0049336d: PUNPCKLBW MM2,MM7
// 00493370: ADD EAX,EDX
// 00493372: PADDW MM6,MM2
// 00493375: PUNPCKLBW MM1,MM7
// 00493378: PMULLW MM0,MM2
// 0049337b: PSRLW MM6,0x1
// 0049337f: MOVQ MM3,qword ptr [EAX*0x8 + 0x6779f0]
//   XREF to: 006779f0 (DATA)
// 00493387: PMULLW MM1,MM6
// 0049338a: MOVQ MM2,MM3
// 0049338d: MOVQ MM4,MM5
// 00493390: PXOR MM2,qword ptr [0x006781e8]
//   XREF to: 006781e8 (READ)
// 00493397: PMULHW MM0,MM2
// 0049339a: PMULHW MM1,MM2
// 0049339d: PMULHW MM4,MM3
// 004933a0: PADDW MM0,MM4
// 004933a3: PADDW MM1,MM4
// 004933a6: PADDW MM0,qword ptr [0x00676498]
//   XREF to: 00676498 (READ)
// 004933ad: PADDW MM1,qword ptr [0x006764a0]
//   XREF to: 006764a0 (READ)
// 004933b4: PSRLW MM0,0x4
// 004933b8: PSRLW MM1,0x4
// 004933bc: PACKUSWB MM0,MM7
// 004933bf: PACKUSWB MM1,MM7
// 004933c2: MOVQ MM2,MM0
// 004933c5: MOVQ MM3,MM0
// 004933c8: PAND MM0,qword ptr [0x006827a0]
//   XREF to: 006827a0 (READ)
// 004933cf: PAND MM2,qword ptr [0x00682780]
//   XREF to: 00682780 (READ)
// 004933d6: PAND MM3,qword ptr [0x00682760]
//   XREF to: 00682760 (READ)
// 004933dd: PSRLQ MM0,qword ptr [0x006827e8]
//   XREF to: 006827e8 (READ)
// 004933e4: PSRLQ MM2,qword ptr [0x006827c8]
//   XREF to: 006827c8 (READ)
// 004933eb: PSRLQ MM3,qword ptr [0x006827a8]
//   XREF to: 006827a8 (READ)
// 004933f2: POR MM0,MM2
// 004933f5: POR MM0,MM3
// 004933f8: MOVQ MM2,MM1
// 004933fb: MOVQ MM3,MM1
// 004933fe: PAND MM1,qword ptr [0x006827a0]
//   XREF to: 006827a0 (READ)
// 00493405: PAND MM2,qword ptr [0x00682780]
//   XREF to: 00682780 (READ)
// 0049340c: PAND MM3,qword ptr [0x00682760]
//   XREF to: 00682760 (READ)
// 00493413: PSRLQ MM1,qword ptr [0x006827e8]
//   XREF to: 006827e8 (READ)
// 0049341a: PSRLQ MM2,qword ptr [0x006827c8]
//   XREF to: 006827c8 (READ)
// 00493421: PSRLQ MM3,qword ptr [0x006827a8]
//   XREF to: 006827a8 (READ)
// 00493428: POR MM1,MM2
// 0049342b: POR MM1,MM3
// 0049342e: PSLLQ MM1,0x10
// 00493432: POR MM0,MM1
// 00493435: ADD ESI,0x8
// 00493438: INC EBX
// 00493439: INC EBP
// 0049343a: MOVD dword ptr [EDI],MM0
// 0049343d: ADD EDI,0x4
// 00493440: SUB ECX,0x2
// 00493443: JG 0x00493340
//   XREF to: 00493340 (CONDITIONAL_JUMP)
// 00493449: POP EBP
// 0049344a: EMMS
// 0049344c: POP EDI
// 0049344d: POP ESI
// 0049344e: LEAVE
// 0049344f: RET
