// Name: dll_dx7.cpp_APIDLLsetFogColor_FUN_100049f0
// Address: 100049f0
// Address Range: [[100049f0, 10004a52]]
// Convention: __cdecl
// Signature: int __cdecl dll_dx7_cpp_APIDLLsetFogColor_FUN_100049f0(int red,int green,int blue)

#include "nocturne.h"

int __cdecl dll_dx7_cpp_APIDLLsetFogColor_FUN_100049f0(int red,int green,int blue)

{
                    /* 0x49f0  29  APIDLLsetFogColor */
  g_FogColorRed = red;
  g_FogColorGreen = green;
  g_FogColorBlue = blue;
  if (g_InScene == 0) {
    dll_dx7_cpp_APIDLLbeginScene_FUN_10002ce0();
  }
  dll_dx7_cpp_setRenderStateCached_FUN_100037e0
            (0x22,g_FogColorRed << 0x10 | g_FogColorGreen << 8 | g_FogColorBlue);
  if (g_InScene != 0) {
    dll_dx7_cpp_APIDLLendScene_FUN_10002d10();
  }
  return 1;
}
