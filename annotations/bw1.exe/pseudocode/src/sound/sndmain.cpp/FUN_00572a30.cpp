// Name: sound_sndmain.cpp_FUN_00572a30
// Address: 00572a30
// Address Range: [[00572a30, 00572a4e]]
// Convention: unknown
// Signature: void sound_sndmain_cpp_FUN_00572a30(uint param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sound_sndmain_cpp_FUN_00572a30(uint param_1)

{
  uint *puVar1;
  
  puVar1 = (uint *)(_DAT_02c78cec * 0x60 + 0x2c78d3c);
  *puVar1 = *puVar1 & ~param_1;
  return;
}
