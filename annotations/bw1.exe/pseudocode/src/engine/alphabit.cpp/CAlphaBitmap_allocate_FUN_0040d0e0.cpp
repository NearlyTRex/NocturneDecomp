// Name: engine_alphabit.cpp_CAlphaBitmap_allocate_FUN_0040d0e0
// Address: 0040d0e0
// Address Range: [[0040d0e0, 0040d1b0]]
// Convention: __cdecl
// Signature: void __cdecl engine_alphabit_cpp_CAlphaBitmap_allocate_FUN_0040d0e0(CAlphaBitmap *this_ptr,int width,int height)

#include "nocturne.h"

void __cdecl engine_alphabit_cpp_CAlphaBitmap_allocate_FUN_0040d0e0(CAlphaBitmap *this_ptr,int width,int height)

{
  char *pcVar1;
  uint *puVar2;
  
  engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d1c0(this_ptr);
  this_ptr->width = width;
  this_ptr->height = height;
  pcVar1 = (char *)malloc(width * height);
  this_ptr->raw = pcVar1;
  if (pcVar1 == (char *)0x0) {
    g_CHAR_PTR_01d1d400 = "..\\engine\\alphabit.cpp";
    g_INT_01d1d404 = 0xb0;
    core_main_c_displayErrorAndQuit_FUN_005030e0("CAlphaBitmap::allocate - Out of memory");
  }
  pcVar1 = (char *)malloc(width * height);
  this_ptr->opa = pcVar1;
  if (pcVar1 == (char *)0x0) {
    g_CHAR_PTR_01d1d400 = "..\\engine\\alphabit.cpp";
    g_INT_01d1d404 = 0xb3;
    core_main_c_displayErrorAndQuit_FUN_005030e0("CAlphaBitmap::allocate - Out of memory");
  }
  puVar2 = (uint *)malloc(0x400);
  this_ptr->act = puVar2;
  if (puVar2 != (uint *)0x0) {
    return;
  }
  g_CHAR_PTR_01d1d400 = "..\\engine\\alphabit.cpp";
  g_INT_01d1d404 = 0xb6;
  core_main_c_displayErrorAndQuit_FUN_005030e0("CAlphaBitmap::allocate - Out of memory");
  return;
}
