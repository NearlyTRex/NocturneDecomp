// Name: sound_sndmain.cpp_FUN_00570c40
// Address: 00570c40
// Address Range: [[00570c40, 00570d49]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_FUN_00570c40(CSfxSlot *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_FUN_00570c40(CSfxSlot *this_ptr)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int extraout_ECX;
  int iVar4;
  CSfxSlot *pCVar5;
  int extraout_EDX;
  int iVar6;
  float10 fVar7;
  
  if (_DAT_02c807ec < 1) {
    _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
    _DAT_01d1d404 = 0xa69;
    core_main_c_FUN_005030e0("SfxSlot::kill - must be locked!");
  }
  iVar3 = DAT_006232ec;
  if (DAT_006232ec < 2) {
    *(uint *)&this_ptr->field_0xb0 = 0;
  }
  else if ((this_ptr->field_0x4c & 1) == 0) {
    fVar1 = (1.0 / _DAT_00605af8) * DAT_00623304;
    fVar2 = (float)DAT_006232f0;
    iVar4 = 99999;
    pCVar5 = this_ptr;
    if (0 < DAT_006232ec) {
      do {
        fVar7 = (float10)*(float *)&pCVar5->field_0x70 * (float10)(fVar2 * fVar1);
        round();
        iVar6 = (int)ROUND(fVar7);
        *(int *)(extraout_EDX + 0xb0) = iVar6;
        if (iVar6 < iVar4) {
          iVar4 = iVar6;
        }
        pCVar5 = (CSfxSlot *)(extraout_EDX + 4);
      } while (extraout_ECX + 1 < iVar3);
    }
    iVar6 = 0;
    if (0 < iVar3) {
      do {
        iVar6 = iVar6 + 1;
        *(int *)&this_ptr->field_0xb0 = *(int *)&this_ptr->field_0xb0 - iVar4;
        this_ptr = (CSfxSlot *)&this_ptr->field_0x4;
      } while (iVar6 < iVar3);
      DAT_006232ec = iVar3;
      return;
    }
  }
  else {
    iVar4 = 0;
    if (0 < DAT_006232ec) {
      do {
        iVar4 = iVar4 + 1;
        *(uint *)&this_ptr->field_0xb0 = 0;
        this_ptr = (CSfxSlot *)&this_ptr->field_0x4;
      } while (iVar4 < DAT_006232ec);
    }
  }
  DAT_006232ec = iVar3;
  return;
}
