// Name: FUN_0045da90
// Address: 0045da90
// Address Range: [[0045da90, 0045dafb]]
// Convention: unknown
// Signature: void FUN_0045da90(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

#include "nocturne.h"

void FUN_0045da90(uint param_1,uint param_2,uint param_3,uint param_4)

{
  byte local_1010 [4096];
  byte *local_10;
  
  local_10 = &stack0x00000014;
  _vsprintf(local_1010,param_4,&local_10);
  local_10 = (byte *)0x0;
  cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAligned_FUN_0045da30
            (param_1,local_1010,param_2,param_3);
  return;
}
