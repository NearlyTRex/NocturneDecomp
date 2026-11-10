// Name: core_trash.cpp_CTrash_getBoundingBox_FUN_00577560
// Address: 00577560
// Address Range: [[00577560, 00577628]]
// Convention: __cdecl
// Signature: CBoundingBox3D * __cdecl core_trash_cpp_CTrash_getBoundingBox_FUN_00577560(CTrash *this_ptr,CBoundingBox3D *out_box)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

CBoundingBox3D * __cdecl core_trash_cpp_CTrash_getBoundingBox_FUN_00577560(CTrash *this_ptr,CBoundingBox3D *out_box)

{
  CKeyFramedModel *pCVar1;
  int iVar2;
  CBoundingBox3D *unaff_ESI;
  CBoundingBox3D *pCVar3;
  float *pfVar4;
  byte bVar5;
  float afStackY_100c [1007];
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  uint uStack_30;
  float fStack_2c;
  uint uStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  
  bVar5 = 0;
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20(&this_ptr->model);
  pCVar3 = pCVar1->frame_bounds;
  pfVar4 = &stack0xffffffb8;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pfVar4 = (pCVar3->min).x;
    pCVar3 = (CBoundingBox3D *)((int)pCVar3 + (uint)bVar5 * -8 + 4);
    pfVar4 = pfVar4 + (uint)bVar5 * -2 + 1;
  }
  fStack_2c = this_ptr->collision_radius;
  uStack_30 = 0;
  uStack_28 = 0;
  core_actor_cpp_FUN_00408d30(this_ptr,&stack0xffffffd0);
  fStack_24 = fStack_18;
  (&stack0xffffffe0)[(uint)bVar5 * 0xfffffffe] =
       (float)*(uint *)(&stack0xffffffec + (uint)bVar5 * -8);
  *(uint *)((int)&stack0xffffffe4 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
       *(uint *)(&stack0xfffffff0 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  fStack_48 = fStack_48 + fStack_24;
  fStack_44 = fStack_44 + fStack_20;
  fStack_40 = fStack_40 + fStack_1c;
  fStack_3c = fStack_3c + fStack_24;
  fStack_38 = fStack_38 + fStack_20;
  fStack_34 = fStack_34 + fStack_1c;
  pfVar4 = &stack0xffffffb8;
  pCVar3 = unaff_ESI;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    (pCVar3->min).x = *pfVar4;
    pfVar4 = pfVar4 + (uint)bVar5 * -2 + 1;
    pCVar3 = (CBoundingBox3D *)((int)pCVar3 + (uint)bVar5 * -8 + 4);
  }
  return unaff_ESI;
}
