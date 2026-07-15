// Name: crt_heap.c__heap_init_FUN_100078f0
// Address: 100078f0
// Address Range: [[100078f0, 10007904]]
// Convention: __cdecl
// Signature: int __cdecl crt_heap_c__heap_init_FUN_100078f0(int mtflag)

#include "nocturne.h"

int __cdecl _heap_init(int mtflag)

{
  DAT_10241974 = (int)HeapCreate(0,0x1000,0);
  return DAT_10241974;
}
