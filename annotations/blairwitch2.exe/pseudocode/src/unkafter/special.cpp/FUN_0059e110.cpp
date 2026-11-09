// Name: unkafter_special.cpp_FUN_0059e110
// Address: 0059e110
// Address Range: [[0059e110, 0059e366]]
// Convention: unknown
// Signature: void unkafter_special_cpp_FUN_0059e110(int *param_1,float param_2)

#include "nocturne.h"

void unkafter_special_cpp_FUN_0059e110(int *param_1,float param_2)

{
  float fVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *local_30;
  int *local_2c;
  int *local_28;
  int local_20;
  int local_1c;
  
  fVar1 = (float)param_1[0xf2];
  param_1[0xf2] = (int)(fVar1 - param_2);
  if (fVar1 - param_2 <= 0.0) {
    param_1[0xf2] = param_1[0xf3];
    if (((*param_1 != 0) && (param_1[0xf1] != 0)) && (local_20 = 0, 0 < param_1[0xf1])) {
      piVar2 = param_1 + 1;
      local_30 = param_1;
      local_28 = param_1 + 0x10;
      local_2c = piVar2;
      do {
        if (*param_1 != *(int *)(local_30[1] + 0x342c)) {
          piVar2[local_20 * 0xf] = 0;
          piVar2[local_20 * 0xf + 1] = 0;
          piVar2[local_20 * 0xf + 8] = 0;
          piVar2[local_20 * 0xf + 9] = 0;
          piVar2[local_20 * 0xf + 10] = 0;
          piVar2[local_20 * 0xf + 0xb] = 0;
          piVar2[local_20 * 0xf + 0xe] = 0;
          piVar2[local_20 * 0xf + 0xc] = 0;
          piVar2[local_20 * 0xf + 0xd] = 0;
          local_1c = local_20 + 1;
          if (local_1c < param_1[0xf1]) {
            piVar4 = piVar2 + local_1c * 0xf + 2;
            piVar3 = piVar2 + local_1c * 0xf + -0xd;
            piVar5 = piVar2 + local_1c * 0xf + -0xf;
            piVar6 = piVar2 + local_1c * 0xf;
            do {
              *piVar5 = *piVar6;
              piVar5[1] = piVar6[1];
              if (piVar3 != piVar4) {
                *piVar3 = *piVar4;
                piVar3[1] = piVar4[1];
                piVar3[2] = piVar4[2];
              }
              if (piVar5 + 5 != piVar6 + 5) {
                piVar5[5] = piVar6[5];
                piVar5[6] = piVar6[6];
                piVar5[7] = piVar6[7];
              }
              piVar4 = piVar4 + 0xf;
              piVar3 = piVar3 + 0xf;
              piVar5[8] = piVar6[8];
              piVar5[9] = piVar6[9];
              piVar5[10] = piVar6[10];
              piVar5[0xb] = piVar6[0xb];
              piVar5[0xc] = piVar6[0xc];
              piVar5[0xd] = piVar6[0xd];
              local_1c = local_1c + 1;
              piVar5[0xe] = piVar6[0xe];
              piVar5 = piVar5 + 0xf;
              piVar6 = piVar6 + 0xf;
            } while (local_1c < param_1[0xf1]);
          }
          param_1[0xf1] = param_1[0xf1] + -1;
        }
        unkaddr_0059d350_cpp_FUN_0059dd00(param_1,local_2c);
        if (local_20 < param_1[0xf1] + -1) {
          param_1[local_20 * 0xf + 0xf] = (int)local_28;
        }
        local_30 = local_30 + 0xf;
        local_28 = local_28 + 0xf;
        local_20 = local_20 + 1;
        local_2c = local_2c + 0xf;
      } while (local_20 < param_1[0xf1]);
    }
  }
  return;
}
