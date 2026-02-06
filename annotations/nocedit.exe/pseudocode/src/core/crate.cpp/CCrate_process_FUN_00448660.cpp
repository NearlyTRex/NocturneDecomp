// Name: core_crate.cpp_CCrate_process_FUN_00448660
// Address: 00448660
// Address Range: [[00448660, 0044887d]]
// Convention: __cdecl
// Signature: void __cdecl core_crate_cpp_CCrate_process_FUN_00448660(CCrate *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_crate_cpp_CCrate_process_FUN_00448660(CCrate *this_ptr,float delta_time)

{
  CLocation *pCVar1;
  COrientation *pCVar2;
  CVector3f *pCVar3;
  CPlatform *pCVar4;
  COrientation *pCVar5;
  float unaff_retaddr;
  float local_c;
  
  if (this_ptr->carrier != (CDemonActor *)0x0) {
    this_ptr->last_platform = (CDemonActor *)0x0;
    return;
  }
  pCVar1 = &(this_ptr->base).location;
  pCVar3 = &(this_ptr->base).unk3;
  (pCVar1->position).x = pCVar3->x + (pCVar1->position).x;
  (this_ptr->base).location.position.y =
       (this_ptr->base).unk3.y + (this_ptr->base).location.position.y;
  (this_ptr->base).location.position.z =
       (this_ptr->base).unk3.z + (this_ptr->base).location.position.z;
  (this_ptr->base).unk3.z = 0.0;
  pCVar2 = &(this_ptr->base).orient;
  (this_ptr->base).unk3.y = (this_ptr->base).unk3.z;
  pCVar3->x = (this_ptr->base).unk3.y;
  pCVar3 = &(this_ptr->base).unk4;
  pCVar2->pitch = pCVar3->x + pCVar2->pitch;
  (this_ptr->base).orient.bank = (this_ptr->base).unk4.y + (this_ptr->base).orient.bank;
  (this_ptr->base).orient.heading = (this_ptr->base).unk4.z + (this_ptr->base).orient.heading;
  (this_ptr->base).unk4.z = 0.0;
  (this_ptr->base).unk4.y = (this_ptr->base).unk4.z;
  pCVar3->x = (this_ptr->base).unk4.y;
  if (((((*(float *)this_ptr->unk3 == (this_ptr->base).location.position.x) &&
        (*(float *)(this_ptr->unk3 + 4) == (this_ptr->base).location.position.y)) &&
       (*(float *)(this_ptr->unk3 + 8) == (this_ptr->base).location.position.z)) &&
      ((*(float *)(this_ptr->unk3 + 0xc) == (this_ptr->base).orient.pitch &&
       (*(float *)(this_ptr->unk3 + 0x10) == (this_ptr->base).orient.bank)))) &&
     (*(float *)(this_ptr->unk3 + 0x14) == (this_ptr->base).orient.heading)) {
    local_c = *(float *)(this_ptr->unk3 + 0x18);
  }
  else {
    unaff_retaddr =
         (*((this_ptr->base).vtable._ub)->cylinderGroundCheck)
                   (&this_ptr->base,(float)this_ptr->unk2,(CVector3f *)0x0);
    pCVar1 = &(this_ptr->base).location;
    if ((CLocation *)this_ptr->unk3 != pCVar1) {
      *(float *)this_ptr->unk3 = (pCVar1->position).x;
      *(float *)(this_ptr->unk3 + 4) = (this_ptr->base).location.position.y;
      *(float *)(this_ptr->unk3 + 8) = (this_ptr->base).location.position.z;
    }
    pCVar2 = &(this_ptr->base).orient;
    if ((COrientation *)(this_ptr->unk3 + 0xc) != pCVar2) {
      *(float *)(this_ptr->unk3 + 0xc) = pCVar2->pitch;
      *(float *)(this_ptr->unk3 + 0x10) = (this_ptr->base).orient.bank;
      *(float *)(this_ptr->unk3 + 0x14) = (this_ptr->base).orient.heading;
    }
    *(float *)(this_ptr->unk3 + 0x18) = unaff_retaddr;
  }
  if ((this_ptr->last_platform == (CDemonActor *)0x0) &&
     (pCVar4 = (this_ptr->base).standing_platform, pCVar4 != (CPlatform *)0x0)) {
    this_ptr->last_platform = &pCVar4->base;
  }
  pCVar4 = (CPlatform *)this_ptr->last_platform;
  if (pCVar4 != (CPlatform *)0x0) {
    (this_ptr->base).standing_platform = pCVar4;
    (this_ptr->base).location.position.x = (pCVar4->base).location.position.x;
    (this_ptr->base).location.position.y = (pCVar4->base).location.position.y;
    (this_ptr->base).location.position.z = (pCVar4->base).location.position.z;
    (this_ptr->base).location.area_id = (pCVar4->base).location.area_id;
    pCVar4 = (this_ptr->base).standing_platform;
    pCVar2 = &(this_ptr->base).orient;
    pCVar5 = &(pCVar4->base).orient;
    if (pCVar2 != pCVar5) {
      pCVar2->pitch = pCVar5->pitch;
      (this_ptr->base).orient.bank = (pCVar4->base).orient.bank;
      (this_ptr->base).orient.heading = (pCVar4->base).orient.heading;
    }
    pCVar4 = (this_ptr->base).standing_platform;
    (*((pCVar4->base).vtable._ub)->getBoundingBox)(&pCVar4->base,(CBoundingBox3D *)&stack0xffffffe8)
    ;
    (this_ptr->base).location.position.y =
         (unaff_retaddr - local_c) + (this_ptr->base).location.position.y;
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(&this_ptr->base);
    return;
  }
  (this_ptr->base).location.position.y = unaff_retaddr;
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(&this_ptr->base);
  return;
}
