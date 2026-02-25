// Name: core_setedit.cpp_FUN_00577200
// Address: 00577200
// Address Range: [[00577200, 00577326]]
// Convention: __cdecl
// Signature: void __cdecl core_setedit_cpp_FUN_00577200(void)

#include "nocturne.h"

void __cdecl core_setedit_cpp_FUN_00577200(void)

{
  uint uVar1;
  int iVar2;
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  ushort *local_24;
  int local_1c;
  int local_18;
  int local_14;
  
  local_1c = in_stack_0000000c << 2;
  local_14 = 0;
  local_18 = in_stack_00000004 * 0x3000;
  do {
    local_18 = local_18 + 0x100;
    local_24 = (ushort *)(*(int *)((int)g_ScreenBufferArray + local_1c) + in_stack_00000008 * 2);
    iVar2 = in_stack_00000004 * 0x3000 + local_14 * 0x100;
    do {
      local_24 = local_24 + 1;
      uVar1 = *(uint *)((int)g_ThumbnailImageBuffer[0] + iVar2);
      iVar2 = iVar2 + 4;
      *local_24 = (ushort)((uVar1 >> 8 & 0xff) / (uint)g_GreenScaleFactor <<
                          (g_GreenBitPosition.bytes[0] & 0x1f)) |
                  (ushort)((uVar1 & 0xff) / (uint)g_RedScaleFactor <<
                          (g_RedBitPosition.bytes[0] & 0x1f)) |
                  (ushort)((uVar1 >> 0x10 & 0xff) / (uint)g_BlueScaleFactor <<
                          (g_BlueBitPosition.bytes[0] & 0x1f));
    } while (iVar2 != local_18);
    local_1c = local_1c + 4;
    local_14 = local_14 + 1;
  } while (local_14 < 0x30);
  return;
}
