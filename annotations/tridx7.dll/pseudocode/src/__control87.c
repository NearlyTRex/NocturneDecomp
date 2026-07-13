// Name: __control87
// Address: 10009890
// Address Range: [[10009890, 100098ce]]
// Convention: __cdecl
// Signature: uint __cdecl __control87(uint _NewValue,uint _Mask)

#include "nocturne.h"

/* Library Function - Single Match
uint __cdecl __control87(uint _NewValue,uint _Mask)

{
  uint uVar1;
  
  uVar1 = __abstract_cw();
  uVar1 = ~_Mask & uVar1 | _Mask & _NewValue;
  __hw_cw(uVar1);
  return uVar1;
}
