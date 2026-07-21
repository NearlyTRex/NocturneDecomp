// Name: crt_fstream.cpp_ostream_write_FUN_00565a13
// Address: 00565a13
// Address Range: [[00565a13, 00565ad4]]
// Convention: __cdecl
// Signature: int * __cdecl crt_fstream_cpp_ostream_write_FUN_00565a13(int *param_1,undefined4 *param_2,uint param_3)

#include "nocturne.h"

int * __cdecl crt_fstream_cpp_ostream_write_FUN_00565a13(int *param_1,uint *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  byte bVar4;
  
  bVar4 = 0;
  if ((*(int *)((int)param_1 + *(int *)(*param_1 + 4) + 0x10) == 0) &&
     (((*(int *)((int)param_1 + *(int *)(*param_1 + 4) + 8) == 0 &&
       ((*(uint *)((int)param_1 + *(int *)(*param_1 + 4) + 0xc) & 0x4000) == 0)) ||
      (iVar1 = FUN_0056b35c(param_1), iVar1 != 0)))) {
    if (param_3 != 0) {
      iVar1 = *(int *)(*(int *)(*param_1 + 4) + 4 + (int)param_1);
      if ((int)param_3 < *(int *)(iVar1 + 0x1c) - (int)*(uint **)(iVar1 + 0x20)) {
        puVar3 = *(uint **)(iVar1 + 0x20);
        for (uVar2 = param_3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
          *puVar3 = *param_2;
          param_2 = param_2 + (uint)bVar4 * -2 + 1;
          puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
        }
        for (uVar2 = param_3 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
          *(byte *)puVar3 = *(byte *)param_2;
          param_2 = (uint *)((int)param_2 + (uint)bVar4 * -2 + 1);
          puVar3 = (uint *)((int)puVar3 + (uint)bVar4 * -2 + 1);
        }
        *(int *)(iVar1 + 0x20) = *(int *)(iVar1 + 0x20) + param_3;
        uVar2 = param_3;
      }
      else {
        uVar2 = (**(code **)(*(int *)(iVar1 + 0x28) + 4))(iVar1,param_2,param_3);
      }
      if (uVar2 != param_3) {
        FUN_0056b327(*(int *)(*param_1 + 4) + (int)param_1,2);
      }
    }
    if ((*(uint *)((int)param_1 + *(int *)(*param_1 + 4) + 0xc) & 0x2000) != 0) {
      FUN_0056b3c2(param_1);
    }
  }
  return param_1;
}
