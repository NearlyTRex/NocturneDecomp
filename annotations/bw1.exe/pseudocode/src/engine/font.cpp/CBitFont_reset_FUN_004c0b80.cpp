// Name: engine_font.cpp_CBitFont_reset_FUN_004c0b80
// Address: 004c0b80
// Address Range: [[004c0b80, 004c0c95]]
// Convention: __cdecl
// Signature: void __cdecl engine_font_cpp_CBitFont_reset_FUN_004c0b80(CBitFont *this_ptr)

#include "nocturne.h"

void __cdecl engine_font_cpp_CBitFont_reset_FUN_004c0b80(CBitFont *this_ptr)

{
  CBitFont *pCVar1;
  CBitFont *pCVar2;
  CBitFont *pCVar3;
  
  *(uint *)this_ptr = 0;
  pCVar2 = this_ptr;
  pCVar3 = this_ptr;
  do {
    pCVar1 = pCVar2 + 4;
    pCVar3[4] = (CBitFont)0x0;
    *(uint *)(pCVar2 + 0x194) = 0;
    pCVar3 = pCVar3 + 0x50;
    *(uint *)(pCVar2 + 0x1a4) = 0;
    pCVar2 = pCVar1;
  } while (pCVar1 != this_ptr + 0x10);
  this_ptr[0x144] = (CBitFont)0x0;
  pCVar2 = this_ptr;
  do {
    pCVar3 = pCVar2 + 4;
    *(uint *)(pCVar2 + 0x21e8) = 0;
    *(uint *)(pCVar2 + 0x35e8) = 0;
    *(uint *)(pCVar2 + 0x39e8) = 0;
    *(uint *)(pCVar2 + 0x3de8) = 0;
    *(uint *)(pCVar2 + 0x1de8) = 0;
    pCVar2 = pCVar3;
  } while (pCVar3 != this_ptr + 0x400);
  *(uint *)(this_ptr + 0x41ec) = 0;
  *(uint *)(this_ptr + 0x41f0) = 0;
  *(uint *)(this_ptr + 0x41f4) = 1;
  *(uint *)(this_ptr + 0x41f8) = 2;
  *(uint *)(this_ptr + 0x3668) = 8;
  *(uint *)(this_ptr + 0x41fc) = 2;
  *(uint *)(this_ptr + 0x4200) = 1;
  *(uint *)(this_ptr + 0x4204) = 0;
  *(uint *)(this_ptr + 0x1de4) = 0;
  *(uint *)(this_ptr + 0x420c) = 0;
  *(uint *)(this_ptr + 0x4210) = 0;
  *(uint *)(this_ptr + 0x4214) = 0;
  *(uint *)(this_ptr + 0x1dcc) = 0;
  *(uint *)(this_ptr + 0x1dd4) = 0;
  *(uint *)(this_ptr + 0x1dd8) = 0;
  *(uint *)(this_ptr + 0x1ddc) = 0;
  *(uint *)(this_ptr + 0x41e8) = 0;
  return;
}
