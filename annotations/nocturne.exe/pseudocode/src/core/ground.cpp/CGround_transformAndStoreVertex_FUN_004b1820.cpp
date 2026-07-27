// Name: core_ground.cpp_CGround_transformAndStoreVertex_FUN_004b1820
// Address: 004b1820
// Address Range: [[004b1820, 004b1909]]
// Convention: __cdecl
// Signature: void __cdecl core_ground_cpp_CGround_transformAndStoreVertex_FUN_004b1820(int *param_1,uint param_2,uint param_3)

#include "nocturne.h"

void __cdecl core_ground_cpp_CGround_transformAndStoreVertex_FUN_004b1820(int *param_1,uint param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int local_1c;
  int local_18;
  int local_14;
  
  iVar1 = core_ground_cpp_CGround_getVertexIndex_FUN_004b1800
                    (param_1,(param_3 - param_1[0xc]) + param_1[5],
                     (param_2 - param_1[0xb]) + param_1[4]);
  local_1c = param_1[7] * param_2 * 0x100;
  local_14 = param_1[7] * param_3 * 0x100;
  local_18 = param_1[8] *
             (int)*(short *)(param_1[9] +
                            ((param_3 & param_1[3]) * *param_1 + (param_2 & param_1[2])) * 4);
  engine_special_cpp_transformPoint_FUN_00530a25(&DAT_005c5014 + iVar1 * 0xc,&local_1c);
  (&DAT_005c5034)[iVar1 * 0xc] = 0x3fff;
  (&DAT_005c5038)[iVar1 * 0xc] = 0x3fff;
  (&DAT_005c503c)[iVar1 * 0xc] = 0x3fff;
  if ((int)(&DAT_005c501c)[iVar1 * 0xc] < 0) {
    (&DAT_005c5040)[iVar1 * 0xc] = 0;
  }
  else {
    iVar2 = (int)((&DAT_005c501c)[iVar1 * 0xc] << 8) / (param_1[4] * param_1[7]);
    (&DAT_005c5040)[iVar1 * 0xc] = iVar2;
    if (0xffff < iVar2) {
      (&DAT_005c5040)[iVar1 * 0xc] = 0xffff;
      return;
    }
  }
  return;
}
