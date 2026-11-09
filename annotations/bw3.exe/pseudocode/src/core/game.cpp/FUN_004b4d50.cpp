// Name: core_game.cpp_FUN_004b4d50
// Address: 004b4d50
// Address Range: [[004b4d50, 004b4ed1]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_FUN_004b4d50(CGame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_FUN_004b4d50(CGame *this_ptr)

{
  int iVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  CGame *pCVar5;
  void *local_1c;
  void *local_18;
  
  fVar2 = *(float *)&this_ptr->field_0x434 - *(float *)&this_ptr->field_0x314;
  *(float *)&this_ptr->field_0x434 = fVar2;
  if (fVar2 < 0.0) {
    *(uint *)&this_ptr->field_0x434 = 0;
  }
  _DAT_01d22af4 = _DAT_01d22af4 - *(float *)&this_ptr->field_0x314;
  if (_DAT_01d22af4 < 0.0) {
    _DAT_01d22af4 = 0.0;
  }
  iVar4 = 0;
  if (0 < *(int *)&this_ptr->field_0x43c) {
    local_18 = &this_ptr->field_0x440;
    local_1c = &this_ptr->field_0x540;
    pCVar5 = this_ptr;
    do {
      while( true ) {
        iVar1 = iVar4 * 4;
        fVar2 = *(float *)&pCVar5->field_0x954 - *(float *)&this_ptr->field_0x314;
        *(float *)&pCVar5->field_0x954 = fVar2;
        if (0.0 < fVar2) break;
        iVar3 = *(int *)&this_ptr->field_0x43c + -1;
        *(int *)&this_ptr->field_0x43c = iVar3;
        memmove(local_18,local_1c,(iVar3 - iVar4) * 0x100);
        memmove
                  (&this_ptr->field_0x940 + iVar1,&this_ptr->field_0x944 + iVar1,
                   (*(int *)&this_ptr->field_0x43c - iVar4) * 4);
        memmove
                  (&this_ptr->field_0x954 + iVar1,&this_ptr->field_0x958 + iVar1,
                   (*(int *)&this_ptr->field_0x43c - iVar4) * 4);
        if (*(int *)&this_ptr->field_0x43c <= iVar4) {
          return;
        }
      }
      iVar4 = iVar4 + 1;
      pCVar5 = (CGame *)&pCVar5->field_0x4;
      local_18 = (void *)((int)local_18 + 0x100);
      local_1c = (void *)((int)local_1c + 0x100);
    } while (iVar4 < *(int *)&this_ptr->field_0x43c);
  }
  return;
}
