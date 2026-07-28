// Name: core_dstrender.cpp_blendLightmapPerPxU32toU32BB12Px2MMX_FUN_004657a7
// Address: 004657a7
// Address Range: [[004657a7, 00465c9a]]
// Convention: __cdecl
// Signature: void __cdecl core_dstrender_cpp_blendLightmapPerPxU32toU32BB12Px2MMX_FUN_004657a7(uint *output_buffer,uint *texture_buffer,byte *texture_indices,byte *lightmap_indices,int pixel_count)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dstrender_cpp_blendLightmapPerPxU32toU32BB12Px2MMX_FUN_004657a7(uint *output_buffer,uint *texture_buffer,byte *texture_indices,byte *lightmap_indices,int pixel_count)

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
  ulonglong uVar8;
  ushort uVar12;
  uint5 uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  
  uVar15 = psllw((ulonglong)
                 CONCAT52(CONCAT41((int)(((uint7)CONCAT21((short)(((uint7)(byte)((uint)_DAT_01c039a8
                                                                                >> 0x18) << 0x30) >>
                                                                 0x28),
                                                          (char)((uint)_DAT_01c039a8 >> 0x10)) <<
                                         0x20) >> 0x18),(char)((uint)_DAT_01c039a8 >> 8)),
                          (ushort)(byte)_DAT_01c039a8),6);
  do {
    uVar1 = *texture_buffer;
    uVar2 = *(uint *)(&DAT_00b0e1fc + (uint)*texture_indices * 4);
    uVar4 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(uVar1 >> 0x18) << 0x30) >> 0x28),
                                            CONCAT14((char)(uVar1 >> 0x10),uVar1)) >> 0x20),uVar1)
                  >> 0x18);
    uVar10 = (uint5)uVar4 & 0xffffffff00;
    uVar5 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)uVar2 >> 0x18) << 0x30) >>
                                                   0x28),CONCAT14((char)((uint)uVar2 >> 0x10),uVar2)
                                           ) >> 0x20),uVar2) >> 0x18);
    uVar13 = (uint5)uVar5 & 0xffffffff00;
    uVar8 = pmulhw(CONCAT26((short)(uVar10 >> 0x18) * (short)(uVar13 >> 0x18),
                            CONCAT24((short)(uVar10 >> 8) * (short)(uVar13 >> 8),
                                     CONCAT22(((ushort)(CONCAT43(uVar4,CONCAT12((char)(uVar1 >> 8),
                                                                                (ushort)uVar1)) >>
                                                       0x10) & 0xff) *
                                              ((ushort)CONCAT41(uVar5,(char)((uint)uVar2 >> 8)) &
                                              0xff),((ushort)uVar1 & 0xff) * (ushort)(byte)uVar2))),
                   *(ulonglong *)
                    (&DAT_005b5d00 + ((uint)*lightmap_indices + (uint)(*texture_indices >> 1)) * 2)
                   ^ _DAT_005b64f8);
    uVar14 = pmulhw(uVar15,*(ulonglong *)
                            (&DAT_005b5d00 +
                            ((uint)*lightmap_indices + (uint)(*texture_indices >> 1)) * 2));
    uVar7 = (ushort)((short)uVar8 + (short)uVar14 + (short)DAT_005b4788) >> 4;
    uVar9 = (ushort)((short)((ulonglong)uVar8 >> 0x10) + (short)((ulonglong)uVar14 >> 0x10) +
                    (short)((ulonglong)DAT_005b4788 >> 0x10)) >> 4;
    uVar11 = (ushort)((short)((ulonglong)uVar8 >> 0x20) + (short)((ulonglong)uVar14 >> 0x20) +
                     (short)((ulonglong)DAT_005b4788 >> 0x20)) >> 4;
    uVar12 = (ushort)((short)((ulonglong)uVar8 >> 0x30) + (short)((ulonglong)uVar14 >> 0x30) +
                     (short)((ulonglong)DAT_005b4788 >> 0x30)) >> 4;
    *output_buffer =
         CONCAT13((uVar12 != 0) * (uVar12 < 0x100) * (char)uVar12 - (0xff < uVar12),
                  CONCAT12((uVar11 != 0) * (uVar11 < 0x100) * (char)uVar11 - (0xff < uVar11),
                           CONCAT11((uVar9 != 0) * (uVar9 < 0x100) * (char)uVar9 - (0xff < uVar9),
                                    (uVar7 != 0) * (uVar7 < 0x100) * (char)uVar7 - (0xff < uVar7))))
    ;
    uVar1 = texture_buffer[1];
    uVar2 = *(uint *)(&DAT_00b0e1fc + (uint)texture_indices[1] * 4);
    uVar4 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(uVar1 >> 0x18) << 0x30) >> 0x28),
                                            CONCAT14((char)(uVar1 >> 0x10),uVar1)) >> 0x20),uVar1)
                  >> 0x18);
    uVar10 = (uint5)uVar4 & 0xffffffff00;
    uVar7 = (ushort)(((uint7)(byte)((uint)uVar2 >> 0x18) << 0x30) >> 0x28);
    uVar8 = pmulhw(CONCAT26((short)(uVar10 >> 0x18) * (uVar7 >> 8),
                            CONCAT24((short)(uVar10 >> 8) *
                                     (short)(CONCAT25(uVar7,CONCAT14((char)((uint)uVar2 >> 0x10),
                                                                     uVar2)) >> 0x20),
                                     CONCAT22(((ushort)(CONCAT43(uVar4,CONCAT12((char)(uVar1 >> 8),
                                                                                (ushort)uVar1)) >>
                                                       0x10) & 0xff) *
                                              (ushort)(byte)((uint)uVar2 >> 8),
                                              ((ushort)uVar1 & 0xff) * ((ushort)uVar2 & 0xff)))),
                   *(ulonglong *)
                    (&DAT_005b5d00 +
                    ((uint)lightmap_indices[1] + (uint)(texture_indices[1] >> 1)) * 2) ^
                   _DAT_005b64f8);
    uVar14 = pmulhw(uVar15,*(ulonglong *)
                            (&DAT_005b5d00 +
                            ((uint)lightmap_indices[1] + (uint)(texture_indices[1] >> 1)) * 2));
    uVar7 = (ushort)((short)uVar8 + (short)uVar14 + (short)0x0008000800080008) >> 4;
    uVar9 = (ushort)((short)((ulonglong)uVar8 >> 0x10) + (short)((ulonglong)uVar14 >> 0x10) +
                    (short)((ulonglong)0x0008000800080008 >> 0x10)) >> 4;
    uVar11 = (ushort)((short)((ulonglong)uVar8 >> 0x20) + (short)((ulonglong)uVar14 >> 0x20) +
                     (short)((ulonglong)0x0008000800080008 >> 0x20)) >> 4;
    uVar12 = (ushort)((short)((ulonglong)uVar8 >> 0x30) + (short)((ulonglong)uVar14 >> 0x30) +
                     (short)((ulonglong)0x0008000800080008 >> 0x30)) >> 4;
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
