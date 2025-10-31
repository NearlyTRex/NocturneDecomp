// Name: core_game.cpp_CGame_ctor_FUN_004d7b40
// Address: 004d7b40
// Address Range: [[004d7b40, 004d7d60]]
// Convention: __cdecl
// Signature: CGame * core_game.cpp_CGame_ctor_FUN_004d7b40(CGame * this_ptr)
// Cross-references:
//   core_game.cpp_staticInit_FUN_004d76d0 (004d76d0) at 004d76f9 [UNCONDITIONAL_CALL]
// Globals:
//   char g_CurrentSaveFile
// Function calls:
//   core_game.cpp_CGame_restoreDefaultControls_FUN_004dbbc0

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
  core_game_cpp_CGame_restoreDefaultControls_FUN_004dbbc0();
  this_ptr->field52_0xd0[0] = '\0';
  this_ptr->field53_0x1d0 = 0;
  this_ptr->field54_0x1d4 = 0;
  this_ptr->event_processing_enabled = 0;
  this_ptr->subtitle_system_enabled = 0;
  this_ptr->field57_0x1e0 = 0;
  this_ptr->time_scale_factor = 1.0;
  this_ptr->scripted_sequence_active = 0;
  this_ptr->field62_0x1f4 = 0;
  this_ptr->editor_tools_enabled = 0;
  this_ptr->wait_for_keypress = 0;
  this_ptr->field66_0x204 = 0;
  this_ptr->field67_0x208 = 0;
  this_ptr->profile_mode = 0;
  this_ptr->velocity_debug_enabled = 0;
  this_ptr->head_of_horror_cheat = 0;
  this_ptr->field71_0x218 = 0;
  this_ptr->field72_0x21c = 0;
  this_ptr->hero_number = 0;
  this_ptr->auto_use_health = 0;
  this_ptr->field102_0x9bc = 0;
  this_ptr->field103_0x9c0 = 0x3f800000;
  this_ptr->gamma = 0x10000;
  this_ptr->letterbox_mode = 0;
  this_ptr->cutscene_skippable = 0;
  this_ptr->allow_damage_flag = 1;
  this_ptr->allow_enemy_attack_flag = 1;
  this_ptr->is_loading = 0;
  this_ptr->allow_hero_controls_flag = 0;
  this_ptr->field101_0x38c[0x528] = '\0';
  this_ptr->field101_0x38c[0x628] = '\0';
  this_ptr->field101_0x38c[0x629] = '\0';
  this_ptr->field101_0x38c[0x62a] = '\0';
  this_ptr->field101_0x38c[0x62b] = '\0';
  this_ptr->field101_0x38c[0x62c] = '\0';
  this_ptr->field101_0x38c[0x62d] = '\0';
  this_ptr->field101_0x38c[0x62e] = '\0';
  this_ptr->field101_0x38c[0x62f] = '\0';
  this_ptr->is_processing = 0;
  this_ptr->need_chapter_reload = 0;
  this_ptr->show_customizable_keys = 0;
  this_ptr->block_auto_save = 0;
  this_ptr->auto_save_blocked = 0;
  this_ptr->field73_0x220 = 0;
  this_ptr->player_pos_y = 0.0;
  this_ptr->player_rotation = 0.0;
  this_ptr->player_pos_x = 0.0;
  this_ptr->game_state_flags = 0;
  this_ptr->field87_0x258 = 0;
  g_CurrentSaveFile = '\0';
  *(undefined1 *)&this_ptr->save_version = 0;
  return this_ptr;
}


// Assembly code:
// 004d7b40: PUSH EBX
//   Label: core_game.cpp_CGame_ctor_FUN_004d7b40
// 004d7b41: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004d7b45: MOV dword ptr [EBX],0x280
// 004d7b4b: MOV dword ptr [EBX + 0x4],0x1e0
// 004d7b52: MOV dword ptr [EBX + 0x8],0x20
// 004d7b59: MOV dword ptr [EBX + 0x224],0x10000
// 004d7b63: MOV dword ptr [EBX + 0xc],0x0
// 004d7b6a: MOV dword ptr [EBX + 0x10],0x1
// 004d7b71: MOV dword ptr [EBX + 0x14],0x1
// 004d7b78: MOV dword ptr [EBX + 0x18],0x1
// 004d7b7f: MOV dword ptr [EBX + 0x1c],0x1
// 004d7b86: MOV dword ptr [EBX + 0x24],0x1
// 004d7b8d: MOV dword ptr [EBX + 0x20],0x0
// 004d7b94: PUSH EBX
// 004d7b95: MOV dword ptr [EBX + 0xbc],0x0
// 004d7b9f: CALL core_game.cpp_CGame_restoreDefaultControls_FUN_004dbbc0
//   XREF to: 004dbbc0 (UNCONDITIONAL_CALL)
// 004d7ba4: MOV byte ptr [EBX + 0xd0],0x0
// 004d7bab: MOV dword ptr [EBX + 0x1d0],0x0
// 004d7bb5: MOV dword ptr [EBX + 0x1d4],0x0
// 004d7bbf: MOV dword ptr [EBX + 0x1d8],0x0
// 004d7bc9: MOV dword ptr [EBX + 0x1dc],0x0
// 004d7bd3: MOV dword ptr [EBX + 0x1e0],0x0
// 004d7bdd: MOV dword ptr [EBX + 0x1ec],0x3f800000
// 004d7be7: MOV dword ptr [EBX + 0x1f0],0x0
// 004d7bf1: MOV dword ptr [EBX + 0x1f4],0x0
// 004d7bfb: MOV dword ptr [EBX + 0x1f8],0x0
// 004d7c05: MOV dword ptr [EBX + 0x200],0x0
// 004d7c0f: MOV dword ptr [EBX + 0x204],0x0
// 004d7c19: MOV dword ptr [EBX + 0x208],0x0
// 004d7c23: MOV dword ptr [EBX + 0x20c],0x0
// 004d7c2d: MOV dword ptr [EBX + 0x210],0x0
// 004d7c37: MOV dword ptr [EBX + 0x214],0x0
// 004d7c41: MOV dword ptr [EBX + 0x218],0x0
// 004d7c4b: MOV dword ptr [EBX + 0x21c],0x0
// 004d7c55: MOV dword ptr [EBX + 0xc0],0x0
// 004d7c5f: MOV dword ptr [EBX + 0xc8],0x0
// 004d7c69: MOV dword ptr [EBX + 0x9bc],0x0
// 004d7c73: MOV dword ptr [EBX + 0x9c0],0x3f800000
// 004d7c7d: MOV dword ptr [EBX + 0x224],0x10000
// 004d7c87: MOV dword ptr [EBX + 0x228],0x0
// 004d7c91: MOV dword ptr [EBX + 0xcc],0x0
// 004d7c9b: MOV dword ptr [EBX + 0x22c],0x1
// 004d7ca5: MOV dword ptr [EBX + 0x230],0x1
// 004d7caf: MOV dword ptr [EBX + 0x234],0x0
// 004d7cb9: MOV dword ptr [EBX + 0x238],0x0
// 004d7cc3: MOV byte ptr [EBX + 0x8b4],0x0
// 004d7cca: MOV dword ptr [EBX + 0x9b4],0x0
// 004d7cd4: MOV dword ptr [EBX + 0x9b8],0x0
// 004d7cde: MOV dword ptr [EBX + 0x23c],0x0
// 004d7ce8: MOV dword ptr [EBX + 0x9c4],0x0
// 004d7cf2: MOV dword ptr [EBX + 0xac8],0x0
// 004d7cfc: MOV dword ptr [EBX + 0x240],0x0
// 004d7d06: MOV dword ptr [EBX + 0x244],0x0
// 004d7d10: MOV dword ptr [EBX + 0x220],0x0
// 004d7d1a: MOV dword ptr [EBX + 0x248],0x0
// 004d7d24: MOV dword ptr [EBX + 0x250],0x0
// 004d7d2e: MOV dword ptr [EBX + 0x24c],0x0
// 004d7d38: ADD ESP,0x4
// 004d7d3b: MOV dword ptr [EBX + 0x254],0x0
// 004d7d45: XOR AH,AH
// 004d7d47: MOV dword ptr [EBX + 0x258],0x0
// 004d7d51: MOV byte ptr [0x02d82c80],AH
//   XREF to: 02d82c80 (WRITE)
// 004d7d57: MOV byte ptr [EBX + 0x9c8],AH
// 004d7d5d: MOV EAX,EBX
// 004d7d5f: POP EBX
// 004d7d60: RET
