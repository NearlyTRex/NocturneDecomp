// Name: core_dcamera.cpp_testCoronaVisibility_FUN_004450b0
// Address: 004450b0
// Address Range: [[004450b0, 0044519b]]
// Convention: __cdecl
// Signature: int __cdecl core_dcamera_cpp_testCoronaVisibility_FUN_004450b0(int start_x,int start_y,int depth_reciprocal)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_dcamera_cpp_testCoronaVisibility_FUN_004450b0(int start_x,int start_y,int depth_reciprocal)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint local_18;
  
  if (_DAT_014b845c == 0) {
    local_18 = 1;
  }
  else {
    if (depth_reciprocal == 0) {
      iVar1 = 0x7fffffff;
    }
    else {
      iVar1 = (int)(0x7fffffff / (longlong)depth_reciprocal);
    }
    iVar4 = _DAT_014b8468 - iVar1;
    iVar5 = iVar4 >> 0x1f;
    iVar6 = start_y << 8;
    iVar3 = start_x << 8;
    iVar2 = 0x10;
    do {
      if (*(int *)((iVar6 >> 8) * 0x500 + 0xac2af8 + (iVar3 >> 8) * 4) < iVar1 + -0x80) break;
      iVar2 = iVar2 + -1;
      iVar1 = iVar1 + ((int)((iVar4 + iVar5 * -0x10) - (uint)(iVar5 << 3 < 0)) >> 4);
      iVar3 = iVar3 + (_DAT_014b8460 - start_x) * 0x10;
      iVar6 = iVar6 + (_DAT_014b8464 - start_y) * 0x10;
    } while (0 < iVar2);
    local_18 = (uint)(iVar2 == 0);
  }
  return local_18;
}
