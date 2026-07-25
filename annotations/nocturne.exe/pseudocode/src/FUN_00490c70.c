// Name: FUN_00490c70
// Address: 00490c70
// Address Range: [[00490c70, 00490cd4]]
// Convention: unknown
// Signature: void FUN_00490c70(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7)

#include "nocturne.h"

void FUN_00490c70(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,uint param_7)

{
  byte local_1010 [4096];
  
  _vsprintf(local_1010,param_6,param_7);
  engine_font_cpp_CBitFont_drawTextRight_FUN_00490be0
            (param_1,param_2,param_3,param_4,param_5,local_1010);
  return;
}
