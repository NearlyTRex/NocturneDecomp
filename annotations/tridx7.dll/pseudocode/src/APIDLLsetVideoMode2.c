// Name: APIDLLsetVideoMode2
// Address: 10002bb0
// Address Range: [[10002bb0, 10002bda]]
// Convention: __cdecl
// Signature: int __cdecl APIDLLsetVideoMode2(int width,int height,int bits_per_pixel,void **screen_buffer_array)

#include "nocturne.h"

int __cdecl APIDLLsetVideoMode2(int width,int height,int bits_per_pixel,void **screen_buffer_array)

{
  int iVar1;
  
                    /* 0x2bb0  32  APIDLLsetVideoMode2 */
  DAT_10014174 = width;
  DAT_10014178 = height;
  DAT_1001417c = bits_per_pixel;
  iVar1 = APIDLLsetVideoMode(screen_buffer_array);
  return iVar1;
}
