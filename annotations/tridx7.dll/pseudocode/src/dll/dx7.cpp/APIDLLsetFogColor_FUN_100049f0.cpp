// Name: dll_dx7.cpp_APIDLLsetFogColor_FUN_100049f0
// Address: 100049f0
// Address Range: [[100049f0, 10004a52]]
// Convention: __cdecl
// Signature: int __cdecl dll_dx7_cpp_APIDLLsetFogColor_FUN_100049f0(int red,int green,int blue)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl dll_dx7_cpp_APIDLLsetFogColor_FUN_100049f0(int red,int green,int blue)

{
                    /* 0x49f0  29  APIDLLsetFogColor */
  DAT_100141bc = red;
  DAT_100141c0 = green;
  _DAT_100141c4 = blue;
  if (g_InScene == 0) {
    dll_dx7_cpp_APIDLLbeginScene_FUN_10002ce0();
  }
  dll_dx7_cpp_FUN_100037e0(0x22,DAT_100141bc << 0x10 | DAT_100141c0 << 8 | _DAT_100141c4);
  if (g_InScene != 0) {
    dll_dx7_cpp_APIDLLendScene_FUN_10002d10();
  }
  return 1;
}
