// Name: shape_spotview.cpp_CSpotView_ctor_FUN_00584390
// Address: 00584390
// Address Range: [[00584390, 005843ed]]
// Convention: __cdecl
// Signature: CSpotView * __cdecl shape_spotview_cpp_CSpotView_ctor_FUN_00584390(CSpotView *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CSpotView * __cdecl shape_spotview_cpp_CSpotView_ctor_FUN_00584390(CSpotView *this_ptr)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = _DAT_02c83554;
  uVar3 = _DAT_02c83550;
  uVar2 = _DAT_00625900;
  uVar1 = _DAT_006258fc;
  *(uint *)(this_ptr + 0x20) = 0;
  *(uint *)(this_ptr + 0x1c) = *(uint *)(this_ptr + 0x20);
  *(uint *)(this_ptr + 0x18) = *(uint *)(this_ptr + 0x1c);
  *(uint *)(this_ptr + 0x10) = 0;
  *(uint *)this_ptr = uVar1;
  *(uint *)(this_ptr + 4) = uVar2;
  *(uint *)(this_ptr + 8) = uVar3;
  *(uint *)(this_ptr + 0xc) = uVar4;
  *(uint *)(this_ptr + 0x14) = 0;
  shape_spotview_cpp_CSpotView_reset_FUN_005843f0(this_ptr,0x1f);
  return this_ptr;
}
