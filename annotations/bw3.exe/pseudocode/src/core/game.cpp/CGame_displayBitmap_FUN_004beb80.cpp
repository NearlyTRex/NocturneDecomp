// Name: core_game.cpp_CGame_displayBitmap_FUN_004beb80
// Address: 004beb80
// Address Range: [[004beb80, 004bec1a]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_displayBitmap_FUN_004beb80(CGame *this_ptr,char *param_2,int param_3,int param_4,uint param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_CGame_displayBitmap_FUN_004beb80(CGame *this_ptr,char *param_2,int param_3,int param_4,uint param_5)

{
  char cVar1;
  char *pcVar2;
  
  if (this_ptr->bitmap_filename[0] != '\0') {
    _DAT_01d71de0 = "..\\core\\game.cpp";
    _DAT_01d71de4 = 0x122b;
    core_main_c_FUN_004e4330("CGame::displayBitmap - tried to queue %s, but %s already queued!",param_2,this_ptr->bitmap_filename);
  }
  pcVar2 = this_ptr->bitmap_filename;
  do {
    cVar1 = *param_2;
    *pcVar2 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = param_2[1];
    param_2 = param_2 + 2;
    pcVar2[1] = cVar1;
    pcVar2 = pcVar2 + 2;
  } while (cVar1 != '\0');
  this_ptr->bitmap_width = param_3;
  this_ptr->bitmap_height = param_4;
  this_ptr->bitmap_display_time = (float)param_5;
  _DAT_01d22b44 = (uint)((param_5 & 0x7fffffff) == 0);
  return;
}
