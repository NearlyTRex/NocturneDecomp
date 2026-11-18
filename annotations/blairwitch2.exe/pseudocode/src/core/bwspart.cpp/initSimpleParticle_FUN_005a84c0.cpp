// Name: core_bwspart.cpp_initSimpleParticle_FUN_005a84c0
// Address: 005a84c0
// Address Range: [[005a84c0, 005a85b9]]
// Convention: __cdecl
// Signature: void __cdecl core_bwspart_cpp_initSimpleParticle_FUN_005a84c0(void *particle)

#include "nocturne.h"

void __cdecl core_bwspart_cpp_initSimpleParticle_FUN_005a84c0(void *particle)

{
  uint local_38 [3];
  uint local_2c [3];
  uint local_20 [3];
  uint local_14 [3];
  
  *(uint *)particle = 0;
  *(uint *)((int)particle + 0x58) = 0x3dcccccd;
  *(uint *)((int)particle + 0x5c) = 0x3dcccccd;
  *(uint *)((int)particle + 4) = 0x3f800000;
  *(uint *)((int)particle + 0xc) = 0x3f800000;
  *(uint *)((int)particle + 0x10) = 0;
  *(uint *)((int)particle + 0x18) = 0x3dcccccd;
  *(uint *)((int)particle + 0x1c) = 0x3dcccccd;
  *(uint *)((int)particle + 0x20) = 0;
  *(uint *)((int)particle + 0x14) = *(uint *)((int)particle + 0xc);
  if ((uint *)((int)particle + 0x24) != local_20) {
    *(uint *)((int)particle + 0x24) = 0;
    *(uint *)((int)particle + 0x28) = 0;
    *(uint *)((int)particle + 0x2c) = 0;
  }
  if ((uint *)((int)particle + 0x30) != local_14) {
    *(uint *)((int)particle + 0x34) = 0;
    *(uint *)((int)particle + 0x38) = 0;
    *(uint *)((int)particle + 0x30) = 0;
  }
  if ((uint *)((int)particle + 0x3c) != local_38) {
    *(uint *)((int)particle + 0x3c) = 0;
    *(uint *)((int)particle + 0x40) = 0;
    *(uint *)((int)particle + 0x44) = 0;
  }
  if ((uint *)((int)particle + 0x48) == local_2c) {
    return;
  }
  *(uint *)((int)particle + 0x4c) = 0x3f800000;
  *(uint *)((int)particle + 0x50) = 0x3f800000;
  *(uint *)((int)particle + 0x48) = 0x3f800000;
  return;
}
