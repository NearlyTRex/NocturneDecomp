// Name: engine_special.cpp_shutdownExternalRenderer_FUN_00564010
// Address: 00564010
// Address Range: [[00564010, 005641f4]]
// Convention: __cdecl
// Signature: void __cdecl engine_special_cpp_shutdownExternalRenderer_FUN_00564010(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_special_cpp_shutdownExternalRenderer_FUN_00564010(void)

{
  g_INT_01c6cee8 = 0;
  g_INT_02cf6108 = 0;
  if (g_HMODULE_02cf610c != (HMODULE)0x0) {
    wincore_wddvmem_cpp_freeLibrary_FUN_0057ad00(g_HMODULE_02cf610c);
    g_HMODULE_02cf610c = (HMODULE)0x0;
  }
  g_PTR_02cf5fe8 = (byte *)0x0;
  g_PTR_02cf5fec = (byte *)0x0;
  _DAT_02cf5ff0 = 0;
  g_PTR_02cf5ff4 = (byte *)0x0;
  g_PTR_02cf5ff8 = (byte *)0x0;
  g_PTR_02cf5ffc = (byte *)0x0;
  g_PTR_02cf6000 = (byte *)0x0;
  g_PTR_02cf6004 = (byte *)0x0;
  g_PTR_02cf6008 = (byte *)0x0;
  g_PTR_02cf600c = (byte *)0x0;
  g_PTR_02cf6010 = (byte *)0x0;
  g_PTR_02cf601c = (byte *)0x0;
  g_PTR_02cf6020 = (byte *)0x0;
  g_PTR_02cf6024 = (byte *)0x0;
  g_PTR_02cf6028 = (byte *)0x0;
  g_PTR_02cf602c = (byte *)0x0;
  g_PTR_02cf6030 = (byte *)0x0;
  g_PTR_02cf6034 = (byte *)0x0;
  g_PTR_02cf6038 = (byte *)0x0;
  g_PTR_02cf603c = (byte *)0x0;
  g_PTR_02cf6040 = (byte *)0x0;
  g_PTR_02cf6044 = (byte *)0x0;
  g_PTR_02cf6048 = (byte *)0x0;
  g_PTR_02cf604c = (byte *)0x0;
  g_PTR_02cf6050 = (byte *)0x0;
  g_PTR_02cf6054 = (byte *)0x0;
  g_PTR_02cf6058 = (byte *)0x0;
  _DAT_02cf605c = 0;
  _DAT_02cf6060 = 0;
  g_PTR_02cf6064 = (byte *)0x0;
  g_PTR_02cf6068 = (byte *)0x0;
  g_PTR_02cf606c = (byte *)0x0;
  g_PTR_02cf6070 = (byte *)0x0;
  g_PTR_02cf6074 = (byte *)0x0;
  g_PTR_02cf6078 = (byte *)0x0;
  g_PTR_02cf607c = (byte *)0x0;
  g_PTR_02cf6080 = (byte *)0x0;
  g_PTR_02cf6084 = (byte *)0x0;
  g_PTR_02cf6088 = (byte *)0x0;
  g_PTR_02cf608c = (byte *)0x0;
  _DAT_02cf6090 = 0;
  g_PTR_02cf6094 = (byte *)0x0;
  _DAT_02cf6098 = 0;
  g_PTR_02cf609c = (byte *)0x0;
  g_PTR_02cf60a0 = (byte *)0x0;
  g_PTR_02cf60a4 = (byte *)0x0;
  g_PTR_02cf60a8 = (byte *)0x0;
  g_PTR_02cf60ac = (byte *)0x0;
  g_PTR_02cf60b0 = (byte *)0x0;
  g_PTR_02cf60b4 = (byte *)0x0;
  g_PTR_02cf60b8 = (byte *)0x0;
  g_PTR_02cf60bc = (byte *)0x0;
  g_PTR_02cf60c0 = (byte *)0x0;
  g_PTR_02cf60c4 = (byte *)0x0;
  g_PTR_02cf60c8 = (byte *)0x0;
  g_PTR_02cf60cc = (byte *)0x0;
  _DAT_02cf60d0 = 0;
  _DAT_02cf60d4 = 0;
  _DAT_02cf60d8 = 0;
  g_PTR_02cf60dc = (byte *)0x0;
  g_PTR_02cf60e0 = (byte *)0x0;
  g_PTR_02cf60e4 = (byte *)0x0;
  g_PTR_02cf60e8 = (byte *)0x0;
  g_PTR_02cf60ec = (byte *)0x0;
  g_PTR_02cf60f0 = (byte *)0x0;
  g_PTR_02cf60f4 = (byte *)0x0;
  g_PTR_02cf60f8 = (byte *)0x0;
  g_PTR_02cf60fc = (byte *)0x0;
  g_PTR_02cf6100 = (byte *)0x0;
  g_PTR_02cf6104 = (byte *)0x0;
  g_PTR_02cf5fe4 = (byte *)0x0;
  return;
}
