// Name: sound_sndmain.cpp_FUN_005540d0
// Address: 005540d0
// Address Range: [[005540d0, 0055413c]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_FUN_005540d0(CSfxSlot *this_ptr)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_FUN_005540d0(CSfxSlot *this_ptr)

{
  CSfxSlot *pCVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  
  iVar3 = 0;
  if (0 < DAT_0060422c) {
    iVar2 = 0;
    pCVar1 = this_ptr;
    do {
      fVar4 = (float10)*(double *)&this_ptr->field_0x4 - (float10)*(double *)(&DAT_02cf3340 + iVar2)
      ;
      fVar5 = (float10)*(double *)&this_ptr->field_0xc - (float10)*(double *)(&DAT_02cf3380 + iVar2)
      ;
      fVar6 = (float10)*(double *)&this_ptr->field_0x14 -
              (float10)*(double *)(&DAT_02cf33c0 + iVar2);
      iVar2 = iVar2 + 8;
      iVar3 = iVar3 + 1;
      *(float *)&pCVar1->field_0x70 = (float)SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4);
      pCVar1 = (CSfxSlot *)&pCVar1->field_0x4;
    } while (iVar3 < DAT_0060422c);
  }
  return;
}
