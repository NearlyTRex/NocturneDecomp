// Name: core_setedit.cpp_FUN_00577730
// Address: 00577730
// Address Range: [[00577730, 00577ae1]]
// Convention: __cdecl
// Signature: int __cdecl core_setedit_cpp_FUN_00577730(void)

#include "nocturne.h"

int __cdecl core_setedit_cpp_FUN_00577730(void)

{
  int iVar1;
  uchar *puVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  int local_64;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  ushort *local_14;
  
  for (iVar5 = in_stack_0000000c; iVar5 < in_stack_0000000c + in_stack_00000008 * 0x40;
      iVar5 = iVar5 + 0x40) {
    if ((((-1 < iVar5) && (-1 < in_stack_00000010)) && (iVar5 + 0x40 <= g_WindowWidth)) &&
       (in_stack_00000010 + 0x30 <= g_WindowHeight)) {
      local_24 = in_stack_00000004 * 0x3000;
      iVar1 = local_24 + 0x3000;
      local_64 = in_stack_00000010 * 4;
      local_34 = local_24 + 0x100;
      local_38 = local_64;
      local_30 = local_34;
      local_1c = local_24;
      if (g_BitsPerPixel == 8) {
        do {
          puVar2 = (uchar *)(*(int *)((int)g_ScreenBufferArray + local_38) + iVar5);
          iVar6 = local_1c;
          do {
            puVar2 = puVar2 + 1;
            uVar7 = *(uint *)((int)g_ThumbnailImageBuffer[0] + iVar6);
            iVar6 = iVar6 + 4;
            *puVar2 = g_ColorCubeLookup
                      [((uVar7 & 0xff) >> 3) * 0x400 + ((uVar7 >> 8 & 0xff) >> 3) * 0x20 +
                       ((uVar7 >> 0x10 & 0xff) >> 3)];
          } while (iVar6 != local_30);
          local_38 = local_38 + 4;
          local_1c = local_1c + 0x100;
          local_30 = local_30 + 0x100;
        } while (local_1c != iVar1);
      }
      else if (g_BitsPerPixel == 0x10) {
        local_2c = local_34;
        do {
          local_14 = (ushort *)(*(int *)((int)g_ScreenBufferArray + local_64) + iVar5 * 2);
          iVar6 = local_24;
          do {
            local_14 = local_14 + 1;
            uVar7 = *(uint *)((int)g_ThumbnailImageBuffer[0] + iVar6);
            *local_14 = (ushort)((uVar7 >> 0x10 & 0xff) / (uint)g_BlueScaleFactor <<
                                (g_BlueBitPosition.bytes[0] & 0x1f)) |
                        (ushort)((uVar7 & 0xff) / (uint)g_RedScaleFactor <<
                                (g_RedBitPosition.bytes[0] & 0x1f)) |
                        (ushort)((uVar7 >> 8 & 0xff) / (uint)g_GreenScaleFactor <<
                                (g_GreenBitPosition.bytes[0] & 0x1f));
            iVar6 = iVar6 + 4;
          } while (iVar6 != local_2c);
          local_64 = local_64 + 4;
          local_24 = local_24 + 0x100;
          local_2c = local_2c + 0x100;
        } while (local_24 != iVar1);
      }
      else if (g_BitsPerPixel == 0x20) {
        local_28 = local_64;
        local_20 = local_24;
        do {
          puVar3 = (uint *)(*(int *)((int)g_ScreenBufferArray + local_28) + iVar5 * 4);
          iVar6 = local_20;
          do {
            puVar3 = puVar3 + 1;
            uVar7 = *(uint *)((int)g_ThumbnailImageBuffer[0] + iVar6);
            uVar8 = uVar7 >> 8 & 0xff;
            uVar4 = uVar7 >> 0x10 & 0xff;
            if (g_BitsPerPixel == 0x20) {
              uVar7 = (uVar7 & 0xff) << (g_RedBitPosition.bytes[0] & 0x1f) |
                      uVar8 << (g_GreenBitPosition.bytes[0] & 0x1f);
              uVar4 = uVar4 << (g_BlueBitPosition.bytes[0] & 0x1f);
            }
            else {
              uVar7 = (uVar7 & 0xff) << 0x10 | uVar8 << 8;
            }
            iVar6 = iVar6 + 4;
            *puVar3 = uVar7 | uVar4;
          } while (iVar6 != local_34);
          local_28 = local_28 + 4;
          local_20 = local_20 + 0x100;
          local_34 = local_34 + 0x100;
        } while (local_20 != iVar1);
      }
    }
    in_stack_00000004 = in_stack_00000004 + 1;
  }
  iVar5 = in_stack_00000008 * 0x40 + in_stack_0000000c;
  engine_2d_c_drawRect_FUN_00403120
            (in_stack_0000000c,in_stack_00000010,iVar5 + -1,in_stack_00000010 + 0x2f);
  if (((in_stack_0000000c <= g_MouseX) && (g_MouseX < iVar5)) &&
     ((in_stack_00000010 <= g_MouseY && (g_MouseY < in_stack_00000010 + 0x30)))) {
    return 1;
  }
  return 0;
}
