// Name: dll_dx7.cpp_APIDLLsetVideoMode2_FUN_10002bb0
// Address: 10002bb0
// Address Range: [[10002bb0, 10002bda]]
// Convention: __cdecl
// Signature: int __cdecl dll_dx7_cpp_APIDLLsetVideoMode2_FUN_10002bb0(int width,int height,int bits_per_pixel,void **screen_buffer_array)

#include "nocturne.h"

int __cdecl dll_dx7_cpp_APIDLLsetVideoMode2_FUN_10002bb0(int width,int height,int bits_per_pixel,void **screen_buffer_array)

{
  int iVar1;
  
                    /* 0x2bb0  32  APIDLLsetVideoMode2 */
  g_ScreenWidth = width;
  g_ScreenHeight = height;
  g_ScreenBitDepth = bits_per_pixel;
  iVar1 = dll_dx7_cpp_APIDLLsetVideoMode_FUN_10002500(screen_buffer_array);
  return iVar1;
}
