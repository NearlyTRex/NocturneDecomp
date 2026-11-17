// Name: core_setdir.cpp_CZThumb_render_FUN_00538a60
// Address: 00538a60
// Address Range: [[00538a60, 00538bdf]]
// Convention: __cdecl
// Signature: void __cdecl core_setdir_cpp_CZThumb_render_FUN_00538a60(CZThumb *this_ptr,int screen_x,int screen_y)

#include "nocturne.h"

void __cdecl core_setdir_cpp_CZThumb_render_FUN_00538a60(CZThumb *this_ptr,int screen_x,int screen_y)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int local_20;
  int local_1c;
  int local_14;
  
  if ((((-1 < screen_x) && (-1 < screen_y)) && (screen_x + this_ptr->width < g_INT_006141b8)) &&
     (this_ptr->height + screen_y < g_INT_006141bc)) {
    if (g_INT_006141c0 == 0x20) {
      iVar4 = screen_y * 4;
      for (local_14 = 1; local_1c = iVar4 + 4, local_14 < this_ptr->height + -1;
          local_14 = local_14 + 1) {
        iVar1 = screen_x << 2;
        for (iVar3 = 1; iVar1 = iVar1 + 4, iVar3 < this_ptr->width + -1; iVar3 = iVar3 + 1) {
          uVar2 = (uint)(0xffffff /
                        (ulonglong)
                        (*(int *)((int)this_ptr->zbuffer_data +
                                 (local_14 * this_ptr->width + iVar3) * 4) + 1));
          if (0xff < uVar2) {
            uVar2 = 0xff;
          }
          *(uint *)(*(int *)((int)g_ScreenBufferArray + iVar4 + 4) + iVar1) = uVar2 * 0x10101;
        }
        iVar4 = local_1c;
      }
    }
    else {
      for (iVar4 = 1; local_20 = screen_y + 1, iVar4 < this_ptr->height + -1; iVar4 = iVar4 + 1) {
        iVar1 = screen_x;
        for (iVar3 = 1; iVar1 = iVar1 + 1, iVar3 < this_ptr->width + -1; iVar3 = iVar3 + 1) {
          uVar2 = (uint)(0xffffff /
                        (ulonglong)
                        (*(int *)((int)this_ptr->zbuffer_data +
                                 (this_ptr->width * iVar4 + iVar3) * 4) + 1));
          if (0xff < uVar2) {
            uVar2 = 0xff;
          }
          g_INT_01c35e60 = (int)g_ColorCubeLookup[(uVar2 >> 3) * 0x421];
          engine_2d_c_plotPixel_FUN_00401130(iVar1,local_20);
        }
        screen_y = local_20;
      }
    }
  }
  return;
}
