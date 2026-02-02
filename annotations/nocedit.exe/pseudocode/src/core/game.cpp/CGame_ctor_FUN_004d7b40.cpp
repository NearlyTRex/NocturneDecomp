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
  this_ptr->unk1[0] = '\0';
  this_ptr->unk2 = 0;
  this_ptr->unk3 = 0;
  this_ptr->event_processing_enabled = 0;
  this_ptr->subtitle_system_enabled = 0;
  this_ptr->unk4 = 0;
  this_ptr->time_scale_factor = 1.0;
  this_ptr->scripted_sequence_active = 0;
  this_ptr->unk6 = 0;
  this_ptr->editor_tools_enabled = 0;
  this_ptr->wait_for_keypress = 0;
  this_ptr->unk7 = 0;
  this_ptr->unk8 = 0;
  this_ptr->profile_mode = 0;
  this_ptr->velocity_debug_enabled = 0;
  this_ptr->head_of_horror_cheat = 0;
  this_ptr->unk9 = 0;
  this_ptr->unk10 = 0;
  this_ptr->hero_number = 0;
  this_ptr->auto_use_health = 0;
  this_ptr->unk14 = 0;
  this_ptr->unk15 = 0x3f800000;
  this_ptr->gamma = 0x10000;
  this_ptr->letterbox_mode = 0;
  this_ptr->cutscene_skippable = 0;
  this_ptr->allow_damage_flag = 1;
  this_ptr->allow_enemy_attack_flag = 1;
  this_ptr->is_loading = 0;
  this_ptr->allow_hero_controls_flag = 0;
  this_ptr->unk13[0x528] = '\0';
  this_ptr->unk13[0x628] = '\0';
  this_ptr->unk13[0x629] = '\0';
  this_ptr->unk13[0x62a] = '\0';
  this_ptr->unk13[0x62b] = '\0';
  this_ptr->unk13[0x62c] = '\0';
  this_ptr->unk13[0x62d] = '\0';
  this_ptr->unk13[0x62e] = '\0';
  this_ptr->unk13[0x62f] = '\0';
  this_ptr->is_processing = 0;
  this_ptr->need_chapter_reload = 0;
  this_ptr->show_customizable_keys = 0;
  this_ptr->block_auto_save = 0;
  this_ptr->auto_save_blocked = 0;
  this_ptr->unk11 = 0;
  this_ptr->player_pos_y = 0.0;
  this_ptr->player_rotation = 0.0;
  this_ptr->player_pos_x = 0.0;
  this_ptr->game_state_flags = 0;
  this_ptr->unk12 = 0;
  g_CurrentSaveFile = '\0';
  *(byte *)&this_ptr->save_version = 0;
  return this_ptr;
}
