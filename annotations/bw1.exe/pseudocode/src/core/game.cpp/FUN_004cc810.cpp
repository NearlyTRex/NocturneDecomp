// Name: core_game.cpp_FUN_004cc810
// Address: 004cc810
// Address Range: [[004cc810, 004cc991]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_FUN_004cc810(CGame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_FUN_004cc810(CGame *this_ptr)

{
  int iVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  CGame *pCVar5;
  void *local_1c;
  void *local_18;
  
  fVar2 = *(float *)&this_ptr->field_0x3b4 - *(float *)&this_ptr->field_0x294;
  *(float *)&this_ptr->field_0x3b4 = fVar2;
  if (fVar2 < 0.0) {
    *(uint *)&this_ptr->field_0x3b4 = 0;
  }
  _DAT_01cd0aec = _DAT_01cd0aec - *(float *)&this_ptr->field_0x294;
  if (_DAT_01cd0aec < 0.0) {
    _DAT_01cd0aec = 0.0;
  }
  iVar4 = 0;
  if (0 < *(int *)&this_ptr->field_0x3bc) {
    local_18 = &this_ptr->field_0x3c0;
    local_1c = &this_ptr->field_0x4c0;
    pCVar5 = this_ptr;
    do {
      while( true ) {
        iVar1 = iVar4 * 4;
        fVar2 = *(float *)&pCVar5->field_0x8d4 - *(float *)&this_ptr->field_0x294;
        *(float *)&pCVar5->field_0x8d4 = fVar2;
        if (0.0 < fVar2) break;
        iVar3 = *(int *)&this_ptr->field_0x3bc + -1;
        *(int *)&this_ptr->field_0x3bc = iVar3;
        memmove(local_18,local_1c,(iVar3 - iVar4) * 0x100);
        memmove
                  (&this_ptr->field_0x8c0 + iVar1,&this_ptr->field_0x8c4 + iVar1,
                   (*(int *)&this_ptr->field_0x3bc - iVar4) * 4);
        memmove
                  (&this_ptr->field_0x8d4 + iVar1,&this_ptr->field_0x8d8 + iVar1,
                   (*(int *)&this_ptr->field_0x3bc - iVar4) * 4);
        if (*(int *)&this_ptr->field_0x3bc <= iVar4) {
          return;
        }
      }
      iVar4 = iVar4 + 1;
      pCVar5 = (CGame *)&pCVar5->field_0x4;
      local_18 = (void *)((int)local_18 + 0x100);
      local_1c = (void *)((int)local_1c + 0x100);
    } while (iVar4 < *(int *)&this_ptr->field_0x3bc);
  }
  return;
}
