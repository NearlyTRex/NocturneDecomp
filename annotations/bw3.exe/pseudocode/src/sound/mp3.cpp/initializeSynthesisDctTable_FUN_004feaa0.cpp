// Name: sound_mp3.cpp_initializeSynthesisDctTable_FUN_004feaa0
// Address: 004feaa0
// Address Range: [[004feaa0, 004feb88]]
// Convention: __cdecl
// Signature: void __cdecl sound_mp3_cpp_initializeSynthesisDctTable_FUN_004feaa0(float *output_dct_table)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_mp3_cpp_initializeSynthesisDctTable_FUN_004feaa0(float *output_dct_table)

{
  double dVar1;
  float *pfVar2;
  int iVar3;
  float *pfVar4;
  float10 fVar5;
  double dStack_38;
  double dStack_30;
  int iStack_28;
  float *pfStack_1c;
  int iStack_18;
  
  iStack_28 = 0;
  pfStack_1c = output_dct_table;
  do {
    iVar3 = 1;
    pfVar2 = pfStack_1c;
    pfVar4 = pfStack_1c;
    do {
      fVar5 = (float10)fcos((float10)iVar3 *
                            ((float10)iStack_28 * (float10)_DAT_005ca067 + (float10)_DAT_005ca07f));
      *pfVar2 = (float)(fVar5 * (float10)_DAT_005ca06f);
      iStack_18 = iVar3;
      if (0.0 <= *pfVar2) {
        dStack_30 = (double)*pfVar2;
        modf((double)(*pfVar2 + (float)_DAT_005ca08f),&dStack_30);
        dVar1 = dStack_30;
      }
      else {
        dStack_38 = (double)*pfVar2;
        modf((double)(*pfVar2 + (float)_DAT_005ca087),&dStack_38);
        dVar1 = dStack_38;
      }
      *pfVar2 = (float)dVar1;
      pfVar2 = pfVar2 + 1;
      iVar3 = iVar3 + 2;
      *pfVar4 = *pfVar4 * (float)_DAT_005ca077;
      pfVar4 = pfVar4 + 1;
    } while (iVar3 != 0x41);
    iStack_28 = iStack_28 + 1;
    pfStack_1c = pfStack_1c + 0x20;
  } while (iStack_28 < 0x40);
  return;
}
