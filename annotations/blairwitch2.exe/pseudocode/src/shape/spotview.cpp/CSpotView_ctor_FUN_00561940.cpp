// Name: shape_spotview.cpp_CSpotView_ctor_FUN_00561940
// Address: 00561940
// Address Range: [[00561940, 0056199d]]
// Convention: __cdecl
// Signature: CSpotView * __cdecl shape_spotview_cpp_CSpotView_ctor_FUN_00561940(CSpotView *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CSpotView * __cdecl shape_spotview_cpp_CSpotView_ctor_FUN_00561940(CSpotView *this_ptr)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = _DAT_0264bd84;
  uVar3 = _DAT_0264bd80;
  uVar2 = _DAT_0061e2b0;
  uVar1 = _DAT_0061e2ac;
  *(uint *)(this_ptr + 0x20) = 0;
  *(uint *)(this_ptr + 0x1c) = *(uint *)(this_ptr + 0x20);
  *(uint *)(this_ptr + 0x18) = *(uint *)(this_ptr + 0x1c);
  *(uint *)(this_ptr + 0x10) = 0;
  *(uint *)this_ptr = uVar1;
  *(uint *)(this_ptr + 4) = uVar2;
  *(uint *)(this_ptr + 8) = uVar3;
  *(uint *)(this_ptr + 0xc) = uVar4;
  *(uint *)(this_ptr + 0x14) = 0;
  shape_spotview_cpp_CSpotView_reset_FUN_005619a0(this_ptr,0x1f);
  return this_ptr;
}
