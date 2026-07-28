// Name: shape_edittool.cpp_CInputString_init_FUN_0046f0a0
// Address: 0046f0a0
// Address Range: [[0046f0a0, 0046f129]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CInputString_init_FUN_0046f0a0(CInputString *this_ptr,char *source_string,int max_length,int mask_mode)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CInputString_init_FUN_0046f0a0(CInputString *this_ptr,char *source_string,int max_length,int mask_mode)

{
  char *pcVar1;
  uint uVar2;
  CInputString *pCVar3;
  byte bVar4;
  
  bVar4 = 0;
  this_ptr->max_length = max_length;
  if (299 < (uint)max_length) {
    this_ptr->max_length = 299;
  }
  memset(this_ptr,0,300);
  if (source_string == (char *)0x0) {
    this_ptr->current_length = 0;
  }
  else {
    _strncpy(this_ptr->string_data,source_string,this_ptr->max_length);
    uVar2 = 0xffffffff;
    pCVar3 = this_ptr;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar1 = pCVar3->string_data;
      pCVar3 = (CInputString *)((int)pCVar3 + (uint)bVar4 * -2 + 1);
    } while (*pcVar1 != '\0');
    this_ptr->current_length = ~uVar2 - 1;
  }
  this_ptr->selection_start = 0;
  this_ptr->cursor_position = this_ptr->current_length;
  this_ptr->mask_mode = mask_mode;
  return;
}
