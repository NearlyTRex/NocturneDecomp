// Name: core_setedit.cpp_FUN_00577430
// Address: 00577430
// Address Range: [[00577430, 0057772e]]
// Convention: __cdecl
// Signature: void __cdecl core_setedit_cpp_FUN_00577430(void)

#include "nocturne.h"

void __cdecl core_setedit_cpp_FUN_00577430(void)

{
  uint uVar1;
  int iVar2;
  uchar *puVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
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
    iVar2 = in_stack_00000004 * 0x3000;
    local_50 = in_stack_0000000c << 2;
    local_54 = iVar2 + 0x100;
    if (g_BitsPerPixel == 8) {
      local_1c = 0;
      local_30 = local_50;
      do {
        puVar3 = (uchar *)(*(int *)((int)g_ScreenBufferArray + local_30) + in_stack_00000008);
        iVar5 = local_1c * 0x100 + iVar2;
        do {
          puVar3 = puVar3 + 1;
          uVar1 = *(uint *)((int)g_ThumbnailImageBuffer[0] + iVar5);
          iVar5 = iVar5 + 4;
          *puVar3 = g_ColorCubeLookup
                    [((uVar1 >> 8 & 0xff) >> 3) * 0x20 + ((uVar1 & 0xff) >> 3) * 0x400 +
                     ((uVar1 >> 0x10 & 0xff) >> 3)];
        } while (iVar5 != local_54);
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
        iVar5 = iVar2 + local_20 * 0x100;
        do {
          local_14 = local_14 + 1;
          uVar1 = *(uint *)((int)g_ThumbnailImageBuffer[0] + iVar5);
          *local_14 = (ushort)((uVar1 & 0xff) / (uint)g_RedScaleFactor <<
                              (g_RedBitPosition.bytes[0] & 0x1f)) |
                      (ushort)((uVar1 >> 8 & 0xff) / (uint)g_GreenScaleFactor <<
                              (g_GreenBitPosition.bytes[0] & 0x1f)) |
                      (ushort)((uVar1 >> 0x10 & 0xff) / (uint)g_BlueScaleFactor <<
                              (g_BlueBitPosition.bytes[0] & 0x1f));
          iVar5 = iVar5 + 4;
        } while (iVar5 != local_34);
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
        puVar4 = (uint *)(*(int *)((int)g_ScreenBufferArray + local_28) + in_stack_00000008 * 4);
        iVar5 = local_24 * 0x100 + iVar2;
        do {
          puVar4 = puVar4 + 1;
          uVar1 = *(uint *)((int)g_ThumbnailImageBuffer[0] + iVar5);
          uVar7 = uVar1 >> 8 & 0xff;
          uVar6 = uVar1 >> 0x10 & 0xff;
          if (g_BitsPerPixel == 0x20) {
            uVar6 = uVar6 << (g_BlueBitPosition.bytes[0] & 0x1f) |
                    uVar7 << (g_GreenBitPosition.bytes[0] & 0x1f) |
                    (uVar1 & 0xff) << (g_RedBitPosition.bytes[0] & 0x1f);
          }
          else {
            uVar6 = uVar7 << 8 | (uVar1 & 0xff) << 0x10 | uVar6;
          }
          iVar5 = iVar5 + 4;
          *puVar4 = uVar6;
        } while (iVar5 != local_2c);
        local_28 = local_28 + 4;
        local_24 = local_24 + 1;
        local_2c = local_2c + 0x100;
      } while (local_24 < 0x30);
    }
  }
  return;
}
