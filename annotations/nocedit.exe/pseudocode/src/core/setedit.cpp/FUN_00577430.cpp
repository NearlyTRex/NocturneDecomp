// Name: core_setedit.cpp_FUN_00577430
// Address: 00577430
// Address Range: [[00577430, 0057772e]]
// Convention: unknown
// Signature: undefined core_setedit.cpp_FUN_00577430()

#include "nocturne.h"

/* Signature: byte core_setedit.cpp_FUN_00577430(uint param_1, uint param_2,
   uint param_3) */

void core_setedit_cpp_FUN_00577430(void)

{
  uint uVar1;
  uchar *puVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  int local_54;
  int local_50;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  ushort *local_14;
  
  if ((((-1 < in_stack_00000008) && (-1 < in_stack_0000000c)) &&
      (in_stack_00000008 + 0x40 <= g_WindowWidth)) && (in_stack_0000000c + 0x30 <= g_WindowHeight))
  {
    in_stack_00000004 = in_stack_00000004 * 0x3000;
    local_50 = in_stack_0000000c << 2;
    local_54 = in_stack_00000004 + 0x100;
    if (g_BitsPerPixel == 8) {
      local_1c = 0;
      local_30 = local_50;
      do {
        puVar2 = (uchar *)(*(int *)((int)g_ScreenBufferArray + local_30) + in_stack_00000008);
        iVar4 = local_1c * 0x100 + in_stack_00000004;
        do {
          puVar2 = puVar2 + 1;
          uVar1 = *(uint *)(&DAT_03365cc0 + iVar4);
          iVar4 = iVar4 + 4;
          *puVar2 = g_ColorCubeLookup
                    [((uVar1 >> 8 & 0xff) >> 3) * 0x20 + ((uVar1 & 0xff) >> 3) * 0x400 +
                     ((uVar1 >> 0x10 & 0xff) >> 3)];
        } while (iVar4 != local_54);
        local_30 = local_30 + 4;
        local_1c = local_1c + 1;
        local_54 = local_54 + 0x100;
      } while (local_1c < 0x30);
    }
    else if (g_BitsPerPixel == 0x10) {
      local_20 = 0;
      local_34 = local_54;
      do {
        local_14 = (ushort *)(*(int *)((int)g_ScreenBufferArray + local_50) + in_stack_00000008 * 2)
        ;
        iVar4 = in_stack_00000004 + local_20 * 0x100;
        do {
          local_14 = local_14 + 1;
          uVar1 = *(uint *)(&DAT_03365cc0 + iVar4);
          *local_14 = (ushort)((uVar1 & 0xff) / (uint)g_RedScaleFactor <<
                              ((byte)g_RedBitPosition & 0x1f)) |
                      (ushort)((uVar1 >> 8 & 0xff) / (uint)g_GreenScaleFactor <<
                              ((byte)g_GreenBitPosition & 0x1f)) |
                      (ushort)((uVar1 >> 0x10 & 0xff) / (uint)g_BlueScaleFactor <<
                              ((byte)g_BlueBitPosition & 0x1f));
          iVar4 = iVar4 + 4;
        } while (iVar4 != local_34);
        local_50 = local_50 + 4;
        local_20 = local_20 + 1;
        local_34 = local_34 + 0x100;
      } while (local_20 < 0x30);
    }
    else if (g_BitsPerPixel == 0x20) {
      local_24 = 0;
      local_2c = local_54;
      local_28 = local_50;
      do {
        puVar3 = (uint *)(*(int *)((int)g_ScreenBufferArray + local_28) + in_stack_00000008 * 4);
        iVar4 = local_24 * 0x100 + in_stack_00000004;
        do {
          puVar3 = puVar3 + 1;
          uVar1 = *(uint *)(&DAT_03365cc0 + iVar4);
          uVar6 = uVar1 >> 8 & 0xff;
          uVar5 = uVar1 >> 0x10 & 0xff;
          if (g_BitsPerPixel == 0x20) {
            uVar5 = uVar5 << ((byte)g_BlueBitPosition & 0x1f) |
                    uVar6 << ((byte)g_GreenBitPosition & 0x1f) |
                    (uVar1 & 0xff) << ((byte)g_RedBitPosition & 0x1f);
          }
          else {
            uVar5 = uVar6 << 8 | (uVar1 & 0xff) << 0x10 | uVar5;
          }
          iVar4 = iVar4 + 4;
          *puVar3 = uVar5;
        } while (iVar4 != local_2c);
        local_28 = local_28 + 4;
        local_24 = local_24 + 1;
        local_2c = local_2c + 0x100;
      } while (local_24 < 0x30);
    }
  }
  return;
}
