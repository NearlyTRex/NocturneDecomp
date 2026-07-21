// Name: engine_2d.c_drawRect_FUN_00403e10
// Address: 00403e10
// Address Range: [[00403e10, 00403e54]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_drawRect_FUN_00403e10(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

#include "nocturne.h"

void __cdecl engine_2d_c_drawRect_FUN_00403e10(uint param_1,uint param_2,uint param_3,uint param_4)

{
  engine_2d_c_drawHLine_FUN_00403bd0(param_1,param_2,param_3);
  engine_2d_c_drawHLine_FUN_00403bd0(param_1,param_4,param_3);
  engine_2d_c_drawVLine_FUN_00403ce0(param_1,param_2,param_4);
  engine_2d_c_drawVLine_FUN_00403ce0(param_3,param_2,param_4);
  return;
}
