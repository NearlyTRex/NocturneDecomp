// Name: core_game.cpp_CGame_showCustomizableKeys_FUN_0049b4e0
// Address: 0049b4e0
// Address Range: [[0049b4e0, 0049cc09]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_showCustomizableKeys_FUN_0049b4e0(CGame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_CGame_showCustomizableKeys_FUN_0049b4e0(CGame *this_ptr)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  char local_1c10 [256];
  char local_1b10 [256];
  char local_1a10 [256];
  char local_1910 [256];
  char local_1810 [256];
  char local_1710 [256];
  char local_1610 [256];
  char local_1510 [256];
  char local_1410 [256];
  char local_1310 [256];
  char local_1210 [256];
  char local_1110 [256];
  char local_1010 [256];
  char local_f10 [256];
  char local_e10 [256];
  char local_d10 [256];
  char local_c10 [256];
  char local_b10 [256];
  char local_a10 [256];
  char local_910 [256];
  char local_810 [256];
  char local_710 [256];
  char local_610 [256];
  char local_510 [256];
  char local_410 [256];
  char local_310 [256];
  char local_210 [256];
  char local_110 [256];
  
  engine_3d_c_setRenderAlpha_FUN_00408370(0xffff);
  _DAT_01c78ae4 = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(g_CBitFont_PTR_014b9900,0x58);
  _DAT_01c78ae8 = engine_font_cpp_CBitFont_getCharWidth_FUN_004930b0(g_CBitFont_PTR_014b9900,0x58);
  _DAT_01c78ae0 = _DAT_01c78ae4 << 2;
  _DAT_01c78adc = _DAT_01c78ae8 << 2;
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Quick help");
  engine_font_cpp_CBitFont_drawText_FUN_00490980
            (g_CBitFont_PTR_014b9900,pcVar1,_DAT_01c78adc,_DAT_01c78ae0,7,-1);
  _DAT_01c78ae0 = _DAT_01c78ae0 + _DAT_01c78ae4;
  if (g_WindowHeight + _DAT_01c78ae4 * -4 < _DAT_01c78ae0) {
    _DAT_01c78ae0 = _DAT_01c78ae4 * 6;
    _DAT_01c78adc = _DAT_01c78adc + g_WindowWidth / 3;
  }
  _DAT_01c78ae0 = _DAT_01c78ae0 + _DAT_01c78ae4;
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("F1 = Toggle help");
  engine_font_cpp_CBitFont_drawText_FUN_00490980
            (g_CBitFont_PTR_014b9900,pcVar1,_DAT_01c78adc,_DAT_01c78ae0,7,-1);
  _DAT_01c78ae0 = _DAT_01c78ae0 + _DAT_01c78ae4;
  if (g_WindowHeight + _DAT_01c78ae4 * -4 < _DAT_01c78ae0) {
    _DAT_01c78ae0 = _DAT_01c78ae4 * 6;
    _DAT_01c78adc = _DAT_01c78adc + g_WindowWidth / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("F2 = Save game");
  engine_font_cpp_CBitFont_drawText_FUN_00490980
            (g_CBitFont_PTR_014b9900,pcVar1,_DAT_01c78adc,_DAT_01c78ae0,7,-1);
  _DAT_01c78ae0 = _DAT_01c78ae0 + _DAT_01c78ae4;
  if (g_WindowHeight + _DAT_01c78ae4 * -4 < _DAT_01c78ae0) {
    _DAT_01c78ae0 = _DAT_01c78ae4 * 6;
    _DAT_01c78adc = _DAT_01c78adc + g_WindowWidth / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("F3 = Restore game");
  engine_font_cpp_CBitFont_drawText_FUN_00490980
            (g_CBitFont_PTR_014b9900,pcVar1,_DAT_01c78adc,_DAT_01c78ae0,7,-1);
  _DAT_01c78ae0 = _DAT_01c78ae0 + _DAT_01c78ae4;
  if (g_WindowHeight + _DAT_01c78ae4 * -4 < _DAT_01c78ae0) {
    _DAT_01c78ae0 = _DAT_01c78ae4 * 6;
    _DAT_01c78adc = _DAT_01c78adc + g_WindowWidth / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("F5 = Toggle mute");
  engine_font_cpp_CBitFont_drawText_FUN_00490980
            (g_CBitFont_PTR_014b9900,pcVar1,_DAT_01c78adc,_DAT_01c78ae0,7,-1);
  _DAT_01c78ae0 = _DAT_01c78ae0 + _DAT_01c78ae4;
  if (g_WindowHeight + _DAT_01c78ae4 * -4 < _DAT_01c78ae0) {
    _DAT_01c78ae0 = _DAT_01c78ae4 * 6;
    _DAT_01c78adc = _DAT_01c78adc + g_WindowWidth / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("F6 = Quick save");
  engine_font_cpp_CBitFont_drawText_FUN_00490980
            (g_CBitFont_PTR_014b9900,pcVar1,_DAT_01c78adc,_DAT_01c78ae0,7,-1);
  _DAT_01c78ae0 = _DAT_01c78ae0 + _DAT_01c78ae4;
  if (g_WindowHeight + _DAT_01c78ae4 * -4 < _DAT_01c78ae0) {
    _DAT_01c78ae0 = _DAT_01c78ae4 * 6;
    _DAT_01c78adc = _DAT_01c78adc + g_WindowWidth / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("F9 = Quick load");
  engine_font_cpp_CBitFont_drawText_FUN_00490980
            (g_CBitFont_PTR_014b9900,pcVar1,_DAT_01c78adc,_DAT_01c78ae0,7,-1);
  _DAT_01c78ae0 = _DAT_01c78ae0 + _DAT_01c78ae4;
  if (g_WindowHeight + _DAT_01c78ae4 * -4 < _DAT_01c78ae0) {
    _DAT_01c78ae0 = _DAT_01c78ae4 * 6;
    _DAT_01c78adc = _DAT_01c78adc + g_WindowWidth / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("ESC = Pause game");
  engine_font_cpp_CBitFont_drawText_FUN_00490980
            (g_CBitFont_PTR_014b9900,pcVar1,_DAT_01c78adc,_DAT_01c78ae0,7,-1);
  _DAT_01c78ae0 = _DAT_01c78ae0 + _DAT_01c78ae4;
  if (g_WindowHeight + _DAT_01c78ae4 * -4 < _DAT_01c78ae0) {
    _DAT_01c78ae0 = _DAT_01c78ae4 * 6;
    _DAT_01c78adc = _DAT_01c78adc + g_WindowWidth / 3;
  }
  _DAT_01c78ae0 = _DAT_01c78ae0 + _DAT_01c78ae4;
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Forward");
  pcVar2 = core_menu_cpp_getKeyDisplayName_FUN_004d2900(this_ptr->key_walk);
  _sprintf(local_1810,"%s = %s",pcVar2,pcVar1);
  engine_font_cpp_CBitFont_drawText_FUN_00490980
            (g_CBitFont_PTR_014b9900,local_1810,_DAT_01c78adc,_DAT_01c78ae0,7,-1);
  _DAT_01c78ae0 = _DAT_01c78ae0 + _DAT_01c78ae4;
  if (g_WindowHeight + _DAT_01c78ae4 * -4 < _DAT_01c78ae0) {
    _DAT_01c78ae0 = _DAT_01c78ae4 * 6;
    _DAT_01c78adc = _DAT_01c78adc + g_WindowWidth / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Back");
  pcVar2 = core_menu_cpp_getKeyDisplayName_FUN_004d2900(this_ptr->key_backup);
  _sprintf(local_1110,"%s = %s",pcVar2,pcVar1);
  engine_font_cpp_CBitFont_drawText_FUN_00490980
            (g_CBitFont_PTR_014b9900,local_1110,_DAT_01c78adc,_DAT_01c78ae0,7,-1);
  _DAT_01c78ae0 = _DAT_01c78ae0 + _DAT_01c78ae4;
  if (g_WindowHeight + _DAT_01c78ae4 * -4 < _DAT_01c78ae0) {
    _DAT_01c78ae0 = _DAT_01c78ae4 * 6;
    _DAT_01c78adc = _DAT_01c78adc + g_WindowWidth / 3;
  }
  if (g_CGame_PTR_005b9354->always_run == 0) {
    pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Run");
    pcVar2 = core_menu_cpp_getKeyDisplayName_FUN_004d2900(this_ptr->key_run);
    _sprintf(local_610,"%s = %s",pcVar2,pcVar1);
    engine_font_cpp_CBitFont_drawText_FUN_00490980
              (g_CBitFont_PTR_014b9900,local_610,_DAT_01c78adc,_DAT_01c78ae0,7,-1);
    _DAT_01c78ae0 = _DAT_01c78ae0 + _DAT_01c78ae4;
    iVar3 = g_WindowHeight + _DAT_01c78ae4 * -4;
  }
  else {
    pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Walk");
    pcVar2 = core_menu_cpp_getKeyDisplayName_FUN_004d2900(this_ptr->key_run);
    _sprintf(local_910,"%s = %s",pcVar2,pcVar1);
    engine_font_cpp_CBitFont_drawText_FUN_00490980
              (g_CBitFont_PTR_014b9900,local_910,_DAT_01c78adc,_DAT_01c78ae0,7,-1);
    _DAT_01c78ae0 = _DAT_01c78ae0 + _DAT_01c78ae4;
    iVar3 = g_WindowHeight + _DAT_01c78ae4 * -4;
  }
  if (iVar3 < _DAT_01c78ae0) {
    _DAT_01c78ae0 = _DAT_01c78ae4 * 6;
    _DAT_01c78adc = _DAT_01c78adc + g_WindowWidth / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Strafe on");
  pcVar2 = core_menu_cpp_getKeyDisplayName_FUN_004d2900(this_ptr->key_strafe);
  _sprintf(local_1a10,"%s = %s",pcVar2,pcVar1);
  engine_font_cpp_CBitFont_drawText_FUN_00490980
            (g_CBitFont_PTR_014b9900,local_1a10,_DAT_01c78adc,_DAT_01c78ae0,7,-1);
  _DAT_01c78ae0 = _DAT_01c78ae0 + _DAT_01c78ae4;
  if (g_WindowHeight + _DAT_01c78ae4 * -4 < _DAT_01c78ae0) {
    _DAT_01c78ae0 = _DAT_01c78ae4 * 6;
    _DAT_01c78adc = _DAT_01c78adc + g_WindowWidth / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Strafe left");
  pcVar2 = core_menu_cpp_getKeyDisplayName_FUN_004d2900(this_ptr->key_strafe_left);
  _sprintf(local_1310,"%s = %s",pcVar2,pcVar1);
  engine_font_cpp_CBitFont_drawText_FUN_00490980
            (g_CBitFont_PTR_014b9900,local_1310,_DAT_01c78adc,_DAT_01c78ae0,7,-1);
  _DAT_01c78ae0 = _DAT_01c78ae0 + _DAT_01c78ae4;
  if (g_WindowHeight + _DAT_01c78ae4 * -4 < _DAT_01c78ae0) {
    _DAT_01c78ae0 = _DAT_01c78ae4 * 6;
    _DAT_01c78adc = _DAT_01c78adc + g_WindowWidth / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Strafe right");
  pcVar2 = core_menu_cpp_getKeyDisplayName_FUN_004d2900(this_ptr->key_strafe_right);
  _sprintf(local_c10,"%s = %s",pcVar2,pcVar1);
  engine_font_cpp_CBitFont_drawText_FUN_00490980
            (g_CBitFont_PTR_014b9900,local_c10,_DAT_01c78adc,_DAT_01c78ae0,7,-1);
  _DAT_01c78ae0 = _DAT_01c78ae0 + _DAT_01c78ae4;
  if (g_WindowHeight + _DAT_01c78ae4 * -4 < _DAT_01c78ae0) {
    _DAT_01c78ae0 = _DAT_01c78ae4 * 6;
    _DAT_01c78adc = _DAT_01c78adc + g_WindowWidth / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Turn left");
  pcVar2 = core_menu_cpp_getKeyDisplayName_FUN_004d2900(this_ptr->key_left);
  _sprintf(local_510,"%s = %s",pcVar2,pcVar1);
  engine_font_cpp_CBitFont_drawText_FUN_00490980
            (g_CBitFont_PTR_014b9900,local_510,_DAT_01c78adc,_DAT_01c78ae0,7,-1);
  _DAT_01c78ae0 = _DAT_01c78ae0 + _DAT_01c78ae4;
  if (g_WindowHeight + _DAT_01c78ae4 * -4 < _DAT_01c78ae0) {
    _DAT_01c78ae0 = _DAT_01c78ae4 * 6;
    _DAT_01c78adc = _DAT_01c78adc + g_WindowWidth / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Turn right");
  pcVar2 = core_menu_cpp_getKeyDisplayName_FUN_004d2900(this_ptr->key_right);
  _sprintf(local_710,"%s = %s",pcVar2,pcVar1);
  engine_font_cpp_CBitFont_drawText_FUN_00490980
            (g_CBitFont_PTR_014b9900,local_710,_DAT_01c78adc,_DAT_01c78ae0,7,-1);
  _DAT_01c78ae0 = _DAT_01c78ae0 + _DAT_01c78ae4;
  if (g_WindowHeight + _DAT_01c78ae4 * -4 < _DAT_01c78ae0) {
    _DAT_01c78ae0 = _DAT_01c78ae4 * 6;
    _DAT_01c78adc = _DAT_01c78adc + g_WindowWidth / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Fire / Action");
  pcVar2 = core_menu_cpp_getKeyDisplayName_FUN_004d2900(this_ptr->key_fire);
  _sprintf(local_810,"%s = %s",pcVar2,pcVar1);
  engine_font_cpp_CBitFont_drawText_FUN_00490980
            (g_CBitFont_PTR_014b9900,local_810,_DAT_01c78adc,_DAT_01c78ae0,7,-1);
  _DAT_01c78ae0 = _DAT_01c78ae0 + _DAT_01c78ae4;
  if (g_WindowHeight + _DAT_01c78ae4 * -4 < _DAT_01c78ae0) {
    _DAT_01c78ae0 = _DAT_01c78ae4 * 6;
    _DAT_01c78adc = _DAT_01c78adc + g_WindowWidth / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Use item");
  pcVar2 = core_menu_cpp_getKeyDisplayName_FUN_004d2900(this_ptr->key_use_item);
  _sprintf(local_210,"%s = %s",pcVar2,pcVar1);
  engine_font_cpp_CBitFont_drawText_FUN_00490980
            (g_CBitFont_PTR_014b9900,local_210,_DAT_01c78adc,_DAT_01c78ae0,7,-1);
  _DAT_01c78ae0 = _DAT_01c78ae0 + _DAT_01c78ae4;
  if (g_WindowHeight + _DAT_01c78ae4 * -4 < _DAT_01c78ae0) {
    _DAT_01c78ae0 = _DAT_01c78ae4 * 6;
    _DAT_01c78adc = _DAT_01c78adc + g_WindowWidth / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Light");
  pcVar2 = core_menu_cpp_getKeyDisplayName_FUN_004d2900(this_ptr->key_light);
  _sprintf(local_a10,"%s = %s",pcVar2,pcVar1);
  engine_font_cpp_CBitFont_drawText_FUN_00490980
            (g_CBitFont_PTR_014b9900,local_a10,_DAT_01c78adc,_DAT_01c78ae0,7,-1);
  _DAT_01c78ae0 = _DAT_01c78ae0 + _DAT_01c78ae4;
  if (g_WindowHeight + _DAT_01c78ae4 * -4 < _DAT_01c78ae0) {
    _DAT_01c78ae0 = _DAT_01c78ae4 * 6;
    _DAT_01c78adc = _DAT_01c78adc + g_WindowWidth / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Night Vision");
  pcVar2 = core_menu_cpp_getKeyDisplayName_FUN_004d2900(this_ptr->key_infrared);
  _sprintf(local_310,"%s = %s",pcVar2,pcVar1);
  engine_font_cpp_CBitFont_drawText_FUN_00490980
            (g_CBitFont_PTR_014b9900,local_310,_DAT_01c78adc,_DAT_01c78ae0,7,-1);
  _DAT_01c78ae0 = _DAT_01c78ae0 + _DAT_01c78ae4;
  if (g_WindowHeight + _DAT_01c78ae4 * -4 < _DAT_01c78ae0) {
    _DAT_01c78ae0 = _DAT_01c78ae4 * 6;
    _DAT_01c78adc = _DAT_01c78adc + g_WindowWidth / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Draw");
  pcVar2 = core_menu_cpp_getKeyDisplayName_FUN_004d2900(this_ptr->key_draw);
  _sprintf(local_1b10,"%s = %s",pcVar2,pcVar1);
  engine_font_cpp_CBitFont_drawText_FUN_00490980
            (g_CBitFont_PTR_014b9900,local_1b10,_DAT_01c78adc,_DAT_01c78ae0,7,-1);
  _DAT_01c78ae0 = _DAT_01c78ae0 + _DAT_01c78ae4;
  if (g_WindowHeight + _DAT_01c78ae4 * -4 < _DAT_01c78ae0) {
    _DAT_01c78ae0 = _DAT_01c78ae4 * 6;
    _DAT_01c78adc = _DAT_01c78adc + g_WindowWidth / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Point up");
  pcVar2 = core_menu_cpp_getKeyDisplayName_FUN_004d2900(this_ptr->key_point_up);
  _sprintf(local_1410,"%s = %s",pcVar2,pcVar1);
  engine_font_cpp_CBitFont_drawText_FUN_00490980
            (g_CBitFont_PTR_014b9900,local_1410,_DAT_01c78adc,_DAT_01c78ae0,7,-1);
  _DAT_01c78ae0 = _DAT_01c78ae0 + _DAT_01c78ae4;
  if (g_WindowHeight + _DAT_01c78ae4 * -4 < _DAT_01c78ae0) {
    _DAT_01c78ae0 = _DAT_01c78ae4 * 6;
    _DAT_01c78adc = _DAT_01c78adc + g_WindowWidth / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Point down");
  pcVar2 = core_menu_cpp_getKeyDisplayName_FUN_004d2900(this_ptr->key_point_down);
  _sprintf(local_d10,"%s = %s",pcVar2,pcVar1);
  engine_font_cpp_CBitFont_drawText_FUN_00490980
            (g_CBitFont_PTR_014b9900,local_d10,_DAT_01c78adc,_DAT_01c78ae0,7,-1);
  _DAT_01c78ae0 = _DAT_01c78ae0 + _DAT_01c78ae4;
  if (g_WindowHeight + _DAT_01c78ae4 * -4 < _DAT_01c78ae0) {
    _DAT_01c78ae0 = _DAT_01c78ae4 * 6;
    _DAT_01c78adc = _DAT_01c78adc + g_WindowWidth / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Jump");
  pcVar2 = core_menu_cpp_getKeyDisplayName_FUN_004d2900(this_ptr->key_jump);
  _sprintf(local_1610,"%s = %s",pcVar2,pcVar1);
  engine_font_cpp_CBitFont_drawText_FUN_00490980
            (g_CBitFont_PTR_014b9900,local_1610,_DAT_01c78adc,_DAT_01c78ae0,7,-1);
  _DAT_01c78ae0 = _DAT_01c78ae0 + _DAT_01c78ae4;
  if (g_WindowHeight + _DAT_01c78ae4 * -4 < _DAT_01c78ae0) {
    _DAT_01c78ae0 = _DAT_01c78ae4 * 6;
    _DAT_01c78adc = _DAT_01c78adc + g_WindowWidth / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Cycle pistol weapons");
  pcVar2 = core_menu_cpp_getKeyDisplayName_FUN_004d2900(this_ptr->key_weapon_1);
  _sprintf(local_f10,"%s = %s",pcVar2,pcVar1);
  engine_font_cpp_CBitFont_drawText_FUN_00490980
            (g_CBitFont_PTR_014b9900,local_f10,_DAT_01c78adc,_DAT_01c78ae0,7,-1);
  _DAT_01c78ae0 = _DAT_01c78ae0 + _DAT_01c78ae4;
  if (g_WindowHeight + _DAT_01c78ae4 * -4 < _DAT_01c78ae0) {
    _DAT_01c78ae0 = _DAT_01c78ae4 * 6;
    _DAT_01c78adc = _DAT_01c78adc + g_WindowWidth / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Cycle assault weapons");
  pcVar2 = core_menu_cpp_getKeyDisplayName_FUN_004d2900(this_ptr->key_weapon_2);
  _sprintf(local_1910,"%s = %s",pcVar2,pcVar1);
  engine_font_cpp_CBitFont_drawText_FUN_00490980
            (g_CBitFont_PTR_014b9900,local_1910,_DAT_01c78adc,_DAT_01c78ae0,7,-1);
  _DAT_01c78ae0 = _DAT_01c78ae0 + _DAT_01c78ae4;
  if (g_WindowHeight + _DAT_01c78ae4 * -4 < _DAT_01c78ae0) {
    _DAT_01c78ae0 = _DAT_01c78ae4 * 6;
    _DAT_01c78adc = _DAT_01c78adc + g_WindowWidth / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Cycle flame weapons");
  pcVar2 = core_menu_cpp_getKeyDisplayName_FUN_004d2900(this_ptr->key_weapon_3);
  _sprintf(local_1210,"%s = %s",pcVar2,pcVar1);
  engine_font_cpp_CBitFont_drawText_FUN_00490980
            (g_CBitFont_PTR_014b9900,local_1210,_DAT_01c78adc,_DAT_01c78ae0,7,-1);
  _DAT_01c78ae0 = _DAT_01c78ae0 + _DAT_01c78ae4;
  if (g_WindowHeight + _DAT_01c78ae4 * -4 < _DAT_01c78ae0) {
    _DAT_01c78ae0 = _DAT_01c78ae4 * 6;
    _DAT_01c78adc = _DAT_01c78adc + g_WindowWidth / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Cycle grenade weapons");
  pcVar2 = core_menu_cpp_getKeyDisplayName_FUN_004d2900(this_ptr->key_weapon_4);
  _sprintf(local_b10,"%s = %s",pcVar2,pcVar1);
  engine_font_cpp_CBitFont_drawText_FUN_00490980
            (g_CBitFont_PTR_014b9900,local_b10,_DAT_01c78adc,_DAT_01c78ae0,7,-1);
  _DAT_01c78ae0 = _DAT_01c78ae0 + _DAT_01c78ae4;
  if (g_WindowHeight + _DAT_01c78ae4 * -4 < _DAT_01c78ae0) {
    _DAT_01c78ae0 = _DAT_01c78ae4 * 6;
    _DAT_01c78adc = _DAT_01c78adc + g_WindowWidth / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Cycle melee weapons");
  pcVar2 = core_menu_cpp_getKeyDisplayName_FUN_004d2900(this_ptr->key_weapon_5);
  _sprintf(local_410,"%s = %s",pcVar2,pcVar1);
  engine_font_cpp_CBitFont_drawText_FUN_00490980
            (g_CBitFont_PTR_014b9900,local_410,_DAT_01c78adc,_DAT_01c78ae0,7,-1);
  _DAT_01c78ae0 = _DAT_01c78ae0 + _DAT_01c78ae4;
  if (g_WindowHeight + _DAT_01c78ae4 * -4 < _DAT_01c78ae0) {
    _DAT_01c78ae0 = _DAT_01c78ae4 * 6;
    _DAT_01c78adc = _DAT_01c78adc + g_WindowWidth / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Next weapon");
  pcVar2 = core_menu_cpp_getKeyDisplayName_FUN_004d2900(this_ptr->key_next_weapon);
  _sprintf(local_1c10,"%s = %s",pcVar2,pcVar1);
  engine_font_cpp_CBitFont_drawText_FUN_00490980
            (g_CBitFont_PTR_014b9900,local_1c10,_DAT_01c78adc,_DAT_01c78ae0,7,-1);
  _DAT_01c78ae0 = _DAT_01c78ae0 + _DAT_01c78ae4;
  if (g_WindowHeight + _DAT_01c78ae4 * -4 < _DAT_01c78ae0) {
    _DAT_01c78ae0 = _DAT_01c78ae4 * 6;
    _DAT_01c78adc = _DAT_01c78adc + g_WindowWidth / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Previous weapon");
  pcVar2 = core_menu_cpp_getKeyDisplayName_FUN_004d2900(this_ptr->key_prev_weapon);
  _sprintf(local_1510,"%s = %s",pcVar2,pcVar1);
  engine_font_cpp_CBitFont_drawText_FUN_00490980
            (g_CBitFont_PTR_014b9900,local_1510,_DAT_01c78adc,_DAT_01c78ae0,7,-1);
  _DAT_01c78ae0 = _DAT_01c78ae0 + _DAT_01c78ae4;
  if (g_WindowHeight + _DAT_01c78ae4 * -4 < _DAT_01c78ae0) {
    _DAT_01c78ae0 = _DAT_01c78ae4 * 6;
    _DAT_01c78adc = _DAT_01c78adc + g_WindowWidth / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Next item");
  pcVar2 = core_menu_cpp_getKeyDisplayName_FUN_004d2900(this_ptr->key_next_item);
  _sprintf(local_e10,"%s = %s",pcVar2,pcVar1);
  engine_font_cpp_CBitFont_drawText_FUN_00490980
            (g_CBitFont_PTR_014b9900,local_e10,_DAT_01c78adc,_DAT_01c78ae0,7,-1);
  _DAT_01c78ae0 = _DAT_01c78ae0 + _DAT_01c78ae4;
  if (g_WindowHeight + _DAT_01c78ae4 * -4 < _DAT_01c78ae0) {
    _DAT_01c78ae0 = _DAT_01c78ae4 * 6;
    _DAT_01c78adc = _DAT_01c78adc + g_WindowWidth / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Previous item");
  pcVar2 = core_menu_cpp_getKeyDisplayName_FUN_004d2900(this_ptr->key_prev_item);
  _sprintf(local_1710,"%s = %s",pcVar2,pcVar1);
  engine_font_cpp_CBitFont_drawText_FUN_00490980
            (g_CBitFont_PTR_014b9900,local_1710,_DAT_01c78adc,_DAT_01c78ae0,7,-1);
  _DAT_01c78ae0 = _DAT_01c78ae0 + _DAT_01c78ae4;
  if (g_WindowHeight + _DAT_01c78ae4 * -4 < _DAT_01c78ae0) {
    _DAT_01c78ae0 = _DAT_01c78ae4 * 6;
    _DAT_01c78adc = _DAT_01c78adc + g_WindowWidth / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Item description");
  pcVar2 = core_menu_cpp_getKeyDisplayName_FUN_004d2900(this_ptr->key_item_desc);
  _sprintf(local_1010,"%s = %s",pcVar2,pcVar1);
  engine_font_cpp_CBitFont_drawText_FUN_00490980
            (g_CBitFont_PTR_014b9900,local_1010,_DAT_01c78adc,_DAT_01c78ae0,7,-1);
  _DAT_01c78ae0 = _DAT_01c78ae0 + _DAT_01c78ae4;
  if (g_WindowHeight + _DAT_01c78ae4 * -4 < _DAT_01c78ae0) {
    _DAT_01c78ae0 = _DAT_01c78ae4 * 6;
    _DAT_01c78adc = _DAT_01c78adc + g_WindowWidth / 3;
  }
  pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Next ammo");
  pcVar2 = core_menu_cpp_getKeyDisplayName_FUN_004d2900(this_ptr->key_next_ammo);
  _sprintf(local_110,"%s = %s",pcVar2,pcVar1);
  engine_font_cpp_CBitFont_drawText_FUN_00490980
            (g_CBitFont_PTR_014b9900,local_110,_DAT_01c78adc,_DAT_01c78ae0,7,-1);
  _DAT_01c78ae0 = _DAT_01c78ae0 + _DAT_01c78ae4;
  if (_DAT_01c78ae0 <= g_WindowHeight + _DAT_01c78ae4 * -4) {
    return;
  }
  _DAT_01c78ae0 = _DAT_01c78ae4 * 6;
  _DAT_01c78adc = _DAT_01c78adc + g_WindowWidth / 3;
  return;
}
