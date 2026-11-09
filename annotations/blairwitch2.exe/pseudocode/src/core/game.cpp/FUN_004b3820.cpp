// Name: core_game.cpp_FUN_004b3820
// Address: 004b3820
// Address Range: [[004b3820, 004b39a1]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_FUN_004b3820(CGame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_FUN_004b3820(CGame *this_ptr)

{
  int iVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  CGame *pCVar5;
  void *local_1c;
  void *local_18;
  
  fVar2 = *(float *)&this_ptr->field_0x3a4 - *(float *)&this_ptr->field_0x284;
  *(float *)&this_ptr->field_0x3a4 = fVar2;
  if (fVar2 < 0.0) {
    *(uint *)&this_ptr->field_0x3a4 = 0;
  }
  _DAT_01cb807c = _DAT_01cb807c - *(float *)&this_ptr->field_0x284;
  if (_DAT_01cb807c < 0.0) {
    _DAT_01cb807c = 0.0;
  }
  iVar4 = 0;
  if (0 < *(int *)&this_ptr->field_0x3ac) {
    local_18 = &this_ptr->field_0x3b0;
    local_1c = &this_ptr->field_0x4b0;
    pCVar5 = this_ptr;
    do {
      while( true ) {
        iVar1 = iVar4 * 4;
        fVar2 = *(float *)&pCVar5->field_0x8c4 - *(float *)&this_ptr->field_0x284;
        *(float *)&pCVar5->field_0x8c4 = fVar2;
        if (0.0 < fVar2) break;
        iVar3 = *(int *)&this_ptr->field_0x3ac + -1;
        *(int *)&this_ptr->field_0x3ac = iVar3;
        memmove(local_18,local_1c,(iVar3 - iVar4) * 0x100);
        memmove
                  (&this_ptr->field_0x8b0 + iVar1,&this_ptr->field_0x8b4 + iVar1,
                   (*(int *)&this_ptr->field_0x3ac - iVar4) * 4);
        memmove
                  (&this_ptr->field_0x8c4 + iVar1,&this_ptr->field_0x8c8 + iVar1,
                   (*(int *)&this_ptr->field_0x3ac - iVar4) * 4);
        if (*(int *)&this_ptr->field_0x3ac <= iVar4) {
          return;
        }
      }
      iVar4 = iVar4 + 1;
      pCVar5 = (CGame *)&pCVar5->field_0x4;
      local_18 = (void *)((int)local_18 + 0x100);
      local_1c = (void *)((int)local_1c + 0x100);
    } while (iVar4 < *(int *)&this_ptr->field_0x3ac);
  }
  return;
}
