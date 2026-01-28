// Name: core_texlist.cpp_CTextureList_renderTexture_FUN_005dca30
// Address: 005dca30
// Address Range: [[005dca30, 005dcaab]]
// Convention: __cdecl
// Signature: void __cdecl core_texlist_cpp_CTextureList_renderTexture_FUN_005dca30(CTextureList *this_ptr)

#include "nocturne.h"

void __cdecl core_texlist_cpp_CTextureList_renderTexture_FUN_005dca30(CTextureList *this_ptr)

{
  if (g_TexturePreviewEnabled != 0) {
    if (g_TexturePreviewFullscreen != 0) {
      engine_2d_c_drawTextRightAlignedColorFormatted_FUN_00402580
                (g_WindowWidth + -7,g_WindowHeight + -0xb,"%s  %d",
                 this_ptr->master_texture_names + this_ptr->current_master_selection,
                 this_ptr->current_master_selection);
      return;
    }
    engine_2d_c_drawTextRightAlignedColorFormatted_FUN_00402580
              (g_WindowWidth + -7,g_TexturePreviewY + -0xb,"%s  %d",
               this_ptr->master_texture_names + this_ptr->current_master_selection,
               this_ptr->current_master_selection);
  }
  return;
}
