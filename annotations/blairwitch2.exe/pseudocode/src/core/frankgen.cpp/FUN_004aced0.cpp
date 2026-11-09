// Name: core_frankgen.cpp_FUN_004aced0
// Address: 004aced0
// Address Range: [[004aced0, 004acf56]]
// Convention: __cdecl
// Signature: void __cdecl core_frankgen_cpp_FUN_004aced0(CFrankenstienMachine *this_ptr,float start_frame,float end_frame)

#include "nocturne.h"

void __cdecl core_frankgen_cpp_FUN_004aced0(CFrankenstienMachine *this_ptr,float start_frame,float end_frame)

{
  int iVar1;
  float fVar2;
  CKeyFramedModel *pCVar3;
  
  pCVar3 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20
                     ((CKeyFramedModelInstance *)&this_ptr->field_0x2e0);
  iVar1 = *(int *)&pCVar3->field_0x100;
  fVar2 = ((float)iVar1 * (*(float *)&this_ptr->field_0x2b8 - start_frame)) /
          (end_frame - start_frame);
  *(float *)&this_ptr->field_0x2dc = fVar2;
  if (fVar2 < 0.0) {
    *(uint *)&this_ptr->field_0x2dc = 0;
  }
  fVar2 = (float)(iVar1 + -1);
  if (*(float *)&this_ptr->field_0x2dc <= fVar2) {
    return;
  }
  *(float *)&this_ptr->field_0x2dc = fVar2;
  return;
}
