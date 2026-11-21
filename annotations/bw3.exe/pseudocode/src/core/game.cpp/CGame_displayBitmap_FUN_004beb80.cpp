// Name: core_game.cpp_CGame_displayBitmap_FUN_004beb80
// Address: 004beb80
// Address Range: [[004beb80, 004bec1a]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_displayBitmap_FUN_004beb80(CGame *this_ptr,char *filename,int width,int height,float display_time)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_displayBitmap_FUN_004beb80(CGame *this_ptr,char *filename,int width,int height,float display_time)

{
  char cVar1;
  char *pcVar2;
  
  if (this_ptr->bitmap_filename[0] != '\0') {
    g_CurrentFilename = "..\\core\\game.cpp";
    g_CurrentLineNumber = 4651;
    core_main_c_displayErrorAndQuit_FUN_004e4330("CGame::displayBitmap - tried to queue %s, but %s already queued!");
  }
  pcVar2 = this_ptr->bitmap_filename;
  do {
    cVar1 = *filename;
    *pcVar2 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = filename[1];
    filename = filename + 2;
    pcVar2[1] = cVar1;
    pcVar2 = pcVar2 + 2;
  } while (cVar1 != '\0');
  this_ptr->bitmap_width = width;
  this_ptr->bitmap_height = height;
  this_ptr->bitmap_display_time = display_time;
  g_INT_01d22b44 = (uint)(ABS(display_time) == 0.0);
  return;
}
