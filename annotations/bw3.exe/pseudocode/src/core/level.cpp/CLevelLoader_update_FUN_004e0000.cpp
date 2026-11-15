// Name: core_level.cpp_CLevelLoader_update_FUN_004e0000
// Address: 004e0000
// Address Range: [[004e0000, 004e0083]]
// Convention: __cdecl
// Signature: void __cdecl core_level_cpp_CLevelLoader_update_FUN_004e0000(CLevelLoader *this_ptr,char *text,int clear_screen)

#include "nocturne.h"

void __cdecl core_level_cpp_CLevelLoader_update_FUN_004e0000(CLevelLoader *this_ptr,char *text,int clear_screen)

{
  int iVar1;
  
  if (this_ptr->enabled != 0) {
    if (clear_screen != 0) {
      engine_2d_c_fillRectColor_FUN_004031c0(0,0,DAT_005fba18 + -1,DAT_005fba1c + -1,0);
    }
    if (DAT_005fba1c == 0x1e0) {
      iVar1 = this_ptr->current_frame + 1;
      this_ptr->current_frame = iVar1;
      if (this_ptr->total_frames < iVar1) {
        this_ptr->current_frame = this_ptr->total_frames;
      }
      engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d6f0
                (&CAlphaBitmap_01d70be8,0x4b,0x12a,
                 (this_ptr->current_frame / this_ptr->total_frames) * 0xd8ef + 10000);
      wincore_wddvmem_cpp_swapBuffers_FUN_0057a8a0();
    }
  }
  return;
}
