// Name: sound_sndmain.cpp_CSfxSlot_computeDistancesToSpeakers_FUN_0054e560
// Address: 0054e560
// Address Range: [[0054e560, 0054e5cc]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_CSfxSlot_computeDistancesToSpeakers_FUN_0054e560(CSfxSlot *this_ptr)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_CSfxSlot_computeDistancesToSpeakers_FUN_0054e560(CSfxSlot *this_ptr)

{
  CSfxSlot *pCVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  
  iVar3 = 0;
  if (0 < DAT_0061bc9c) {
    iVar2 = 0;
    pCVar1 = this_ptr;
    do {
      fVar4 = (float10)(this_ptr->options).position.x - (float10)*(double *)(&DAT_02648f40 + iVar2);
      fVar5 = (float10)(this_ptr->options).position.y - (float10)*(double *)(&DAT_02648f80 + iVar2);
      fVar6 = (float10)(this_ptr->options).position.z - (float10)*(double *)(&DAT_02648fc0 + iVar2);
      iVar2 = iVar2 + 8;
      iVar3 = iVar3 + 1;
      pCVar1->distance_to_speakers[0] = (float)SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4);
      pCVar1 = (CSfxSlot *)&(pCVar1->options).position;
    } while (iVar3 < DAT_0061bc9c);
  }
  return;
}
