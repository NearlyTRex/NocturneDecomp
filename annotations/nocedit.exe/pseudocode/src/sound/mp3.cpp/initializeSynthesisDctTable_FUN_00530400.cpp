// Name: sound_mp3.cpp_initializeSynthesisDctTable_FUN_00530400
// Address: 00530400
// Address Range: [[00530400, 005304e8]]
// Convention: __cdecl
// Signature: void __cdecl sound_mp3_cpp_initializeSynthesisDctTable_FUN_00530400(float *output_dct_table)

#include "nocturne.h"

void __cdecl sound_mp3_cpp_initializeSynthesisDctTable_FUN_00530400(float *output_dct_table)

{
  float *pfVar2;
  int iVar3;
  float *pfVar4;
  float10 fVar5;
  double local_38;
  double local_30;
  int local_28;
  float *local_1c;
  int local_18;
  double dVar1;
  
  local_28 = 0;
  local_1c = output_dct_table;
  do {
    iVar3 = 1;
    pfVar2 = local_1c;
    pfVar4 = local_1c;
    do {
      fVar5 = (float10)fcos((float10)iVar3 *
                            ((float10)local_28 * (float10)0.049087385211999998 + (float10)0.78539816339699997
                            ));
      *pfVar2 = (float)(fVar5 * (float10)1000000000);
      local_18 = iVar3;
      if (0.0 <= *pfVar2) {
        local_30 = (double)*pfVar2;
        modf((double)(*pfVar2 + (float)0.5),&local_30);
        dVar1 = local_30;
      }
      else {
        local_38 = (double)*pfVar2;
        modf((double)(*pfVar2 + (float)-0.5),&local_38);
        dVar1 = local_38;
      }
      *pfVar2 = (float)dVar1;
      pfVar2 = pfVar2 + 1;
      iVar3 = iVar3 + 2;
      *pfVar4 = *pfVar4 * (float)1.0000000000000001e-09;
      pfVar4 = pfVar4 + 1;
    } while (iVar3 != 0x41);
    local_28 = local_28 + 1;
    local_1c = local_1c + 0x20;
  } while (local_28 < 0x40);
  return;
}
