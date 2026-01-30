// Name: core_flies.cpp_FUN_004cc230
// Address: 004cc230
// Address Range: [[004cc230, 004cc2b6]]
// Convention: __cdecl
// Signature: void __cdecl core_flies_cpp_FUN_004cc230(void)

#include "nocturne.h"

/* Signature: byte actors_other_flies.cpp_FUN_004cc230(uint param_1, uint param_2,
   uint param_3) */

void __cdecl core_flies_cpp_FUN_004cc230(void)

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
  int in_stack_00000004;
  int in_stack_00000008;
  uint in_stack_0000000c;
  
  if ((g_ZBufferScanlineArray[in_stack_00000008][in_stack_00000004] < in_stack_0000000c) &&
     (g_BitsPerPixel == 0x20)) {
    puVar3 = (uint *)((int)g_ScreenBufferArray[in_stack_00000008] + in_stack_00000004 * 4);
    uVar1 = *puVar3;
    uVar9 = (ushort)(((uint7)(byte)((uint)g_ActiveRenderColor >> 0x18) << 0x30) >> 0x28);
    uVar2 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)uVar1 >> 0x18) << 0x30) >>
                                                   0x28),CONCAT14((char)((uint)uVar1 >> 0x10),uVar1)
                                           ) >> 0x20),uVar1) >> 0x18);
    uVar12 = (uint5)uVar2 & 0xffffffff00;
    uVar5 = (ushort)(((uint7)(byte)((uint)DAT_02d7a800 >> 0x18) << 0x30) >> 0x28);
    uVar7 = (ushort)(((uint7)(byte)((uint)DAT_02d7a804 >> 0x18) << 0x30) >> 0x28);
    uVar4 = (ushort)(byte)g_ActiveRenderColor * ((ushort)DAT_02d7a804 & 0xff) +
            ((ushort)uVar1 & 0xff) * (ushort)(byte)DAT_02d7a800;
    uVar6 = (ushort)(byte)((uint)g_ActiveRenderColor >> 8) * (ushort)(byte)((uint)DAT_02d7a804 >> 8)
            + ((ushort)(CONCAT43(uVar2,CONCAT12((char)((uint)uVar1 >> 8),(ushort)uVar1)) >> 0x10) &
              0xff) * (ushort)(byte)((uint)DAT_02d7a800 >> 8);
    uVar8 = (short)CONCAT21(uVar9,(char)((uint)g_ActiveRenderColor >> 0x10)) *
            (short)CONCAT21(uVar7,(char)((uint)DAT_02d7a804 >> 0x10)) +
            (short)(uVar12 >> 8) * (short)CONCAT21(uVar5,(char)((uint)DAT_02d7a800 >> 0x10));
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
