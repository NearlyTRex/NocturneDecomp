// Name: core_dstrender.cpp_blendSinglePixelLightmapNoRoundingMMX_FUN_00491f90
// Address: 00491f90
// Address Range: [[00491f90, 00492000]]
// Convention: __cdecl
// Signature: void core_dstrender.cpp_blendSinglePixelLightmapNoRoundingMMX_FUN_00491f90(uint * output_pixel, uint * texture_pixel, byte * texture_index, byte * lightmap_index)
// Cross-references:
//   core_dcamera.cpp_CDemonCamera_blendLightmapPixel32_FUN_00453d10 (00453d10) at 00453d95 [UNCONDITIONAL_CALL]
// Globals:
//   ushort[384] g_LightmapData
//   double g_LightmapXorMask = 0.126945525291829
//   uint[256] g_LightmapTexturePalette
//   int g_SolidColorMode

#include "nocturne.h"

void __cdecl
core_dstrender_cpp_blendSinglePixelLightmapNoRoundingMMX_FUN_00491f90
          (uint *output_pixel,uint *texture_pixel,byte *texture_index,byte *lightmap_index)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ushort uVar5;
  ushort uVar7;
  ushort uVar9;
  uint5 uVar8;
  undefined8 uVar6;
  ushort uVar10;
  uint5 uVar11;
  undefined8 uVar12;
  
  uVar12 = psllw((ulonglong)
                 CONCAT52(CONCAT41((int)(((uint7)CONCAT21((short)(((uint7)(byte)((uint)
                                                  g_SolidColorMode >> 0x18) << 0x30) >> 0x28),
                                                  (char)((uint)g_SolidColorMode >> 0x10)) << 0x20)
                                        >> 0x18),(char)((uint)g_SolidColorMode >> 8)),
                          (ushort)(byte)g_SolidColorMode),6);
  uVar1 = *texture_pixel;
  uVar2 = g_LightmapTexturePalette[*texture_index];
  uVar3 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(uVar1 >> 0x18) << 0x30) >> 0x28),
                                          CONCAT14((char)(uVar1 >> 0x10),uVar1)) >> 0x20),uVar1) >>
                0x18);
  uVar8 = (uint5)uVar3 & 0xffffffff00;
  uVar4 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(uVar2 >> 0x18) << 0x30) >> 0x28),
                                          CONCAT14((char)(uVar2 >> 0x10),uVar2)) >> 0x20),uVar2) >>
                0x18);
  uVar11 = (uint5)uVar4 & 0xffffffff00;
  uVar6 = pmulhw(CONCAT26((short)(uVar8 >> 0x18) * (short)(uVar11 >> 0x18),
                          CONCAT24((short)(uVar8 >> 8) * (short)(uVar11 >> 8),
                                   CONCAT22(((ushort)(CONCAT43(uVar3,CONCAT12((char)(uVar1 >> 8),
                                                                              (ushort)uVar1)) >>
                                                     0x10) & 0xff) *
                                            ((ushort)CONCAT41(uVar4,(char)(uVar2 >> 8)) & 0xff),
                                            ((ushort)uVar1 & 0xff) * (ushort)(byte)uVar2))),
                 *(ulonglong *)
                  (g_LightmapData + ((uint)*lightmap_index + (uint)(*texture_index >> 1)) * 4) ^
                 (ulonglong)g_LightmapXorMask);
  uVar12 = pmulhw(uVar12,*(ulonglong *)
                          (g_LightmapData +
                          ((uint)*lightmap_index + (uint)(*texture_index >> 1)) * 4));
  uVar5 = (ushort)((short)uVar6 + (short)uVar12) >> 4;
  uVar7 = (ushort)((short)((ulonglong)uVar6 >> 0x10) + (short)((ulonglong)uVar12 >> 0x10)) >> 4;
  uVar9 = (ushort)((short)((ulonglong)uVar6 >> 0x20) + (short)((ulonglong)uVar12 >> 0x20)) >> 4;
  uVar10 = (ushort)((short)((ulonglong)uVar6 >> 0x30) + (short)((ulonglong)uVar12 >> 0x30)) >> 4;
  *output_pixel =
       CONCAT13((uVar10 != 0) * (uVar10 < 0x100) * (char)uVar10 - (0xff < uVar10),
                CONCAT12((uVar9 != 0) * (uVar9 < 0x100) * (char)uVar9 - (0xff < uVar9),
                         CONCAT11((uVar7 != 0) * (uVar7 < 0x100) * (char)uVar7 - (0xff < uVar7),
                                  (uVar5 != 0) * (uVar5 < 0x100) * (char)uVar5 - (0xff < uVar5))));
  return;
}


// Assembly code:
// 00491f90: PUSH EBP
//   Label: core_dstrender.cpp_blendSinglePixelLightmapNoRoundingMMX_FUN_00491f90
// 00491f91: MOV EBP,ESP
// 00491f93: PUSH ESI
// 00491f94: PUSH EDI
// 00491f95: PUSH EBP
// 00491f96: MOV EDI,dword ptr [EBP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00491f99: MOV ESI,dword ptr [EBP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00491f9c: MOV EBX,dword ptr [EBP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 00491f9f: MOV EBP,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x10] (READ)
// 00491fa2: PXOR MM7,MM7
// 00491fa5: MOVD MM5,dword ptr [0x02d052a8]
//   XREF to: 02d052a8 (READ)
// 00491fac: PUNPCKLBW MM5,MM7
// 00491faf: PSLLW MM5,0x6
// 00491fb3: MOVZX EDX,byte ptr [EBX]
// 00491fb6: MOVD MM0,dword ptr [ESI]
// 00491fb9: MOVD MM2,dword ptr [EDX*0x4 + 0xc19dfc]
//   XREF to: 00c19dfc (DATA)
// 00491fc1: MOVZX EAX,byte ptr [EBP]
// 00491fc5: PUNPCKLBW MM0,MM7
// 00491fc8: SHR EDX,0x1
// 00491fca: PUNPCKLBW MM2,MM7
// 00491fcd: ADD EAX,EDX
// 00491fcf: PMULLW MM0,MM2
// 00491fd2: MOVQ MM3,qword ptr [EAX*0x8 + 0x6779f0]
//   XREF to: 006779f0 (DATA)
// 00491fda: MOVQ MM2,MM3
// 00491fdd: MOVQ MM4,MM5
// 00491fe0: PXOR MM2,qword ptr [0x006781e8]
//   XREF to: 006781e8 (READ)
// 00491fe7: PMULHW MM0,MM2
// 00491fea: PMULHW MM4,MM3
// 00491fed: PADDW MM0,MM4
// 00491ff0: PSRLW MM0,0x4
// 00491ff4: PACKUSWB MM0,MM7
// 00491ff7: MOVD dword ptr [EDI],MM0
// 00491ffa: POP EBP
// 00491ffb: EMMS
// 00491ffd: POP EDI
// 00491ffe: POP ESI
// 00491fff: LEAVE
// 00492000: RET
