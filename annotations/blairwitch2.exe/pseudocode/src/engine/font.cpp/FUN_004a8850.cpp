// Name: engine_font.cpp_FUN_004a8850
// Address: 004a8850
// Address Range: [[004a8850, 004a88c7]]
// Convention: unknown
// Signature: void engine_font_cpp_FUN_004a8850(CBitFont *param_1)

#include "nocturne.h"

void engine_font_cpp_FUN_004a8850(CBitFont *param_1)

{
  CBitFont *pCVar1;
  char (*pacVar2) [80];
  
  pCVar1 = param_1;
  do {
    pacVar2 = pCVar1->bitmap_files;
    FUN_005b7fce(pCVar1->bitmap_data[0]);
    pCVar1->bitmap_data[0] = (void *)0x0;
    pCVar1 = (CBitFont *)pacVar2;
  } while (pacVar2 != (char (*) [80])(param_1->bitmap_files[0] + 0xc));
  if (param_1->accel_vertex_alloc != (void *)0x0) {
    FUN_005b86a0(param_1->accel_vertex_alloc);
    param_1->accel_vertex_alloc = (void *)0x0;
  }
  if (param_1->accel_indices == (void *)0x0) {
    engine_font_cpp_CBitFont_reset_FUN_004a7bb0(param_1);
    return;
  }
  FUN_005b86a0(param_1->accel_indices);
  engine_font_cpp_CBitFont_reset_FUN_004a7bb0(param_1);
  return;
}
