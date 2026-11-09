// Name: engine_alphabit.cpp_FUN_0040d0e0
// Address: 0040d0e0
// Address Range: [[0040d0e0, 0040d1b0]]
// Convention: unknown
// Signature: void engine_alphabit_cpp_FUN_0040d0e0(CAlphaBitmap *param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_alphabit_cpp_FUN_0040d0e0(CAlphaBitmap *param_1,int param_2,int param_3)

{
  void *pvVar1;
  
  engine_alphabit_cpp_FUN_0040d1c0(param_1);
  *(int *)&param_1->field_0xc = param_2;
  *(int *)&param_1->field_0x10 = param_3;
  pvVar1 = FUN_005c08d0(param_2 * param_3);
  *(void **)param_1 = pvVar1;
  if (pvVar1 == (void *)0x0) {
    _DAT_01d1d400 = "..\\engine\\alphabit.cpp";
    _DAT_01d1d404 = 0xb0;
    core_main_c_FUN_005030e0("CAlphaBitmap::allocate - Out of memory");
  }
  pvVar1 = FUN_005c08d0(param_2 * param_3);
  *(void **)&param_1->field_0x4 = pvVar1;
  if (pvVar1 == (void *)0x0) {
    _DAT_01d1d400 = "..\\engine\\alphabit.cpp";
    _DAT_01d1d404 = 0xb3;
    core_main_c_FUN_005030e0("CAlphaBitmap::allocate - Out of memory");
  }
  pvVar1 = FUN_005c08d0(0x400);
  *(void **)&param_1->field_0x8 = pvVar1;
  if (pvVar1 != (void *)0x0) {
    return;
  }
  _DAT_01d1d400 = "..\\engine\\alphabit.cpp";
  _DAT_01d1d404 = 0xb6;
  core_main_c_FUN_005030e0("CAlphaBitmap::allocate - Out of memory");
  return;
}
