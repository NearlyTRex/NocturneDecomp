// Name: core_dcamera.cpp_sampleFogAlongRay_FUN_0043fc80
// Address: 0043fc80
// Address Range: [[0043fc80, 0043fe52]]
// Convention: unknown
// Signature: uint core_dcamera_cpp_sampleFogAlongRay_FUN_0043fc80(int param_1,int *param_2,int *param_3,int param_4)

#include "nocturne.h"

uint core_dcamera_cpp_sampleFogAlongRay_FUN_0043fc80(int param_1,int *param_2,int *param_3,int param_4)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int local_2c;
  int local_28;
  int local_24;
  uint local_14;
  
  if (param_4 == 0) {
    local_14 = 0;
  }
  else {
    iVar2 = (int)((param_4 + (param_4 >> 0x1f) * -0x100) - (uint)((param_4 >> 0x1f) << 7 < 0)) >> 8;
    local_14 = 0;
    if (iVar2 != 0) {
      local_14 = 0;
      local_2c = *param_2 + *(int *)(param_1 + 0x1000);
      local_28 = param_2[1] + *(int *)(param_1 + 0x1004);
      iVar5 = 0;
      local_24 = param_2[2] + *(int *)(param_1 + 0x1008);
      if (0 < iVar2) {
        do {
          lVar1 = (longlong)*(int *)(param_1 + 0x101c) *
                  (longlong)
                  (int)(uint)*(byte *)(((int)((local_24 + (local_24 >> 0x1f) * -0x100) -
                                             (uint)((local_24 >> 0x1f) << 7 < 0)) >> 8 & 0xfU) *
                                       0x100 + param_1 +
                                       ((int)((local_28 + (local_28 >> 0x1f) * -0x100) -
                                             (uint)((local_28 >> 0x1f) << 7 < 0)) >> 8 & 0xfU) *
                                       0x10 + ((int)((local_2c + (local_2c >> 0x1f) * -0x100) -
                                                    (uint)((local_2c >> 0x1f) << 7 < 0)) >> 8 & 0xfU
                                              ));
          uVar3 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
          iVar4 = *(int *)(param_1 + 0x1018);
          if (iVar4 != 0) {
            if (iVar4 < local_28) {
              iVar4 = 0;
            }
            else if (local_28 < 0) {
              iVar4 = 0x10000;
            }
            else {
              iVar4 = (int)((longlong)
                            ((((longlong)(iVar4 - local_28) & 0xffffffffffffU) >> 0x10) << 0x20 |
                            (longlong)(iVar4 - local_28) * 0x10000 & 0xffffffffU) / (longlong)iVar4)
              ;
            }
            uVar3 = (uint)((longlong)iVar4 * (longlong)(int)uVar3) >> 0x10 |
                    (int)((ulonglong)((longlong)iVar4 * (longlong)(int)uVar3) >> 0x20) << 0x10;
          }
          local_14 = local_14 + uVar3;
          if (0x4000 < local_14) {
            return 0x4000;
          }
          local_2c = local_2c + (*param_3 - *param_2) / iVar2;
          iVar5 = iVar5 + 1;
          local_28 = local_28 + (param_3[1] - param_2[1]) / iVar2;
          local_24 = local_24 + (param_3[2] - param_2[2]) / iVar2;
        } while (iVar5 < iVar2);
      }
    }
  }
  return local_14;
}
