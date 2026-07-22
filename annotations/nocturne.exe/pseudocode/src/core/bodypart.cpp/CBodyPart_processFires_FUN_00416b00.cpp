// Name: core_bodypart.cpp_CBodyPart_processFires_FUN_00416b00
// Address: 00416b00
// Address Range: [[00416b00, 00416c31]]
// Convention: __cdecl
// Signature: void __cdecl core_bodypart_cpp_CBodyPart_processFires_FUN_00416b00(int param_1,float param_2)

#include "nocturne.h"

void __cdecl core_bodypart_cpp_CBodyPart_processFires_FUN_00416b00(int param_1,float param_2)

{
  float fVar1;
  uint *puVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  float local_30;
  byte local_2c [20];
  float local_18;
  int local_14;
  
  if (*(int *)(param_1 + 0x744) != 0) {
    fVar1 = *(float *)(param_1 + 0xcb0) - param_2;
    *(float *)(param_1 + 0xcb0) = fVar1;
    if (fVar1 < 0.0) {
      *(uint *)(param_1 + 0x744) = 0;
      *(uint *)(param_1 + 0xcb0) = 0;
      return;
    }
    iVar5 = 0;
    if (0 < *(int *)(param_1 + 0x744)) {
      local_14 = param_1 + 0x748;
      puVar4 = (uint *)(param_1 + 0x774);
      do {
        iVar3 = iVar5 * 0x2a8 + local_14;
        puVar2 = (uint *)
                 core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_1,local_2c,iVar3);
        *puVar4 = *puVar2;
        local_30 = 1.0;
        puVar4[1] = puVar2[1];
        puVar4[2] = puVar2[2];
        if (*(float *)(param_1 + 0xcb0) < (float)5) {
          local_30 = *(float *)(param_1 + 0xcb0) * (float)0.20000000000000001;
        }
        local_18 = local_30 * (float)1.5;
        fVar1 = (float)3;
        *(float *)(iVar3 + 0x15c) = local_18;
        *(float *)(iVar3 + 0x160) = local_30 * fVar1;
        *(float *)(iVar3 + 0x164) = local_18;
        core_flame_cpp_CFlame_process_FUN_0048d0c0(iVar3 + 0xc,param_2);
        iVar5 = iVar5 + 1;
        puVar4 = puVar4 + 0xaa;
      } while (iVar5 < *(int *)(param_1 + 0x744));
    }
  }
  return;
}
