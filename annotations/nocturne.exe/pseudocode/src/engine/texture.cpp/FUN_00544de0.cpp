// Name: engine_texture.cpp_FUN_00544de0
// Address: 00544de0
// Address Range: [[00544de0, 00544e27]]
// Convention: __cdecl
// Signature: CTextureCache * __cdecl engine_texture_cpp_FUN_00544de0(CTextureCache *this_ptr,int max_texture_count)

#include "nocturne.h"

CTextureCache * __cdecl engine_texture_cpp_FUN_00544de0(CTextureCache *this_ptr,int max_texture_count)

{
  char (*pacVar1) [64];
  CTextureCache *pCVar2;
  int *piVar3;
  
  pacVar1 = this_ptr[10].texture_names;
  *(char *)((int)(pacVar1 + 0x1fe) + 8) = '\0';
  *(char *)((int)(pacVar1 + 0x1fe) + 9) = '\0';
  *(char *)((int)(pacVar1 + 0x1fe) + 10) = '\0';
  *(char *)((int)(pacVar1 + 0x1fe) + 0xb) = '\0';
  this_ptr->max_texture_count = max_texture_count;
  pCVar2 = this_ptr;
  do {
    piVar3 = &pCVar2->max_texture_count;
    pCVar2->texture_data_ptrs[0] = (uchar *)0x0;
    pCVar2->texture_opacity_ptrs[0] = (uchar *)0x0;
    pCVar2->texture_dimensions[0] = 0;
    pCVar2 = (CTextureCache *)piVar3;
  } while (piVar3 != this_ptr->texture_dimensions + 0x3fe);
  this_ptr->wrap_indicator = 0;
  return this_ptr;
}
