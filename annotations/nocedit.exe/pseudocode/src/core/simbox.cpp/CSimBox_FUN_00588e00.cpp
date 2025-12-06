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
  CSimBox *pCVar2;
  CBoundingBox3D *pCVar3;
  float unaff_EBX;
  BADSPACEBASE *in_ESP;
  float unaff_ESI;
  float unaff_retaddr;
  float fStack00000008;
  float fStack0000000c;
  float fStack00000010;
  float fStack_10;
  float fStack_c;
  
  pCVar2 = this_ptr;
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
            ((CKeyFramedModelInstance *)this_ptr->field1_0x158);
  core_actor_cpp_CDemonActor_setup_FUN_00408bb0(&this_ptr->base_actor);
  pCVar3 = (*((this_ptr->base_actor).vtable)->getBoundingBox)
                     (&this_ptr->base_actor,(CBoundingBox3D *)&stack0xffffffc4);
  if ((CBoundingBox3D *)&fStack_10 != pCVar3) {
    fStack_10 = (pCVar3->min).x;
    fStack_c = (pCVar3->min).y;
    unaff_ESI = (pCVar3->min).z;
  }
  if ((CVector3f *)&stack0xfffffffc != &pCVar3->max) {
    unaff_EBX = (pCVar3->max).x;
    unaff_retaddr = (pCVar3->max).y;
    this_ptr = (CSimBox *)(pCVar3->max).z;
  }
  fStack00000008 = unaff_EBX - fStack_10;
  fStack0000000c = unaff_retaddr - fStack_c;
  fStack00000010 = (float)this_ptr - unaff_ESI;
  position = &(pCVar2->base_actor).location;
  core_box_cpp_CBox_setupCorners_FUN_0041dd20
            ((CBox *)(pCVar2->field1_0x158 + 0x200),&position->position,
             (CVector3f *)&(pCVar2->base_actor).orient,(CVector3f *)&stack0x00000008,
             *(float *)(pCVar2->field1_0x158 + 0x180));
  if ((CLocation *)(pCVar2->field1_0x158 + 0x45c) != position) {
    *(float *)(pCVar2->field1_0x158 + 0x45c) = (position->position).x;
    *(float *)(pCVar2->field1_0x158 + 0x460) = (pCVar2->base_actor).location.position.y;
    *(float *)(pCVar2->field1_0x158 + 0x464) = (pCVar2->base_actor).location.position.z;
  }
  pCVar1 = &(pCVar2->base_actor).orient;
  if ((COrientation *)(pCVar2->field1_0x158 + 0x468) != pCVar1) {
    *(float *)(pCVar2->field1_0x158 + 0x468) = pCVar1->pitch;
    *(float *)(pCVar2->field1_0x158 + 0x46c) = (pCVar2->base_actor).orient.bank;
    *(float *)(pCVar2->field1_0x158 + 0x470) = (pCVar2->base_actor).orient.heading;
  }
  if (*(int *)(pCVar2->field1_0x158 + 0x17c) != 1) {
    return;
  }
  pCVar2->field1_0x158[0x454] = '\0';
  pCVar2->field1_0x158[0x455] = '\0';
  pCVar2->field1_0x158[0x456] = '\0';
  pCVar2->field1_0x158[0x457] = '\0';
  return;
}
