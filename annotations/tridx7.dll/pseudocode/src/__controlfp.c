// Name: __controlfp
// Address: 100098d0
// Address Range: [[100098d0, 100098e7]]
// Convention: __cdecl
// Signature: uint __cdecl __controlfp(uint _NewValue,uint _Mask)

#include "nocturne.h"

/* Library Function - Single Match
uint __cdecl __controlfp(uint _NewValue,uint _Mask)

{
  uint uVar1;
  
  uVar1 = __control87(_NewValue,_Mask & 0xfff7ffff);
  return uVar1;
}
