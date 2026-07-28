// Name: core_flies.cpp_drawFlyPixel_FUN_0048f3c0
// Address: 0048f3c0
// Address Range: [[0048f3c0, 0048f446]]
// Convention: __cdecl
// Signature: void __cdecl core_flies_cpp_drawFlyPixel_FUN_0048f3c0(int screen_x,int screen_y,int z_depth)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_flies_cpp_drawFlyPixel_FUN_0048f3c0(int screen_x,int screen_y,int z_depth)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  uint5 uVar12;
  
  if ((*(uint *)(*(int *)(&DAT_01bd4260 + screen_y * 4) + screen_x * 4) < (uint)z_depth) &&
     (DAT_005b7624 == 0x20)) {
    puVar3 = (uint *)(*(int *)(&DAT_01bd2fa0 + screen_y * 4) + screen_x * 4);
    uVar1 = *puVar3;
    uVar9 = (ushort)(((uint7)(byte)((uint)_DAT_01c00c70 >> 0x18) << 0x30) >> 0x28);
    uVar2 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)uVar1 >> 0x18) << 0x30) >>
                                                   0x28),CONCAT14((char)((uint)uVar1 >> 0x10),uVar1)
                                           ) >> 0x20),uVar1) >> 0x18);
    uVar12 = (uint5)uVar2 & 0xffffffff00;
    uVar5 = (ushort)(((uint7)(byte)((uint)_DAT_01c70754 >> 0x18) << 0x30) >> 0x28);
    uVar7 = (ushort)(((uint7)(byte)((uint)_DAT_01c70758 >> 0x18) << 0x30) >> 0x28);
    uVar4 = (ushort)(byte)_DAT_01c00c70 * ((ushort)_DAT_01c70758 & 0xff) +
            ((ushort)uVar1 & 0xff) * (ushort)(byte)_DAT_01c70754;
    uVar6 = (ushort)(byte)((uint)_DAT_01c00c70 >> 8) * (ushort)(byte)((uint)_DAT_01c70758 >> 8) +
            ((ushort)(CONCAT43(uVar2,CONCAT12((char)((uint)uVar1 >> 8),(ushort)uVar1)) >> 0x10) &
            0xff) * (ushort)(byte)((uint)_DAT_01c70754 >> 8);
    uVar8 = (short)CONCAT21(uVar9,(char)((uint)_DAT_01c00c70 >> 0x10)) *
            (short)CONCAT21(uVar7,(char)((uint)_DAT_01c70758 >> 0x10)) +
            (short)(uVar12 >> 8) * (short)CONCAT21(uVar5,(char)((uint)_DAT_01c70754 >> 0x10));
    uVar10 = (uVar9 >> 8) * (uVar7 >> 8) + (short)(uVar12 >> 0x18) * (uVar5 >> 8);
    uVar5 = uVar4 >> 8;
    uVar7 = uVar6 >> 8;
    uVar9 = uVar8 >> 8;
    uVar11 = uVar10 >> 8;
    *puVar3 = CONCAT13((uVar11 != 0) * (uVar11 < 0x100) * (char)(uVar10 >> 8) - (0xff < uVar11),
                       CONCAT12((uVar9 != 0) * (uVar9 < 0x100) * (char)(uVar8 >> 8) - (0xff < uVar9)
                                ,CONCAT11((uVar7 != 0) * (uVar7 < 0x100) * (char)(uVar6 >> 8) -
                                          (0xff < uVar7),
                                          (uVar5 != 0) * (uVar5 < 0x100) * (char)(uVar4 >> 8) -
                                          (0xff < uVar5))));
    return;
  }
  return;
}
