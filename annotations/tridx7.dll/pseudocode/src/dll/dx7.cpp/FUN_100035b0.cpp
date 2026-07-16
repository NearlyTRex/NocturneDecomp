// Name: dll_dx7.cpp_FUN_100035b0
// Address: 100035b0
// Address Range: [[100035b0, 100037df]]
// Convention: __cdecl
// Signature: int __cdecl dll_dx7_cpp_FUN_100035b0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl dll_dx7_cpp_FUN_100035b0(void)

{
  HRESULT HVar1;
  int iVar2;
  uint *puVar3;
  
  puVar3 = &DAT_101394c8;
  for (iVar2 = 0x100; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  puVar3 = &DAT_101390c8;
  for (iVar2 = 0x100; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  HVar1 = (*g_Device->vtable->BeginScene)(g_Device);
  if (HVar1 != 0) {
    return 0;
  }
  dll_dx7_cpp_FUN_100037e0(1,0);
  dll_dx7_cpp_FUN_100037e0(2,0);
  dll_dx7_cpp_FUN_100037e0(3,3);
  dll_dx7_cpp_FUN_100037e0(4,1);
  dll_dx7_cpp_FUN_100037e0(5,0);
  dll_dx7_cpp_FUN_100037e0(6,0);
  dll_dx7_cpp_FUN_100037e0(7,0);
  dll_dx7_cpp_FUN_100037e0(8,3);
  dll_dx7_cpp_FUN_100037e0(9,2);
  dll_dx7_cpp_FUN_100037e0(0xb,0);
  dll_dx7_cpp_FUN_100037e0(0xe,0);
  dll_dx7_cpp_FUN_100037e0(0xf,0);
  dll_dx7_cpp_FUN_100037e0(0x10,0);
  dll_dx7_cpp_FUN_100037e0(0x11,2 - (uint)(*g_ExternalRendererBridge.system_initialized == 0));
  dll_dx7_cpp_FUN_100037e0(0x12,2 - (uint)(*g_ExternalRendererBridge.system_initialized == 0));
  dll_dx7_cpp_FUN_100037e0(0x13,2);
  dll_dx7_cpp_FUN_100037e0(0x14,6);
  dll_dx7_cpp_FUN_100037e0(0x15,2);
  dll_dx7_cpp_FUN_100037e0(0x16,1);
  dll_dx7_cpp_FUN_100037e0(0x1a,*g_ExternalRendererBridge.video_memory_size);
  dll_dx7_cpp_FUN_100037e0(0x1b,0);
  dll_dx7_cpp_FUN_100037e0(0x1c,0);
  dll_dx7_cpp_FUN_100037e0(0x22,DAT_100141bc << 0x10 | DAT_100141c0 << 8 | _DAT_100141c4);
  dll_dx7_cpp_FUN_100037e0(0x23,0);
  dll_dx7_cpp_FUN_100037e0(0x1d,1);
  dll_dx7_cpp_FUN_100037e0(0x1e,0);
  dll_dx7_cpp_FUN_100037e0(0x1f,1);
  dll_dx7_cpp_FUN_100037e0(0x21,0);
  dll_dx7_cpp_FUN_100037e0(0x27,0);
  dll_dx7_cpp_FUN_100037e0(7,0);
  dll_dx7_cpp_FUN_100037e0(0xe,0);
  dll_dx7_cpp_FUN_100037e0(0x17,8);
  dll_dx7_cpp_FUN_100037e0(0x29,0);
  dll_dx7_cpp_FUN_100037e0(0x18,0);
  dll_dx7_cpp_FUN_100037e0(0x19,5);
  dll_dx7_cpp_FUN_100037e0(0xf,0);
  dll_dx7_cpp_FUN_10002d50();
  HVar1 = (*g_Device->vtable->EndScene)(g_Device);
  return (uint)(HVar1 == 0);
}
