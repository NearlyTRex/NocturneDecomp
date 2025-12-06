// Name: core_frankgen.cpp_FUN_004d20f0
// Address: 004d20f0
// Address Range: [[004d20f0, 004d2165]]
// Convention: unknown
// Signature: undefined core_frankgen.cpp_FUN_004d20f0()

#include "nocturne.h"

/* Signature: byte actors_other_frankgen.cpp_FUN_004d20f0(uint param_1, uint
   param_2) */

float * core_frankgen_cpp_FUN_004d20f0
                  (uint param_1,uint param_2,uint param_3,uint param_4,
                  int param_5,float *param_6)

{
  CKeyFramedModel *pCVar1;
  CVector3f *pCVar2;
  double dVar3;
  int unaff_retaddr;
  
  dVar3 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(param_2,param_5 + 0x184));
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(SUB84 /* extract 2-byte value */(dVar3,0));
  pCVar2 = pCVar1->frame_bounds + unaff_retaddr * 2;
  *param_6 = pCVar2->x;
  param_6[1] = pCVar2->y;
  param_6[2] = pCVar2->z;
  param_6[3] = pCVar2[1].x;
  param_6[4] = pCVar2[1].y;
  param_6[5] = pCVar2[1].z;
  return param_6;
}
