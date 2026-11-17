// Name: core_flies.cpp_drawFlyPixel_FUN_004a6fe0
// Address: 004a6fe0
// Address Range: [[004a6fe0, 004a7066]]
// Convention: __cdecl
// Signature: void __cdecl core_flies_cpp_drawFlyPixel_FUN_004a6fe0(int screen_x,int screen_y,int z_depth)

#include "nocturne.h"

void __cdecl core_flies_cpp_drawFlyPixel_FUN_004a6fe0(int screen_x,int screen_y,int z_depth)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  uint5 uVar11;
  
  if ((g_UINT_PTR_ARRAY_01c2b64c[screen_y][screen_x] < (uint)z_depth) && (g_INT_006141c0 == 0x20)) {
    uVar1 = *(uint *)(g_ARRAY_PTR_01c2a38c[screen_y] + screen_x * 4);
    uVar8 = (ushort)(((uint7)(byte)((uint)g_INT_01c35e60 >> 0x18) << 0x30) >> 0x28);
    uVar2 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)uVar1 >> 0x18) << 0x30) >>
                                                   0x28),CONCAT14((char)((uint)uVar1 >> 0x10),uVar1)
                                           ) >> 0x20),uVar1) >> 0x18);
    uVar11 = (uint5)uVar2 & 0xffffffff00;
    uVar4 = (ushort)(((uint7)(byte)(g_UINT_01caf62c >> 0x18) << 0x30) >> 0x28);
    uVar6 = (ushort)(((uint7)(byte)(g_UINT_01caf630 >> 0x18) << 0x30) >> 0x28);
    uVar3 = (ushort)(byte)g_INT_01c35e60 * ((ushort)g_UINT_01caf630 & 0xff) +
            ((ushort)uVar1 & 0xff) * (ushort)(byte)g_UINT_01caf62c;
    uVar5 = (ushort)(byte)((uint)g_INT_01c35e60 >> 8) * (ushort)(byte)(g_UINT_01caf630 >> 8) +
            ((ushort)(CONCAT43(uVar2,CONCAT12((char)((uint)uVar1 >> 8),(ushort)uVar1)) >> 0x10) &
            0xff) * (ushort)(byte)(g_UINT_01caf62c >> 8);
    uVar7 = (short)CONCAT21(uVar8,(char)((uint)g_INT_01c35e60 >> 0x10)) *
            (short)CONCAT21(uVar6,(char)(g_UINT_01caf630 >> 0x10)) +
            (short)(uVar11 >> 8) * (short)CONCAT21(uVar4,(char)(g_UINT_01caf62c >> 0x10));
    uVar9 = (uVar8 >> 8) * (uVar6 >> 8) + (short)(uVar11 >> 0x18) * (uVar4 >> 8);
    uVar4 = uVar3 >> 8;
    uVar6 = uVar5 >> 8;
    uVar8 = uVar7 >> 8;
    uVar10 = uVar9 >> 8;
    *(uint *)(g_ARRAY_PTR_01c2a38c[screen_y] + screen_x * 4) =
         CONCAT13((uVar10 != 0) * (uVar10 < 0x100) * (char)(uVar9 >> 8) - (0xff < uVar10),
                  CONCAT12((uVar8 != 0) * (uVar8 < 0x100) * (char)(uVar7 >> 8) - (0xff < uVar8),
                           CONCAT11((uVar6 != 0) * (uVar6 < 0x100) * (char)(uVar5 >> 8) -
                                    (0xff < uVar6),
                                    (uVar4 != 0) * (uVar4 < 0x100) * (char)(uVar3 >> 8) -
                                    (0xff < uVar4))));
    return;
  }
  return;
}
