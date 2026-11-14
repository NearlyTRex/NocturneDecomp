// Name: sound_sndmain.cpp_CSfxSlot_computeDistancesToSpeakers_FUN_005540d0
// Address: 005540d0
// Address Range: [[005540d0, 0055413c]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_CSfxSlot_computeDistancesToSpeakers_FUN_005540d0(CSfxSlot *this_ptr)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_CSfxSlot_computeDistancesToSpeakers_FUN_005540d0(CSfxSlot *this_ptr)

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
      fVar4 = (float10)(this_ptr->options).position.x - (float10)*(double *)(&DAT_02cf3340 + iVar2);
      fVar5 = (float10)(this_ptr->options).position.y - (float10)*(double *)(&DAT_02cf3380 + iVar2);
      fVar6 = (float10)(this_ptr->options).position.z - (float10)*(double *)(&DAT_02cf33c0 + iVar2);
      iVar2 = iVar2 + 8;
      iVar3 = iVar3 + 1;
      pCVar1->distance_to_speakers[0] = (float)SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4);
      pCVar1 = (CSfxSlot *)&(pCVar1->options).position;
    } while (iVar3 < DAT_0060422c);
  }
  return;
}
