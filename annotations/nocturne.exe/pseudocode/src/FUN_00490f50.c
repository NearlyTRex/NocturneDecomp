// Name: FUN_00490f50
// Address: 00490f50
// Address Range: [[00490f50, 00490f8e]]
// Convention: unknown
// Signature: void FUN_00490f50(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

#include "nocturne.h"

void FUN_00490f50(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  byte *local_14;
  
  local_14 = &stack0x00000018;
  engine_font_cpp_CBitFont_printCenterFV_FUN_00490f90
            (param_1,param_2,param_3,param_4,param_5,&local_14);
  return;
}
