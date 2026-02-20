// Name: core_game.cpp_CGame_ctor_FUN_004d7b40
// Address: 004d7b40
// Address Range: [[004d7b40, 004d7d60]]
// Convention: __cdecl
// Signature: CGame * __cdecl core_game_cpp_CGame_ctor_FUN_004d7b40(CGame *this_ptr)

#include "nocturne.h"

CGame * __cdecl core_game_cpp_CGame_ctor_FUN_004d7b40(CGame *this_ptr)

{
  this_ptr->game_pixx = GAME_WINDOW_RESOLUTION_640;
  this_ptr->game_pixy = GAME_WINDOW_RESOLUTION_480;
  this_ptr->game_bpp = GAME_WINDOW_RESOLUTION_BPP;
  this_ptr->gamma = 0x10000;
  this_ptr->halo_mode = 0;
  this_ptr->subtitle_mode = 1;
  this_ptr->blood_flag = 1;
  this_ptr->nudity_flag = 1;
  this_ptr->foul_language_flag = 1;
  this_ptr->shadow_flag = 1;
  this_ptr->quimby_flag = 0;
  this_ptr->game_control = 0;
  core_game_cpp_CGame_restoreDefaultControls_FUN_004dbbc0(this_ptr);
  this_ptr->debug_info_string[0] = '\0';
  this_ptr->debug_flag_1 = 0;
  this_ptr->debug_flag_2 = 0;
  this_ptr->event_processing_enabled = 0;
  this_ptr->subtitle_system_enabled = 0;
  this_ptr->gratuitous_dismemberment = 0;
  this_ptr->time_scale_factor = 1.0;
  this_ptr->scripted_sequence_active = 0;
  this_ptr->render_mode = 0;
  this_ptr->editor_tools_enabled = 0;
  this_ptr->wait_for_keypress = 0;
  this_ptr->big_hat_cheat = 0;
  this_ptr->skip_frame_render = 0;
  this_ptr->profile_mode = 0;
  this_ptr->velocity_debug_enabled = 0;
  this_ptr->head_of_horror_cheat = 0;
  this_ptr->geometry_debug_enabled = 0;
  this_ptr->collision_render_enabled = 0;
  this_ptr->hero_number = 0;
  this_ptr->auto_use_health = 0;
  this_ptr->debug_fudge_target = (CVector3f *)0x0;
  this_ptr->debug_fudge_step = 1.0;
  this_ptr->gamma = 0x10000;
  this_ptr->letterbox_mode = 0;
  this_ptr->cutscene_skippable = 0;
  this_ptr->allow_damage_flag = 1;
  this_ptr->allow_enemy_attack_flag = 1;
  this_ptr->is_loading = 0;
  this_ptr->allow_hero_controls_flag = 0;
  this_ptr->bitmap_filename[0] = '\0';
  this_ptr->bitmap_width = 0;
  this_ptr->bitmap_height = 0;
  this_ptr->is_processing = 0;
  this_ptr->need_chapter_reload = 0;
  this_ptr->show_customizable_keys = 0;
  this_ptr->block_auto_save = 0;
  this_ptr->auto_save_blocked = 0;
  this_ptr->player_hit_flag = 0;
  this_ptr->game_stat_1 = 0.0;
  this_ptr->total_play_time = 0.0;
  this_ptr->game_stat_2 = 0.0;
  this_ptr->game_state_flags = 0;
  this_ptr->act_completion_state = 0;
  g_CurrentSaveFile = '\0';
  this_ptr->chapter_reload_filename[0] = '\0';
  return this_ptr;
}
