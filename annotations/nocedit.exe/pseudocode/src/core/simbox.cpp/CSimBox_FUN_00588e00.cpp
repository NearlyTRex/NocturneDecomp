// Name: core_simbox.cpp_CSimBox_FUN_00588e00
// Address: 00588e00
// Address Range: [[00588e00, 00588e1d]]
// Convention: __cdecl
// Signature: void core_simbox.cpp_CSimBox_FUN_00588e00(CSimBox * this_ptr)

#include "nocturne.h"

void __cdecl core_simbox_cpp_CSimBox_FUN_00588e00(CSimBox *this_ptr)

{
  CLocation *position;
  COrientation *pCVar1;
  CBoundingBox3D *pCVar2;
  CBoundingBox3D CStack_24;
  float fStack_c;
  
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
            ((CKeyFramedModelInstance *)this_ptr->field1_0x158);
  core_actor_cpp_CDemonActor_setup_FUN_00408bb0(&this_ptr->base_actor);
  pCVar2 = (*((this_ptr->base_actor).vtable)->getBoundingBox)
                     (&this_ptr->base_actor,(CBoundingBox3D *)&stack0xffffffbc);
  if (&CStack_24 != pCVar2) {
    CStack_24.min.x = (pCVar2->min).x;
    CStack_24.min.y = (pCVar2->min).y;
    CStack_24.min.z = (pCVar2->min).z;
  }
  if (&CStack_24.max != &pCVar2->max) {
    CStack_24.max.x = (pCVar2->max).x;
    CStack_24.max.y = (pCVar2->max).y;
    CStack_24.max.z = (pCVar2->max).z;
  }
  fStack_c = CStack_24.max.x - CStack_24.min.x;
  position = &(this_ptr->base_actor).location;
  core_box_cpp_CBox_setupCorners_FUN_0041dd20
            ((CBox *)(this_ptr->field1_0x158 + 0x200),&position->position,
             (CVector3f *)&(this_ptr->base_actor).orient,(CVector3f *)&fStack_c,
             *(float *)(this_ptr->field1_0x158 + 0x180));
  if ((CLocation *)(this_ptr->field1_0x158 + 0x45c) != position) {
    *(float *)(this_ptr->field1_0x158 + 0x45c) = (position->position).x;
    *(float *)(this_ptr->field1_0x158 + 0x460) = (this_ptr->base_actor).location.position.y;
    *(float *)(this_ptr->field1_0x158 + 0x464) = (this_ptr->base_actor).location.position.z;
  }
  pCVar1 = &(this_ptr->base_actor).orient;
  if ((COrientation *)(this_ptr->field1_0x158 + 0x468) != pCVar1) {
    *(float *)(this_ptr->field1_0x158 + 0x468) = pCVar1->pitch;
    *(float *)(this_ptr->field1_0x158 + 0x46c) = (this_ptr->base_actor).orient.bank;
    *(float *)(this_ptr->field1_0x158 + 0x470) = (this_ptr->base_actor).orient.heading;
  }
  if (*(int *)(this_ptr->field1_0x158 + 0x17c) != 1) {
    return;
  }
  this_ptr->field1_0x158[0x454] = '\0';
  this_ptr->field1_0x158[0x455] = '\0';
  this_ptr->field1_0x158[0x456] = '\0';
  this_ptr->field1_0x158[0x457] = '\0';
  return;
}
