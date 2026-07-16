// Name: FUN_100035b0
// Address: 100035b0
// Address Range: [[100035b0, 100037df]]
// Convention: unknown
// Signature: bool FUN_100035b0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_100035b0(void)

{
  int iVar1;
  uint *puVar2;
  
  puVar2 = &DAT_101394c8;
  for (iVar1 = 0x100; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = &DAT_101390c8;
  for (iVar1 = 0x100; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  iVar1 = (**(code **)(*DAT_100141e0 + 0x24))(DAT_100141e0);
  if (iVar1 != 0) {
    return false;
  }
  FUN_100037e0(1,0);
  FUN_100037e0(2,0);
  FUN_100037e0(3,3);
  FUN_100037e0(4,1);
  FUN_100037e0(5,0);
  FUN_100037e0(6,0);
  FUN_100037e0(7,0);
  FUN_100037e0(8,3);
  FUN_100037e0(9,2);
  FUN_100037e0(0xb,0);
  FUN_100037e0(0xe,0);
  FUN_100037e0(0xf,0);
  FUN_100037e0(0x10,0);
  FUN_100037e0(0x11,2 - (uint)(*g_ExternalRendererBridge.system_initialized == 0));
  FUN_100037e0(0x12,2 - (uint)(*g_ExternalRendererBridge.system_initialized == 0));
  FUN_100037e0(0x13,2);
  FUN_100037e0(0x14,6);
  FUN_100037e0(0x15,2);
  FUN_100037e0(0x16,1);
  FUN_100037e0(0x1a,*g_ExternalRendererBridge.video_memory_size);
  FUN_100037e0(0x1b,0);
  FUN_100037e0(0x1c,0);
  FUN_100037e0(0x22,DAT_100141bc << 0x10 | DAT_100141c0 << 8 | _DAT_100141c4);
  FUN_100037e0(0x23,0);
  FUN_100037e0(0x1d,1);
  FUN_100037e0(0x1e,0);
  FUN_100037e0(0x1f,1);
  FUN_100037e0(0x21,0);
  FUN_100037e0(0x27,0);
  FUN_100037e0(7,0);
  FUN_100037e0(0xe,0);
  FUN_100037e0(0x17,8);
  FUN_100037e0(0x29,0);
  FUN_100037e0(0x18,0);
  FUN_100037e0(0x19,5);
  FUN_100037e0(0xf,0);
  FUN_10002d50();
  iVar1 = (**(code **)(*DAT_100141e0 + 0x28))(DAT_100141e0);
  return iVar1 == 0;
}
