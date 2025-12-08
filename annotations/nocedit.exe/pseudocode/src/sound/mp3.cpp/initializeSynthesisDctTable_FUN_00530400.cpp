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
  BADSPACEBASE *in_ESP;
  int iVar3;
  float *pfVar4;
  float10 fVar5;
  ulonglong *puVar6;
  ulonglong local_38;
  ulonglong local_30;
  int local_28;
  float *local_1c;
  int local_18;
  
  local_28 = 0;
  local_1c = output_dct_table;
  do {
    iVar3 = 1;
    pfVar2 = local_1c;
    pfVar4 = local_1c;
    do {
      puVar6 = &local_38;
      fVar5 = (float10)fcos((float10)iVar3 *
                            ((float10)local_28 * (float10)0.049087385211999998 + (float10)0.78539816339699997
                            ));
      *pfVar2 = (float)(fVar5 * (float10)1000000000);
      local_18 = iVar3;
      if (0.0 <= *pfVar2) {
        local_30 = (double)*pfVar2;
        crt_math_c_modf_FUN_00602102((double)(*pfVar2 + (float)0.5),(double *)&local_30)
        ;
        dVar1 = (double)CONCAT44 /* combine 2-byte values */((uint)local_30,local_38._4_4_);
        pfVar2 = extraout_EBX_00;
      }
      else {
        local_38 = (double)*pfVar2;
        crt_math_c_modf_FUN_00602102((double)(*pfVar2 + (float)-0.5),(double *)&local_38)
        ;
        dVar1 = (double)CONCAT44 /* combine 2-byte values */((uint)local_38,puVar6);
        pfVar2 = extraout_EBX;
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
