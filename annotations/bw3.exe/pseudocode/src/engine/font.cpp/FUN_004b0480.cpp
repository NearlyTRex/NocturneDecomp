// Name: engine_font.cpp_FUN_004b0480
// Address: 004b0480
// Address Range: [[004b0480, 004b04f7]]
// Convention: unknown
// Signature: void engine_font_cpp_FUN_004b0480(CBitFont *param_1)

#include "nocturne.h"

void engine_font_cpp_FUN_004b0480(CBitFont *param_1)

{
  CBitFont *pCVar1;
  char (*pacVar2) [80];
  
  pCVar1 = param_1;
  do {
    pacVar2 = pCVar1->bitmap_files;
    FUN_005a30b6(pCVar1->bitmap_data[0]);
    pCVar1->bitmap_data[0] = (void *)0x0;
    pCVar1 = (CBitFont *)pacVar2;
  } while (pacVar2 != (char (*) [80])(param_1->bitmap_files[0] + 0xc));
  if (param_1->accel_vertex_alloc != (void *)0x0) {
    FUN_005a3770(param_1->accel_vertex_alloc);
    param_1->accel_vertex_alloc = (void *)0x0;
  }
  if (param_1->accel_indices == (void *)0x0) {
    engine_font_cpp_CBitFont_reset_FUN_004af7d0(param_1);
    return;
  }
  FUN_005a3770(param_1->accel_indices);
  engine_font_cpp_CBitFont_reset_FUN_004af7d0(param_1);
  return;
}
