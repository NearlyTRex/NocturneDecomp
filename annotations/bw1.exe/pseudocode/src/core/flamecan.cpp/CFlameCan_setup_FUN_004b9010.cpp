// Name: core_flamecan.cpp_CFlameCan_setup_FUN_004b9010
// Address: 004b9010
// Address Range: [[004b9010, 004b9179]]
// Convention: __cdecl
// Signature: void __cdecl core_flamecan_cpp_CFlameCan_setup_FUN_004b9010(CFlameCan *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_flamecan_cpp_CFlameCan_setup_FUN_004b9010(CFlameCan *this_ptr)

{
  CVector3f *pCVar1;
  float fVar2;
  float fVar3;
  CDemonActor_vtable *pCVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  byte bVar8;
  float afStackY_1028 [999];
  CBoundingBox3D *in_stack_ffffff78;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  uint uStack_30;
  uint uStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  uint uStack_18;
  uint uStack_14;
  
  bVar8 = 0;
  core_actor_cpp_CDemonActor_setup_FUN_00408850(&this_ptr->base);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_004688e0(&this_ptr->model);
  pCVar4 = (this_ptr->base).vtable._ub;
  (this_ptr->flame).flame_state = 0;
  (*pCVar4->getBoundingBox)(&this_ptr->base,in_stack_ffffff78);
  puVar6 = (uint *)&stack0xffffffa8;
  puVar7 = (uint *)&stack0xffffff88;
  for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
    puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
  }
  (this_ptr->flame).base.location.position.x = (this_ptr->base).location.position.x;
  (this_ptr->flame).base.location.position.y = (this_ptr->base).location.position.y;
  (this_ptr->flame).base.location.position.z = (this_ptr->base).location.position.z;
  fStack_28 = fStack_64 - fStack_70;
  (this_ptr->flame).base.location.area_id = (this_ptr->base).location.area_id;
  fStack_20 = fStack_5c - fStack_68;
  fStack_24 = fStack_60 - fStack_6c;
  (this_ptr->flame).base.location.position.y =
       (this_ptr->flame).base.location.position.y + (fStack_60 - fStack_6c);
  fStack_34 = fStack_64 - fStack_70;
  (&stack0xffffffc4)[(uint)bVar8 * -2 + 3] = (&stack0xffffffc4)[(uint)bVar8 * -2 + 6];
  (&stack0xffffffc4)[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
       (&stack0xffffffc4)[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7];
  pCVar1 = &(this_ptr->flame).flame_size;
  fStack_1c = fStack_34;
  uStack_18 = uStack_30;
  uStack_14 = uStack_2c;
  fStack_40 = fStack_34;
  (&stack0xffffffc4)[(uint)bVar8 * 0xfffffffe] = (&stack0xffffffc4)[(uint)bVar8 * -2 + 9];
  (&stack0xffffffc4)[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
       (&stack0xffffffc4)[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 10];
  if (pCVar1 != (CVector3f *)&stack0xffffffc0) {
    pCVar1->x = fStack_40;
    (this_ptr->flame).flame_size.y = fStack_3c;
    (this_ptr->flame).flame_size.z = fStack_38;
  }
  fVar2 = (this_ptr->flame).flame_size.x;
  (this_ptr->flame).which_flame = FLAME_TYPE_TORCH;
  fVar2 = fVar2 * (float)_DAT_005df797;
  fVar3 = (this_ptr->flame).flame_size.y;
  (this_ptr->flame).globe_scalar = 0.0;
  if (fVar3 < fVar2) {
    (this_ptr->flame).flame_size.y = fVar2;
  }
  this_ptr->is_visible = 0;
  (this_ptr->base).is_transparent = 1;
  return;
}
