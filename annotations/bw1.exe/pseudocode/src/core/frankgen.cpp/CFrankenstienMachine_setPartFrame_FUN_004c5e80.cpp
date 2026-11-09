// Name: core_frankgen.cpp_CFrankenstienMachine_setPartFrame_FUN_004c5e80
// Address: 004c5e80
// Address Range: [[004c5e80, 004c5f06]]
// Convention: __cdecl
// Signature: void __cdecl core_frankgen_cpp_CFrankenstienMachine_setPartFrame_FUN_004c5e80(CFrankenstienMachine *this_ptr,float start_frame,float end_frame)

#include "nocturne.h"

void __cdecl core_frankgen_cpp_CFrankenstienMachine_setPartFrame_FUN_004c5e80(CFrankenstienMachine *this_ptr,float start_frame,float end_frame)

{
  int iVar1;
  float fVar2;
  CKeyFramedModel *pCVar3;
  
  pCVar3 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900
                     ((CKeyFramedModelInstance *)&this_ptr->field_0x184);
  iVar1 = *(int *)&pCVar3->field_0x100;
  fVar2 = ((float)iVar1 * (*(float *)&this_ptr->field_0x15c - start_frame)) /
          (end_frame - start_frame);
  *(float *)&this_ptr->field_0x180 = fVar2;
  if (fVar2 < 0.0) {
    *(uint *)&this_ptr->field_0x180 = 0;
  }
  fVar2 = (float)(iVar1 + -1);
  if (*(float *)&this_ptr->field_0x180 <= fVar2) {
    return;
  }
  *(float *)&this_ptr->field_0x180 = fVar2;
  return;
}
