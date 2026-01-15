// Name: sound_mp3.cpp_initializeSynthesisDctTable_FUN_00530400
// Address: 00530400
// Address Range: [[00530400, 005304e8]]
// Convention: __cdecl
// Signature: void sound_mp3.cpp_initializeSynthesisDctTable_FUN_00530400(float * output_dct_table)

#include "nocturne.h"

void __cdecl sound_mp3_cpp_initializeSynthesisDctTable_FUN_00530400(float *output_dct_table)

{
  double dVar1;
  float *extraout_EBX;
  float *pfVar2;
  float *extraout_EBX_00;
  int iVar3;
  float *pfVar4;
  float10 fVar5;
  double dStack_34;
  double dStack_2c;
  int iStack_24;
  float *local_18;
  int iStack_14;
  
  iStack_24 = 0;
  local_18 = output_dct_table;
  do {
    iVar3 = 1;
    pfVar2 = local_18;
    pfVar4 = local_18;
    do {
      fVar5 = (float10)fcos((float10)iVar3 *
                            ((float10)iStack_24 * (float10)0.049087385211999998 +
                            (float10)0.78539816339699997));
      *pfVar2 = (float)(fVar5 * (float10)1000000000);
      iStack_14 = iVar3;
      if (0.0 <= *pfVar2) {
        dStack_2c = (double)*pfVar2;
        crt_math_c_modf_FUN_00602102((double)(*pfVar2 + (float)0.5),&dStack_2c);
        pfVar2 = extraout_EBX_00;
        dVar1 = dStack_2c;
      }
      else {
        dStack_34 = (double)*pfVar2;
        crt_math_c_modf_FUN_00602102((double)(*pfVar2 + (float)-0.5),&dStack_34);
        pfVar2 = extraout_EBX;
        dVar1 = dStack_34;
      }
      *pfVar2 = (float)dVar1;
      pfVar2 = pfVar2 + 1;
      iVar3 = iVar3 + 2;
      *pfVar4 = *pfVar4 * (float)1.0000000000000001e-09;
      pfVar4 = pfVar4 + 1;
    } while (iVar3 != 0x41);
    iStack_24 = iStack_24 + 1;
    local_18 = local_18 + 0x20;
  } while (iStack_24 < 0x40);
  return;
}
