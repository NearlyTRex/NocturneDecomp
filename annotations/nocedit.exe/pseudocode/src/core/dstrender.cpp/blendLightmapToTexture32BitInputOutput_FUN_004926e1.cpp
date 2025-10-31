// Name: core_dstrender.cpp_blendLightmapToTexture32BitInputOutput_FUN_004926e1
// Address: 004926e1
// Address Range: [[004926e1, 00492bd4]]
// Convention: __cdecl
// Signature: void core_dstrender.cpp_blendLightmapToTexture32BitInputOutput_FUN_004926e1(uint * output_buffer, uint * texture_buffer, byte * texture_indices, byte * lightmap_indices, int pixel_count)
// Cross-references:
//   core_dcamera.cpp_CDemonCamera_compositeLightmapToFramebuffer_FUN_00453270 (00453270) at 00453563 [UNCONDITIONAL_CALL]
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
core_dstrender_cpp_blendLightmapToTexture32BitInputOutput_FUN_004926e1
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
  ushort uVar9;
  ushort uVar11;
  uint5 uVar10;
  undefined8 uVar8;
  ushort uVar12;
  uint5 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  uVar15 = psllw((ulonglong)
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
    uVar10 = (uint5)uVar4 & 0xffffffff00;
    uVar5 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(uVar2 >> 0x18) << 0x30) >> 0x28),
                                            CONCAT14((char)(uVar2 >> 0x10),uVar2)) >> 0x20),uVar2)
                  >> 0x18);
    uVar13 = (uint5)uVar5 & 0xffffffff00;
    uVar8 = pmulhw(CONCAT26((short)(uVar10 >> 0x18) * (short)(uVar13 >> 0x18),
                            CONCAT24((short)(uVar10 >> 8) * (short)(uVar13 >> 8),
                                     CONCAT22(((ushort)(CONCAT43(uVar4,CONCAT12((char)(uVar1 >> 8),
                                                                                (ushort)uVar1)) >>
                                                       0x10) & 0xff) *
                                              ((ushort)CONCAT41(uVar5,(char)(uVar2 >> 8)) & 0xff),
                                              ((ushort)uVar1 & 0xff) * (ushort)(byte)uVar2))),
                   *(ulonglong *)
                    (g_LightmapData + ((uint)*lightmap_indices + (uint)(*texture_indices >> 1)) * 4)
                   ^ (ulonglong)g_LightmapXorMask);
    uVar14 = pmulhw(uVar15,*(ulonglong *)
                            (g_LightmapData +
                            ((uint)*lightmap_indices + (uint)(*texture_indices >> 1)) * 4));
    uVar7 = (ushort)((short)uVar8 + (short)uVar14 + (short)g_LightmapBlendBias1) >> 4;
    uVar9 = (ushort)((short)((ulonglong)uVar8 >> 0x10) + (short)((ulonglong)uVar14 >> 0x10) +
                    (short)(g_LightmapBlendBias1 >> 0x10)) >> 4;
    uVar11 = (ushort)((short)((ulonglong)uVar8 >> 0x20) + (short)((ulonglong)uVar14 >> 0x20) +
                     (short)(g_LightmapBlendBias1 >> 0x20)) >> 4;
    uVar12 = (ushort)((short)((ulonglong)uVar8 >> 0x30) + (short)((ulonglong)uVar14 >> 0x30) +
                     (short)(g_LightmapBlendBias1 >> 0x30)) >> 4;
    *output_buffer =
         CONCAT13((uVar12 != 0) * (uVar12 < 0x100) * (char)uVar12 - (0xff < uVar12),
                  CONCAT12((uVar11 != 0) * (uVar11 < 0x100) * (char)uVar11 - (0xff < uVar11),
                           CONCAT11((uVar9 != 0) * (uVar9 < 0x100) * (char)uVar9 - (0xff < uVar9),
                                    (uVar7 != 0) * (uVar7 < 0x100) * (char)uVar7 - (0xff < uVar7))))
    ;
    uVar1 = texture_buffer[1];
    uVar2 = g_LightmapTexturePalette[texture_indices[1]];
    uVar4 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(uVar1 >> 0x18) << 0x30) >> 0x28),
                                            CONCAT14((char)(uVar1 >> 0x10),uVar1)) >> 0x20),uVar1)
                  >> 0x18);
    uVar10 = (uint5)uVar4 & 0xffffffff00;
    uVar7 = (ushort)(((uint7)(byte)(uVar2 >> 0x18) << 0x30) >> 0x28);
    uVar8 = pmulhw(CONCAT26((short)(uVar10 >> 0x18) * (uVar7 >> 8),
                            CONCAT24((short)(uVar10 >> 8) *
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
    uVar14 = pmulhw(uVar15,*(ulonglong *)
                            (g_LightmapData +
                            ((uint)lightmap_indices[1] + (uint)(texture_indices[1] >> 1)) * 4));
    uVar7 = (ushort)((short)uVar8 + (short)uVar14 + (short)g_LightmapBlendBias2) >> 4;
    uVar9 = (ushort)((short)((ulonglong)uVar8 >> 0x10) + (short)((ulonglong)uVar14 >> 0x10) +
                    (short)(g_LightmapBlendBias2 >> 0x10)) >> 4;
    uVar11 = (ushort)((short)((ulonglong)uVar8 >> 0x20) + (short)((ulonglong)uVar14 >> 0x20) +
                     (short)(g_LightmapBlendBias2 >> 0x20)) >> 4;
    uVar12 = (ushort)((short)((ulonglong)uVar8 >> 0x30) + (short)((ulonglong)uVar14 >> 0x30) +
                     (short)(g_LightmapBlendBias2 >> 0x30)) >> 4;
    output_buffer[1] =
         CONCAT13((uVar12 != 0) * (uVar12 < 0x100) * (char)uVar12 - (0xff < uVar12),
                  CONCAT12((uVar11 != 0) * (uVar11 < 0x100) * (char)uVar11 - (0xff < uVar11),
                           CONCAT11((uVar9 != 0) * (uVar9 < 0x100) * (char)uVar9 - (0xff < uVar9),
                                    (uVar7 != 0) * (uVar7 < 0x100) * (char)uVar7 - (0xff < uVar7))))
    ;
    texture_buffer = texture_buffer + 2;
    texture_indices = texture_indices + 2;
    lightmap_indices = lightmap_indices + 2;
    output_buffer = output_buffer + 2;
    iVar6 = pixel_count + -2;
    bVar3 = 1 < pixel_count;
    pixel_count = iVar6;
  } while (iVar6 != 0 && bVar3);
  return;
}


// Assembly code:
// 004926e1: PUSH EBP
//   Label: core_dstrender.cpp_blendLightmapToTexture32BitInputOutput_FUN_004926e1
// 004926e2: MOV EBP,ESP
// 004926e4: PUSH ESI
// 004926e5: PUSH EDI
// 004926e6: PUSH EBP
// 004926e7: MOV ECX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x14] (READ)
// 004926ea: MOV EDI,dword ptr [EBP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004926ed: MOV ESI,dword ptr [EBP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 004926f0: MOV EBX,dword ptr [EBP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 004926f3: MOV EBP,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x10] (READ)
// 004926f6: PXOR MM7,MM7
// 004926f9: MOVD MM5,dword ptr [0x02d052a8]
//   XREF to: 02d052a8 (READ)
// 00492700: PUNPCKLBW MM5,MM7
// 00492703: PSLLW MM5,0x6
// 00492707: MOV EAX,dword ptr [EBX]
// 00492709: MOV EAX,dword ptr [EBX + 0x20]
// 0049270c: MOV EAX,dword ptr [EBX + 0x40]
// 0049270f: MOV EAX,dword ptr [EBX + 0x60]
// 00492712: MOV EAX,dword ptr [EBX + 0x80]
// 00492718: MOV EAX,dword ptr [EBX + 0xa0]
// 0049271e: MOV EAX,dword ptr [EBX + 0xc0]
// 00492724: MOV EAX,dword ptr [EBX + 0xe0]
// 0049272a: MOV EAX,dword ptr [EBX + 0x100]
// 00492730: MOV EAX,dword ptr [EBX + 0x120]
// 00492736: MOV EDX,dword ptr [EBP]
// 00492739: MOV EDX,dword ptr [EBP + 0x20]
// 0049273c: MOV EDX,dword ptr [EBP + 0x40]
// 0049273f: MOV EDX,dword ptr [EBP + 0x60]
// 00492742: MOV EDX,dword ptr [EBP + 0x80]
// 00492748: MOV EDX,dword ptr [EBP + 0xa0]
// 0049274e: MOV EDX,dword ptr [EBP + 0xc0]
// 00492754: MOV EDX,dword ptr [EBP + 0xe0]
// 0049275a: MOV EDX,dword ptr [EBP + 0x100]
// 00492760: MOV EDX,dword ptr [EBP + 0x120]
// 00492766: MOV EAX,dword ptr [ESI]
// 00492768: MOV EAX,dword ptr [ESI + 0x20]
// 0049276b: MOV EAX,dword ptr [ESI + 0x40]
// 0049276e: MOV EAX,dword ptr [ESI + 0x60]
// 00492771: MOV EAX,dword ptr [ESI + 0x80]
// 00492777: MOV EAX,dword ptr [ESI + 0xa0]
// 0049277d: MOV EAX,dword ptr [ESI + 0xc0]
// 00492783: MOV EAX,dword ptr [ESI + 0xe0]
// 00492789: MOV EAX,dword ptr [ESI + 0x100]
// 0049278f: MOV EAX,dword ptr [ESI + 0x120]
// 00492795: MOV EAX,dword ptr [ESI + 0x140]
// 0049279b: MOV EAX,dword ptr [ESI + 0x160]
// 004927a1: MOV EAX,dword ptr [ESI + 0x180]
// 004927a7: MOV EAX,dword ptr [ESI + 0x1a0]
// 004927ad: MOV EAX,dword ptr [ESI + 0x1c0]
// 004927b3: MOV EAX,dword ptr [ESI + 0x1e0]
// 004927b9: MOV EAX,dword ptr [ESI + 0x200]
// 004927bf: MOV EAX,dword ptr [ESI + 0x220]
// 004927c5: MOV EAX,dword ptr [ESI + 0x240]
// 004927cb: MOV EAX,dword ptr [ESI + 0x260]
// 004927d1: MOV EAX,dword ptr [ESI + 0x280]
// 004927d7: MOV EAX,dword ptr [ESI + 0x2a0]
// 004927dd: MOV EAX,dword ptr [ESI + 0x2c0]
// 004927e3: MOV EAX,dword ptr [ESI + 0x2e0]
// 004927e9: MOV EAX,dword ptr [ESI + 0x300]
// 004927ef: MOV EAX,dword ptr [ESI + 0x320]
// 004927f5: MOV EAX,dword ptr [ESI + 0x340]
// 004927fb: MOV EAX,dword ptr [ESI + 0x360]
// 00492801: MOV EAX,dword ptr [ESI + 0x380]
// 00492807: MOV EAX,dword ptr [ESI + 0x3a0]
// 0049280d: MOV EAX,dword ptr [ESI + 0x3c0]
// 00492813: MOV EAX,dword ptr [ESI + 0x3e0]
// 00492819: MOV EAX,dword ptr [ESI + 0x400]
// 0049281f: MOV EAX,dword ptr [ESI + 0x420]
// 00492825: MOV EAX,dword ptr [ESI + 0x440]
// 0049282b: MOV EAX,dword ptr [ESI + 0x460]
// 00492831: MOV EAX,dword ptr [ESI + 0x480]
// 00492837: MOV EAX,dword ptr [ESI + 0x4a0]
// 0049283d: MOV EAX,dword ptr [ESI + 0x4c0]
// 00492843: MOV EAX,dword ptr [ESI + 0x4e0]
// 00492849: MOV EAX,dword ptr [ESI + 0x500]
// 0049284f: MOV EAX,dword ptr [ESI + 0x520]
// 00492855: MOV EAX,dword ptr [ESI + 0x540]
// 0049285b: MOV EAX,dword ptr [ESI + 0x560]
// 00492861: MOV EAX,dword ptr [ESI + 0x580]
// 00492867: MOV EAX,dword ptr [ESI + 0x5a0]
// 0049286d: MOV EAX,dword ptr [ESI + 0x5c0]
// 00492873: MOV EAX,dword ptr [ESI + 0x5e0]
// 00492879: MOV EAX,dword ptr [ESI + 0x600]
// 0049287f: MOV EAX,dword ptr [ESI + 0x620]
// 00492885: MOV EAX,dword ptr [ESI + 0x640]
// 0049288b: MOV EAX,dword ptr [ESI + 0x660]
// 00492891: MOV EAX,dword ptr [ESI + 0x680]
// 00492897: MOV EAX,dword ptr [ESI + 0x6a0]
// 0049289d: MOV EAX,dword ptr [ESI + 0x6c0]
// 004928a3: MOV EAX,dword ptr [ESI + 0x6e0]
// 004928a9: MOV EAX,dword ptr [ESI + 0x700]
// 004928af: MOV EAX,dword ptr [ESI + 0x720]
// 004928b5: MOV EAX,dword ptr [ESI + 0x740]
// 004928bb: MOV EAX,dword ptr [ESI + 0x760]
// 004928c1: MOV EAX,dword ptr [ESI + 0x780]
// 004928c7: MOV EAX,dword ptr [ESI + 0x7a0]
// 004928cd: MOV EAX,dword ptr [ESI + 0x7c0]
// 004928d3: MOV EAX,dword ptr [ESI + 0x7e0]
// 004928d9: MOV EAX,dword ptr [ESI + 0x800]
// 004928df: MOV EAX,dword ptr [ESI + 0x820]
// 004928e5: MOV EAX,dword ptr [ESI + 0x840]
// 004928eb: MOV EAX,dword ptr [ESI + 0x860]
// 004928f1: MOV EAX,dword ptr [ESI + 0x880]
// 004928f7: MOV EAX,dword ptr [ESI + 0x8a0]
// 004928fd: MOV EAX,dword ptr [ESI + 0x8c0]
// 00492903: MOV EAX,dword ptr [ESI + 0x8e0]
// 00492909: MOV EAX,dword ptr [ESI + 0x900]
// 0049290f: MOV EAX,dword ptr [ESI + 0x920]
// 00492915: MOV EAX,dword ptr [ESI + 0x940]
// 0049291b: MOV EAX,dword ptr [ESI + 0x960]
// 00492921: MOV EAX,dword ptr [ESI + 0x980]
// 00492927: MOV EAX,dword ptr [ESI + 0x9a0]
// 0049292d: MOV EAX,dword ptr [ESI + 0x9c0]
// 00492933: MOV EAX,dword ptr [ESI + 0x9e0]
// 00492939: MOV EAX,[0x00c19dfc]
//   XREF to: 00c19dfc (READ)
// 0049293e: MOV EAX,[0x00c19e1c]
//   XREF to: 00c19e1c (READ)
// 00492943: MOV EAX,[0x00c19e3c]
//   XREF to: 00c19e3c (READ)
// 00492948: MOV EAX,[0x00c19e5c]
//   XREF to: 00c19e5c (READ)
// 0049294d: MOV EAX,[0x00c19e7c]
//   XREF to: 00c19e7c (READ)
// 00492952: MOV EAX,[0x00c19e9c]
//   XREF to: 00c19e9c (READ)
// 00492957: MOV EAX,[0x00c19ebc]
//   XREF to: 00c19ebc (READ)
// 0049295c: MOV EAX,[0x00c19edc]
//   XREF to: 00c19edc (READ)
// 00492961: MOV EAX,[0x00c19efc]
//   XREF to: 00c19efc (READ)
// 00492966: MOV EAX,[0x00c19f1c]
//   XREF to: 00c19f1c (READ)
// 0049296b: MOV EAX,[0x00c19f3c]
//   XREF to: 00c19f3c (READ)
// 00492970: MOV EAX,[0x00c19f5c]
//   XREF to: 00c19f5c (READ)
// 00492975: MOV EAX,[0x00c19f7c]
//   XREF to: 00c19f7c (READ)
// 0049297a: MOV EAX,[0x00c19f9c]
//   XREF to: 00c19f9c (READ)
// 0049297f: MOV EAX,[0x00c19fbc]
//   XREF to: 00c19fbc (READ)
// 00492984: MOV EAX,[0x00c19fdc]
//   XREF to: 00c19fdc (READ)
// 00492989: MOV EAX,[0x00c19ffc]
//   XREF to: 00c19ffc (READ)
// 0049298e: MOV EAX,[0x00c1a01c]
//   XREF to: 00c1a01c (READ)
// 00492993: MOV EAX,[0x00c1a03c]
//   XREF to: 00c1a03c (READ)
// 00492998: MOV EAX,[0x00c1a05c]
//   XREF to: 00c1a05c (READ)
// 0049299d: MOV EAX,[0x00c1a07c]
//   XREF to: 00c1a07c (READ)
// 004929a2: MOV EAX,[0x00c1a09c]
//   XREF to: 00c1a09c (READ)
// 004929a7: MOV EAX,[0x00c1a0bc]
//   XREF to: 00c1a0bc (READ)
// 004929ac: MOV EAX,[0x00c1a0dc]
//   XREF to: 00c1a0dc (READ)
// 004929b1: MOV EAX,[0x00c1a0fc]
//   XREF to: 00c1a0fc (READ)
// 004929b6: MOV EAX,[0x00c1a11c]
//   XREF to: 00c1a11c (READ)
// 004929bb: MOV EAX,[0x00c1a13c]
//   XREF to: 00c1a13c (READ)
// 004929c0: MOV EAX,[0x00c1a15c]
//   XREF to: 00c1a15c (READ)
// 004929c5: MOV EAX,[0x00c1a17c]
//   XREF to: 00c1a17c (READ)
// 004929ca: MOV EAX,[0x00c1a19c]
//   XREF to: 00c1a19c (READ)
// 004929cf: MOV EAX,[0x00c1a1bc]
//   XREF to: 00c1a1bc (READ)
// 004929d4: MOV EAX,[0x00c1a1dc]
//   XREF to: 00c1a1dc (READ)
// 004929d9: MOV EAX,[0x006779f0]
//   XREF to: 006779f0 (READ)
// 004929de: MOV EAX,[0x00677a10]
//   XREF to: 00677a10 (READ)
// 004929e3: MOV EAX,[0x00677a30]
//   XREF to: 00677a30 (READ)
// 004929e8: MOV EAX,[0x00677a50]
//   XREF to: 00677a50 (READ)
// 004929ed: MOV EAX,[0x00677a70]
//   XREF to: 00677a70 (READ)
// 004929f2: MOV EAX,[0x00677a90]
//   XREF to: 00677a90 (READ)
// 004929f7: MOV EAX,[0x00677ab0]
//   XREF to: 00677ab0 (READ)
// 004929fc: MOV EAX,[0x00677ad0]
//   XREF to: 00677ad0 (READ)
// 00492a01: MOV EAX,[0x00677af0]
//   XREF to: 00677af0 (READ)
// 00492a06: MOV EAX,[0x00677b10]
//   XREF to: 00677b10 (READ)
// 00492a0b: MOV EAX,[0x00677b30]
//   XREF to: 00677b30 (READ)
// 00492a10: MOV EAX,[0x00677b50]
//   XREF to: 00677b50 (READ)
// 00492a15: MOV EAX,[0x00677b70]
//   XREF to: 00677b70 (READ)
// 00492a1a: MOV EAX,[0x00677b90]
//   XREF to: 00677b90 (READ)
// 00492a1f: MOV EAX,[0x00677bb0]
//   XREF to: 00677bb0 (READ)
// 00492a24: MOV EAX,[0x00677bd0]
//   XREF to: 00677bd0 (READ)
// 00492a29: MOV EAX,[0x00677bf0]
//   XREF to: 00677bf0 (READ)
// 00492a2e: MOV EAX,[0x00677c10]
//   XREF to: 00677c10 (READ)
// 00492a33: MOV EAX,[0x00677c30]
//   XREF to: 00677c30 (READ)
// 00492a38: MOV EAX,[0x00677c50]
//   XREF to: 00677c50 (READ)
// 00492a3d: MOV EAX,[0x00677c70]
//   XREF to: 00677c70 (READ)
// 00492a42: MOV EAX,[0x00677c90]
//   XREF to: 00677c90 (READ)
// 00492a47: MOV EAX,[0x00677cb0]
//   XREF to: 00677cb0 (READ)
// 00492a4c: MOV EAX,[0x00677cd0]
//   XREF to: 00677cd0 (READ)
// 00492a51: MOV EAX,[0x00677cf0]
//   XREF to: 00677cf0 (READ)
// 00492a56: MOV EAX,[0x00677d10]
//   XREF to: 00677d10 (READ)
// 00492a5b: MOV EAX,[0x00677d30]
//   XREF to: 00677d30 (READ)
// 00492a60: MOV EAX,[0x00677d50]
//   XREF to: 00677d50 (READ)
// 00492a65: MOV EAX,[0x00677d70]
//   XREF to: 00677d70 (READ)
// 00492a6a: MOV EAX,[0x00677d90]
//   XREF to: 00677d90 (READ)
// 00492a6f: MOV EAX,[0x00677db0]
//   XREF to: 00677db0 (READ)
// 00492a74: MOV EAX,[0x00677dd0]
//   XREF to: 00677dd0 (READ)
// 00492a79: MOV EAX,[0x00677df0]
//   XREF to: 00677df0 (READ)
// 00492a7e: MOV EAX,[0x00677e10]
//   XREF to: 00677e10 (READ)
// 00492a83: MOV EAX,[0x00677e30]
//   XREF to: 00677e30 (READ)
// 00492a88: MOV EAX,[0x00677e50]
//   XREF to: 00677e50 (READ)
// 00492a8d: MOV EAX,[0x00677e70]
//   XREF to: 00677e70 (READ)
// 00492a92: MOV EAX,[0x00677e90]
//   XREF to: 00677e90 (READ)
// 00492a97: MOV EAX,[0x00677eb0]
//   XREF to: 00677eb0 (READ)
// 00492a9c: MOV EAX,[0x00677ed0]
//   XREF to: 00677ed0 (READ)
// 00492aa1: MOV EAX,[0x00677ef0]
//   XREF to: 00677ef0 (READ)
// 00492aa6: MOV EAX,[0x00677f10]
//   XREF to: 00677f10 (READ)
// 00492aab: MOV EAX,[0x00677f30]
//   XREF to: 00677f30 (READ)
// 00492ab0: MOV EAX,[0x00677f50]
//   XREF to: 00677f50 (READ)
// 00492ab5: MOV EAX,[0x00677f70]
//   XREF to: 00677f70 (READ)
// 00492aba: MOV EAX,[0x00677f90]
//   XREF to: 00677f90 (READ)
// 00492abf: MOV EAX,[0x00677fb0]
//   XREF to: 00677fb0 (READ)
// 00492ac4: MOV EAX,[0x00677fd0]
//   XREF to: 00677fd0 (READ)
// 00492ac9: MOV EAX,[0x00677ff0]
//   XREF to: 00677ff0 (READ)
// 00492ace: MOV EAX,[0x00678010]
//   XREF to: 00678010 (READ)
// 00492ad3: MOV EAX,[0x00678030]
//   XREF to: 00678030 (READ)
// 00492ad8: MOV EAX,[0x00678050]
//   XREF to: 00678050 (READ)
// 00492add: MOV EAX,[0x00678070]
//   XREF to: 00678070 (READ)
// 00492ae2: MOV EAX,[0x00678090]
//   XREF to: 00678090 (READ)
// 00492ae7: MOV EAX,[0x006780b0]
//   XREF to: 006780b0 (READ)
// 00492aec: MOV EAX,[0x006780d0]
//   XREF to: 006780d0 (READ)
// 00492af1: MOV EAX,[0x006780f0]
//   XREF to: 006780f0 (READ)
// 00492af6: MOV EAX,[0x00678110]
//   XREF to: 00678110 (READ)
// 00492afb: MOV EAX,[0x00678130]
//   XREF to: 00678130 (READ)
// 00492b00: MOV EAX,[0x00678150]
//   XREF to: 00678150 (READ)
// 00492b05: MOV EAX,[0x00678170]
//   XREF to: 00678170 (READ)
// 00492b0a: MOV EAX,[0x00678190]
//   XREF to: 00678190 (READ)
// 00492b0f: MOV EAX,[0x006781b0]
//   XREF to: 006781b0 (READ)
// 00492b14: MOV EAX,[0x006781d0]
//   XREF to: 006781d0 (READ)
// 00492b19: MOVZX EDX,byte ptr [EBX]
//   Label: LAB_00492b19
// 00492b1c: MOVD MM0,dword ptr [ESI]
// 00492b1f: MOVD MM2,dword ptr [EDX*0x4 + 0xc19dfc]
//   XREF to: 00c19dfc (DATA)
// 00492b27: MOVZX EAX,byte ptr [EBP]
// 00492b2b: PUNPCKLBW MM0,MM7
// 00492b2e: SHR EDX,0x1
// 00492b30: PUNPCKLBW MM2,MM7
// 00492b33: ADD EAX,EDX
// 00492b35: PMULLW MM0,MM2
// 00492b38: MOVQ MM3,qword ptr [EAX*0x8 + 0x6779f0]
//   XREF to: 006779f0 (DATA)
// 00492b40: MOVQ MM2,MM3
// 00492b43: MOVQ MM4,MM5
// 00492b46: PXOR MM2,qword ptr [0x006781e8]
//   XREF to: 006781e8 (READ)
// 00492b4d: PMULHW MM0,MM2
// 00492b50: PMULHW MM4,MM3
// 00492b53: PADDW MM0,MM4
// 00492b56: PADDW MM0,qword ptr [0x00676478]
//   XREF to: 00676478 (READ)
// 00492b5d: PSRLW MM0,0x4
// 00492b61: PACKUSWB MM0,MM7
// 00492b64: MOVD dword ptr [EDI],MM0
// 00492b67: ADD ESI,0x4
// 00492b6a: INC EBX
// 00492b6b: INC EBP
// 00492b6c: ADD EDI,0x4
// 00492b6f: MOVZX EDX,byte ptr [EBX]
// 00492b72: MOVD MM0,dword ptr [ESI]
// 00492b75: MOVD MM2,dword ptr [EDX*0x4 + 0xc19dfc]
//   XREF to: 00c19dfc (DATA)
// 00492b7d: MOVZX EAX,byte ptr [EBP]
// 00492b81: PUNPCKLBW MM0,MM7
// 00492b84: SHR EDX,0x1
// 00492b86: PUNPCKLBW MM2,MM7
// 00492b89: ADD EAX,EDX
// 00492b8b: PMULLW MM0,MM2
// 00492b8e: MOVQ MM3,qword ptr [EAX*0x8 + 0x6779f0]
//   XREF to: 006779f0 (DATA)
// 00492b96: MOVQ MM2,MM3
// 00492b99: MOVQ MM4,MM5
// 00492b9c: PXOR MM2,qword ptr [0x006781e8]
//   XREF to: 006781e8 (READ)
// 00492ba3: PMULHW MM0,MM2
// 00492ba6: PMULHW MM4,MM3
// 00492ba9: PADDW MM0,MM4
// 00492bac: PADDW MM0,qword ptr [0x00676480]
//   XREF to: 00676480 (READ)
// 00492bb3: PSRLW MM0,0x4
// 00492bb7: PACKUSWB MM0,MM7
// 00492bba: MOVD dword ptr [EDI],MM0
// 00492bbd: ADD ESI,0x4
// 00492bc0: INC EBX
// 00492bc1: INC EBP
// 00492bc2: ADD EDI,0x4
// 00492bc5: SUB ECX,0x2
// 00492bc8: JG 0x00492b19
//   XREF to: 00492b19 (CONDITIONAL_JUMP)
// 00492bce: POP EBP
// 00492bcf: EMMS
// 00492bd1: POP EDI
// 00492bd2: POP ESI
// 00492bd3: LEAVE
// 00492bd4: RET
