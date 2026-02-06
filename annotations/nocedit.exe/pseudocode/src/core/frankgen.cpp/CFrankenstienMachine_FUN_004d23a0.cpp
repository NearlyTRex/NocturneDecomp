// Name: core_frankgen.cpp_CFrankenstienMachine_FUN_004d23a0
// Address: 004d23a0
// Address Range: [[004d23a0, 004d2426]]
// Convention: __cdecl
// Signature: void __cdecl core_frankgen_cpp_CFrankenstienMachine_FUN_004d23a0(CFrankenstienMachine *this_ptr)

#include "nocturne.h"

void __cdecl core_frankgen_cpp_CFrankenstienMachine_FUN_004d23a0(CFrankenstienMachine *this_ptr)

{
  int iVar1;
  float fVar2;
  CKeyFramedModel *pCVar3;
  float in_stack_00000008;
  float in_stack_0000000c;
  
  pCVar3 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(&this_ptr->bed_model);
  iVar1 = pCVar3->frame_count;
  fVar2 = ((float)iVar1 * (this_ptr->master_frame - in_stack_00000008)) /
          (in_stack_0000000c - in_stack_00000008);
  this_ptr->unk1 = fVar2;
  if (fVar2 < 0.0) {
    this_ptr->unk1 = 0.0;
  }
  fVar2 = (float)(iVar1 + -1);
  if (this_ptr->unk1 <= fVar2) {
    return;
  }
  this_ptr->unk1 = fVar2;
  return;
}
