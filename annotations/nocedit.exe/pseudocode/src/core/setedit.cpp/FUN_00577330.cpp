// Name: core_setedit.cpp_FUN_00577330
// Address: 00577330
// Address Range: [[00577330, 00577428]]
// Convention: unknown
// Signature: undefined core_setedit.cpp_FUN_00577330()

#include "nocturne.h"

void core_setedit_cpp_FUN_00577330(void)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  int local_1c;
  int local_18;
  int local_14;
  
  local_14 = 0;
  local_1c = in_stack_0000000c << 2;
  local_18 = in_stack_00000004 * 0x3000;
  do {
    local_18 = local_18 + 0x100;
    puVar1 = (uint *)(*(int *)((int)g_ScreenBufferArray + local_1c) + in_stack_00000008 * 4);
    iVar2 = local_14 * 0x100 + in_stack_00000004 * 0x3000;
    do {
      puVar1 = puVar1 + 1;
      uVar5 = *(uint *)(&DAT_03365cc0 + iVar2);
      uVar4 = uVar5 >> 8 & 0xff;
      uVar3 = uVar5 >> 0x10 & 0xff;
      if (g_BitsPerPixel == 0x20) {
        uVar5 = (uVar5 & 0xff) << ((byte)g_RedBitPosition & 0x1f) |
                uVar4 << ((byte)g_GreenBitPosition & 0x1f);
        uVar3 = uVar3 << ((byte)g_BlueBitPosition & 0x1f);
      }
      else {
        uVar5 = (uVar5 & 0xff) << 0x10 | uVar4 << 8;
      }
      iVar2 = iVar2 + 4;
      *puVar1 = uVar5 | uVar3;
    } while (iVar2 != local_18);
    local_1c = local_1c + 4;
    local_14 = local_14 + 1;
  } while (local_14 < 0x30);
  return;
}
