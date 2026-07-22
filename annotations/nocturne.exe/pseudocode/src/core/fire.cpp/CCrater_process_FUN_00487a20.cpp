// Name: core_fire.cpp_CCrater_process_FUN_00487a20
// Address: 00487a20
// Address Range: [[00487a20, 00487aec]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CCrater_process_FUN_00487a20(int *param_1)

#include "nocturne.h"

void __cdecl core_fire_cpp_CCrater_process_FUN_00487a20(int *param_1)

{
  int *piVar1;
  uint local_18;
  uint local_14;
  uint local_10;
  
  if (*param_1 != 0) {
    if ((0.0 < (float)param_1[2]) &&
       (param_1[2] = (int)((float)param_1[2] - *(float *)(0x01C775EC + 0x264)),
       (float)param_1[2] < 0.0)) {
      param_1[1] = 1;
      param_1[2] = 0;
    }
    param_1[6] = (int)(*(float *)(0x01C775EC + 0x264) + (float)param_1[6]);
    if ((float)0.20000000000000001 < (float)param_1[6]) {
      param_1[6] = (int)((float)param_1[6] + -0.2f);
      local_18 = 0;
      local_14 = 0x3f800000;
      piVar1 = param_1 + 7;
      local_10 = 0;
      do {
        core_fire_cpp_CFireEffect_createSmokeParticle_FUN_0048afe0
                  (0x01C08D04,piVar1,0x3f800000,&local_18,0xffff);
        piVar1 = piVar1 + 3;
      } while (piVar1 != param_1 + 0x10);
    }
  }
  return;
}
