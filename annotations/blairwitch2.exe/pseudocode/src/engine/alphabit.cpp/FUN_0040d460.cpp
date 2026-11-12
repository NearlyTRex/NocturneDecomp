// Name: engine_alphabit.cpp_FUN_0040d460
// Address: 0040d460
// Address Range: [[0040d460, 0040d530]]
// Convention: unknown
// Signature: void engine_alphabit_cpp_FUN_0040d460(CAlphaBitmap *param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_alphabit_cpp_FUN_0040d460(CAlphaBitmap *param_1,int param_2,int param_3)

{
  char *pcVar1;
  uint *puVar2;
  
  engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d540(param_1);
  param_1->width = param_2;
  param_1->height = param_3;
  pcVar1 = (char *)malloc(param_2 * param_3);
  param_1->raw = pcVar1;
  if (pcVar1 == (char *)0x0) {
    _DAT_01d046a0 = "..\\engine\\alphabit.cpp";
    _DAT_01d046a4 = 0xb0;
    core_main_c_FUN_004e4500("CAlphaBitmap::allocate - Out of memory");
  }
  pcVar1 = (char *)malloc(param_2 * param_3);
  param_1->opa = pcVar1;
  if (pcVar1 == (char *)0x0) {
    _DAT_01d046a0 = "..\\engine\\alphabit.cpp";
    _DAT_01d046a4 = 0xb3;
    core_main_c_FUN_004e4500("CAlphaBitmap::allocate - Out of memory");
  }
  puVar2 = (uint *)malloc(0x400);
  param_1->act = puVar2;
  if (puVar2 != (uint *)0x0) {
    return;
  }
  _DAT_01d046a0 = "..\\engine\\alphabit.cpp";
  _DAT_01d046a4 = 0xb6;
  core_main_c_FUN_004e4500("CAlphaBitmap::allocate - Out of memory");
  return;
}
