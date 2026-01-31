// Name: core_boneguy.cpp_CBoneGuy_FUN_0041d8a0
// Address: 0041d8a0
// Address Range: [[0041d8a0, 0041d96d]]
// Convention: __cdecl
// Signature: void __cdecl core_boneguy_cpp_CBoneGuy_FUN_0041d8a0(CBoneGuy *this_ptr)

#include "nocturne.h"

void __cdecl core_boneguy_cpp_CBoneGuy_FUN_0041d8a0(CBoneGuy *this_ptr)

{
  int iVar1;
  CBoneGuy *pCVar2;
  CVector3f *pCVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
  float afStackY_1800 [1525];
  CQuaternion4f local_24;
  int local_14;
  
  bVar7 = 0;
  local_14 = 0;
  if (0 < this_ptr->box_count) {
    pCVar3 = &this_ptr->source_pos;
    pCVar2 = this_ptr;
    do {
      core_xform_cpp_eulerToQuaternion_FUN_005f7b20
                ((CVector3f *)(*(int *)pCVar2->unk2 + 0x30),&local_24);
      puVar5 = (uint *)((int)pCVar2 + (uint)bVar7 * -8 + 0xbf58);
      (pCVar2->box_list_dest_orient).w = local_24.w;
      puVar6 = puVar5 + (uint)bVar7 * -2 + 1;
      puVar4 = (uint *)((int)&local_24 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
      *puVar5 = *(uint *)((int)&local_24 + (uint)bVar7 * -8 + 4);
      *puVar6 = *puVar4;
      puVar6[(uint)bVar7 * -2 + 1] = puVar4[(uint)bVar7 * -2 + 1];
      *(uint *)(*(int *)pCVar2->unk2 + 0xf20) = 0;
      iVar1 = *(int *)pCVar2->unk2;
      if (pCVar3 != (CVector3f *)(iVar1 + 0x20)) {
        pCVar3->x = *(float *)(iVar1 + 0x20);
        pCVar3->y = *(float *)(iVar1 + 0x24);
        pCVar3->z = *(float *)(iVar1 + 0x28);
      }
      local_14 = local_14 + 1;
      pCVar3 = pCVar3 + 6;
      pCVar2 = (CBoneGuy *)((pCVar2->base).base.base.orient_matrix.m + 1);
    } while (local_14 < this_ptr->box_count);
  }
  this_ptr->blown_up = 2;
  this_ptr->param = 0.0;
  (*((this_ptr->base).base.base.vtable._ub)->playSound)
            ((CDemonActor *)this_ptr,"boneguy-comeback.wav");
  return;
}
