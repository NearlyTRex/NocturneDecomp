// Name: engine_alphabit.cpp_CAlphaBitmap_allocate_FUN_0040d460
// Address: 0040d460
// Address Range: [[0040d460, 0040d530]]
// Convention: __cdecl
// Signature: void __cdecl engine_alphabit_cpp_CAlphaBitmap_allocate_FUN_0040d460(CAlphaBitmap *this_ptr,int width,int height)

#include "nocturne.h"

void __cdecl engine_alphabit_cpp_CAlphaBitmap_allocate_FUN_0040d460(CAlphaBitmap *this_ptr,int width,int height)

{
  char *pcVar1;
  uint *puVar2;
  
  engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d540(this_ptr);
  this_ptr->width = width;
  this_ptr->height = height;
  pcVar1 = (char *)malloc(width * height);
  this_ptr->raw = pcVar1;
  if (pcVar1 == (char *)0x0) {
    g_CurrentFilename = "..\\engine\\alphabit.cpp";
    g_CurrentLineNumber = 176;
    core_main_c_displayErrorAndQuit_FUN_004e4500("CAlphaBitmap::allocate - Out of memory");
  }
  pcVar1 = (char *)malloc(width * height);
  this_ptr->opa = pcVar1;
  if (pcVar1 == (char *)0x0) {
    g_CurrentFilename = "..\\engine\\alphabit.cpp";
    g_CurrentLineNumber = 179;
    core_main_c_displayErrorAndQuit_FUN_004e4500("CAlphaBitmap::allocate - Out of memory");
  }
  puVar2 = (uint *)malloc(0x400);
  this_ptr->act = puVar2;
  if (puVar2 != (uint *)0x0) {
    return;
  }
  g_CurrentFilename = "..\\engine\\alphabit.cpp";
  g_CurrentLineNumber = 182;
  core_main_c_displayErrorAndQuit_FUN_004e4500("CAlphaBitmap::allocate - Out of memory");
  return;
}
