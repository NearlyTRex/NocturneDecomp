// Name: core_dstrendr.cpp_blendLightmapPerPxU64toU32AmbientPx2MMX_FUN_00471e45
// Address: 00471e45
// Address Range: [[00471e45, 004720f9]]
// Convention: __cdecl
// Signature: void __cdecl core_dstrendr_cpp_blendLightmapPerPxU64toU32AmbientPx2MMX_FUN_00471e45(uint *output_buffer,ulonglong *texture_buffer,byte *texture_indices,byte *lightmap_indices,int pixel_count)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dstrendr_cpp_blendLightmapPerPxU64toU32AmbientPx2MMX_FUN_00471e45(uint *output_buffer,ulonglong *texture_buffer,byte *texture_indices,byte *lightmap_indices,int pixel_count)

{
  ulonglong uVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  ushort uVar6;
  ushort uVar8;
  ushort uVar9;
  ulonglong uVar7;
  ushort uVar10;
  uint5 uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  
  uVar13 = psllw((ulonglong)
                 CONCAT52(CONCAT41((int)(((uint7)CONCAT21((short)(((uint7)(byte)((uint)_DAT_01c6e2bc
                                                                                >> 0x18) << 0x30) >>
                                                                 0x28),
                                                          (char)((uint)_DAT_01c6e2bc >> 0x10)) <<
                                         0x20) >> 0x18),(char)((uint)_DAT_01c6e2bc >> 8)),
                          (ushort)(byte)_DAT_01c6e2bc),6);
  do {
    uVar1 = *texture_buffer;
    uVar2 = *(uint *)(&DAT_00b9e14c + (uint)*texture_indices * 4);
    uVar6 = (ushort)(((uint7)(byte)(uVar1 >> 0x18) << 0x30) >> 0x28);
    uVar4 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)uVar2 >> 0x18) << 0x30) >>
                                                   0x28),CONCAT14((char)((uint)uVar2 >> 0x10),uVar2)
                                           ) >> 0x20),uVar2) >> 0x18);
    uVar11 = (uint5)uVar4 & 0xffffffff00;
    uVar7 = pmulhw(CONCAT26((uVar6 >> 8) * (short)(uVar11 >> 0x18),
                            CONCAT24((short)CONCAT21(uVar6,(char)(uVar1 >> 0x10)) *
                                     (short)(uVar11 >> 8),
                                     CONCAT22((ushort)(byte)(uVar1 >> 8) *
                                              ((ushort)CONCAT41(uVar4,(char)((uint)uVar2 >> 8)) &
                                              0xff),((ushort)uVar1 & 0xff) * (ushort)(byte)uVar2))),
                   *(ulonglong *)
                    (&DAT_005fa0e0 + ((uint)*lightmap_indices + (uint)(*texture_indices >> 1)) * 2)
                   ^ _DAT_005fa8d8);
    uVar12 = pmulhw(uVar13,*(ulonglong *)
                            (&DAT_005fa0e0 +
                            ((uint)*lightmap_indices + (uint)(*texture_indices >> 1)) * 2));
    uVar6 = (ushort)((short)uVar7 + (short)uVar12 + (short)0x0004000400040004) >> 4;
    uVar8 = (ushort)((short)((ulonglong)uVar7 >> 0x10) + (short)((ulonglong)uVar12 >> 0x10) +
                    (short)((ulonglong)0x0004000400040004 >> 0x10)) >> 4;
    uVar9 = (ushort)((short)((ulonglong)uVar7 >> 0x20) + (short)((ulonglong)uVar12 >> 0x20) +
                    (short)((ulonglong)0x0004000400040004 >> 0x20)) >> 4;
    uVar10 = (ushort)((short)((ulonglong)uVar7 >> 0x30) + (short)((ulonglong)uVar12 >> 0x30) +
                     (short)((ulonglong)0x0004000400040004 >> 0x30)) >> 4;
    *output_buffer =
         CONCAT13((uVar10 != 0) * (uVar10 < 0x100) * (char)uVar10 - (0xff < uVar10),
                  CONCAT12((uVar9 != 0) * (uVar9 < 0x100) * (char)uVar9 - (0xff < uVar9),
                           CONCAT11((uVar8 != 0) * (uVar8 < 0x100) * (char)uVar8 - (0xff < uVar8),
                                    (uVar6 != 0) * (uVar6 < 0x100) * (char)uVar6 - (0xff < uVar6))))
    ;
    uVar7 = *(ulonglong *)((int)texture_buffer + 4);
    uVar2 = *(uint *)(&DAT_00b9e14c + (uint)texture_indices[1] * 4);
    uVar6 = (ushort)(((uint7)(byte)((ulonglong)uVar7 >> 0x18) << 0x30) >> 0x28);
    uVar8 = (ushort)(((uint7)(byte)((uint)uVar2 >> 0x18) << 0x30) >> 0x28);
    uVar7 = pmulhw(CONCAT26((uVar6 >> 8) * (uVar8 >> 8),
                            CONCAT24((short)CONCAT21(uVar6,(char)((ulonglong)uVar7 >> 0x10)) *
                                     (short)(CONCAT25(uVar8,CONCAT14((char)((uint)uVar2 >> 0x10),
                                                                     uVar2)) >> 0x20),
                                     CONCAT22((ushort)(byte)((ulonglong)uVar7 >> 8) *
                                              (ushort)(byte)((uint)uVar2 >> 8),
                                              ((ushort)uVar7 & 0xff) * ((ushort)uVar2 & 0xff)))),
                   *(ulonglong *)
                    (&DAT_005fa0e0 +
                    ((uint)lightmap_indices[1] + (uint)(texture_indices[1] >> 1)) * 2) ^
                   _DAT_005fa8d8);
    uVar12 = pmulhw(uVar13,*(ulonglong *)
                            (&DAT_005fa0e0 +
                            ((uint)lightmap_indices[1] + (uint)(texture_indices[1] >> 1)) * 2));
    uVar6 = (ushort)((short)uVar7 + (short)uVar12 + (short)0x000C000C000C000C) >> 4;
    uVar8 = (ushort)((short)((ulonglong)uVar7 >> 0x10) + (short)((ulonglong)uVar12 >> 0x10) +
                    (short)((ulonglong)0x000C000C000C000C >> 0x10)) >> 4;
    uVar9 = (ushort)((short)((ulonglong)uVar7 >> 0x20) + (short)((ulonglong)uVar12 >> 0x20) +
                    (short)((ulonglong)0x000C000C000C000C >> 0x20)) >> 4;
    uVar10 = (ushort)((short)((ulonglong)uVar7 >> 0x30) + (short)((ulonglong)uVar12 >> 0x30) +
                     (short)((ulonglong)0x000C000C000C000C >> 0x30)) >> 4;
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
