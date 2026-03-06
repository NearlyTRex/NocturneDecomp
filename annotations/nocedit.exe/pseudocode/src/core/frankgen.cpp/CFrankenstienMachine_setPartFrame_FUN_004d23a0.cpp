// Name: core_frankgen.cpp_CFrankenstienMachine_setPartFrame_FUN_004d23a0
// Address: 004d23a0
// Address Range: [[004d23a0, 004d2426]]
// Convention: __cdecl
// Signature: void __cdecl core_frankgen_cpp_CFrankenstienMachine_setPartFrame_FUN_004d23a0(CFrankenstienMachine *this_ptr,float start_frame,float end_frame)

#include "nocturne.h"

void __cdecl core_frankgen_cpp_CFrankenstienMachine_setPartFrame_FUN_004d23a0(CFrankenstienMachine *this_ptr,float start_frame,float end_frame)

{
  int iVar1;
  float fVar2;
  CKeyFramedModel *pCVar3;
  
  pCVar3 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(&this_ptr->bed_model);
  iVar1 = pCVar3->frame_count;
  fVar2 = ((float)iVar1 * (this_ptr->master_frame - start_frame)) / (end_frame - start_frame);
  this_ptr->part_frame = fVar2;
  if (fVar2 < 0.0) {
    this_ptr->part_frame = 0.0;
  }
  fVar2 = (float)(iVar1 + -1);
  if (this_ptr->part_frame <= fVar2) {
    return;
  }
  this_ptr->part_frame = fVar2;
  return;
}
