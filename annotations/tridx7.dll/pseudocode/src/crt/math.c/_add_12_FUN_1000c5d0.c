// Name: crt_math.c__add_12_FUN_1000c5d0
// Address: 1000c5d0
// Address Range: [[1000c5d0, 1000c635]]
// Convention: __cdecl
// Signature: void __cdecl crt_math_c__add_12_FUN_1000c5d0(uint *a,uint *b)

#include "nocturne.h"

void __cdecl _add_12(uint *a,uint *b)

{
  uint uVar1;
  
  uVar1 = _addl(*a,*b,a);
  if (uVar1 != 0) {
    uVar1 = _addl(a[1],1,a + 1);
    if (uVar1 != 0) {
      a[2] = a[2] + 1;
    }
  }
  uVar1 = _addl(a[1],b[1],a + 1);
  if (uVar1 != 0) {
    a[2] = a[2] + 1;
  }
  _addl(a[2],b[2],a + 2);
  return;
}
