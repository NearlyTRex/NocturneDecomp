// Name: core_game.cpp_CGame_ctor_FUN_004cbc80
// Address: 004cbc80
// Address Range: [[004cbc80, 004cbefa]]
// Convention: __cdecl
// Signature: CGame * __cdecl core_game_cpp_CGame_ctor_FUN_004cbc80(CGame *this_ptr)

#include "nocturne.h"

CGame * __cdecl core_game_cpp_CGame_ctor_FUN_004cbc80(CGame *this_ptr)

{
  this_ptr->vtable = (void *)0x600f94;
  this_ptr->game_pixx = 0x280;
  this_ptr->game_pixy = 0x1e0;
  this_ptr->game_bpp = 0x20;
  this_ptr->gamma = 0x10000;
  this_ptr->halo_mode = 0;
  this_ptr->subtitle_mode = 1;
  this_ptr->blood_flag = 1;
  this_ptr->nudity_flag = 1;
  this_ptr->foul_language_flag = 1;
  this_ptr->shadow_flag = 1;
  this_ptr->quimby_flag = 0;
  this_ptr->slow_motion_mode = 0;
  this_ptr->slow_motion_timer = 0.0;
  this_ptr->game_control = CONTROL_MODE_MOUSE;
  core_game_cpp_FUN_004d0400(this_ptr);
  this_ptr->debug_info_string[0] = '\0';
  this_ptr->god_mode_enabled = 0;
  this_ptr->freeze_enemies_enabled = 0;
  this_ptr->event_processing_enabled = 0;
  this_ptr->subtitle_system_enabled = 0;
  this_ptr->gratuitous_dismemberment = 0;
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
  this_ptr->hero_number = HERO_TYPE_MOLOCH|HERO_TYPE_SVETLANA;
  this_ptr->auto_use_health = 0;
  this_ptr->debug_fudge_target = (CVector3f *)0x0;
  this_ptr->debug_fudge_step = 1.0;
  this_ptr->gamma = 0x10000;
  this_ptr->letterbox_mode = 0;
  this_ptr->cinematic_skip_in_progress = 0;
  this_ptr->allow_damage_flag = 1;
  this_ptr->allow_enemy_attack_flag = 1;
  this_ptr->is_loading = 0;
  this_ptr->hero_controls_blocked = 0;
  this_ptr->bitmap_filename[0] = '\0';
  this_ptr->bitmap_width = 0;
  this_ptr->bitmap_height = 0;
  this_ptr->is_processing = 0;
  this_ptr->need_chapter_reload = 0;
  this_ptr->show_customizable_keys = 0;
  this_ptr->goggles_active = 0;
  this_ptr->special_view_active = 0;
  this_ptr->flashlight_active = 0;
  this_ptr->player_hit_flag = 0;
  this_ptr->total_game_time = 0.0;
  this_ptr->total_play_time = 0.0;
  this_ptr->damageable_enemy_count = 0;
  this_ptr->total_kill_count = 0;
  this_ptr->act_completion_state = 0;
  this_ptr->screen_clear_count = 0;
  this_ptr->puzzle_difficulty_mode = 0;
  this_ptr->combat_difficulty_mode = 0;
  this_ptr->bitmap_display_time = 0.0;
  this_ptr->new_set_event_pending = 1;
  DAT_01cd05c0 = 0;
  this_ptr->chapter_reload_filename[0] = '\0';
  return this_ptr;
}
