// Name: core_dstrender.cpp_blendLightmapToTexture64BitOutput_FUN_00492bd5
// Address: 00492bd5
// Address Range: [[00492bd5, 00492e89]]
// Convention: __cdecl
// Signature: void core_dstrender.cpp_blendLightmapToTexture64BitOutput_FUN_00492bd5(uint * output_buffer, ulonglong * texture_buffer, byte * texture_indices, byte * lightmap_indices, int pixel_count)
// Cross-references:
//   core_dcamera.cpp_CDemonCamera_compositeLightmapToFramebuffer_FUN_00453270 (00453270) at 004535c6 [UNCONDITIONAL_CALL]
// Globals:
//   ulonglong g_AmbientLightMMX1 = 0x4000400040004
//   ulonglong g_AmbientLightMMX2 = 0xc000c000c000c
//   ushort[384] g_LightmapData
//   double g_LightmapXorMask = 0.126945525291829
//   uint[256] g_LightmapTexturePalette
//   int g_SolidColorMode

#include "nocturne.h"

void __cdecl
core_dstrender_cpp_blendLightmapToTexture64BitOutput_FUN_00492bd5
          (uint *output_buffer,ulonglong *texture_buffer,byte *texture_indices,
          byte *lightmap_indices,int pixel_count)

{
  ulonglong uVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  ushort uVar6;
  ushort uVar8;
  ushort uVar9;
  undefined8 uVar7;
  ushort uVar10;
  uint5 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  uVar13 = psllw((ulonglong)
                 CONCAT52(CONCAT41((int)(((uint7)CONCAT21((short)(((uint7)(byte)((uint)
                                                  g_SolidColorMode >> 0x18) << 0x30) >> 0x28),
                                                  (char)((uint)g_SolidColorMode >> 0x10)) << 0x20)
                                        >> 0x18),(char)((uint)g_SolidColorMode >> 8)),
                          (ushort)(byte)g_SolidColorMode),6);
  do {
    uVar1 = *texture_buffer;
    uVar2 = g_LightmapTexturePalette[*texture_indices];
    uVar6 = (ushort)(((uint7)(byte)(uVar1 >> 0x18) << 0x30) >> 0x28);
    uVar4 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(uVar2 >> 0x18) << 0x30) >> 0x28),
                                            CONCAT14((char)(uVar2 >> 0x10),uVar2)) >> 0x20),uVar2)
                  >> 0x18);
    uVar11 = (uint5)uVar4 & 0xffffffff00;
    uVar7 = pmulhw(CONCAT26((uVar6 >> 8) * (short)(uVar11 >> 0x18),
                            CONCAT24((short)CONCAT21(uVar6,(char)(uVar1 >> 0x10)) *
                                     (short)(uVar11 >> 8),
                                     CONCAT22((ushort)(byte)(uVar1 >> 8) *
                                              ((ushort)CONCAT41(uVar4,(char)(uVar2 >> 8)) & 0xff),
                                              ((ushort)uVar1 & 0xff) * (ushort)(byte)uVar2))),
                   *(ulonglong *)
                    (g_LightmapData + ((uint)*lightmap_indices + (uint)(*texture_indices >> 1)) * 4)
                   ^ (ulonglong)g_LightmapXorMask);
    uVar12 = pmulhw(uVar13,*(ulonglong *)
                            (g_LightmapData +
                            ((uint)*lightmap_indices + (uint)(*texture_indices >> 1)) * 4));
    uVar6 = (ushort)((short)uVar7 + (short)uVar12 + (short)g_AmbientLightMMX1) >> 4;
    uVar8 = (ushort)((short)((ulonglong)uVar7 >> 0x10) + (short)((ulonglong)uVar12 >> 0x10) +
                    (short)(g_AmbientLightMMX1 >> 0x10)) >> 4;
    uVar9 = (ushort)((short)((ulonglong)uVar7 >> 0x20) + (short)((ulonglong)uVar12 >> 0x20) +
                    (short)(g_AmbientLightMMX1 >> 0x20)) >> 4;
    uVar10 = (ushort)((short)((ulonglong)uVar7 >> 0x30) + (short)((ulonglong)uVar12 >> 0x30) +
                     (short)(g_AmbientLightMMX1 >> 0x30)) >> 4;
    *output_buffer =
         CONCAT13((uVar10 != 0) * (uVar10 < 0x100) * (char)uVar10 - (0xff < uVar10),
                  CONCAT12((uVar9 != 0) * (uVar9 < 0x100) * (char)uVar9 - (0xff < uVar9),
                           CONCAT11((uVar8 != 0) * (uVar8 < 0x100) * (char)uVar8 - (0xff < uVar8),
                                    (uVar6 != 0) * (uVar6 < 0x100) * (char)uVar6 - (0xff < uVar6))))
    ;
    uVar7 = *(undefined8 *)((int)texture_buffer + 4);
    uVar2 = g_LightmapTexturePalette[texture_indices[1]];
    uVar6 = (ushort)(((uint7)(byte)((ulonglong)uVar7 >> 0x18) << 0x30) >> 0x28);
    uVar8 = (ushort)(((uint7)(byte)(uVar2 >> 0x18) << 0x30) >> 0x28);
    uVar7 = pmulhw(CONCAT26((uVar6 >> 8) * (uVar8 >> 8),
                            CONCAT24((short)CONCAT21(uVar6,(char)((ulonglong)uVar7 >> 0x10)) *
                                     (short)(CONCAT25(uVar8,CONCAT14((char)(uVar2 >> 0x10),uVar2))
                                            >> 0x20),
                                     CONCAT22((ushort)(byte)((ulonglong)uVar7 >> 8) *
                                              (ushort)(byte)(uVar2 >> 8),
                                              ((ushort)uVar7 & 0xff) * ((ushort)uVar2 & 0xff)))),
                   *(ulonglong *)
                    (g_LightmapData +
                    ((uint)lightmap_indices[1] + (uint)(texture_indices[1] >> 1)) * 4) ^
                   (ulonglong)g_LightmapXorMask);
    uVar12 = pmulhw(uVar13,*(ulonglong *)
                            (g_LightmapData +
                            ((uint)lightmap_indices[1] + (uint)(texture_indices[1] >> 1)) * 4));
    uVar6 = (ushort)((short)uVar7 + (short)uVar12 + (short)g_AmbientLightMMX2) >> 4;
    uVar8 = (ushort)((short)((ulonglong)uVar7 >> 0x10) + (short)((ulonglong)uVar12 >> 0x10) +
                    (short)(g_AmbientLightMMX2 >> 0x10)) >> 4;
    uVar9 = (ushort)((short)((ulonglong)uVar7 >> 0x20) + (short)((ulonglong)uVar12 >> 0x20) +
                    (short)(g_AmbientLightMMX2 >> 0x20)) >> 4;
    uVar10 = (ushort)((short)((ulonglong)uVar7 >> 0x30) + (short)((ulonglong)uVar12 >> 0x30) +
                     (short)(g_AmbientLightMMX2 >> 0x30)) >> 4;
    output_buffer[1] =
         CONCAT13((uVar10 != 0) * (uVar10 < 0x100) * (char)uVar10 - (0xff < uVar10),
                  CONCAT12((uVar9 != 0) * (uVar9 < 0x100) * (char)uVar9 - (0xff < uVar9),
                           CONCAT11((uVar8 != 0) * (uVar8 < 0x100) * (char)uVar8 - (0xff < uVar8),
                                    (uVar6 != 0) * (uVar6 < 0x100) * (char)uVar6 - (0xff < uVar6))))
    ;
    texture_buffer = texture_buffer + 1;
    texture_indices = texture_indices + 2;
    lightmap_indices = lightmap_indices + 2;
    output_buffer = output_buffer + 2;
    iVar5 = pixel_count + -2;
    bVar3 = 1 < pixel_count;
    pixel_count = iVar5;
  } while (iVar5 != 0 && bVar3);
  return;
}


// Assembly code:
// 00492bd5: PUSH EBP
//   Label: core_dstrender.cpp_blendLightmapToTexture64BitOutput_FUN_00492bd5
// 00492bd6: MOV EBP,ESP
// 00492bd8: PUSH ESI
// 00492bd9: PUSH EDI
// 00492bda: PUSH EBP
// 00492bdb: MOV ECX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x14] (READ)
// 00492bde: MOV EDI,dword ptr [EBP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00492be1: MOV ESI,dword ptr [EBP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00492be4: MOV EBX,dword ptr [EBP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 00492be7: MOV EBP,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x10] (READ)
// 00492bea: PXOR MM7,MM7
// 00492bed: MOVD MM5,dword ptr [0x02d052a8]
//   XREF to: 02d052a8 (READ)
// 00492bf4: PUNPCKLBW MM5,MM7
// 00492bf7: PSLLW MM5,0x6
// 00492bfb: MOV EAX,dword ptr [ESI]
// 00492bfd: MOV EAX,dword ptr [ESI + 0x20]
// 00492c00: MOV EAX,dword ptr [ESI + 0x40]
// 00492c03: MOV EAX,dword ptr [ESI + 0x60]
// 00492c06: MOV EAX,dword ptr [ESI + 0x80]
// 00492c0c: MOV EAX,dword ptr [ESI + 0xa0]
// 00492c12: MOV EAX,dword ptr [ESI + 0xc0]
// 00492c18: MOV EAX,dword ptr [ESI + 0xe0]
// 00492c1e: MOV EAX,dword ptr [ESI + 0x100]
// 00492c24: MOV EAX,dword ptr [ESI + 0x120]
// 00492c2a: MOV EAX,dword ptr [ESI + 0x140]
// 00492c30: MOV EAX,dword ptr [ESI + 0x160]
// 00492c36: MOV EAX,dword ptr [ESI + 0x180]
// 00492c3c: MOV EAX,dword ptr [ESI + 0x1a0]
// 00492c42: MOV EAX,dword ptr [ESI + 0x1c0]
// 00492c48: MOV EAX,dword ptr [ESI + 0x1e0]
// 00492c4e: MOV EAX,dword ptr [ESI + 0x200]
// 00492c54: MOV EAX,dword ptr [ESI + 0x220]
// 00492c5a: MOV EAX,dword ptr [ESI + 0x240]
// 00492c60: MOV EAX,dword ptr [ESI + 0x260]
// 00492c66: MOV EAX,dword ptr [ESI + 0x280]
// 00492c6c: MOV EAX,dword ptr [ESI + 0x2a0]
// 00492c72: MOV EAX,dword ptr [ESI + 0x2c0]
// 00492c78: MOV EAX,dword ptr [ESI + 0x2e0]
// 00492c7e: MOV EAX,dword ptr [ESI + 0x300]
// 00492c84: MOV EAX,dword ptr [ESI + 0x320]
// 00492c8a: MOV EAX,dword ptr [ESI + 0x340]
// 00492c90: MOV EAX,dword ptr [ESI + 0x360]
// 00492c96: MOV EAX,dword ptr [ESI + 0x380]
// 00492c9c: MOV EAX,dword ptr [ESI + 0x3a0]
// 00492ca2: MOV EAX,dword ptr [ESI + 0x3c0]
// 00492ca8: MOV EAX,dword ptr [ESI + 0x3e0]
// 00492cae: MOV EAX,dword ptr [ESI + 0x400]
// 00492cb4: MOV EAX,dword ptr [ESI + 0x420]
// 00492cba: MOV EAX,dword ptr [ESI + 0x440]
// 00492cc0: MOV EAX,dword ptr [ESI + 0x460]
// 00492cc6: MOV EAX,dword ptr [ESI + 0x480]
// 00492ccc: MOV EAX,dword ptr [ESI + 0x4a0]
// 00492cd2: MOV EAX,dword ptr [ESI + 0x4c0]
// 00492cd8: MOV EAX,dword ptr [ESI + 0x4e0]
// 00492cde: MOV EAX,dword ptr [ESI + 0x500]
// 00492ce4: MOV EAX,dword ptr [ESI + 0x520]
// 00492cea: MOV EAX,dword ptr [ESI + 0x540]
// 00492cf0: MOV EAX,dword ptr [ESI + 0x560]
// 00492cf6: MOV EAX,dword ptr [ESI + 0x580]
// 00492cfc: MOV EAX,dword ptr [ESI + 0x5a0]
// 00492d02: MOV EAX,dword ptr [ESI + 0x5c0]
// 00492d08: MOV EAX,dword ptr [ESI + 0x5e0]
// 00492d0e: MOV EAX,dword ptr [ESI + 0x600]
// 00492d14: MOV EAX,dword ptr [ESI + 0x620]
// 00492d1a: MOV EAX,dword ptr [ESI + 0x640]
// 00492d20: MOV EAX,dword ptr [ESI + 0x660]
// 00492d26: MOV EAX,dword ptr [ESI + 0x680]
// 00492d2c: MOV EAX,dword ptr [ESI + 0x6a0]
// 00492d32: MOV EAX,dword ptr [ESI + 0x6c0]
// 00492d38: MOV EAX,dword ptr [ESI + 0x6e0]
// 00492d3e: MOV EAX,dword ptr [ESI + 0x700]
// 00492d44: MOV EAX,dword ptr [ESI + 0x720]
// 00492d4a: MOV EAX,dword ptr [ESI + 0x740]
// 00492d50: MOV EAX,dword ptr [ESI + 0x760]
// 00492d56: MOV EAX,dword ptr [ESI + 0x780]
// 00492d5c: MOV EAX,dword ptr [ESI + 0x7a0]
// 00492d62: MOV EAX,dword ptr [ESI + 0x7c0]
// 00492d68: MOV EAX,dword ptr [ESI + 0x7e0]
// 00492d6e: MOV EAX,dword ptr [ESI + 0x800]
// 00492d74: MOV EAX,dword ptr [ESI + 0x820]
// 00492d7a: MOV EAX,dword ptr [ESI + 0x840]
// 00492d80: MOV EAX,dword ptr [ESI + 0x860]
// 00492d86: MOV EAX,dword ptr [ESI + 0x880]
// 00492d8c: MOV EAX,dword ptr [ESI + 0x8a0]
// 00492d92: MOV EAX,dword ptr [ESI + 0x8c0]
// 00492d98: MOV EAX,dword ptr [ESI + 0x8e0]
// 00492d9e: MOV EAX,dword ptr [ESI + 0x900]
// 00492da4: MOV EAX,dword ptr [ESI + 0x920]
// 00492daa: MOV EAX,dword ptr [ESI + 0x940]
// 00492db0: MOV EAX,dword ptr [ESI + 0x960]
// 00492db6: MOV EAX,dword ptr [ESI + 0x980]
// 00492dbc: MOV EAX,dword ptr [ESI + 0x9a0]
// 00492dc2: MOV EAX,dword ptr [ESI + 0x9c0]
// 00492dc8: MOV EAX,dword ptr [ESI + 0x9e0]
// 00492dce: MOVZX EDX,byte ptr [EBX]
//   Label: LAB_00492dce
// 00492dd1: MOVQ MM0,qword ptr [ESI]
// 00492dd4: MOVD MM2,dword ptr [EDX*0x4 + 0xc19dfc]
//   XREF to: 00c19dfc (DATA)
// 00492ddc: MOVZX EAX,byte ptr [EBP]
// 00492de0: PUNPCKLBW MM0,MM7
// 00492de3: SHR EDX,0x1
// 00492de5: PUNPCKLBW MM2,MM7
// 00492de8: ADD EAX,EDX
// 00492dea: PMULLW MM0,MM2
// 00492ded: MOVQ MM3,qword ptr [EAX*0x8 + 0x6779f0]
//   XREF to: 006779f0 (DATA)
// 00492df5: MOVQ MM2,MM3
// 00492df8: MOVQ MM4,MM5
// 00492dfb: PXOR MM2,qword ptr [0x006781e8]
//   XREF to: 006781e8 (READ)
// 00492e02: PMULHW MM0,MM2
// 00492e05: PMULHW MM4,MM3
// 00492e08: PADDW MM0,MM4
// 00492e0b: PADDW MM0,qword ptr [0x00676488]
//   XREF to: 00676488 (READ)
// 00492e12: PSRLW MM0,0x4
// 00492e16: PACKUSWB MM0,MM7
// 00492e19: MOVD dword ptr [EDI],MM0
// 00492e1c: ADD ESI,0x4
// 00492e1f: INC EBX
// 00492e20: INC EBP
// 00492e21: ADD EDI,0x4
// 00492e24: MOVZX EDX,byte ptr [EBX]
// 00492e27: MOVQ MM0,qword ptr [ESI]
// 00492e2a: MOVD MM2,dword ptr [EDX*0x4 + 0xc19dfc]
//   XREF to: 00c19dfc (DATA)
// 00492e32: MOVZX EAX,byte ptr [EBP]
// 00492e36: PUNPCKLBW MM0,MM7
// 00492e39: SHR EDX,0x1
// 00492e3b: PUNPCKLBW MM2,MM7
// 00492e3e: ADD EAX,EDX
// 00492e40: PMULLW MM0,MM2
// 00492e43: MOVQ MM3,qword ptr [EAX*0x8 + 0x6779f0]
//   XREF to: 006779f0 (DATA)
// 00492e4b: MOVQ MM2,MM3
// 00492e4e: MOVQ MM4,MM5
// 00492e51: PXOR MM2,qword ptr [0x006781e8]
//   XREF to: 006781e8 (READ)
// 00492e58: PMULHW MM0,MM2
// 00492e5b: PMULHW MM4,MM3
// 00492e5e: PADDW MM0,MM4
// 00492e61: PADDW MM0,qword ptr [0x00676490]
//   XREF to: 00676490 (READ)
// 00492e68: PSRLW MM0,0x4
// 00492e6c: PACKUSWB MM0,MM7
// 00492e6f: MOVD dword ptr [EDI],MM0
// 00492e72: ADD ESI,0x4
// 00492e75: INC EBX
// 00492e76: INC EBP
// 00492e77: ADD EDI,0x4
// 00492e7a: SUB ECX,0x2
// 00492e7d: JG 0x00492dce
//   XREF to: 00492dce (CONDITIONAL_JUMP)
// 00492e83: POP EBP
// 00492e84: EMMS
// 00492e86: POP EDI
// 00492e87: POP ESI
// 00492e88: LEAVE
// 00492e89: RET
