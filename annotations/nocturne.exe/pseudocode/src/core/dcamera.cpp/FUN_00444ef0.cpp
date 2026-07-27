// Name: core_dcamera.cpp_FUN_00444ef0
// Address: 00444ef0
// Address Range: [[00444ef0, 00444f82]]
// Convention: unknown
// Signature: void core_dcamera_cpp_FUN_00444ef0(int param_1,int param_2)

#include "nocturne.h"

void core_dcamera_cpp_FUN_00444ef0(int param_1,int param_2)

{
  uint uVar1;
  uint *unaff_ESI;
  uint uStack_1c;
  uint uStack_18;
  uint uStack_14;
  uint uStack_10;
  
  uVar1 = 0;
  uStack_18 = 0;
  uStack_14 = 9999;
  uStack_10 = 0;
  uStack_1c = 9999;
  if (0 < *(int *)(param_1 + 0x154)) {
    do {
      if (*(uint *)(param_2 + 0x14c8) <= *(uint *)(param_2 + 0x1888)) {
        if ((int)uVar1 < (int)uStack_14) {
          uStack_14 = uVar1;
        }
        if ((int)uStack_10 < (int)uVar1) {
          uStack_10 = uVar1;
        }
        if (*(uint *)(param_2 + 0x14c8) < uStack_1c) {
          uStack_1c = *(uint *)(param_2 + 0x14c8);
        }
        if (uStack_18 < *(uint *)(param_2 + 0x1888)) {
          uStack_18 = *(uint *)(param_2 + 0x1888);
        }
      }
      uVar1 = uVar1 + 1;
      param_2 = param_2 + 4;
    } while ((int)uVar1 < *(int *)(param_1 + 0x154));
  }
  *unaff_ESI = uStack_1c;
  unaff_ESI[1] = uStack_18;
  unaff_ESI[2] = uStack_14;
  unaff_ESI[3] = uStack_10;
  return;
}
