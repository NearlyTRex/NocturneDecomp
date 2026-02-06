// Name: core_vessel.cpp_CCryptVessel_FUN_005e8fc0
// Address: 005e8fc0
// Address Range: [[005e8fc0, 005e8fcd]]
// Convention: __cdecl
// Signature: void __cdecl core_vessel_cpp_CCryptVessel_FUN_005e8fc0(CCryptVessel *this_ptr)

#include "nocturne.h"

void __cdecl core_vessel_cpp_CCryptVessel_FUN_005e8fc0(CCryptVessel *this_ptr)

{
  CLocation *pCVar1;
  COrientation *pCVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fStack_28;
  
  core_actor_cpp_CDemonActor_setup_FUN_00408bb0(&this_ptr->base);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(&this_ptr->model);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
            ((CKeyFramedModelInstance *)(this_ptr->unk3 + 0x2ac));
  (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,(CBoundingBox3D *)&fStack_28);
  iVar3 = *(int *)this_ptr->start_loc;
  this_ptr->unk2 = 0;
  if (iVar3 != 0) {
    pCVar1 = &(this_ptr->base).location;
    fVar4 = *(float *)(iVar3 + 0x20) - (pCVar1->position).x;
    fVar5 = *(float *)(iVar3 + 0x24) - (this_ptr->base).location.position.y;
    fVar6 = *(float *)(iVar3 + 0x28) - (this_ptr->base).location.position.z;
    if (SQRT(fVar6 * fVar6 + fVar4 * fVar4 + fVar5 * fVar5) < (float)0.5) {
      iVar3 = *(int *)this_ptr->start_loc;
      (pCVar1->position).x = *(float *)(iVar3 + 0x20);
      (this_ptr->base).location.position.y = *(float *)(iVar3 + 0x24);
      (this_ptr->base).location.position.z = *(float *)(iVar3 + 0x28);
      (this_ptr->base).location.area_id = *(int *)(iVar3 + 0x2c);
      iVar3 = *(int *)this_ptr->start_loc;
      pCVar2 = &(this_ptr->base).orient;
      if (pCVar2 != (COrientation *)(iVar3 + 0x30)) {
        pCVar2->pitch = *(float *)(iVar3 + 0x30);
        (this_ptr->base).orient.bank = *(float *)(iVar3 + 0x34);
        (this_ptr->base).orient.heading = *(float *)(iVar3 + 0x38);
      }
    }
  }
  this_ptr->unk3[0] = '\x01';
  this_ptr->unk3[1] = '\0';
  this_ptr->unk3[2] = '\0';
  this_ptr->unk3[3] = '\0';
  this_ptr->unk3[0x1ac] = '\0';
  this_ptr->unk3[0x1ad] = '\0';
  this_ptr->unk3[0x1ae] = '\0';
  this_ptr->unk3[0x1af] = '\0';
  this_ptr->unk3[0x1b8] = '\x01';
  this_ptr->unk3[0x1b9] = '\0';
  this_ptr->unk3[0x1ba] = '\0';
  this_ptr->unk3[0x1bb] = '\0';
  this_ptr->unk3[0x1b0] = '\0';
  this_ptr->unk3[0x1b1] = '\0';
  this_ptr->unk3[0x1b2] = '\0';
  this_ptr->unk3[0x1b3] = '\0';
  this_ptr->unk3[0x15c] = '\0';
  this_ptr->unk3[0x15d] = '\0';
  this_ptr->unk3[0x15e] = '\0';
  this_ptr->unk3[0x15f] = '?';
  this_ptr->unk3[0x160] = '\0';
  this_ptr->unk3[0x161] = '\0';
  this_ptr->unk3[0x162] = -0x80;
  this_ptr->unk3[0x163] = '?';
  this_ptr->unk3[0x164] = '\0';
  this_ptr->unk3[0x165] = '\0';
  this_ptr->unk3[0x166] = '\0';
  this_ptr->unk3[0x167] = '?';
  fStack_28 = 8.68452e-39;
  core_flame_cpp_CFlame_setup_FUN_004c9b90((CFlame *)(this_ptr->unk3 + 4));
  (this_ptr->base).is_transparent = 1;
  return;
}
