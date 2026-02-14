// Name: shape_design.c_findVertexMatches_FUN_00461ae0
// Address: 00461ae0
// Address Range: [[00461ae0, 00461b66]]
// Convention: __cdecl
// Signature: int __cdecl shape_design_c_findVertexMatches_FUN_00461ae0(int *vertices1,int *vertices2,int count1,int count2)

#include "nocturne.h"

int __cdecl shape_design_c_findVertexMatches_FUN_00461ae0(int *vertices1,int *vertices2,int count1,int count2)

{
  uint local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  local_14 = 0;
  for (local_1c = 0; local_1c < count1; local_1c = local_1c + 1) {
    for (local_18 = 0; local_18 < count2; local_18 = local_18 + 1) {
      if (vertices1[local_1c] == vertices2[local_18]) {
        local_14 = local_14 + 1;
      }
    }
  }
  local_20 = (uint)(local_14 == 2);
  return local_20;
}
