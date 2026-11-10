// Name: core_game.cpp_CGame_ctor_FUN_004b2d80
// Address: 004b2d80
// Address Range: [[004b2d80, 004b2fef]]
// Convention: __cdecl
// Signature: CGame * __cdecl core_game_cpp_CGame_ctor_FUN_004b2d80(CGame *this_ptr)

#include "nocturne.h"

CGame * __cdecl core_game_cpp_CGame_ctor_FUN_004b2d80(CGame *this_ptr)

{
  *(uint *)&this_ptr->field_0xb1c = 0x5f7574;
  this_ptr->game_pixx = 0x280;
  this_ptr->game_pixy = 0x1e0;
  this_ptr->game_bpp = 0x20;
  this_ptr->gamma = 0x10000;
  *(uint *)&this_ptr->field_0xc = 0;
  *(uint *)&this_ptr->field_0x10 = 1;
  *(uint *)&this_ptr->field_0x14 = 1;
  *(uint *)&this_ptr->field_0x18 = 1;
  *(uint *)&this_ptr->field_0x1c = 1;
  this_ptr->quimby_flag = 1;
  *(uint *)&this_ptr->field_0x20 = 0;
  *(uint *)&this_ptr->field_0xd0 = 1;
  core_game_cpp_CGame_restoreDefaultControls_FUN_004b6e10(this_ptr);
  this_ptr->field_0xec = 0;
  *(uint *)&this_ptr->field_0x1ec = 0;
  *(uint *)&this_ptr->field_0x1f0 = 0;
  *(uint *)&this_ptr->field_0x1f4 = 0;
  *(uint *)&this_ptr->field_0x1f8 = 0;
  *(uint *)&this_ptr->field_0x1fc = 0;
  this_ptr->time_scale_factor = 1.0;
  this_ptr->suppress_set_geometry = 0;
  this_ptr->render_mode = 0;
  this_ptr->editor_tools_enabled = 0;
  this_ptr->wait_for_keypress = 0;
  this_ptr->big_hat_cheat = 0;
  this_ptr->skip_frame_render = 0;
  this_ptr->profile_mode = 0;
  this_ptr->developer_mode_enabled = 0;
  this_ptr->head_of_horror_cheat = 0;
  this_ptr->geometry_debug_enabled = 0;
  this_ptr->collision_render_enabled = 0;
  *(uint *)&this_ptr->field_0xd4 = 9;
  *(uint *)&this_ptr->field_0xdc = 0;
  this_ptr->debug_fudge_target = (CVector3f *)0x0;
  this_ptr->debug_fudge_step = 1.0;
  this_ptr->gamma = 0x10000;
  this_ptr->letterbox_mode = 0;
  *(uint *)&this_ptr->field_0xe0 = 0;
  *(uint *)&this_ptr->field_0x248 = 1;
  *(uint *)&this_ptr->field_0x24c = 1;
  *(uint *)&this_ptr->field_0x250 = 0;
  *(uint *)&this_ptr->field_0x254 = 0;
  this_ptr->bitmap_filename[0] = '\0';
  this_ptr->bitmap_width = 0;
  this_ptr->bitmap_height = 0;
  *(uint *)&this_ptr->field_0x258 = 0;
  this_ptr->need_chapter_reload = 0;
  *(uint *)&this_ptr->field_0xaec = 0;
  *(uint *)&this_ptr->field_0x25c = 0;
  *(uint *)&this_ptr->field_0x260 = 0;
  *(uint *)&this_ptr->field_0x264 = 0;
  this_ptr->player_hit_flag = 0;
  *(uint *)&this_ptr->field_0x268 = 0;
  *(uint *)&this_ptr->field_0x270 = 0;
  *(uint *)&this_ptr->field_0x26c = 0;
  *(uint *)&this_ptr->field_0x274 = 0;
  *(uint *)&this_ptr->field_0x278 = 0;
  *(uint *)&this_ptr->field_0xe4 = 0;
  *(uint *)&this_ptr->field_0xe8 = 0;
  DAT_01cb7b50 = 0;
  this_ptr->chapter_reload_filename[0] = '\0';
  core_game_cpp_FUN_004bb500(this_ptr,0,0x3f800000,0x40a00000,0,0,0,0);
  *(uint *)&this_ptr->field_0xb14 = 0;
  return this_ptr;
}
