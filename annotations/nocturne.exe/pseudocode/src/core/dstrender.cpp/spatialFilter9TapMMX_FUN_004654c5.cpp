// Name: core_dstrender.cpp_spatialFilter9TapMMX_FUN_004654c5
// Address: 004654c5
// Address Range: [[004654c5, 0046556e]]
// Convention: __cdecl
// Signature: void __cdecl core_dstrender_cpp_spatialFilter9TapMMX_FUN_004654c5(uint *output_buffer,uint *input_buffer,int pixel_count)

#include "nocturne.h"

void __cdecl core_dstrender_cpp_spatialFilter9TapMMX_FUN_004654c5(uint *output_buffer,uint *input_buffer,int pixel_count)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  ushort uVar11;
  ushort uVar13;
  ushort uVar14;
  ulonglong uVar12;
  ushort uVar15;
  ulonglong uVar16;
  uint5 uVar17;
  ulonglong uVar18;
  uint5 uVar19;
  ulonglong uVar20;
  uint5 uVar21;
  ulonglong uVar22;
  uint5 uVar23;
  
  do {
    uVar1 = input_buffer[-1];
    uVar2 = *input_buffer;
    uVar3 = input_buffer[1];
    uVar4 = input_buffer[-0x140];
    uVar5 = input_buffer[0x140];
    uVar12 = psllw((ulonglong)
                   CONCAT52(CONCAT41((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(uVar2 >> 
                                                  0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)(uVar2 >> 0x10),uVar2)) >> 0x20),
                                                  uVar2) >> 0x18),(char)(uVar2 >> 8)),
                            (ushort)(byte)uVar2) & 0xffffffff00ffffff,2);
    uVar16 = psllw((ulonglong)
                   CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(
                                                  uVar1 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)(uVar1 >> 0x10),uVar1)) >> 0x20),
                                                  uVar1) >> 0x18),
                                            CONCAT12((char)(uVar1 >> 8),(short)uVar1)) >> 0x10),
                            (short)uVar1) & 0xffffffff00ff00ff,1);
    uVar18 = psllw((ulonglong)
                   CONCAT52(CONCAT41((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(uVar3 >> 
                                                  0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)(uVar3 >> 0x10),uVar3)) >> 0x20),
                                                  uVar3) >> 0x18),(char)(uVar3 >> 8)),
                            (ushort)(byte)uVar3) & 0xffffffff00ffffff,1);
    uVar20 = psllw((ulonglong)
                   CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(
                                                  uVar4 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)(uVar4 >> 0x10),uVar4)) >> 0x20),
                                                  uVar4) >> 0x18),
                                            CONCAT12((char)(uVar4 >> 8),(short)uVar4)) >> 0x10),
                            (short)uVar4) & 0xffffffff00ff00ff,1);
    uVar22 = psllw((ulonglong)
                   CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(
                                                  uVar5 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)(uVar5 >> 0x10),uVar5)) >> 0x20),
                                                  uVar5) >> 0x18),
                                            CONCAT12((char)(uVar5 >> 8),(short)uVar5)) >> 0x10),
                            (short)uVar5) & 0xffffffff00ff00ff,1);
    uVar1 = input_buffer[-0x141];
    uVar2 = input_buffer[-0x13f];
    uVar3 = input_buffer[0x13f];
    uVar4 = input_buffer[0x141];
    uVar5 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(uVar1 >> 0x18) << 0x30) >> 0x28),
                                            CONCAT14((char)(uVar1 >> 0x10),uVar1)) >> 0x20),uVar1)
                  >> 0x18);
    uVar17 = (uint5)uVar5 & 0xffffffff00;
    uVar7 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(uVar2 >> 0x18) << 0x30) >> 0x28),
                                            CONCAT14((char)(uVar2 >> 0x10),uVar2)) >> 0x20),uVar2)
                  >> 0x18);
    uVar19 = (uint5)uVar7 & 0xffffffff00;
    uVar8 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(uVar3 >> 0x18) << 0x30) >> 0x28),
                                            CONCAT14((char)(uVar3 >> 0x10),uVar3)) >> 0x20),uVar3)
                  >> 0x18);
    uVar21 = (uint5)uVar8 & 0xffffffff00;
    uVar9 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(uVar4 >> 0x18) << 0x30) >> 0x28),
                                            CONCAT14((char)(uVar4 >> 0x10),uVar4)) >> 0x20),uVar4)
                  >> 0x18);
    uVar23 = (uint5)uVar9 & 0xffffffff00;
    uVar11 = (ushort)((short)uVar12 + (short)uVar16 + (short)uVar18 + (short)uVar20 + (short)uVar22
                      + ((ushort)uVar1 & 0xff) + ((ushort)uVar2 & 0xff) + ((ushort)uVar3 & 0xff) +
                     ((ushort)uVar4 & 0xff)) >> 4;
    uVar13 = (ushort)((short)((ulonglong)uVar12 >> 0x10) + (short)((ulonglong)uVar16 >> 0x10) +
                      (short)((ulonglong)uVar18 >> 0x10) + (short)((ulonglong)uVar20 >> 0x10) +
                      (short)((ulonglong)uVar22 >> 0x10) +
                      ((ushort)(CONCAT43(uVar5,CONCAT12((char)(uVar1 >> 8),(ushort)uVar1)) >> 0x10)
                      & 0xff) + ((ushort)(CONCAT43(uVar7,CONCAT12((char)(uVar2 >> 8),(ushort)uVar2))
                                         >> 0x10) & 0xff) +
                      ((ushort)(CONCAT43(uVar8,CONCAT12((char)(uVar3 >> 8),(ushort)uVar3)) >> 0x10)
                      & 0xff) +
                     ((ushort)(CONCAT43(uVar9,CONCAT12((char)(uVar4 >> 8),(ushort)uVar4)) >> 0x10) &
                     0xff)) >> 4;
    uVar14 = (ushort)((short)((ulonglong)uVar12 >> 0x20) + (short)((ulonglong)uVar16 >> 0x20) +
                      (short)((ulonglong)uVar18 >> 0x20) + (short)((ulonglong)uVar20 >> 0x20) +
                      (short)((ulonglong)uVar22 >> 0x20) + (short)(uVar17 >> 8) +
                      (short)(uVar19 >> 8) + (short)(uVar21 >> 8) + (short)(uVar23 >> 8)) >> 4;
    uVar15 = (ushort)((short)((ulonglong)uVar12 >> 0x30) + (short)((ulonglong)uVar16 >> 0x30) +
                      (short)((ulonglong)uVar18 >> 0x30) + (short)((ulonglong)uVar20 >> 0x30) +
                      (short)((ulonglong)uVar22 >> 0x30) + (short)(uVar17 >> 0x18) +
                      (short)(uVar19 >> 0x18) + (short)(uVar21 >> 0x18) + (short)(uVar23 >> 0x18))
             >> 4;
    *output_buffer =
         CONCAT13((uVar15 != 0) * (uVar15 < 0x100) * (char)uVar15 - (0xff < uVar15),
                  CONCAT12((uVar14 != 0) * (uVar14 < 0x100) * (char)uVar14 - (0xff < uVar14),
                           CONCAT11((uVar13 != 0) * (uVar13 < 0x100) * (char)uVar13 -
                                    (0xff < uVar13),
                                    (uVar11 != 0) * (uVar11 < 0x100) * (char)uVar11 -
                                    (0xff < uVar11))));
    input_buffer = input_buffer + 1;
    output_buffer = output_buffer + 1;
    iVar10 = pixel_count + -1;
    bVar6 = 0 < pixel_count;
    pixel_count = iVar10;
  } while (iVar10 != 0 && bVar6);
  return;
}
