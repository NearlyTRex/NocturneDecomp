// Name: FUN_004b6e10
// Address: 004b6e10
// Address Range: [[004b6e10, 004b7036]]
// Convention: unknown
// Signature: void FUN_004b6e10(int param_1)

#include "nocturne.h"

void FUN_004b6e10(int param_1)

{
  *(uint *)(param_1 + 0x2c) = 0x1f;
  *(uint *)(param_1 + 0x30) = 0x2a;
  *(uint *)(param_1 + 0x34) = 0x38;
  *(uint *)(param_1 + 0x38) = 0x1e;
  *(uint *)(param_1 + 0x3c) = 0x20;
  *(uint *)(param_1 + 0x40) = 0x14d;
  *(uint *)(param_1 + 0x44) = 0x14b;
  *(uint *)(param_1 + 0x48) = 0x1d;
  *(uint *)(param_1 + 0x4c) = 0x1c;
  *(uint *)(param_1 + 0x50) = 0x10;
  *(uint *)(param_1 + 0x54) = 0xffffffff;
  *(uint *)(param_1 + 0x58) = 0xffffffff;
  *(uint *)(param_1 + 0x5c) = 0xffffffff;
  *(uint *)(param_1 + 0x60) = 0xffffffff;
  *(uint *)(param_1 + 100) = 0xffffffff;
  *(uint *)(param_1 + 0x68) = 0x21;
  *(uint *)(param_1 + 0x6c) = 0xffffffff;
  *(uint *)(param_1 + 0x70) = 0xffffffff;
  *(uint *)(param_1 + 0x74) = 0x148;
  *(uint *)(param_1 + 0x78) = 0x150;
  *(uint *)(param_1 + 0x7c) = 2;
  *(uint *)(param_1 + 0x80) = 3;
  *(uint *)(param_1 + 0x84) = 4;
  *(uint *)(param_1 + 0x88) = 0xffffffff;
  *(uint *)(param_1 + 0x8c) = 0xffffffff;
  *(uint *)(param_1 + 0x94) = 0xc;
  *(uint *)(param_1 + 0x90) = 0xd;
  *(uint *)(param_1 + 0x98) = 0x1a;
  *(uint *)(param_1 + 0x9c) = 0x1b;
  *(uint *)(param_1 + 0xa0) = 0x19;
  *(uint *)(param_1 + 0xa4) = 0x29;
  *(uint *)(param_1 + 0xaf0) = 0x12;
  *(uint *)(param_1 + 0xa8) = 0;
  *(uint *)(param_1 + 0xac) = 0;
  *(uint *)(param_1 + 0xb0) = 0x10000;
  *(uint *)(param_1 + 0xb4) = 0x10000;
  *(uint *)(param_1 + 0xd8) = 0;
  *(uint *)(param_1 + 0x28) = 0x11;
  if (*(int *)(param_1 + 0xd0) == 1) {
    *(uint *)(param_1 + 0x34) = 0x38;
    *(uint *)(param_1 + 0x38) = 0x1e;
    *(uint *)(param_1 + 0x3c) = 0x20;
    *(uint *)(param_1 + 0x44) = 0x255;
    *(uint *)(param_1 + 0x40) = 0x255;
    *(uint *)(param_1 + 0x48) = 0x200;
    *(uint *)(param_1 + 0x4c) = 0x1c;
    *(uint *)(param_1 + 0x50) = 0x138;
    *(uint *)(param_1 + 0x68) = 0x201;
    *(uint *)(param_1 + 0x74) = 0x256;
    *(uint *)(param_1 + 0x78) = 0x256;
    *(uint *)(param_1 + 0x7c) = 2;
    *(uint *)(param_1 + 0x80) = 3;
    *(uint *)(param_1 + 0x84) = 4;
    *(uint *)(param_1 + 0x88) = 0xffffffff;
    *(uint *)(param_1 + 0x8c) = 0xffffffff;
    *(uint *)(param_1 + 0xaf0) = 0x12;
    *(uint *)(param_1 + 0x30) = 0x2a;
    *(uint *)(param_1 + 0x50) = 0x10;
    if (*(int *)(param_1 + 0xd0) != 2) {
      return;
    }
  }
  else if (*(int *)(param_1 + 0xd0) != 2) {
    return;
  }
  *(uint *)(param_1 + 0x68) = 0x203;
  *(uint *)(param_1 + 0x4c) = 0x204;
  *(uint *)(param_1 + 0x44) = 0x251;
  *(uint *)(param_1 + 0x40) = 0x252;
  *(uint *)(param_1 + 0x28) = 0x253;
  *(uint *)(param_1 + 0x2c) = 0x254;
  *(uint *)(param_1 + 0x48) = 0x202;
  return;
}
