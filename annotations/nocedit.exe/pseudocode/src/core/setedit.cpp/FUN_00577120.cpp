// Name: core_setedit.cpp_FUN_00577120
// Address: 00577120
// Address Range: [[00577120, 005771f0]]
// Convention: unknown
// Signature: undefined core_setedit.cpp_FUN_00577120()

#include "nocturne.h"

void core_setedit_cpp_FUN_00577120(void)

{
  uint uVar1;
  int iVar2;
  uchar *puVar3;
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
    puVar3 = (uchar *)(*(int *)((int)g_ScreenBufferArray + local_1c) + in_stack_00000008);
    iVar2 = local_14 * 0x100 + in_stack_00000004 * 0x3000;
    do {
      puVar3 = puVar3 + 1;
      uVar1 = *(uint *)(&DAT_03365cc0 + iVar2);
      iVar2 = iVar2 + 4;
      *puVar3 = g_ColorCubeLookup
                [((uVar1 >> 0x10 & 0xff) >> 3) +
                 ((uVar1 & 0xff) >> 3) * 0x400 + ((uVar1 >> 8 & 0xff) >> 3) * 0x20];
    } while (iVar2 != local_18);
    local_1c = local_1c + 4;
    local_14 = local_14 + 1;
  } while (local_14 < 0x30);
  return;
}
