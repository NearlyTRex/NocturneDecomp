// Name: core_game.cpp_CGame_displayBitmap_FUN_004e2890
// Address: 004e2890
// MANUAL RECONSTRUCTION
// Address Range: [[004e2890, 004e2908]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_displayBitmap_FUN_004e2890(CGame *this_ptr,char *filename,int width,int height)

#include "nocturne.h"
#include "core/debug_log.h"

void __cdecl core_game_cpp_CGame_displayBitmap_FUN_004e2890(CGame *this_ptr,char *filename,int width,int height)

{
  if (this_ptr->bitmap_filename[0] != '\0') {
    g_CurrentFilename = "..\\core\\game.cpp";
    g_CurrentLineNumber = 4038;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("CGame::displayBitmap - tried to queue %s, but %s already queued!",filename,this_ptr->bitmap_filename);
  }
  strcpy(this_ptr->bitmap_filename,filename);
  this_ptr->bitmap_width = width;
  this_ptr->bitmap_height = height;
  DLOG_EX("bitmap","queued '%s' %dx%d",filename,width,height);
  return;
}
