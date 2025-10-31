// Name: core_dstrender.cpp_blendLightmapToTexture64BitOutput_FUN_004924a9
// Address: 004924a9
// Address Range: [[004924a9, 004925c4]]
// Convention: __cdecl
// Signature: void core_dstrender.cpp_blendLightmapToTexture64BitOutput_FUN_004924a9(ulonglong * output_buffer, ulonglong * texture_buffer, byte * texture_indices, byte * lightmap_indices, int pixel_count)
// Globals:
//   ulonglong g_LightmapBlendBias1 = 0x0
//   ulonglong g_LightmapBlendBias2 = 0x8000800080008
//   ushort[384] g_LightmapData
//   double g_LightmapXorMask = 0.126945525291829
//   uint[256] g_LightmapTexturePalette
//   int g_SolidColorMode

#include "nocturne.h"

void __cdecl
core_dstrender_cpp_blendLightmapToTexture64BitOutput_FUN_004924a9
          (ulonglong *output_buffer,ulonglong *texture_buffer,byte *texture_indices,
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
  ushort uVar11;
  ushort uVar13;
  ushort uVar14;
  undefined8 uVar12;
  ushort uVar15;
  short sVar18;
  uint5 uVar17;
  short sVar19;
  ulonglong uVar16;
  undefined8 uVar20;
  short sVar21;
  undefined8 uVar22;
  
  uVar22 = psllw((ulonglong)
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
    uVar17 = (uint5)uVar4 & 0xffffffff00;
    uVar9 = (ushort)CONCAT41(uVar4,(char)(uVar2 >> 8)) & 0xff;
    uVar8 = (ushort)(((uint7)(byte)(uVar1 >> 0x38) << 0x30) >> 0x28);
    sVar18 = (short)(uVar17 >> 8);
    sVar19 = (short)(uVar17 >> 0x18);
    uVar16 = *(ulonglong *)
              (g_LightmapData + ((uint)*lightmap_indices + (uint)(*texture_indices >> 1)) * 4) ^
             (ulonglong)g_LightmapXorMask;
    uVar7 = pmulhw(CONCAT26((uVar6 >> 8) * sVar19,
                            CONCAT24((short)CONCAT21(uVar6,(char)(uVar1 >> 0x10)) * sVar18,
                                     CONCAT22((byte)(uVar1 >> 8) * uVar9,
                                              ((ushort)uVar1 & 0xff) * (ushort)(byte)uVar2))),uVar16
                  );
    uVar12 = pmulhw(CONCAT26((uVar8 >> 8) * sVar19,
                             CONCAT24((short)CONCAT21(uVar8,(char)(uVar1 >> 0x30)) * sVar18,
                                      CONCAT22((byte)(uVar1 >> 0x28) * uVar9,
                                               ((ushort)(uVar1 >> 0x20) & 0xff) *
                                               (ushort)(byte)uVar2))),uVar16);
    uVar20 = pmulhw(uVar22,*(ulonglong *)
                            (g_LightmapData +
                            ((uint)*lightmap_indices + (uint)(*texture_indices >> 1)) * 4));
    sVar18 = (short)((ulonglong)uVar20 >> 0x10);
    sVar19 = (short)((ulonglong)uVar20 >> 0x20);
    sVar21 = (short)((ulonglong)uVar20 >> 0x30);
    uVar6 = (ushort)((short)uVar7 + (short)uVar20 + (short)g_LightmapBlendBias1) >> 4;
    uVar8 = (ushort)((short)((ulonglong)uVar7 >> 0x10) + sVar18 +
                    (short)(g_LightmapBlendBias1 >> 0x10)) >> 4;
    uVar9 = (ushort)((short)((ulonglong)uVar7 >> 0x20) + sVar19 +
                    (short)(g_LightmapBlendBias1 >> 0x20)) >> 4;
    uVar10 = (ushort)((short)((ulonglong)uVar7 >> 0x30) + sVar21 +
                     (short)(g_LightmapBlendBias1 >> 0x30)) >> 4;
    uVar11 = (ushort)((short)uVar12 + (short)uVar20 + (short)g_LightmapBlendBias2) >> 4;
    uVar13 = (ushort)((short)((ulonglong)uVar12 >> 0x10) + sVar18 +
                     (short)(g_LightmapBlendBias2 >> 0x10)) >> 4;
    uVar14 = (ushort)((short)((ulonglong)uVar12 >> 0x20) + sVar19 +
                     (short)(g_LightmapBlendBias2 >> 0x20)) >> 4;
    uVar15 = (ushort)((short)((ulonglong)uVar12 >> 0x30) + sVar21 +
                     (short)(g_LightmapBlendBias2 >> 0x30)) >> 4;
    *output_buffer =
         CONCAT17((uVar15 != 0) * (uVar15 < 0x100) * (char)uVar15 - (0xff < uVar15),
                  CONCAT16((uVar14 != 0) * (uVar14 < 0x100) * (char)uVar14 - (0xff < uVar14),
                           CONCAT15((uVar13 != 0) * (uVar13 < 0x100) * (char)uVar13 -
                                    (0xff < uVar13),
                                    CONCAT14((uVar11 != 0) * (uVar11 < 0x100) * (char)uVar11 -
                                             (0xff < uVar11),
                                             CONCAT13((uVar10 != 0) * (uVar10 < 0x100) *
                                                      (char)uVar10 - (0xff < uVar10),
                                                      CONCAT12((uVar9 != 0) * (uVar9 < 0x100) *
                                                               (char)uVar9 - (0xff < uVar9),
                                                               CONCAT11((uVar8 != 0) *
                                                                        (uVar8 < 0x100) *
                                                                        (char)uVar8 - (0xff < uVar8)
                                                                        ,(uVar6 != 0) *
                                                                         (uVar6 < 0x100) *
                                                                         (char)uVar6 -
                                                                         (0xff < uVar6))))))));
    uVar1 = texture_buffer[1];
    uVar2 = g_LightmapTexturePalette[*texture_indices];
    uVar6 = (ushort)(((uint7)(byte)(uVar1 >> 0x18) << 0x30) >> 0x28);
    uVar4 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(uVar2 >> 0x18) << 0x30) >> 0x28),
                                            CONCAT14((char)(uVar2 >> 0x10),uVar2)) >> 0x20),uVar2)
                  >> 0x18);
    uVar17 = (uint5)uVar4 & 0xffffffff00;
    uVar10 = (ushort)(CONCAT43(uVar4,CONCAT12((char)(uVar2 >> 8),(ushort)uVar2)) >> 0x10) & 0xff;
    uVar9 = (ushort)uVar2 & 0xff;
    uVar8 = (ushort)(((uint7)(byte)(uVar1 >> 0x38) << 0x30) >> 0x28);
    sVar18 = (short)(uVar17 >> 8);
    sVar19 = (short)(uVar17 >> 0x18);
    uVar16 = *(ulonglong *)
              (g_LightmapData + ((uint)*lightmap_indices + (uint)(*texture_indices >> 1)) * 4) ^
             (ulonglong)g_LightmapXorMask;
    uVar7 = pmulhw(CONCAT26((uVar6 >> 8) * sVar19,
                            CONCAT24((short)CONCAT21(uVar6,(char)(uVar1 >> 0x10)) * sVar18,
                                     CONCAT22((byte)(uVar1 >> 8) * uVar10,
                                              ((ushort)uVar1 & 0xff) * uVar9))),uVar16);
    uVar12 = pmulhw(CONCAT26((uVar8 >> 8) * sVar19,
                             CONCAT24((short)CONCAT21(uVar8,(char)(uVar1 >> 0x30)) * sVar18,
                                      CONCAT22((byte)(uVar1 >> 0x28) * uVar10,
                                               ((ushort)(uVar1 >> 0x20) & 0xff) * uVar9))),uVar16);
    uVar20 = pmulhw(uVar22,*(ulonglong *)
                            (g_LightmapData +
                            ((uint)*lightmap_indices + (uint)(*texture_indices >> 1)) * 4));
    sVar18 = (short)((ulonglong)uVar20 >> 0x10);
    sVar19 = (short)((ulonglong)uVar20 >> 0x20);
    sVar21 = (short)((ulonglong)uVar20 >> 0x30);
    uVar6 = (ushort)((short)uVar7 + (short)uVar20 + (short)g_LightmapBlendBias1) >> 4;
    uVar8 = (ushort)((short)((ulonglong)uVar7 >> 0x10) + sVar18 +
                    (short)(g_LightmapBlendBias1 >> 0x10)) >> 4;
    uVar9 = (ushort)((short)((ulonglong)uVar7 >> 0x20) + sVar19 +
                    (short)(g_LightmapBlendBias1 >> 0x20)) >> 4;
    uVar10 = (ushort)((short)((ulonglong)uVar7 >> 0x30) + sVar21 +
                     (short)(g_LightmapBlendBias1 >> 0x30)) >> 4;
    uVar11 = (ushort)((short)uVar12 + (short)uVar20 + (short)g_LightmapBlendBias2) >> 4;
    uVar13 = (ushort)((short)((ulonglong)uVar12 >> 0x10) + sVar18 +
                     (short)(g_LightmapBlendBias2 >> 0x10)) >> 4;
    uVar14 = (ushort)((short)((ulonglong)uVar12 >> 0x20) + sVar19 +
                     (short)(g_LightmapBlendBias2 >> 0x20)) >> 4;
    uVar15 = (ushort)((short)((ulonglong)uVar12 >> 0x30) + sVar21 +
                     (short)(g_LightmapBlendBias2 >> 0x30)) >> 4;
    texture_buffer = texture_buffer + 2;
    output_buffer[1] =
         CONCAT17((uVar15 != 0) * (uVar15 < 0x100) * (char)uVar15 - (0xff < uVar15),
                  CONCAT16((uVar14 != 0) * (uVar14 < 0x100) * (char)uVar14 - (0xff < uVar14),
                           CONCAT15((uVar13 != 0) * (uVar13 < 0x100) * (char)uVar13 -
                                    (0xff < uVar13),
                                    CONCAT14((uVar11 != 0) * (uVar11 < 0x100) * (char)uVar11 -
                                             (0xff < uVar11),
                                             CONCAT13((uVar10 != 0) * (uVar10 < 0x100) *
                                                      (char)uVar10 - (0xff < uVar10),
                                                      CONCAT12((uVar9 != 0) * (uVar9 < 0x100) *
                                                               (char)uVar9 - (0xff < uVar9),
                                                               CONCAT11((uVar8 != 0) *
                                                                        (uVar8 < 0x100) *
                                                                        (char)uVar8 - (0xff < uVar8)
                                                                        ,(uVar6 != 0) *
                                                                         (uVar6 < 0x100) *
                                                                         (char)uVar6 -
                                                                         (0xff < uVar6))))))));
    output_buffer = output_buffer + 2;
    texture_indices = texture_indices + 1;
    lightmap_indices = lightmap_indices + 1;
    iVar5 = pixel_count + -4;
    bVar3 = 3 < pixel_count;
    pixel_count = iVar5;
  } while (iVar5 != 0 && bVar3);
  return;
}


// Assembly code:
// 004924a9: PUSH EBP
//   Label: core_dstrender.cpp_blendLightmapToTexture64BitOutput_FUN_004924a9
// 004924aa: MOV EBP,ESP
// 004924ac: PUSH ESI
// 004924ad: PUSH EDI
// 004924ae: PUSH EBP
// 004924af: MOV ECX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x14] (READ)
// 004924b2: MOV EDI,dword ptr [EBP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004924b5: MOV ESI,dword ptr [EBP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 004924b8: MOV EBX,dword ptr [EBP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 004924bb: MOV EBP,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x10] (READ)
// 004924be: PXOR MM7,MM7
// 004924c1: MOVD MM5,dword ptr [0x02d052a8]
//   XREF to: 02d052a8 (READ)
// 004924c8: PUNPCKLBW MM5,MM7
// 004924cb: PSLLW MM5,0x6
// 004924cf: MOVZX EDX,byte ptr [EBX]
//   Label: LAB_004924cf
// 004924d2: MOVQ MM0,qword ptr [ESI]
// 004924d5: MOVD MM2,dword ptr [EDX*0x4 + 0xc19dfc]
//   XREF to: 00c19dfc (DATA)
// 004924dd: MOVZX EAX,byte ptr [EBP]
// 004924e1: MOVQ MM1,MM0
// 004924e4: PUNPCKLBW MM0,MM7
// 004924e7: SHR EDX,0x1
// 004924e9: PSRLQ MM1,0x20
// 004924ed: PUNPCKLBW MM2,MM7
// 004924f0: ADD EAX,EDX
// 004924f2: PUNPCKLBW MM1,MM7
// 004924f5: PMULLW MM0,MM2
// 004924f8: MOVQ MM3,qword ptr [EAX*0x8 + 0x6779f0]
//   XREF to: 006779f0 (DATA)
// 00492500: PMULLW MM1,MM2
// 00492503: MOVQ MM2,MM3
// 00492506: MOVQ MM4,MM5
// 00492509: PXOR MM2,qword ptr [0x006781e8]
//   XREF to: 006781e8 (READ)
// 00492510: PMULHW MM0,MM2
// 00492513: PMULHW MM1,MM2
// 00492516: PMULHW MM4,MM3
// 00492519: PADDW MM0,MM4
// 0049251c: PADDW MM1,MM4
// 0049251f: PADDW MM0,qword ptr [0x00676478]
//   XREF to: 00676478 (READ)
// 00492526: PADDW MM1,qword ptr [0x00676480]
//   XREF to: 00676480 (READ)
// 0049252d: PSRLW MM0,0x4
// 00492531: PSRLW MM1,0x4
// 00492535: PACKUSWB MM0,MM1
// 00492538: ADD ESI,0x8
// 0049253b: MOVQ qword ptr [EDI],MM0
// 0049253e: ADD EDI,0x8
// 00492541: MOVZX EDX,byte ptr [EBX]
// 00492544: MOVQ MM0,qword ptr [ESI]
// 00492547: MOVD MM2,dword ptr [EDX*0x4 + 0xc19dfc]
//   XREF to: 00c19dfc (DATA)
// 0049254f: MOVZX EAX,byte ptr [EBP]
// 00492553: MOVQ MM1,MM0
// 00492556: PUNPCKLBW MM0,MM7
// 00492559: SHR EDX,0x1
// 0049255b: PSRLQ MM1,0x20
// 0049255f: PUNPCKLBW MM2,MM7
// 00492562: ADD EAX,EDX
// 00492564: PUNPCKLBW MM1,MM7
// 00492567: PMULLW MM0,MM2
// 0049256a: MOVQ MM3,qword ptr [EAX*0x8 + 0x6779f0]
//   XREF to: 006779f0 (DATA)
// 00492572: PMULLW MM1,MM2
// 00492575: MOVQ MM2,MM3
// 00492578: MOVQ MM4,MM5
// 0049257b: PXOR MM2,qword ptr [0x006781e8]
//   XREF to: 006781e8 (READ)
// 00492582: PMULHW MM0,MM2
// 00492585: PMULHW MM1,MM2
// 00492588: PMULHW MM4,MM3
// 0049258b: PADDW MM0,MM4
// 0049258e: PADDW MM1,MM4
// 00492591: PADDW MM0,qword ptr [0x00676478]
//   XREF to: 00676478 (READ)
// 00492598: PADDW MM1,qword ptr [0x00676480]
//   XREF to: 00676480 (READ)
// 0049259f: PSRLW MM0,0x4
// 004925a3: PSRLW MM1,0x4
// 004925a7: PACKUSWB MM0,MM1
// 004925aa: ADD ESI,0x8
// 004925ad: MOVQ qword ptr [EDI],MM0
// 004925b0: ADD EDI,0x8
// 004925b3: INC EBX
// 004925b4: INC EBP
// 004925b5: SUB ECX,0x4
// 004925b8: JG 0x004924cf
//   XREF to: 004924cf (CONDITIONAL_JUMP)
// 004925be: POP EBP
// 004925bf: EMMS
// 004925c1: POP EDI
// 004925c2: POP ESI
// 004925c3: LEAVE
// 004925c4: RET
