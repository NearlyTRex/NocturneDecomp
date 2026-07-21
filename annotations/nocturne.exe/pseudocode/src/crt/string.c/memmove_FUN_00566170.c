// Name: crt_string.c_memmove_FUN_00566170
// Address: 00566170
// Address Range: [[00566170, 005661c1]]
// Convention: __cdecl
// Signature: void __cdecl crt_string_c_memmove_FUN_00566170(undefined4 *param_1,undefined4 *param_2,uint param_3)

#include "nocturne.h"

void __cdecl memmove(uint *param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  uint *puVar2;
  ushort *puVar3;
  
  if (param_2 != param_1) {
    if ((param_2 < param_1) && (param_1 < (uint *)((int)param_2 + param_3))) {
      uVar1 = param_3 >> 1;
      puVar2 = (uint *)((int)param_2 + param_3);
      puVar3 = (ushort *)((int)param_1 + param_3);
      while( true ) {
        if (uVar1 == 0) break;
        uVar1 = uVar1 - 1;
        puVar3[-1] = *(ushort *)((int)puVar2 - 2U);
        puVar2 = (uint *)((int)puVar2 - 2U);
        puVar3 = puVar3 + -1;
      }
      uVar1 = (uint)((param_3 & 1) != 0);
      while( true ) {
        puVar3 = (ushort *)((int)puVar3 + -1);
        puVar2 = (uint *)((int)puVar2 - 1);
        if (uVar1 == 0) break;
        uVar1 = uVar1 - 1;
        *(byte *)puVar3 = *(byte *)puVar2;
      }
      return;
    }
    for (uVar1 = param_3 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
      *param_1 = *param_2;
      param_2 = param_2 + 1;
      param_1 = param_1 + 1;
    }
    for (param_3 = param_3 & 3; param_3 != 0; param_3 = param_3 - 1) {
      *(byte *)param_1 = *(byte *)param_2;
      param_2 = (uint *)((int)param_2 + 1);
      param_1 = (uint *)((int)param_1 + 1);
    }
  }
  return;
}
