// Name: core_moon.cpp_CMoon_free_FUN_004dea60
// Address: 004dea60
// Address Range: [[004dea60, 004dead0]]
// Convention: __cdecl
// Signature: void __cdecl core_moon_cpp_CMoon_free_FUN_004dea60(int *param_1)

#include "nocturne.h"

void __cdecl core_moon_cpp_CMoon_free_FUN_004dea60(int *param_1)

{
  int iVar1;
  byte *puVar2;
  
  if (*param_1 != 0) {
    puVar2 = (byte *)0x1ccdc64;
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040e360(&DAT_01ccdc50);
    do {
      engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040e360(puVar2);
      puVar2 = puVar2 + 0x14;
    } while (puVar2 != &DAT_01ccdebc);
    *param_1 = 0;
  }
  iVar1 = 0x1ccdec8;
  do {
    core_course_cpp_CCourse_free_FUN_0043b7c0(iVar1);
    iVar1 = iVar1 + 0xc;
  } while (iVar1 != 0x1ccdeec);
  FUN_00452f10(param_1 + 2);
  FUN_00452f10(0x1cce1bc);
  return;
}
