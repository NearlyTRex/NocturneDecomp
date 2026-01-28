// Name: shape_spotview.cpp_CSpotView_ctor_FUN_005b95c0
// Address: 005b95c0
// Address Range: [[005b95c0, 005b961d]]
// Convention: __cdecl
// Signature: CSpotView * __cdecl shape_spotview_cpp_CSpotView_ctor_FUN_005b95c0(CSpotView *this_ptr)

#include "nocturne.h"

CSpotView * __cdecl shape_spotview_cpp_CSpotView_ctor_FUN_005b95c0(CSpotView *this_ptr)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = FLOAT_03f6ba20;
  fVar3 = FLOAT_03f6ba1c;
  fVar2 = 1.0f;
  fVar1 = 12.0f;
  this_ptr->unk[0x20] = '\0';
  this_ptr->unk[0x21] = '\0';
  this_ptr->unk[0x22] = '\0';
  this_ptr->unk[0x23] = '\0';
  *(uint *)(this_ptr->unk + 0x1c) = *(uint *)(this_ptr->unk + 0x20);
  *(uint *)(this_ptr->unk + 0x18) = *(uint *)(this_ptr->unk + 0x1c);
  this_ptr->unk[0x10] = '\0';
  this_ptr->unk[0x11] = '\0';
  this_ptr->unk[0x12] = '\0';
  this_ptr->unk[0x13] = '\0';
  *(float *)this_ptr->unk = fVar1;
  *(float *)(this_ptr->unk + 4) = fVar2;
  *(float *)(this_ptr->unk + 8) = fVar3;
  *(float *)(this_ptr->unk + 0xc) = fVar4;
  this_ptr->unk[0x14] = '\0';
  this_ptr->unk[0x15] = '\0';
  this_ptr->unk[0x16] = '\0';
  this_ptr->unk[0x17] = '\0';
  shape_spotview_cpp_CSpotView_FUN_005b9620(this_ptr);
  return this_ptr;
}
