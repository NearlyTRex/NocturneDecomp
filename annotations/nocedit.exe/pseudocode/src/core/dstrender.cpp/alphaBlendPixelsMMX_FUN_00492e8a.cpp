// Name: core_dstrender.cpp_alphaBlendPixelsMMX_FUN_00492e8a
// Address: 00492e8a
// Address Range: [[00492e8a, 00492f02]]
// Convention: __cdecl
// Signature: void __cdecl core_dstrender_cpp_alphaBlendPixelsMMX_FUN_00492e8a(uint *output_buffer,uint *source1_buffer,uint *source2_buffer,uint alpha1,uint alpha2,int pixel_count)

#include "nocturne.h"

void __cdecl core_dstrender_cpp_alphaBlendPixelsMMX_FUN_00492e8a(uint *output_buffer,uint *source1_buffer,uint *source2_buffer,uint alpha1,uint alpha2,int pixel_count)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  ushort uVar5;
  ushort uVar7;
  ushort uVar8;
  ulonglong uVar6;
  ushort uVar9;
  ulonglong uVar10;
  ushort uVar11;
  ushort uVar12;
  
  uVar11 = (ushort)(alpha2 >> 0x10);
  uVar12 = (ushort)(alpha1 >> 0x10);
  do {
    uVar1 = *source1_buffer;
    uVar2 = *source2_buffer;
    uVar6 = psllw((ulonglong)
                  CONCAT52(CONCAT41((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(uVar1 >> 
                                                  0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)(uVar1 >> 0x10),uVar1)) >> 0x20),
                                                  uVar1) >> 0x18),(char)(uVar1 >> 8)),
                           (ushort)(byte)uVar1) & 0xffffffff00ffffff,7);
    uVar10 = psllw((ulonglong)
                   CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(
                                                  uVar2 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)(uVar2 >> 0x10),uVar2)) >> 0x20),
                                                  uVar2) >> 0x18),
                                            CONCAT12((char)(uVar2 >> 8),(short)uVar2)) >> 0x10),
                            (short)uVar2) & 0xffffffff00ff00ff,7);
    uVar6 = pmulhw(uVar6,CONCAT26(uVar11 >> 1,
                                  CONCAT24((ushort)alpha2 >> 1,
                                           CONCAT22(uVar11 >> 1,(ushort)alpha2 >> 1))));
    uVar10 = pmulhw(uVar10,CONCAT26(uVar12 >> 1,
                                    CONCAT24((ushort)alpha1 >> 1,
                                             CONCAT22(uVar12 >> 1,(ushort)alpha1 >> 1))));
    uVar5 = (ushort)((short)uVar6 + (short)uVar10) >> 6;
    uVar7 = (ushort)((short)((ulonglong)uVar6 >> 0x10) + (short)((ulonglong)uVar10 >> 0x10)) >> 6;
    uVar8 = (ushort)((short)((ulonglong)uVar6 >> 0x20) + (short)((ulonglong)uVar10 >> 0x20)) >> 6;
    uVar9 = (ushort)((short)((ulonglong)uVar6 >> 0x30) + (short)((ulonglong)uVar10 >> 0x30)) >> 6;
    *output_buffer =
         CONCAT13((uVar9 != 0) * (uVar9 < 0x100) * (char)uVar9 - (0xff < uVar9),
                  CONCAT12((uVar8 != 0) * (uVar8 < 0x100) * (char)uVar8 - (0xff < uVar8),
                           CONCAT11((uVar7 != 0) * (uVar7 < 0x100) * (char)uVar7 - (0xff < uVar7),
                                    (uVar5 != 0) * (uVar5 < 0x100) * (char)uVar5 - (0xff < uVar5))))
    ;
    source1_buffer = source1_buffer + 1;
    source2_buffer = source2_buffer + 1;
    output_buffer = output_buffer + 1;
    iVar4 = pixel_count + -4;
    bVar3 = 3 < pixel_count;
    pixel_count = iVar4;
  } while (iVar4 != 0 && bVar3);
  return;
}
