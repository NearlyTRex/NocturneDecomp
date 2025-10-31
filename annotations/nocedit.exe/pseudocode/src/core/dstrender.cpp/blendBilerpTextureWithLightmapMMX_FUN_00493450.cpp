// Name: core_dstrender.cpp_blendBilerpTextureWithLightmapMMX_FUN_00493450
// Address: 00493450
// Address Range: [[00493450, 00493686] [00493690, 004937b5]]
// Convention: __cdecl
// Signature: void core_dstrender.cpp_blendBilerpTextureWithLightmapMMX_FUN_00493450(uint * output_buffer, ulonglong * texture_buffer, byte * texture_indices, byte * lightmap_indices, int pixel_count)
// Cross-references:
//   core_dcamera.cpp_CDemonCamera_compositeLightmapToFramebuffer_FUN_00453270 (00453270) at 00453488 [UNCONDITIONAL_CALL]
// Globals:
//   ulonglong g_LightmapBlendBias3 = 0x20002000200020
//   ulonglong g_LightmapBlendBias4 = 0x60006000600060
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
core_dstrender_cpp_blendBilerpTextureWithLightmapMMX_FUN_00493450
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
    uVar1 = g_LightmapTexturePalette[(uint)*texture_indices + (uint)texture_indices[0x140] >> 1];
    uVar7 = (ushort)(((uint7)(byte)(uVar9 >> 0x18) << 0x30) >> 0x28);
    uVar2 = g_LightmapTexturePalette[(uint)texture_indices[1] + (uint)texture_indices[0x141] >> 1];
    uVar4 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(uVar2 >> 0x18) << 0x30) >> 0x28),
                                            CONCAT14((char)(uVar2 >> 0x10),uVar2)) >> 0x20),uVar2)
                  >> 0x18);
    uVar25 = (uint5)uVar4 & 0xffffffff00;
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
              (g_LightmapData +
              ((uint)*lightmap_indices +
              ((uint)texture_indices[1] + (uint)texture_indices[0x141] >> 2)) * 4) ^
             (ulonglong)g_LightmapXorMask;
    uVar8 = pmulhw(CONCAT26((uVar7 >> 8) * sVar21,
                            CONCAT24((short)CONCAT21(uVar7,(char)(uVar9 >> 0x10)) * sVar20,
                                     CONCAT22((byte)(uVar9 >> 8) * uVar12,
                                              ((ushort)uVar9 & 0xff) * uVar11))),uVar18);
    uVar14 = pmulhw(CONCAT26((uVar10 >> 8) * ((ushort)((short)(uVar25 >> 0x18) + sVar21) >> 1),
                             CONCAT24((short)CONCAT21(uVar10,(char)(uVar9 >> 0x30)) *
                                      ((ushort)((short)(uVar25 >> 8) + sVar20) >> 1),
                                      CONCAT22((ushort)(byte)(uVar9 >> 0x28) *
                                               ((ushort)(((ushort)CONCAT41(uVar4,(char)(uVar2 >> 8))
                                                         & 0xff) + uVar12) >> 1),
                                               ((ushort)(uVar9 >> 0x20) & 0xff) *
                                               ((ushort)((byte)uVar2 + uVar11) >> 1)))),uVar18);
    uVar22 = pmulhw(uVar24,*(ulonglong *)
                            (g_LightmapData +
                            ((uint)*lightmap_indices +
                            ((uint)texture_indices[1] + (uint)texture_indices[0x141] >> 2)) * 4));
    sVar20 = (short)((ulonglong)uVar22 >> 0x10);
    sVar21 = (short)((ulonglong)uVar22 >> 0x20);
    sVar23 = (short)((ulonglong)uVar22 >> 0x30);
    uVar7 = (ushort)((short)uVar8 + (short)uVar22 + (short)g_LightmapBlendBias3) >> 4;
    uVar10 = (ushort)((short)((ulonglong)uVar8 >> 0x10) + sVar20 +
                     (short)(g_LightmapBlendBias3 >> 0x10)) >> 4;
    uVar11 = (ushort)((short)((ulonglong)uVar8 >> 0x20) + sVar21 +
                     (short)(g_LightmapBlendBias3 >> 0x20)) >> 4;
    uVar12 = (ushort)((short)((ulonglong)uVar8 >> 0x30) + sVar23 +
                     (short)(g_LightmapBlendBias3 >> 0x30)) >> 4;
    uVar13 = (ushort)((short)uVar14 + (short)uVar22 + (short)g_LightmapBlendBias4) >> 4;
    uVar15 = (ushort)((short)((ulonglong)uVar14 >> 0x10) + sVar20 +
                     (short)(g_LightmapBlendBias4 >> 0x10)) >> 4;
    uVar16 = (ushort)((short)((ulonglong)uVar14 >> 0x20) + sVar21 +
                     (short)(g_LightmapBlendBias4 >> 0x20)) >> 4;
    uVar17 = (ushort)((short)((ulonglong)uVar14 >> 0x30) + sVar23 +
                     (short)(g_LightmapBlendBias4 >> 0x30)) >> 4;
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
// 00493450: PUSH EBP
//   Label: core_dstrender.cpp_blendBilerpTextureWithLightmapMMX_FUN_00493450
// 00493451: MOV EBP,ESP
// 00493453: PUSH ESI
// 00493454: PUSH EDI
// 00493455: PUSH EBP
// 00493456: MOV ECX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x14] (READ)
// 00493459: MOV EDI,dword ptr [EBP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0049345c: MOV ESI,dword ptr [EBP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0049345f: MOV EBX,dword ptr [EBP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 00493462: MOV EBP,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x10] (READ)
// 00493465: PXOR MM7,MM7
// 00493468: MOVD MM5,dword ptr [0x02d052a8]
//   XREF to: 02d052a8 (READ)
// 0049346f: PUNPCKLBW MM5,MM7
// 00493472: PSLLW MM5,0x6
// 00493476: MOV EAX,dword ptr [ESI]
// 00493478: MOV EAX,dword ptr [ESI + 0x20]
// 0049347b: MOV EAX,dword ptr [ESI + 0x40]
// 0049347e: MOV EAX,dword ptr [ESI + 0x60]
// 00493481: MOV EAX,dword ptr [ESI + 0x80]
// 00493487: MOV EAX,dword ptr [ESI + 0xa0]
// 0049348d: MOV EAX,dword ptr [ESI + 0xc0]
// 00493493: MOV EAX,dword ptr [ESI + 0xe0]
// 00493499: MOV EAX,dword ptr [ESI + 0x100]
// 0049349f: MOV EAX,dword ptr [ESI + 0x120]
// 004934a5: MOV EAX,dword ptr [ESI + 0x140]
// 004934ab: MOV EAX,dword ptr [ESI + 0x160]
// 004934b1: MOV EAX,dword ptr [ESI + 0x180]
// 004934b7: MOV EAX,dword ptr [ESI + 0x1a0]
// 004934bd: MOV EAX,dword ptr [ESI + 0x1c0]
// 004934c3: MOV EAX,dword ptr [ESI + 0x1e0]
// 004934c9: MOV EAX,dword ptr [ESI + 0x200]
// 004934cf: MOV EAX,dword ptr [ESI + 0x220]
// 004934d5: MOV EAX,dword ptr [ESI + 0x240]
// 004934db: MOV EAX,dword ptr [ESI + 0x260]
// 004934e1: MOV EAX,dword ptr [ESI + 0x280]
// 004934e7: MOV EAX,dword ptr [ESI + 0x2a0]
// 004934ed: MOV EAX,dword ptr [ESI + 0x2c0]
// 004934f3: MOV EAX,dword ptr [ESI + 0x2e0]
// 004934f9: MOV EAX,dword ptr [ESI + 0x300]
// 004934ff: MOV EAX,dword ptr [ESI + 0x320]
// 00493505: MOV EAX,dword ptr [ESI + 0x340]
// 0049350b: MOV EAX,dword ptr [ESI + 0x360]
// 00493511: MOV EAX,dword ptr [ESI + 0x380]
// 00493517: MOV EAX,dword ptr [ESI + 0x3a0]
// 0049351d: MOV EAX,dword ptr [ESI + 0x3c0]
// 00493523: MOV EAX,dword ptr [ESI + 0x3e0]
// 00493529: MOV EAX,dword ptr [ESI + 0x400]
// 0049352f: MOV EAX,dword ptr [ESI + 0x420]
// 00493535: MOV EAX,dword ptr [ESI + 0x440]
// 0049353b: MOV EAX,dword ptr [ESI + 0x460]
// 00493541: MOV EAX,dword ptr [ESI + 0x480]
// 00493547: MOV EAX,dword ptr [ESI + 0x4a0]
// 0049354d: MOV EAX,dword ptr [ESI + 0x4c0]
// 00493553: MOV EAX,dword ptr [ESI + 0x4e0]
// 00493559: MOV EAX,dword ptr [ESI + 0x500]
// 0049355f: MOV EAX,dword ptr [ESI + 0x520]
// 00493565: MOV EAX,dword ptr [ESI + 0x540]
// 0049356b: MOV EAX,dword ptr [ESI + 0x560]
// 00493571: MOV EAX,dword ptr [ESI + 0x580]
// 00493577: MOV EAX,dword ptr [ESI + 0x5a0]
// 0049357d: MOV EAX,dword ptr [ESI + 0x5c0]
// 00493583: MOV EAX,dword ptr [ESI + 0x5e0]
// 00493589: MOV EAX,dword ptr [ESI + 0x600]
// 0049358f: MOV EAX,dword ptr [ESI + 0x620]
// 00493595: MOV EAX,dword ptr [ESI + 0x640]
// 0049359b: MOV EAX,dword ptr [ESI + 0x660]
// 004935a1: MOV EAX,dword ptr [ESI + 0x680]
// 004935a7: MOV EAX,dword ptr [ESI + 0x6a0]
// 004935ad: MOV EAX,dword ptr [ESI + 0x6c0]
// 004935b3: MOV EAX,dword ptr [ESI + 0x6e0]
// 004935b9: MOV EAX,dword ptr [ESI + 0x700]
// 004935bf: MOV EAX,dword ptr [ESI + 0x720]
// 004935c5: MOV EAX,dword ptr [ESI + 0x740]
// 004935cb: MOV EAX,dword ptr [ESI + 0x760]
// 004935d1: MOV EAX,dword ptr [ESI + 0x780]
// 004935d7: MOV EAX,dword ptr [ESI + 0x7a0]
// 004935dd: MOV EAX,dword ptr [ESI + 0x7c0]
// 004935e3: MOV EAX,dword ptr [ESI + 0x7e0]
// 004935e9: MOV EAX,dword ptr [ESI + 0x800]
// 004935ef: MOV EAX,dword ptr [ESI + 0x820]
// 004935f5: MOV EAX,dword ptr [ESI + 0x840]
// 004935fb: MOV EAX,dword ptr [ESI + 0x860]
// 00493601: MOV EAX,dword ptr [ESI + 0x880]
// 00493607: MOV EAX,dword ptr [ESI + 0x8a0]
// 0049360d: MOV EAX,dword ptr [ESI + 0x8c0]
// 00493613: MOV EAX,dword ptr [ESI + 0x8e0]
// 00493619: MOV EAX,dword ptr [ESI + 0x900]
// 0049361f: MOV EAX,dword ptr [ESI + 0x920]
// 00493625: MOV EAX,dword ptr [ESI + 0x940]
// 0049362b: MOV EAX,dword ptr [ESI + 0x960]
// 00493631: MOV EAX,dword ptr [ESI + 0x980]
// 00493637: MOV EAX,dword ptr [ESI + 0x9a0]
// 0049363d: MOV EAX,dword ptr [ESI + 0x9c0]
// 00493643: MOV EAX,dword ptr [ESI + 0x9e0]
// 00493649: MOV EAX,dword ptr [EBX + 0x140]
// 0049364f: MOV EAX,dword ptr [EBX + 0x160]
// 00493655: MOV EAX,dword ptr [EBX + 0x180]
// 0049365b: MOV EAX,dword ptr [EBX + 0x1a0]
// 00493661: MOV EAX,dword ptr [EBX + 0x1c0]
// 00493667: MOV EAX,dword ptr [EBX + 0x1e0]
// 0049366d: MOV EAX,dword ptr [EBX + 0x200]
// 00493673: MOV EAX,dword ptr [EBX + 0x220]
// 00493679: MOV EAX,dword ptr [EBX + 0x240]
// 0049367f: MOV EAX,dword ptr [EBX + 0x260]
// 00493685: JMP 0x00493690
//   XREF to: 00493690 (UNCONDITIONAL_JUMP)
// 00493690: MOVZX EDX,byte ptr [EBX]
//   Label: LAB_00493690
// 00493693: MOVZX EAX,byte ptr [EBX + 0x140]
// 0049369a: ADD EDX,EAX
// 0049369c: MOVQ MM0,qword ptr [ESI]
// 0049369f: SHR EDX,0x1
// 004936a1: MOVZX EAX,byte ptr [EBX + 0x141]
// 004936a8: MOVD MM2,dword ptr [EDX*0x4 + 0xc19dfc]
//   XREF to: 00c19dfc (DATA)
// 004936b0: MOVZX EDX,byte ptr [EBX + 0x1]
// 004936b4: MOVQ MM1,MM0
// 004936b7: ADD EDX,EAX
// 004936b9: MOVZX EAX,byte ptr [EBP]
// 004936bd: SHR EDX,0x1
// 004936bf: PUNPCKLBW MM0,MM7
// 004936c2: MOVD MM6,dword ptr [EDX*0x4 + 0xc19dfc]
//   XREF to: 00c19dfc (DATA)
// 004936ca: PSRLQ MM1,0x20
// 004936ce: SHR EDX,0x1
// 004936d0: PUNPCKLBW MM6,MM7
// 004936d3: PUNPCKLBW MM2,MM7
// 004936d6: ADD EAX,EDX
// 004936d8: PADDW MM6,MM2
// 004936db: PUNPCKLBW MM1,MM7
// 004936de: PMULLW MM0,MM2
// 004936e1: PSRLW MM6,0x1
// 004936e5: MOVQ MM3,qword ptr [EAX*0x8 + 0x6779f0]
//   XREF to: 006779f0 (DATA)
// 004936ed: PMULLW MM1,MM6
// 004936f0: MOVQ MM2,MM3
// 004936f3: MOVQ MM4,MM5
// 004936f6: PXOR MM2,qword ptr [0x006781e8]
//   XREF to: 006781e8 (READ)
// 004936fd: PMULHW MM0,MM2
// 00493700: PMULHW MM1,MM2
// 00493703: PMULHW MM4,MM3
// 00493706: PADDW MM0,MM4
// 00493709: PADDW MM1,MM4
// 0049370c: PADDW MM0,qword ptr [0x006764a8]
//   XREF to: 006764a8 (READ)
// 00493713: PADDW MM1,qword ptr [0x006764b0]
//   XREF to: 006764b0 (READ)
// 0049371a: PSRLW MM0,0x4
// 0049371e: PSRLW MM1,0x4
// 00493722: PACKUSWB MM0,MM7
// 00493725: PACKUSWB MM1,MM7
// 00493728: MOVQ MM2,MM0
// 0049372b: MOVQ MM3,MM0
// 0049372e: PAND MM0,qword ptr [0x006827a0]
//   XREF to: 006827a0 (READ)
// 00493735: PAND MM2,qword ptr [0x00682780]
//   XREF to: 00682780 (READ)
// 0049373c: PAND MM3,qword ptr [0x00682760]
//   XREF to: 00682760 (READ)
// 00493743: PSRLQ MM0,qword ptr [0x006827e8]
//   XREF to: 006827e8 (READ)
// 0049374a: PSRLQ MM2,qword ptr [0x006827c8]
//   XREF to: 006827c8 (READ)
// 00493751: PSRLQ MM3,qword ptr [0x006827a8]
//   XREF to: 006827a8 (READ)
// 00493758: POR MM0,MM2
// 0049375b: POR MM0,MM3
// 0049375e: MOVQ MM2,MM1
// 00493761: MOVQ MM3,MM1
// 00493764: PAND MM1,qword ptr [0x006827a0]
//   XREF to: 006827a0 (READ)
// 0049376b: PAND MM2,qword ptr [0x00682780]
//   XREF to: 00682780 (READ)
// 00493772: PAND MM3,qword ptr [0x00682760]
//   XREF to: 00682760 (READ)
// 00493779: PSRLQ MM1,qword ptr [0x006827e8]
//   XREF to: 006827e8 (READ)
// 00493780: PSRLQ MM2,qword ptr [0x006827c8]
//   XREF to: 006827c8 (READ)
// 00493787: PSRLQ MM3,qword ptr [0x006827a8]
//   XREF to: 006827a8 (READ)
// 0049378e: POR MM1,MM2
// 00493791: POR MM1,MM3
// 00493794: PSLLQ MM1,0x10
// 00493798: POR MM0,MM1
// 0049379b: ADD ESI,0x8
// 0049379e: INC EBX
// 0049379f: INC EBP
// 004937a0: MOVD dword ptr [EDI],MM0
// 004937a3: ADD EDI,0x4
// 004937a6: SUB ECX,0x2
// 004937a9: JG 0x00493690
//   XREF to: 00493690 (CONDITIONAL_JUMP)
// 004937af: POP EBP
// 004937b0: EMMS
// 004937b2: POP EDI
// 004937b3: POP ESI
// 004937b4: LEAVE
// 004937b5: RET
