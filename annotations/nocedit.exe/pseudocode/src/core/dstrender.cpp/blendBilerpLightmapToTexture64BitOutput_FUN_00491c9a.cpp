// Name: core_dstrender.cpp_blendBilerpLightmapToTexture64BitOutput_FUN_00491c9a
// Address: 00491c9a
// Address Range: [[00491c9a, 00491ed0] [00491ee0, 00491f8f]]
// Convention: __cdecl
// Signature: void core_dstrender.cpp_blendBilerpLightmapToTexture64BitOutput_FUN_00491c9a(ulonglong * output_buffer, ulonglong * texture_buffer, byte * texture_indices, byte * lightmap_indices, int pixel_count)
// Cross-references:
//   core_dcamera.cpp_CDemonCamera_compositeLightmapToFramebuffer_FUN_00453270 (00453270) at 004535ee [UNCONDITIONAL_CALL]
// Globals:
//   ulonglong g_AmbientLightMMX1 = 0x4000400040004
//   ulonglong g_AmbientLightMMX2 = 0xc000c000c000c
//   ushort[384] g_LightmapData
//   double g_LightmapXorMask = 0.126945525291829
//   uint[256] g_LightmapTexturePalette
//   int g_SolidColorMode

#include "nocturne.h"

void __cdecl
core_dstrender_cpp_blendBilerpLightmapToTexture64BitOutput_FUN_00491c9a
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
    uVar2 = g_LightmapTexturePalette[(uint)*texture_indices + (uint)texture_indices[0x140] >> 1];
    uVar8 = (ushort)(((uint7)(byte)(uVar1 >> 0x18) << 0x30) >> 0x28);
    uVar3 = g_LightmapTexturePalette[(uint)texture_indices[1] + (uint)texture_indices[0x141] >> 1];
    uVar5 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(uVar3 >> 0x18) << 0x30) >> 0x28),
                                            CONCAT14((char)(uVar3 >> 0x10),uVar3)) >> 0x20),uVar3)
                  >> 0x18);
    uVar25 = (uint5)uVar5 & 0xffffffff00;
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
              (g_LightmapData +
              ((uint)*lightmap_indices +
              ((uint)texture_indices[1] + (uint)texture_indices[0x141] >> 2)) * 4) ^
             (ulonglong)g_LightmapXorMask;
    uVar9 = pmulhw(CONCAT26((uVar8 >> 8) * sVar21,
                            CONCAT24((short)CONCAT21(uVar8,(char)(uVar1 >> 0x10)) * sVar20,
                                     CONCAT22((byte)(uVar1 >> 8) * uVar12,
                                              ((ushort)uVar1 & 0xff) * uVar11))),uVar18);
    uVar14 = pmulhw(CONCAT26((uVar10 >> 8) * ((ushort)((short)(uVar25 >> 0x18) + sVar21) >> 1),
                             CONCAT24((short)CONCAT21(uVar10,(char)(uVar1 >> 0x30)) *
                                      ((ushort)((short)(uVar25 >> 8) + sVar20) >> 1),
                                      CONCAT22((ushort)(byte)(uVar1 >> 0x28) *
                                               ((ushort)(((ushort)CONCAT41(uVar5,(char)(uVar3 >> 8))
                                                         & 0xff) + uVar12) >> 1),
                                               ((ushort)(uVar1 >> 0x20) & 0xff) *
                                               ((ushort)((byte)uVar3 + uVar11) >> 1)))),uVar18);
    uVar22 = pmulhw(uVar24,*(ulonglong *)
                            (g_LightmapData +
                            ((uint)*lightmap_indices +
                            ((uint)texture_indices[1] + (uint)texture_indices[0x141] >> 2)) * 4));
    sVar20 = (short)((ulonglong)uVar22 >> 0x10);
    sVar21 = (short)((ulonglong)uVar22 >> 0x20);
    sVar23 = (short)((ulonglong)uVar22 >> 0x30);
    uVar8 = (ushort)((short)uVar9 + (short)uVar22 + (short)g_AmbientLightMMX1) >> 4;
    uVar10 = (ushort)((short)((ulonglong)uVar9 >> 0x10) + sVar20 +
                     (short)(g_AmbientLightMMX1 >> 0x10)) >> 4;
    uVar11 = (ushort)((short)((ulonglong)uVar9 >> 0x20) + sVar21 +
                     (short)(g_AmbientLightMMX1 >> 0x20)) >> 4;
    uVar12 = (ushort)((short)((ulonglong)uVar9 >> 0x30) + sVar23 +
                     (short)(g_AmbientLightMMX1 >> 0x30)) >> 4;
    uVar13 = (ushort)((short)uVar14 + (short)uVar22 + (short)g_AmbientLightMMX2) >> 4;
    uVar15 = (ushort)((short)((ulonglong)uVar14 >> 0x10) + sVar20 +
                     (short)(g_AmbientLightMMX2 >> 0x10)) >> 4;
    uVar16 = (ushort)((short)((ulonglong)uVar14 >> 0x20) + sVar21 +
                     (short)(g_AmbientLightMMX2 >> 0x20)) >> 4;
    uVar17 = (ushort)((short)((ulonglong)uVar14 >> 0x30) + sVar23 +
                     (short)(g_AmbientLightMMX2 >> 0x30)) >> 4;
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
// 00491c9a: PUSH EBP
//   Label: core_dstrender.cpp_blendBilerpLightmapToTexture64BitOutput_FUN_00491c9a
// 00491c9b: MOV EBP,ESP
// 00491c9d: PUSH ESI
// 00491c9e: PUSH EDI
// 00491c9f: PUSH EBP
// 00491ca0: MOV ECX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x14] (READ)
// 00491ca3: MOV EDI,dword ptr [EBP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00491ca6: MOV ESI,dword ptr [EBP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00491ca9: MOV EBX,dword ptr [EBP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 00491cac: MOV EBP,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x10] (READ)
// 00491caf: PXOR MM7,MM7
// 00491cb2: MOVD MM5,dword ptr [0x02d052a8]
//   XREF to: 02d052a8 (READ)
// 00491cb9: PUNPCKLBW MM5,MM7
// 00491cbc: PSLLW MM5,0x6
// 00491cc0: MOV EAX,dword ptr [ESI]
// 00491cc2: MOV EAX,dword ptr [ESI + 0x20]
// 00491cc5: MOV EAX,dword ptr [ESI + 0x40]
// 00491cc8: MOV EAX,dword ptr [ESI + 0x60]
// 00491ccb: MOV EAX,dword ptr [ESI + 0x80]
// 00491cd1: MOV EAX,dword ptr [ESI + 0xa0]
// 00491cd7: MOV EAX,dword ptr [ESI + 0xc0]
// 00491cdd: MOV EAX,dword ptr [ESI + 0xe0]
// 00491ce3: MOV EAX,dword ptr [ESI + 0x100]
// 00491ce9: MOV EAX,dword ptr [ESI + 0x120]
// 00491cef: MOV EAX,dword ptr [ESI + 0x140]
// 00491cf5: MOV EAX,dword ptr [ESI + 0x160]
// 00491cfb: MOV EAX,dword ptr [ESI + 0x180]
// 00491d01: MOV EAX,dword ptr [ESI + 0x1a0]
// 00491d07: MOV EAX,dword ptr [ESI + 0x1c0]
// 00491d0d: MOV EAX,dword ptr [ESI + 0x1e0]
// 00491d13: MOV EAX,dword ptr [ESI + 0x200]
// 00491d19: MOV EAX,dword ptr [ESI + 0x220]
// 00491d1f: MOV EAX,dword ptr [ESI + 0x240]
// 00491d25: MOV EAX,dword ptr [ESI + 0x260]
// 00491d2b: MOV EAX,dword ptr [ESI + 0x280]
// 00491d31: MOV EAX,dword ptr [ESI + 0x2a0]
// 00491d37: MOV EAX,dword ptr [ESI + 0x2c0]
// 00491d3d: MOV EAX,dword ptr [ESI + 0x2e0]
// 00491d43: MOV EAX,dword ptr [ESI + 0x300]
// 00491d49: MOV EAX,dword ptr [ESI + 0x320]
// 00491d4f: MOV EAX,dword ptr [ESI + 0x340]
// 00491d55: MOV EAX,dword ptr [ESI + 0x360]
// 00491d5b: MOV EAX,dword ptr [ESI + 0x380]
// 00491d61: MOV EAX,dword ptr [ESI + 0x3a0]
// 00491d67: MOV EAX,dword ptr [ESI + 0x3c0]
// 00491d6d: MOV EAX,dword ptr [ESI + 0x3e0]
// 00491d73: MOV EAX,dword ptr [ESI + 0x400]
// 00491d79: MOV EAX,dword ptr [ESI + 0x420]
// 00491d7f: MOV EAX,dword ptr [ESI + 0x440]
// 00491d85: MOV EAX,dword ptr [ESI + 0x460]
// 00491d8b: MOV EAX,dword ptr [ESI + 0x480]
// 00491d91: MOV EAX,dword ptr [ESI + 0x4a0]
// 00491d97: MOV EAX,dword ptr [ESI + 0x4c0]
// 00491d9d: MOV EAX,dword ptr [ESI + 0x4e0]
// 00491da3: MOV EAX,dword ptr [ESI + 0x500]
// 00491da9: MOV EAX,dword ptr [ESI + 0x520]
// 00491daf: MOV EAX,dword ptr [ESI + 0x540]
// 00491db5: MOV EAX,dword ptr [ESI + 0x560]
// 00491dbb: MOV EAX,dword ptr [ESI + 0x580]
// 00491dc1: MOV EAX,dword ptr [ESI + 0x5a0]
// 00491dc7: MOV EAX,dword ptr [ESI + 0x5c0]
// 00491dcd: MOV EAX,dword ptr [ESI + 0x5e0]
// 00491dd3: MOV EAX,dword ptr [ESI + 0x600]
// 00491dd9: MOV EAX,dword ptr [ESI + 0x620]
// 00491ddf: MOV EAX,dword ptr [ESI + 0x640]
// 00491de5: MOV EAX,dword ptr [ESI + 0x660]
// 00491deb: MOV EAX,dword ptr [ESI + 0x680]
// 00491df1: MOV EAX,dword ptr [ESI + 0x6a0]
// 00491df7: MOV EAX,dword ptr [ESI + 0x6c0]
// 00491dfd: MOV EAX,dword ptr [ESI + 0x6e0]
// 00491e03: MOV EAX,dword ptr [ESI + 0x700]
// 00491e09: MOV EAX,dword ptr [ESI + 0x720]
// 00491e0f: MOV EAX,dword ptr [ESI + 0x740]
// 00491e15: MOV EAX,dword ptr [ESI + 0x760]
// 00491e1b: MOV EAX,dword ptr [ESI + 0x780]
// 00491e21: MOV EAX,dword ptr [ESI + 0x7a0]
// 00491e27: MOV EAX,dword ptr [ESI + 0x7c0]
// 00491e2d: MOV EAX,dword ptr [ESI + 0x7e0]
// 00491e33: MOV EAX,dword ptr [ESI + 0x800]
// 00491e39: MOV EAX,dword ptr [ESI + 0x820]
// 00491e3f: MOV EAX,dword ptr [ESI + 0x840]
// 00491e45: MOV EAX,dword ptr [ESI + 0x860]
// 00491e4b: MOV EAX,dword ptr [ESI + 0x880]
// 00491e51: MOV EAX,dword ptr [ESI + 0x8a0]
// 00491e57: MOV EAX,dword ptr [ESI + 0x8c0]
// 00491e5d: MOV EAX,dword ptr [ESI + 0x8e0]
// 00491e63: MOV EAX,dword ptr [ESI + 0x900]
// 00491e69: MOV EAX,dword ptr [ESI + 0x920]
// 00491e6f: MOV EAX,dword ptr [ESI + 0x940]
// 00491e75: MOV EAX,dword ptr [ESI + 0x960]
// 00491e7b: MOV EAX,dword ptr [ESI + 0x980]
// 00491e81: MOV EAX,dword ptr [ESI + 0x9a0]
// 00491e87: MOV EAX,dword ptr [ESI + 0x9c0]
// 00491e8d: MOV EAX,dword ptr [ESI + 0x9e0]
// 00491e93: MOV EAX,dword ptr [EBX + 0x140]
// 00491e99: MOV EAX,dword ptr [EBX + 0x160]
// 00491e9f: MOV EAX,dword ptr [EBX + 0x180]
// 00491ea5: MOV EAX,dword ptr [EBX + 0x1a0]
// 00491eab: MOV EAX,dword ptr [EBX + 0x1c0]
// 00491eb1: MOV EAX,dword ptr [EBX + 0x1e0]
// 00491eb7: MOV EAX,dword ptr [EBX + 0x200]
// 00491ebd: MOV EAX,dword ptr [EBX + 0x220]
// 00491ec3: MOV EAX,dword ptr [EBX + 0x240]
// 00491ec9: MOV EAX,dword ptr [EBX + 0x260]
// 00491ecf: JMP 0x00491ee0
//   XREF to: 00491ee0 (UNCONDITIONAL_JUMP)
// 00491ee0: MOVZX EDX,byte ptr [EBX]
//   Label: LAB_00491ee0
// 00491ee3: MOVZX EAX,byte ptr [EBX + 0x140]
// 00491eea: ADD EDX,EAX
// 00491eec: MOVQ MM0,qword ptr [ESI]
// 00491eef: SHR EDX,0x1
// 00491ef1: MOVZX EAX,byte ptr [EBX + 0x141]
// 00491ef8: MOVD MM2,dword ptr [EDX*0x4 + 0xc19dfc]
//   XREF to: 00c19dfc (DATA)
// 00491f00: MOVZX EDX,byte ptr [EBX + 0x1]
// 00491f04: MOVQ MM1,MM0
// 00491f07: ADD EDX,EAX
// 00491f09: MOVZX EAX,byte ptr [EBP]
// 00491f0d: SHR EDX,0x1
// 00491f0f: PUNPCKLBW MM0,MM7
// 00491f12: MOVD MM6,dword ptr [EDX*0x4 + 0xc19dfc]
//   XREF to: 00c19dfc (DATA)
// 00491f1a: PSRLQ MM1,0x20
// 00491f1e: SHR EDX,0x1
// 00491f20: PUNPCKLBW MM6,MM7
// 00491f23: PUNPCKLBW MM2,MM7
// 00491f26: ADD EAX,EDX
// 00491f28: PADDW MM6,MM2
// 00491f2b: PUNPCKLBW MM1,MM7
// 00491f2e: PMULLW MM0,MM2
// 00491f31: PSRLW MM6,0x1
// 00491f35: MOVQ MM3,qword ptr [EAX*0x8 + 0x6779f0]
//   XREF to: 006779f0 (DATA)
// 00491f3d: PMULLW MM1,MM6
// 00491f40: MOVQ MM2,MM3
// 00491f43: MOVQ MM4,MM5
// 00491f46: PXOR MM2,qword ptr [0x006781e8]
//   XREF to: 006781e8 (READ)
// 00491f4d: PMULHW MM0,MM2
// 00491f50: PMULHW MM1,MM2
// 00491f53: PMULHW MM4,MM3
// 00491f56: PADDW MM0,MM4
// 00491f59: PADDW MM1,MM4
// 00491f5c: PADDW MM0,qword ptr [0x00676488]
//   XREF to: 00676488 (READ)
// 00491f63: PADDW MM1,qword ptr [0x00676490]
//   XREF to: 00676490 (READ)
// 00491f6a: PSRLW MM0,0x4
// 00491f6e: PSRLW MM1,0x4
// 00491f72: PACKUSWB MM0,MM1
// 00491f75: ADD ESI,0x8
// 00491f78: INC EBX
// 00491f79: INC EBP
// 00491f7a: MOVQ qword ptr [EDI],MM0
// 00491f7d: ADD EDI,0x8
// 00491f80: SUB ECX,0x2
// 00491f83: JG 0x00491ee0
//   XREF to: 00491ee0 (CONDITIONAL_JUMP)
// 00491f89: POP EBP
// 00491f8a: EMMS
// 00491f8c: POP EDI
// 00491f8d: POP ESI
// 00491f8e: LEAVE
// 00491f8f: RET
