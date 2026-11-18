// Name: core_bwspart.cpp_processSimpleParticle_FUN_005a85c0
// Address: 005a85c0
// Address Range: [[005a85c0, 005a8691]]
// Convention: __cdecl
// Signature: void __cdecl core_bwspart_cpp_processSimpleParticle_FUN_005a85c0(void *particle,float delta_time)

#include "nocturne.h"

void __cdecl core_bwspart_cpp_processSimpleParticle_FUN_005a85c0(void *particle,float delta_time)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if (*(int *)particle != 0) {
    fVar1 = *(float *)((int)particle + 8) - delta_time;
    *(float *)((int)particle + 8) = fVar1;
    if (fVar1 <= 0.0) {
      *(uint *)particle = 0;
      *(uint *)((int)particle + 8) = 0;
    }
    fVar3 = *(float *)((int)particle + 0x30) + *(float *)((int)particle + 0x3c) * delta_time;
    *(float *)((int)particle + 0x30) = fVar3;
    fVar2 = *(float *)((int)particle + 0x34) + *(float *)((int)particle + 0x40) * delta_time;
    fVar1 = *(float *)((int)particle + 0x38) + *(float *)((int)particle + 0x44) * delta_time;
    *(float *)((int)particle + 0x34) = fVar2;
    *(float *)((int)particle + 0x38) = fVar1;
    *(float *)((int)particle + 0x24) = *(float *)((int)particle + 0x24) + fVar3 * delta_time;
    *(float *)((int)particle + 0x28) = *(float *)((int)particle + 0x28) + fVar2 * delta_time;
    *(float *)((int)particle + 0x2c) = *(float *)((int)particle + 0x2c) + fVar1 * delta_time;
  }
  return;
}
