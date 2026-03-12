// Name: core_flies.cpp_drawFlyPixel_FUN_004cc230
// Address: 004cc230
// Address Range: [[004cc230, 004cc2b6]]
// Convention: __cdecl
// Signature: void __cdecl core_flies_cpp_drawFlyPixel_FUN_004cc230(int screen_x,int screen_y,int z_depth)

#include "nocturne.h"

void __cdecl core_flies_cpp_drawFlyPixel_FUN_004cc230(int screen_x,int screen_y,int z_depth)

{
  ushort uVar3;
  ushort uVar13;
  ushort uVar14;
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
  uint uVar2;
  uint uVar1;
  
  if ((g_ZBufferScanlineArray[screen_y][screen_x] < (uint)z_depth) && (g_BitsPerPixel == 0x20)) {
    puVar3 = (uint *)((int)g_ScreenBufferArray[screen_y] + screen_x * 4);
    uVar1 = *puVar3;
    uVar14 = (ushort)(((uint7)(byte)((uint)g_ActiveRenderColor >> 0x18) << 0x30) >> 0x28);
    uVar12._0_1_ = (byte)((uint)uVar1 >> 0x18);
    uVar2 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)uVar12 << 0x30) >> 0x28),
                                            CONCAT14((char)((uint)uVar1 >> 0x10),uVar1)) >> 0x20),
                            uVar1) >> 0x18);
    uVar12 = (uint5)uVar2 & 0xffffffff00;
    uVar3 = (ushort)(((uint7)(byte)(g_FlyBlendColor >> 0x18) << 0x30) >> 0x28);
    uVar13 = (ushort)(((uint7)(byte)(g_FlyInvBlendColor >> 0x18) << 0x30) >> 0x28);
    uVar4 = (ushort)(byte)g_ActiveRenderColor * ((ushort)g_FlyInvBlendColor & 0xff) +
            ((ushort)uVar1 & 0xff) * (ushort)(byte)g_FlyBlendColor;
    uVar6 = (ushort)(byte)((uint)g_ActiveRenderColor >> 8) * (ushort)(byte)(g_FlyInvBlendColor >> 8)
            + ((ushort)(CONCAT43(uVar2,CONCAT12((char)((uint)uVar1 >> 8),(ushort)uVar1)) >> 0x10) &
              0xff) * (ushort)(byte)(g_FlyBlendColor >> 8);
    uVar8 = (short)CONCAT21(uVar14,(char)((uint)g_ActiveRenderColor >> 0x10)) *
            (short)CONCAT21(uVar13,(char)(g_FlyInvBlendColor >> 0x10)) +
            (short)(uVar12 >> 8) * (short)CONCAT21(uVar3,(char)(g_FlyBlendColor >> 0x10));
    uVar10 = (uVar14 >> 8) * (uVar13 >> 8) + (short)(uVar12 >> 0x18) * (uVar3 >> 8);
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
