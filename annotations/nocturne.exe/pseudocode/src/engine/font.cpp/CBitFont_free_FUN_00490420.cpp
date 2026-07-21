// Name: engine_font.cpp_CBitFont_free_FUN_00490420
// Address: 00490420
// Address Range: [[00490420, 00490458]]
// Convention: __cdecl
// Signature: void __cdecl engine_font_cpp_CBitFont_free_FUN_00490420(int param_1)

#include "nocturne.h"

void __cdecl engine_font_cpp_CBitFont_free_FUN_00490420(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  do {
    iVar2 = iVar1 + 4;
    shape_memdbg_cpp_free_FUN_00564486(*(uint *)(iVar1 + 0x144));
    *(uint *)(iVar1 + 0x144) = 0;
    iVar1 = iVar2;
  } while (iVar2 != param_1 + 0x10);
  engine_font_cpp_CBitFont_reset_FUN_0048fe50(param_1);
  return;
}
