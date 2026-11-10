// Name: core_game.cpp_CGame_ctor_FUN_004cbc80
// Address: 004cbc80
// Address Range: [[004cbc80, 004cbefa]]
// Convention: __cdecl
// Signature: CGame * __cdecl core_game_cpp_CGame_ctor_FUN_004cbc80(CGame *this_ptr)

#include "nocturne.h"

CGame * __cdecl core_game_cpp_CGame_ctor_FUN_004cbc80(CGame *this_ptr)

{
  *(uint *)&this_ptr->field_0xb00 = 0x600f94;
  this_ptr->game_pixx = 0x280;
  this_ptr->game_pixy = 0x1e0;
  this_ptr->game_bpp = 0x20;
  *(uint *)&this_ptr->field_0x240 = 0x10000;
  *(uint *)&this_ptr->field_0xc = 0;
  *(uint *)&this_ptr->field_0x10 = 1;
  *(uint *)&this_ptr->field_0x14 = 1;
  *(uint *)&this_ptr->field_0x18 = 1;
  *(uint *)&this_ptr->field_0x1c = 1;
  this_ptr->quimby_flag = 1;
  *(uint *)&this_ptr->field_0x20 = 0;
  *(uint *)&this_ptr->field_0x280 = 0;
  *(uint *)&this_ptr->field_0x284 = 0;
  *(uint *)&this_ptr->field_0xd0 = 1;
  core_game_cpp_FUN_004d0400(this_ptr);
  this_ptr->field_0xec = 0;
  *(uint *)&this_ptr->field_0x1ec = 0;
  *(uint *)&this_ptr->field_0x1f0 = 0;
  *(uint *)&this_ptr->field_0x1f4 = 0;
  *(uint *)&this_ptr->field_0x1f8 = 0;
  *(uint *)&this_ptr->field_0x1fc = 0;
  *(uint *)&this_ptr->field_0x208 = 0x3f800000;
  *(uint *)&this_ptr->field_0x20c = 0;
  *(uint *)&this_ptr->field_0x210 = 0;
  *(uint *)&this_ptr->field_0x214 = 0;
  *(uint *)&this_ptr->field_0x21c = 0;
  *(uint *)&this_ptr->field_0x220 = 0;
  *(uint *)&this_ptr->field_0x224 = 0;
  *(uint *)&this_ptr->field_0x228 = 0;
  *(uint *)&this_ptr->field_0x22c = 0;
  *(uint *)&this_ptr->field_0x230 = 0;
  *(uint *)&this_ptr->field_0x234 = 0;
  *(uint *)&this_ptr->field_0x238 = 0;
  *(uint *)&this_ptr->field_0xd4 = 9;
  *(uint *)&this_ptr->field_0xdc = 0;
  this_ptr->debug_fudge_target = (CVector3f *)0x0;
  this_ptr->debug_fudge_step = 1.0;
  *(uint *)&this_ptr->field_0x240 = 0x10000;
  *(uint *)&this_ptr->field_0x244 = 0;
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
  *(uint *)&this_ptr->field_0xafc = 0;
  *(uint *)&this_ptr->field_0x25c = 0;
  *(uint *)&this_ptr->field_0x260 = 0;
  *(uint *)&this_ptr->field_0x264 = 0;
  *(uint *)&this_ptr->field_0x23c = 0;
  this_ptr->total_game_time = 0.0;
  this_ptr->total_play_time = 0.0;
  this_ptr->damageable_enemy_count = 0;
  this_ptr->total_kill_count = 0;
  *(uint *)&this_ptr->field_0x27c = 0;
  *(uint *)&this_ptr->field_0x278 = 0;
  *(uint *)&this_ptr->field_0xe4 = 0;
  *(uint *)&this_ptr->field_0xe8 = 0;
  *(uint *)&this_ptr->field_0x3b8 = 0;
  *(uint *)&this_ptr->field_0x288 = 1;
  DAT_01cd05c0 = 0;
  this_ptr->chapter_reload_filename[0] = '\0';
  return this_ptr;
}
