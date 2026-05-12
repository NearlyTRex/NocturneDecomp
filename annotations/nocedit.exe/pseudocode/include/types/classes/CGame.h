#pragma once

// Forward declarations
struct CVector3f;

// Dependencies
#include "system/basetypes.h"
#include "types/enums/EAimMode.h"
#include "types/enums/EControlMode.h"
#include "types/enums/EHeroType.h"

// Structure: CGame
// Ghidra size: 0xacc (2764 bytes)
typedef struct CGame {
    int game_pixx; // 0x0
    int game_pixy; // 0x4
    int game_bpp; // 0x8
    int halo_mode; // 0xc
    int subtitle_mode; // 0x10
    int blood_flag; // 0x14
    int nudity_flag; // 0x18
    int foul_language_flag; // 0x1c
    int quimby_flag; // 0x20
    int shadow_flag; // 0x24
    int key_walk; // 0x28
    int key_backup; // 0x2c
    int key_run; // 0x30
    int key_strafe; // 0x34
    int key_strafe_left; // 0x38
    int key_strafe_right; // 0x3c
    int key_right; // 0x40
    int key_left; // 0x44
    int key_fire; // 0x48
    int key_use_item; // 0x4c
    int key_light; // 0x50
    int key_infrared; // 0x54
    int key_draw; // 0x58
    int key_jump; // 0x5c
    int key_point_up; // 0x60
    int key_point_down; // 0x64
    int key_weapon_1; // 0x68
    int key_weapon_2; // 0x6c
    int key_weapon_3; // 0x70
    int key_weapon_4; // 0x74
    int key_weapon_5; // 0x78
    int key_next_weapon; // 0x7c
    int key_prev_weapon; // 0x80
    int key_next_item; // 0x84
    int key_prev_item; // 0x88
    int key_item_desc; // 0x8c
    int key_next_ammo; // 0x90
    int invert_mouse_y_axis; // 0x94
    int always_run; // 0x98
    int x_mouse_sensitivity; // 0x9c
    int y_mouse_sensitivity; // 0xa0
    int x_center; // 0xa4
    int y_center; // 0xa8
    int x_stick_min; // 0xac
    int x_stick_max; // 0xb0
    int y_stick_min; // 0xb4
    int y_stick_max; // 0xb8
    EControlMode game_control; // 0xbc
    EHeroType hero_number; // 0xc0
    EAimMode aim_mode; // 0xc4
    int auto_use_health; // 0xc8
    int cutscene_skippable; // 0xcc
    char debug_info_string[256]; // 0xd0
    int god_mode_enabled; // 0x1d0
    int freeze_enemies_enabled; // 0x1d4
    int event_processing_enabled; // 0x1d8
    int subtitle_system_enabled; // 0x1dc
    int gratuitous_dismemberment; // 0x1e0
    int camera_debug_enabled; // 0x1e4
    int debug_toggle_flag; // 0x1e8
    float time_scale_factor; // 0x1ec
    int scripted_sequence_active; // 0x1f0
    int render_mode; // 0x1f4
    int editor_tools_enabled; // 0x1f8
    int is_paused; // 0x1fc
    int wait_for_keypress; // 0x200
    int big_hat_cheat; // 0x204
    int skip_frame_render; // 0x208
    int profile_mode; // 0x20c
    int developer_mode_enabled; // 0x210
    int head_of_horror_cheat; // 0x214
    int geometry_debug_enabled; // 0x218
    int collision_render_enabled; // 0x21c
    int player_hit_flag; // 0x220
    int gamma; // 0x224
    int letterbox_mode; // 0x228
    int allow_damage_flag; // 0x22c
    int allow_enemy_attack_flag; // 0x230
    int is_loading; // 0x234
    int allow_hero_controls_flag; // 0x238
    int is_processing; // 0x23c
    int goggles_active; // 0x240
    int flashlight_active; // 0x244
    float total_game_time; // 0x248
    int damageable_enemy_count; // 0x24c
    float total_play_time; // 0x250
    int total_kill_count; // 0x254
    int act_completion_state; // 0x258
    int clocktime; // 0x25c
    int delta_time_int; // 0x260
    float delta_time_float; // 0x264
    int timing_related_flag; // 0x268
    int frame_counter; // 0x26c
    int camera_view_index; // 0x270
    int is_game_active; // 0x274
    int screen_clear_enabled; // 0x278
    int screen_clear_condition; // 0x27c
    int console_enabled; // 0x280
    char message_text[256]; // 0x284
    float message_timer; // 0x384
    int status_display_count; // 0x388
    char status_bar_names[5][256]; // 0x38c
    float status_bar_values[5]; // 0x88c
    float status_bar_timers[5]; // 0x8a0
    char bitmap_filename[256]; // 0x8b4
    int bitmap_width; // 0x9b4
    int bitmap_height; // 0x9b8
    struct CVector3f* debug_fudge_target; // 0x9bc
    float debug_fudge_step; // 0x9c0
    int need_chapter_reload; // 0x9c4
    char chapter_reload_filename[256]; // 0x9c8
    int show_customizable_keys; // 0xac8
} CGame;

