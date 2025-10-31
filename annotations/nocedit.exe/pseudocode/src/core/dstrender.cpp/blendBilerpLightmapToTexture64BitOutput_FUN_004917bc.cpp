// Name: core_dstrender.cpp_blendBilerpLightmapToTexture64BitOutput_FUN_004917bc
// Address: 004917bc
// Address Range: [[004917bc, 00491bf5] [00491c00, 00491c99]]
// Convention: __cdecl
// Signature: void core_dstrender.cpp_blendBilerpLightmapToTexture64BitOutput_FUN_004917bc(ulonglong * output_buffer, ulonglong * texture_buffer, byte * texture_indices, byte * lightmap_indices, int pixel_count)
// Cross-references:
//   core_dcamera.cpp_CDemonCamera_compositeLightmapToFramebuffer_FUN_00453270 (00453270) at 004535a0 [UNCONDITIONAL_CALL]
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
core_dstrender_cpp_blendBilerpLightmapToTexture64BitOutput_FUN_004917bc
          (ulonglong *output_buffer,ulonglong *texture_buffer,byte *texture_indices,
          byte *lightmap_indices,int pixel_count)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ushort uVar8;
  ushort uVar10;
  ushort uVar11;
  undefined8 uVar9;
  ushort uVar12;
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
    uVar1 = *texture_buffer;
    uVar2 = g_LightmapTexturePalette[*texture_indices];
    uVar3 = g_LightmapTexturePalette[texture_indices[1]];
    uVar5 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(uVar3 >> 0x18) << 0x30) >> 0x28),
                                            CONCAT14((char)(uVar3 >> 0x10),uVar3)) >> 0x20),uVar3)
                  >> 0x18);
    uVar25 = (uint5)uVar5 & 0xffffffff00;
    uVar8 = (ushort)(((uint7)(byte)(uVar1 >> 0x18) << 0x30) >> 0x28);
    uVar6 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(uVar2 >> 0x18) << 0x30) >> 0x28),
                                            CONCAT14((char)(uVar2 >> 0x10),uVar2)) >> 0x20),uVar2)
                  >> 0x18);
    uVar19 = (uint5)uVar6 & 0xffffffff00;
    uVar12 = (ushort)(CONCAT43(uVar6,CONCAT12((char)(uVar2 >> 8),(ushort)uVar2)) >> 0x10) & 0xff;
    uVar11 = (ushort)uVar2 & 0xff;
    sVar20 = (short)(uVar19 >> 8);
    sVar21 = (short)(uVar19 >> 0x18);
    uVar10 = (ushort)(((uint7)(byte)(uVar1 >> 0x38) << 0x30) >> 0x28);
    uVar18 = *(ulonglong *)
              (g_LightmapData + ((uint)*lightmap_indices + (uint)(texture_indices[1] >> 1)) * 4) ^
             (ulonglong)g_LightmapXorMask;
    uVar9 = pmulhw(CONCAT26((uVar8 >> 8) * sVar21,
                            CONCAT24((short)CONCAT21(uVar8,(char)(uVar1 >> 0x10)) * sVar20,
                                     CONCAT22((byte)(uVar1 >> 8) * uVar12,(byte)uVar1 * uVar11))),
                   uVar18);
    uVar14 = pmulhw(CONCAT26((uVar10 >> 8) * ((ushort)((short)(uVar25 >> 0x18) + sVar21) >> 1),
                             CONCAT24((short)CONCAT21(uVar10,(char)(uVar1 >> 0x30)) *
                                      ((ushort)((short)(uVar25 >> 8) + sVar20) >> 1),
                                      CONCAT22((ushort)(byte)(uVar1 >> 0x28) *
                                               ((ushort)(((ushort)(CONCAT43(uVar5,CONCAT12((char)(
                                                  uVar3 >> 8),(ushort)uVar3)) >> 0x10) & 0xff) +
                                                  uVar12) >> 1),
                                               ((ushort)(uVar1 >> 0x20) & 0xff) *
                                               ((ushort)(((ushort)uVar3 & 0xff) + uVar11) >> 1)))),
                    uVar18);
    uVar22 = pmulhw(uVar24,*(ulonglong *)
                            (g_LightmapData +
                            ((uint)*lightmap_indices + (uint)(texture_indices[1] >> 1)) * 4));
    sVar20 = (short)((ulonglong)uVar22 >> 0x10);
    sVar21 = (short)((ulonglong)uVar22 >> 0x20);
    sVar23 = (short)((ulonglong)uVar22 >> 0x30);
    uVar8 = (ushort)((short)uVar9 + (short)uVar22 + (short)g_LightmapBlendBias1) >> 4;
    uVar10 = (ushort)((short)((ulonglong)uVar9 >> 0x10) + sVar20 +
                     (short)(g_LightmapBlendBias1 >> 0x10)) >> 4;
    uVar11 = (ushort)((short)((ulonglong)uVar9 >> 0x20) + sVar21 +
                     (short)(g_LightmapBlendBias1 >> 0x20)) >> 4;
    uVar12 = (ushort)((short)((ulonglong)uVar9 >> 0x30) + sVar23 +
                     (short)(g_LightmapBlendBias1 >> 0x30)) >> 4;
    uVar13 = (ushort)((short)uVar14 + (short)uVar22 + (short)g_LightmapBlendBias2) >> 4;
    uVar15 = (ushort)((short)((ulonglong)uVar14 >> 0x10) + sVar20 +
                     (short)(g_LightmapBlendBias2 >> 0x10)) >> 4;
    uVar16 = (ushort)((short)((ulonglong)uVar14 >> 0x20) + sVar21 +
                     (short)(g_LightmapBlendBias2 >> 0x20)) >> 4;
    uVar17 = (ushort)((short)((ulonglong)uVar14 >> 0x30) + sVar23 +
                     (short)(g_LightmapBlendBias2 >> 0x30)) >> 4;
    texture_buffer = texture_buffer + 1;
    texture_indices = texture_indices + 1;
    lightmap_indices = lightmap_indices + 1;
    *output_buffer =
         CONCAT17((uVar17 != 0) * (uVar17 < 0x100) * (char)uVar17 - (0xff < uVar17),
                  CONCAT16((uVar16 != 0) * (uVar16 < 0x100) * (char)uVar16 - (0xff < uVar16),
                           CONCAT15((uVar15 != 0) * (uVar15 < 0x100) * (char)uVar15 -
                                    (0xff < uVar15),
                                    CONCAT14((uVar13 != 0) * (uVar13 < 0x100) * (char)uVar13 -
                                             (0xff < uVar13),
                                             CONCAT13((uVar12 != 0) * (uVar12 < 0x100) *
                                                      (char)uVar12 - (0xff < uVar12),
                                                      CONCAT12((uVar11 != 0) * (uVar11 < 0x100) *
                                                               (char)uVar11 - (0xff < uVar11),
                                                               CONCAT11((uVar10 != 0) *
                                                                        (uVar10 < 0x100) *
                                                                        (char)uVar10 -
                                                                        (0xff < uVar10),
                                                                        (uVar8 != 0) *
                                                                        (uVar8 < 0x100) *
                                                                        (char)uVar8 - (0xff < uVar8)
                                                                       )))))));
    output_buffer = output_buffer + 1;
    iVar7 = pixel_count + -2;
    bVar4 = 1 < pixel_count;
    pixel_count = iVar7;
  } while (iVar7 != 0 && bVar4);
  return;
}


// Assembly code:
// 004917bc: PUSH EBP
//   Label: core_dstrender.cpp_blendBilerpLightmapToTexture64BitOutput_FUN_004917bc
// 004917bd: MOV EBP,ESP
// 004917bf: PUSH ESI
// 004917c0: PUSH EDI
// 004917c1: PUSH EBP
// 004917c2: MOV ECX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x14] (READ)
// 004917c5: MOV EDI,dword ptr [EBP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004917c8: MOV ESI,dword ptr [EBP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 004917cb: MOV EBX,dword ptr [EBP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 004917ce: MOV EBP,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x10] (READ)
// 004917d1: PXOR MM7,MM7
// 004917d4: MOVD MM5,dword ptr [0x02d052a8]
//   XREF to: 02d052a8 (READ)
// 004917db: PUNPCKLBW MM5,MM7
// 004917de: PSLLW MM5,0x6
// 004917e2: MOV EAX,dword ptr [EBX]
// 004917e4: MOV EAX,dword ptr [EBX + 0x20]
// 004917e7: MOV EAX,dword ptr [EBX + 0x40]
// 004917ea: MOV EAX,dword ptr [EBX + 0x60]
// 004917ed: MOV EAX,dword ptr [EBX + 0x80]
// 004917f3: MOV EAX,dword ptr [EBX + 0xa0]
// 004917f9: MOV EAX,dword ptr [EBX + 0xc0]
// 004917ff: MOV EAX,dword ptr [EBX + 0xe0]
// 00491805: MOV EAX,dword ptr [EBX + 0x100]
// 0049180b: MOV EAX,dword ptr [EBX + 0x120]
// 00491811: MOV EDX,dword ptr [EBP]
// 00491814: MOV EDX,dword ptr [EBP + 0x20]
// 00491817: MOV EDX,dword ptr [EBP + 0x40]
// 0049181a: MOV EDX,dword ptr [EBP + 0x60]
// 0049181d: MOV EDX,dword ptr [EBP + 0x80]
// 00491823: MOV EDX,dword ptr [EBP + 0xa0]
// 00491829: MOV EDX,dword ptr [EBP + 0xc0]
// 0049182f: MOV EDX,dword ptr [EBP + 0xe0]
// 00491835: MOV EDX,dword ptr [EBP + 0x100]
// 0049183b: MOV EDX,dword ptr [EBP + 0x120]
// 00491841: MOV EAX,dword ptr [ESI]
// 00491843: MOV EAX,dword ptr [ESI + 0x20]
// 00491846: MOV EAX,dword ptr [ESI + 0x40]
// 00491849: MOV EAX,dword ptr [ESI + 0x60]
// 0049184c: MOV EAX,dword ptr [ESI + 0x80]
// 00491852: MOV EAX,dword ptr [ESI + 0xa0]
// 00491858: MOV EAX,dword ptr [ESI + 0xc0]
// 0049185e: MOV EAX,dword ptr [ESI + 0xe0]
// 00491864: MOV EAX,dword ptr [ESI + 0x100]
// 0049186a: MOV EAX,dword ptr [ESI + 0x120]
// 00491870: MOV EAX,dword ptr [ESI + 0x140]
// 00491876: MOV EAX,dword ptr [ESI + 0x160]
// 0049187c: MOV EAX,dword ptr [ESI + 0x180]
// 00491882: MOV EAX,dword ptr [ESI + 0x1a0]
// 00491888: MOV EAX,dword ptr [ESI + 0x1c0]
// 0049188e: MOV EAX,dword ptr [ESI + 0x1e0]
// 00491894: MOV EAX,dword ptr [ESI + 0x200]
// 0049189a: MOV EAX,dword ptr [ESI + 0x220]
// 004918a0: MOV EAX,dword ptr [ESI + 0x240]
// 004918a6: MOV EAX,dword ptr [ESI + 0x260]
// 004918ac: MOV EAX,dword ptr [ESI + 0x280]
// 004918b2: MOV EAX,dword ptr [ESI + 0x2a0]
// 004918b8: MOV EAX,dword ptr [ESI + 0x2c0]
// 004918be: MOV EAX,dword ptr [ESI + 0x2e0]
// 004918c4: MOV EAX,dword ptr [ESI + 0x300]
// 004918ca: MOV EAX,dword ptr [ESI + 0x320]
// 004918d0: MOV EAX,dword ptr [ESI + 0x340]
// 004918d6: MOV EAX,dword ptr [ESI + 0x360]
// 004918dc: MOV EAX,dword ptr [ESI + 0x380]
// 004918e2: MOV EAX,dword ptr [ESI + 0x3a0]
// 004918e8: MOV EAX,dword ptr [ESI + 0x3c0]
// 004918ee: MOV EAX,dword ptr [ESI + 0x3e0]
// 004918f4: MOV EAX,dword ptr [ESI + 0x400]
// 004918fa: MOV EAX,dword ptr [ESI + 0x420]
// 00491900: MOV EAX,dword ptr [ESI + 0x440]
// 00491906: MOV EAX,dword ptr [ESI + 0x460]
// 0049190c: MOV EAX,dword ptr [ESI + 0x480]
// 00491912: MOV EAX,dword ptr [ESI + 0x4a0]
// 00491918: MOV EAX,dword ptr [ESI + 0x4c0]
// 0049191e: MOV EAX,dword ptr [ESI + 0x4e0]
// 00491924: MOV EAX,dword ptr [ESI + 0x500]
// 0049192a: MOV EAX,dword ptr [ESI + 0x520]
// 00491930: MOV EAX,dword ptr [ESI + 0x540]
// 00491936: MOV EAX,dword ptr [ESI + 0x560]
// 0049193c: MOV EAX,dword ptr [ESI + 0x580]
// 00491942: MOV EAX,dword ptr [ESI + 0x5a0]
// 00491948: MOV EAX,dword ptr [ESI + 0x5c0]
// 0049194e: MOV EAX,dword ptr [ESI + 0x5e0]
// 00491954: MOV EAX,dword ptr [ESI + 0x600]
// 0049195a: MOV EAX,dword ptr [ESI + 0x620]
// 00491960: MOV EAX,dword ptr [ESI + 0x640]
// 00491966: MOV EAX,dword ptr [ESI + 0x660]
// 0049196c: MOV EAX,dword ptr [ESI + 0x680]
// 00491972: MOV EAX,dword ptr [ESI + 0x6a0]
// 00491978: MOV EAX,dword ptr [ESI + 0x6c0]
// 0049197e: MOV EAX,dword ptr [ESI + 0x6e0]
// 00491984: MOV EAX,dword ptr [ESI + 0x700]
// 0049198a: MOV EAX,dword ptr [ESI + 0x720]
// 00491990: MOV EAX,dword ptr [ESI + 0x740]
// 00491996: MOV EAX,dword ptr [ESI + 0x760]
// 0049199c: MOV EAX,dword ptr [ESI + 0x780]
// 004919a2: MOV EAX,dword ptr [ESI + 0x7a0]
// 004919a8: MOV EAX,dword ptr [ESI + 0x7c0]
// 004919ae: MOV EAX,dword ptr [ESI + 0x7e0]
// 004919b4: MOV EAX,dword ptr [ESI + 0x800]
// 004919ba: MOV EAX,dword ptr [ESI + 0x820]
// 004919c0: MOV EAX,dword ptr [ESI + 0x840]
// 004919c6: MOV EAX,dword ptr [ESI + 0x860]
// 004919cc: MOV EAX,dword ptr [ESI + 0x880]
// 004919d2: MOV EAX,dword ptr [ESI + 0x8a0]
// 004919d8: MOV EAX,dword ptr [ESI + 0x8c0]
// 004919de: MOV EAX,dword ptr [ESI + 0x8e0]
// 004919e4: MOV EAX,dword ptr [ESI + 0x900]
// 004919ea: MOV EAX,dword ptr [ESI + 0x920]
// 004919f0: MOV EAX,dword ptr [ESI + 0x940]
// 004919f6: MOV EAX,dword ptr [ESI + 0x960]
// 004919fc: MOV EAX,dword ptr [ESI + 0x980]
// 00491a02: MOV EAX,dword ptr [ESI + 0x9a0]
// 00491a08: MOV EAX,dword ptr [ESI + 0x9c0]
// 00491a0e: MOV EAX,dword ptr [ESI + 0x9e0]
// 00491a14: MOV EAX,[0x00c19dfc]
//   XREF to: 00c19dfc (READ)
// 00491a19: MOV EAX,[0x00c19e1c]
//   XREF to: 00c19e1c (READ)
// 00491a1e: MOV EAX,[0x00c19e3c]
//   XREF to: 00c19e3c (READ)
// 00491a23: MOV EAX,[0x00c19e5c]
//   XREF to: 00c19e5c (READ)
// 00491a28: MOV EAX,[0x00c19e7c]
//   XREF to: 00c19e7c (READ)
// 00491a2d: MOV EAX,[0x00c19e9c]
//   XREF to: 00c19e9c (READ)
// 00491a32: MOV EAX,[0x00c19ebc]
//   XREF to: 00c19ebc (READ)
// 00491a37: MOV EAX,[0x00c19edc]
//   XREF to: 00c19edc (READ)
// 00491a3c: MOV EAX,[0x00c19efc]
//   XREF to: 00c19efc (READ)
// 00491a41: MOV EAX,[0x00c19f1c]
//   XREF to: 00c19f1c (READ)
// 00491a46: MOV EAX,[0x00c19f3c]
//   XREF to: 00c19f3c (READ)
// 00491a4b: MOV EAX,[0x00c19f5c]
//   XREF to: 00c19f5c (READ)
// 00491a50: MOV EAX,[0x00c19f7c]
//   XREF to: 00c19f7c (READ)
// 00491a55: MOV EAX,[0x00c19f9c]
//   XREF to: 00c19f9c (READ)
// 00491a5a: MOV EAX,[0x00c19fbc]
//   XREF to: 00c19fbc (READ)
// 00491a5f: MOV EAX,[0x00c19fdc]
//   XREF to: 00c19fdc (READ)
// 00491a64: MOV EAX,[0x00c19ffc]
//   XREF to: 00c19ffc (READ)
// 00491a69: MOV EAX,[0x00c1a01c]
//   XREF to: 00c1a01c (READ)
// 00491a6e: MOV EAX,[0x00c1a03c]
//   XREF to: 00c1a03c (READ)
// 00491a73: MOV EAX,[0x00c1a05c]
//   XREF to: 00c1a05c (READ)
// 00491a78: MOV EAX,[0x00c1a07c]
//   XREF to: 00c1a07c (READ)
// 00491a7d: MOV EAX,[0x00c1a09c]
//   XREF to: 00c1a09c (READ)
// 00491a82: MOV EAX,[0x00c1a0bc]
//   XREF to: 00c1a0bc (READ)
// 00491a87: MOV EAX,[0x00c1a0dc]
//   XREF to: 00c1a0dc (READ)
// 00491a8c: MOV EAX,[0x00c1a0fc]
//   XREF to: 00c1a0fc (READ)
// 00491a91: MOV EAX,[0x00c1a11c]
//   XREF to: 00c1a11c (READ)
// 00491a96: MOV EAX,[0x00c1a13c]
//   XREF to: 00c1a13c (READ)
// 00491a9b: MOV EAX,[0x00c1a15c]
//   XREF to: 00c1a15c (READ)
// 00491aa0: MOV EAX,[0x00c1a17c]
//   XREF to: 00c1a17c (READ)
// 00491aa5: MOV EAX,[0x00c1a19c]
//   XREF to: 00c1a19c (READ)
// 00491aaa: MOV EAX,[0x00c1a1bc]
//   XREF to: 00c1a1bc (READ)
// 00491aaf: MOV EAX,[0x00c1a1dc]
//   XREF to: 00c1a1dc (READ)
// 00491ab4: MOV EAX,[0x006779f0]
//   XREF to: 006779f0 (READ)
// 00491ab9: MOV EAX,[0x00677a10]
//   XREF to: 00677a10 (READ)
// 00491abe: MOV EAX,[0x00677a30]
//   XREF to: 00677a30 (READ)
// 00491ac3: MOV EAX,[0x00677a50]
//   XREF to: 00677a50 (READ)
// 00491ac8: MOV EAX,[0x00677a70]
//   XREF to: 00677a70 (READ)
// 00491acd: MOV EAX,[0x00677a90]
//   XREF to: 00677a90 (READ)
// 00491ad2: MOV EAX,[0x00677ab0]
//   XREF to: 00677ab0 (READ)
// 00491ad7: MOV EAX,[0x00677ad0]
//   XREF to: 00677ad0 (READ)
// 00491adc: MOV EAX,[0x00677af0]
//   XREF to: 00677af0 (READ)
// 00491ae1: MOV EAX,[0x00677b10]
//   XREF to: 00677b10 (READ)
// 00491ae6: MOV EAX,[0x00677b30]
//   XREF to: 00677b30 (READ)
// 00491aeb: MOV EAX,[0x00677b50]
//   XREF to: 00677b50 (READ)
// 00491af0: MOV EAX,[0x00677b70]
//   XREF to: 00677b70 (READ)
// 00491af5: MOV EAX,[0x00677b90]
//   XREF to: 00677b90 (READ)
// 00491afa: MOV EAX,[0x00677bb0]
//   XREF to: 00677bb0 (READ)
// 00491aff: MOV EAX,[0x00677bd0]
//   XREF to: 00677bd0 (READ)
// 00491b04: MOV EAX,[0x00677bf0]
//   XREF to: 00677bf0 (READ)
// 00491b09: MOV EAX,[0x00677c10]
//   XREF to: 00677c10 (READ)
// 00491b0e: MOV EAX,[0x00677c30]
//   XREF to: 00677c30 (READ)
// 00491b13: MOV EAX,[0x00677c50]
//   XREF to: 00677c50 (READ)
// 00491b18: MOV EAX,[0x00677c70]
//   XREF to: 00677c70 (READ)
// 00491b1d: MOV EAX,[0x00677c90]
//   XREF to: 00677c90 (READ)
// 00491b22: MOV EAX,[0x00677cb0]
//   XREF to: 00677cb0 (READ)
// 00491b27: MOV EAX,[0x00677cd0]
//   XREF to: 00677cd0 (READ)
// 00491b2c: MOV EAX,[0x00677cf0]
//   XREF to: 00677cf0 (READ)
// 00491b31: MOV EAX,[0x00677d10]
//   XREF to: 00677d10 (READ)
// 00491b36: MOV EAX,[0x00677d30]
//   XREF to: 00677d30 (READ)
// 00491b3b: MOV EAX,[0x00677d50]
//   XREF to: 00677d50 (READ)
// 00491b40: MOV EAX,[0x00677d70]
//   XREF to: 00677d70 (READ)
// 00491b45: MOV EAX,[0x00677d90]
//   XREF to: 00677d90 (READ)
// 00491b4a: MOV EAX,[0x00677db0]
//   XREF to: 00677db0 (READ)
// 00491b4f: MOV EAX,[0x00677dd0]
//   XREF to: 00677dd0 (READ)
// 00491b54: MOV EAX,[0x00677df0]
//   XREF to: 00677df0 (READ)
// 00491b59: MOV EAX,[0x00677e10]
//   XREF to: 00677e10 (READ)
// 00491b5e: MOV EAX,[0x00677e30]
//   XREF to: 00677e30 (READ)
// 00491b63: MOV EAX,[0x00677e50]
//   XREF to: 00677e50 (READ)
// 00491b68: MOV EAX,[0x00677e70]
//   XREF to: 00677e70 (READ)
// 00491b6d: MOV EAX,[0x00677e90]
//   XREF to: 00677e90 (READ)
// 00491b72: MOV EAX,[0x00677eb0]
//   XREF to: 00677eb0 (READ)
// 00491b77: MOV EAX,[0x00677ed0]
//   XREF to: 00677ed0 (READ)
// 00491b7c: MOV EAX,[0x00677ef0]
//   XREF to: 00677ef0 (READ)
// 00491b81: MOV EAX,[0x00677f10]
//   XREF to: 00677f10 (READ)
// 00491b86: MOV EAX,[0x00677f30]
//   XREF to: 00677f30 (READ)
// 00491b8b: MOV EAX,[0x00677f50]
//   XREF to: 00677f50 (READ)
// 00491b90: MOV EAX,[0x00677f70]
//   XREF to: 00677f70 (READ)
// 00491b95: MOV EAX,[0x00677f90]
//   XREF to: 00677f90 (READ)
// 00491b9a: MOV EAX,[0x00677fb0]
//   XREF to: 00677fb0 (READ)
// 00491b9f: MOV EAX,[0x00677fd0]
//   XREF to: 00677fd0 (READ)
// 00491ba4: MOV EAX,[0x00677ff0]
//   XREF to: 00677ff0 (READ)
// 00491ba9: MOV EAX,[0x00678010]
//   XREF to: 00678010 (READ)
// 00491bae: MOV EAX,[0x00678030]
//   XREF to: 00678030 (READ)
// 00491bb3: MOV EAX,[0x00678050]
//   XREF to: 00678050 (READ)
// 00491bb8: MOV EAX,[0x00678070]
//   XREF to: 00678070 (READ)
// 00491bbd: MOV EAX,[0x00678090]
//   XREF to: 00678090 (READ)
// 00491bc2: MOV EAX,[0x006780b0]
//   XREF to: 006780b0 (READ)
// 00491bc7: MOV EAX,[0x006780d0]
//   XREF to: 006780d0 (READ)
// 00491bcc: MOV EAX,[0x006780f0]
//   XREF to: 006780f0 (READ)
// 00491bd1: MOV EAX,[0x00678110]
//   XREF to: 00678110 (READ)
// 00491bd6: MOV EAX,[0x00678130]
//   XREF to: 00678130 (READ)
// 00491bdb: MOV EAX,[0x00678150]
//   XREF to: 00678150 (READ)
// 00491be0: MOV EAX,[0x00678170]
//   XREF to: 00678170 (READ)
// 00491be5: MOV EAX,[0x00678190]
//   XREF to: 00678190 (READ)
// 00491bea: MOV EAX,[0x006781b0]
//   XREF to: 006781b0 (READ)
// 00491bef: MOV EAX,[0x006781d0]
//   XREF to: 006781d0 (READ)
// 00491bf4: JMP 0x00491c00
//   XREF to: 00491c00 (UNCONDITIONAL_JUMP)
// 00491c00: MOVZX EDX,byte ptr [EBX]
//   Label: LAB_00491c00
// 00491c03: MOVQ MM0,qword ptr [ESI]
// 00491c06: MOVD MM2,dword ptr [EDX*0x4 + 0xc19dfc]
//   XREF to: 00c19dfc (DATA)
// 00491c0e: MOVZX EDX,byte ptr [EBX + 0x1]
// 00491c12: MOVZX EAX,byte ptr [EBP]
// 00491c16: MOVD MM6,dword ptr [EDX*0x4 + 0xc19dfc]
//   XREF to: 00c19dfc (DATA)
// 00491c1e: MOVQ MM1,MM0
// 00491c21: PUNPCKLBW MM6,MM7
// 00491c24: PUNPCKLBW MM0,MM7
// 00491c27: SHR EDX,0x1
// 00491c29: PSRLQ MM1,0x20
// 00491c2d: PUNPCKLBW MM2,MM7
// 00491c30: ADD EAX,EDX
// 00491c32: PADDW MM6,MM2
// 00491c35: PUNPCKLBW MM1,MM7
// 00491c38: PMULLW MM0,MM2
// 00491c3b: PSRLW MM6,0x1
// 00491c3f: MOVQ MM3,qword ptr [EAX*0x8 + 0x6779f0]
//   XREF to: 006779f0 (DATA)
// 00491c47: PMULLW MM1,MM6
// 00491c4a: MOVQ MM2,MM3
// 00491c4d: MOVQ MM4,MM5
// 00491c50: PXOR MM2,qword ptr [0x006781e8]
//   XREF to: 006781e8 (READ)
// 00491c57: PMULHW MM0,MM2
// 00491c5a: PMULHW MM1,MM2
// 00491c5d: PMULHW MM4,MM3
// 00491c60: PADDW MM0,MM4
// 00491c63: PADDW MM1,MM4
// 00491c66: PADDW MM0,qword ptr [0x00676478]
//   XREF to: 00676478 (READ)
// 00491c6d: PADDW MM1,qword ptr [0x00676480]
//   XREF to: 00676480 (READ)
// 00491c74: PSRLW MM0,0x4
// 00491c78: PSRLW MM1,0x4
// 00491c7c: PACKUSWB MM0,MM1
// 00491c7f: ADD ESI,0x8
// 00491c82: INC EBX
// 00491c83: INC EBP
// 00491c84: MOVQ qword ptr [EDI],MM0
// 00491c87: ADD EDI,0x8
// 00491c8a: SUB ECX,0x2
// 00491c8d: JG 0x00491c00
//   XREF to: 00491c00 (CONDITIONAL_JUMP)
// 00491c93: POP EBP
// 00491c94: EMMS
// 00491c96: POP EDI
// 00491c97: POP ESI
// 00491c98: LEAVE
// 00491c99: RET
