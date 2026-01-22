// Name: sound_mp3.cpp_initializeSynthesisDctTable_FUN_00530400
// Address: 00530400
// Address Range: [[00530400, 005304e8]]
// Convention: __cdecl
// Signature: void sound_mp3.cpp_initializeSynthesisDctTable_FUN_00530400(float * output_dct_table)

#include "nocturne.h"

void __cdecl sound_mp3_cpp_initializeSynthesisDctTable_FUN_00530400(float *output_dct_table)

{
  double dVar1;
  double dVar2;
  float *extraout_EBX;
  float *pfVar3;
  float *extraout_EBX_00;
  int iVar4;
  float *pfVar5;
  float10 fVar6;
  ulonglong *puVar7;
  ulonglong local_38;
  ulonglong local_30;
  int local_28;
  int iStack_20;
  float *local_1c;
  int local_18;
  
  local_28 = 0;
  local_1c = output_dct_table;
  do {
    dVar2 = (double)CONCAT44(local_30._4_4_,(uint)local_30);
    iVar4 = 1;
    pfVar3 = local_1c;
    pfVar5 = local_1c;
    do {
      puVar7 = &local_38;
      fVar6 = (float10)fcos((float10)iVar4 *
                            ((float10)local_28 * (float10)0.049087385211999998 + (float10)0.78539816339699997
                            ));
      *pfVar3 = (float)(fVar6 * (float10)1000000000);
      local_18 = iVar4;
      if (0.0 <= *pfVar3) {
        local_30 = (double)*pfVar3;
        crt_math_c_modf_FUN_00602102((double)(*pfVar3 + (float)0.5),(double *)&local_30)
        ;
        dVar1 = (double)CONCAT44((uint)local_30,local_38._4_4_);
        pfVar3 = extraout_EBX_00;
        dVar2 = local_30;
      }
      else {
        local_38 = (double)*pfVar3;
        local_30 = dVar2;
        crt_math_c_modf_FUN_00602102((double)(*pfVar3 + (float)-0.5),(double *)&local_38)
        ;
        dVar1 = (double)CONCAT44((uint)local_38,puVar7);
        pfVar3 = extraout_EBX;
        dVar2 = local_30;
      }
      local_30._4_4_ = (int)((ulonglong)dVar2 >> 0x20);
      local_30._0_4_ = SUB84(dVar2,0);
      *pfVar3 = (float)dVar1;
      pfVar3 = pfVar3 + 1;
      iVar4 = iVar4 + 2;
      *pfVar5 = *pfVar5 * (float)1.0000000000000001e-09;
      pfVar5 = pfVar5 + 1;
    } while (iVar4 != 0x41);
    local_30._4_4_ = local_30._4_4_ + 1;
    iStack_20 = iStack_20 + 0x80;
  } while (local_30._4_4_ < 0x40);
  return;
}
