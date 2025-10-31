// Name: core_dstrender.cpp_blendLightmapToTexture64BitOutput_FUN_004925c5
// Address: 004925c5
// Address Range: [[004925c5, 004926e0]]
// Convention: __cdecl
// Signature: void core_dstrender.cpp_blendLightmapToTexture64BitOutput_FUN_004925c5(ulonglong * output_buffer, ulonglong * texture_buffer, byte * texture_indices, byte * lightmap_indices, int pixel_count)
// Globals:
//   ulonglong g_AmbientLightMMX1 = 0x4000400040004
//   ulonglong g_AmbientLightMMX2 = 0xc000c000c000c
//   ushort[384] g_LightmapData
//   double g_LightmapXorMask = 0.126945525291829
//   uint[256] g_LightmapTexturePalette
//   int g_SolidColorMode

#include "nocturne.h"

void __cdecl
core_dstrender_cpp_blendLightmapToTexture64BitOutput_FUN_004925c5
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
    uVar6 = (ushort)((short)uVar7 + (short)uVar20 + (short)g_AmbientLightMMX1) >> 4;
    uVar8 = (ushort)((short)((ulonglong)uVar7 >> 0x10) + sVar18 +
                    (short)(g_AmbientLightMMX1 >> 0x10)) >> 4;
    uVar9 = (ushort)((short)((ulonglong)uVar7 >> 0x20) + sVar19 +
                    (short)(g_AmbientLightMMX1 >> 0x20)) >> 4;
    uVar10 = (ushort)((short)((ulonglong)uVar7 >> 0x30) + sVar21 +
                     (short)(g_AmbientLightMMX1 >> 0x30)) >> 4;
    uVar11 = (ushort)((short)uVar12 + (short)uVar20 + (short)g_AmbientLightMMX2) >> 4;
    uVar13 = (ushort)((short)((ulonglong)uVar12 >> 0x10) + sVar18 +
                     (short)(g_AmbientLightMMX2 >> 0x10)) >> 4;
    uVar14 = (ushort)((short)((ulonglong)uVar12 >> 0x20) + sVar19 +
                     (short)(g_AmbientLightMMX2 >> 0x20)) >> 4;
    uVar15 = (ushort)((short)((ulonglong)uVar12 >> 0x30) + sVar21 +
                     (short)(g_AmbientLightMMX2 >> 0x30)) >> 4;
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
    uVar6 = (ushort)((short)uVar7 + (short)uVar20 + (short)g_AmbientLightMMX1) >> 4;
    uVar8 = (ushort)((short)((ulonglong)uVar7 >> 0x10) + sVar18 +
                    (short)(g_AmbientLightMMX1 >> 0x10)) >> 4;
    uVar9 = (ushort)((short)((ulonglong)uVar7 >> 0x20) + sVar19 +
                    (short)(g_AmbientLightMMX1 >> 0x20)) >> 4;
    uVar10 = (ushort)((short)((ulonglong)uVar7 >> 0x30) + sVar21 +
                     (short)(g_AmbientLightMMX1 >> 0x30)) >> 4;
    uVar11 = (ushort)((short)uVar12 + (short)uVar20 + (short)g_AmbientLightMMX2) >> 4;
    uVar13 = (ushort)((short)((ulonglong)uVar12 >> 0x10) + sVar18 +
                     (short)(g_AmbientLightMMX2 >> 0x10)) >> 4;
    uVar14 = (ushort)((short)((ulonglong)uVar12 >> 0x20) + sVar19 +
                     (short)(g_AmbientLightMMX2 >> 0x20)) >> 4;
    uVar15 = (ushort)((short)((ulonglong)uVar12 >> 0x30) + sVar21 +
                     (short)(g_AmbientLightMMX2 >> 0x30)) >> 4;
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
// 004925c5: PUSH EBP
//   Label: core_dstrender.cpp_blendLightmapToTexture64BitOutput_FUN_004925c5
// 004925c6: MOV EBP,ESP
// 004925c8: PUSH ESI
// 004925c9: PUSH EDI
// 004925ca: PUSH EBP
// 004925cb: MOV ECX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x14] (READ)
// 004925ce: MOV EDI,dword ptr [EBP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004925d1: MOV ESI,dword ptr [EBP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 004925d4: MOV EBX,dword ptr [EBP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 004925d7: MOV EBP,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x10] (READ)
// 004925da: PXOR MM7,MM7
// 004925dd: MOVD MM5,dword ptr [0x02d052a8]
//   XREF to: 02d052a8 (READ)
// 004925e4: PUNPCKLBW MM5,MM7
// 004925e7: PSLLW MM5,0x6
// 004925eb: MOVZX EDX,byte ptr [EBX]
//   Label: LAB_004925eb
// 004925ee: MOVQ MM0,qword ptr [ESI]
// 004925f1: MOVD MM2,dword ptr [EDX*0x4 + 0xc19dfc]
//   XREF to: 00c19dfc (DATA)
// 004925f9: MOVZX EAX,byte ptr [EBP]
// 004925fd: MOVQ MM1,MM0
// 00492600: PUNPCKLBW MM0,MM7
// 00492603: SHR EDX,0x1
// 00492605: PSRLQ MM1,0x20
// 00492609: PUNPCKLBW MM2,MM7
// 0049260c: ADD EAX,EDX
// 0049260e: PUNPCKLBW MM1,MM7
// 00492611: PMULLW MM0,MM2
// 00492614: MOVQ MM3,qword ptr [EAX*0x8 + 0x6779f0]
//   XREF to: 006779f0 (DATA)
// 0049261c: PMULLW MM1,MM2
// 0049261f: MOVQ MM2,MM3
// 00492622: MOVQ MM4,MM5
// 00492625: PXOR MM2,qword ptr [0x006781e8]
//   XREF to: 006781e8 (READ)
// 0049262c: PMULHW MM0,MM2
// 0049262f: PMULHW MM1,MM2
// 00492632: PMULHW MM4,MM3
// 00492635: PADDW MM0,MM4
// 00492638: PADDW MM1,MM4
// 0049263b: PADDW MM0,qword ptr [0x00676488]
//   XREF to: 00676488 (READ)
// 00492642: PADDW MM1,qword ptr [0x00676490]
//   XREF to: 00676490 (READ)
// 00492649: PSRLW MM0,0x4
// 0049264d: PSRLW MM1,0x4
// 00492651: PACKUSWB MM0,MM1
// 00492654: ADD ESI,0x8
// 00492657: MOVQ qword ptr [EDI],MM0
// 0049265a: ADD EDI,0x8
// 0049265d: MOVZX EDX,byte ptr [EBX]
// 00492660: MOVQ MM0,qword ptr [ESI]
// 00492663: MOVD MM2,dword ptr [EDX*0x4 + 0xc19dfc]
//   XREF to: 00c19dfc (DATA)
// 0049266b: MOVZX EAX,byte ptr [EBP]
// 0049266f: MOVQ MM1,MM0
// 00492672: PUNPCKLBW MM0,MM7
// 00492675: SHR EDX,0x1
// 00492677: PSRLQ MM1,0x20
// 0049267b: PUNPCKLBW MM2,MM7
// 0049267e: ADD EAX,EDX
// 00492680: PUNPCKLBW MM1,MM7
// 00492683: PMULLW MM0,MM2
// 00492686: MOVQ MM3,qword ptr [EAX*0x8 + 0x6779f0]
//   XREF to: 006779f0 (DATA)
// 0049268e: PMULLW MM1,MM2
// 00492691: MOVQ MM2,MM3
// 00492694: MOVQ MM4,MM5
// 00492697: PXOR MM2,qword ptr [0x006781e8]
//   XREF to: 006781e8 (READ)
// 0049269e: PMULHW MM0,MM2
// 004926a1: PMULHW MM1,MM2
// 004926a4: PMULHW MM4,MM3
// 004926a7: PADDW MM0,MM4
// 004926aa: PADDW MM1,MM4
// 004926ad: PADDW MM0,qword ptr [0x00676488]
//   XREF to: 00676488 (READ)
// 004926b4: PADDW MM1,qword ptr [0x00676490]
//   XREF to: 00676490 (READ)
// 004926bb: PSRLW MM0,0x4
// 004926bf: PSRLW MM1,0x4
// 004926c3: PACKUSWB MM0,MM1
// 004926c6: ADD ESI,0x8
// 004926c9: MOVQ qword ptr [EDI],MM0
// 004926cc: ADD EDI,0x8
// 004926cf: INC EBX
// 004926d0: INC EBP
// 004926d1: SUB ECX,0x4
// 004926d4: JG 0x004925eb
//   XREF to: 004925eb (CONDITIONAL_JUMP)
// 004926da: POP EBP
// 004926db: EMMS
// 004926dd: POP EDI
// 004926de: POP ESI
// 004926df: LEAVE
// 004926e0: RET
