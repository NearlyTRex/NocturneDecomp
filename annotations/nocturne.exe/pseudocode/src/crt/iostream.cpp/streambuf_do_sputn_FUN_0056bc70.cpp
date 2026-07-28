// Name: crt_iostream.cpp_streambuf_do_sputn_FUN_0056bc70
// Address: 0056bc70
// Address Range: [[0056bc70, 0056bd21]]
// Convention: unknown
// Signature: int crt_iostream_cpp_streambuf_do_sputn_FUN_0056bc70(int param_1,undefined4 *param_2,uint param_3)

#include "nocturne.h"

int crt_iostream_cpp_streambuf_do_sputn_FUN_0056bc70(int param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  int local_14;
  
  bVar6 = 0;
  local_14 = 0;
  do {
    if ((int)param_3 < 1) {
      return local_14;
    }
    if (*(int *)(param_1 + 0x18) == 0) {
      iVar2 = (**(code **)(*(int *)(param_1 + 0x28) + 0xc))(param_1,*(byte *)param_2);
      if (iVar2 == -1) {
        return local_14;
      }
      uVar1 = 1;
    }
    else {
      uVar1 = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x20);
      if ((int)uVar1 < 1) {
        iVar2 = (**(code **)(*(int *)(param_1 + 0x28) + 0xc))(param_1,0xffffffff);
        if (iVar2 == -1) {
          return local_14;
        }
        uVar1 = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x20);
      }
      if ((int)param_3 < (int)uVar1) {
        uVar1 = param_3;
      }
      puVar4 = param_2;
      puVar5 = *(uint **)(param_1 + 0x20);
      for (uVar3 = uVar1 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
        puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
      }
      for (uVar3 = uVar1 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(byte *)puVar5 = *(byte *)puVar4;
        puVar4 = (uint *)((int)puVar4 + (uint)bVar6 * -2 + 1);
        puVar5 = (uint *)((int)puVar5 + (uint)bVar6 * -2 + 1);
      }
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + uVar1;
    }
    param_2 = (uint *)((int)param_2 + uVar1);
    local_14 = local_14 + uVar1;
    param_3 = param_3 - uVar1;
  } while( true );
}
