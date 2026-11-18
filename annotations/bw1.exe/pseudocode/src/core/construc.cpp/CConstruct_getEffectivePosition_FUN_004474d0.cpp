// Name: core_construc.cpp_CConstruct_getEffectivePosition_FUN_004474d0
// Address: 004474d0
// Address Range: [[004474d0, 00447556]]
// Convention: __stack_esi
// Signature: CVector3f * __stack_esi core_construc_cpp_CConstruct_getEffectivePosition_FUN_004474d0(CConstruct *this_ptr,CVector3f *out_position)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

CVector3f * __stack_esi core_construc_cpp_CConstruct_getEffectivePosition_FUN_004474d0(CConstruct *this_ptr,CVector3f *out_position)

{
  float fVar1;
  float fVar2;
  CBodyPart *pCVar3;
  CLocation *pCVar4;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  if (this_ptr->blown_up != 0) {
    pCVar3 = this_ptr->boxes[this_ptr->pickable_box_index].body_part;
    fStack_1c = (this_ptr->base).base.base.location.position.x;
    fStack_18 = (this_ptr->base).base.base.location.position.y;
    fStack_14 = (this_ptr->base).base.base.location.position.z;
    if ((pCVar3 != (CBodyPart *)0x0) &&
       (pCVar4 = &(pCVar3->base).location, (CLocation *)&fStack_1c != pCVar4)) {
      fStack_1c = (pCVar4->position).x;
      fStack_18 = (pCVar3->base).location.position.y;
      fStack_14 = (pCVar3->base).location.position.z;
    }
    out_position->x = fStack_1c;
    out_position->y = fStack_18;
    out_position->z = fStack_14;
    return out_position;
  }
  fVar1 = (this_ptr->base).base.base.location.position.y;
  fVar2 = (this_ptr->base).base.base.location.position.z;
  out_position->x = (this_ptr->base).base.base.location.position.x;
  out_position->y = fVar1;
  out_position->z = fVar2;
  return out_position;
}
