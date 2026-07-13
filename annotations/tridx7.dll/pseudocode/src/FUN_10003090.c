// Name: FUN_10003090
// Address: 10003090
// Address Range: [[10003090, 100030d0]]
// Convention: unknown
// Signature: char FUN_10003090(int param_1)

#include "nocturne.h"

char FUN_10003090(int param_1)

{
  if (param_1 == 0x10) {
    return '\x04';
  }
  if (param_1 == 0x20) {
    return '\x05';
  }
  if (param_1 == 0x40) {
    return '\x06';
  }
  if (param_1 == 0x80) {
    return '\a';
  }
  return (-(param_1 == 0x100) & 7U) + 1;
}
