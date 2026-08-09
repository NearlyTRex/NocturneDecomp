// Name: engine_3d.c_compareSortedPolygonDepth_FUN_00405a60
// Address: 00405a60
// Address Range: [[00405a60, 00405a86]]
// Convention: __cdecl
// Signature: int __cdecl engine_3d_c_compareSortedPolygonDepth_FUN_00405a60(void **entry_a,void **entry_b)

#include "nocturne.h"

int __cdecl engine_3d_c_compareSortedPolygonDepth_FUN_00405a60(void **entry_a,void **entry_b)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)((int)*entry_b + 0xc);
  uVar2 = *(uint *)((int)*entry_a + 0xc);
  if ((int)uVar2 < (int)uVar1) {
    return 1;
  }
  if (uVar1 == uVar2) {
    return uVar1 ^ uVar2;
  }
  return -1;
}
