// Name: core_game.cpp_CGame_displayBitmap_FUN_004e2890
// Address: 004e2890
// Address Range: [[004e2890, 004e2908]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_displayBitmap_FUN_004e2890(CGame *this_ptr,char *filename,int width,int height)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_displayBitmap_FUN_004e2890(CGame *this_ptr,char *filename,int width,int height)

{
  char cVar1;
  char *pcVar2;
  
  if (this_ptr->bitmap_filename[0] != '\0') {
    g_CurrentFilename = "..\\core\\game.cpp";
    g_CurrentLineNumber = 0xfc6;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("CGame::displayBitmap - tried to queue %s, but %s already queued!",filename,this_ptr->bitmap_filename);
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
  return;
}
