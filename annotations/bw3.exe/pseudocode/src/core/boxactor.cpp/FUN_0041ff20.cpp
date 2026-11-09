// Name: core_boxactor.cpp_FUN_0041ff20
// Address: 0041ff20
// Address Range: [[0041ff20, 00420094]]
// Convention: __cdecl
// Signature: void __cdecl core_boxactor_cpp_FUN_0041ff20(CBoxActor *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_boxactor_cpp_FUN_0041ff20(CBoxActor *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  float afStackY_1058 [1000];
  CVector3f *pCVar5;
  uint auStack_a0 [6];
  uint local_88 [6];
  float local_70;
  float local_6c [2];
  byte auStack_64 [12];
  float local_58;
  float afStack_54 [4];
  float local_44;
  float local_40;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  
  bVar4 = 0;
  core_actor_cpp_FUN_00408bf0(this_ptr,ray_origin);
  afStack_54[2] = local_58;
  afStack_54[(uint)bVar4 * -2 + 3] = afStack_54[(uint)bVar4 * -2];
  pCVar5 = ray_direction;
  afStack_54[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
       afStack_54[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
  core_actor_cpp_FUN_00408b40(this_ptr,pCVar5);
  local_70 = local_40;
  *(float *)((int)local_6c + (uint)bVar4 * 0xfffffff8) = afStack_54[(uint)bVar4 * -2 + 6];
  *(float *)(auStack_64 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + -4) =
       afStack_54[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7];
  if (local_6c[1] * local_44 + local_70 * afStack_54[2] + local_6c[0] * afStack_54[3] < 0.0) {
    (**(code **)(*(int *)&this_ptr->field_0x154 + 0x1c))(this_ptr);
    puVar2 = local_88;
    puVar3 = auStack_a0;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
      puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
    }
    fStack_18 = (float)core_box_cpp_FUN_0041e220(auStack_a0,afStack_54 + 2,&local_70,auStack_64);
    if ((0.0 <= fStack_18) && (fStack_18 < 1.0)) {
      fStack_1c = (float)_DAT_005b7661 - fStack_18;
      fStack_28 = *(float *)ray_direction * fStack_1c;
      fStack_24 = *(float *)&ray_direction->field_0x4 * fStack_1c;
      fStack_20 = *(float *)&ray_direction->field_0x8 * fStack_1c;
      fStack_34 = *(float *)ray_direction * fStack_1c;
      afStack_54[(uint)bVar4 * -2 + 9] = afStack_54[(uint)bVar4 * -2 + 0xc];
      afStack_54[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10] =
           afStack_54[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0xd];
      *(float *)&this_ptr->field_0x20 = *(float *)&this_ptr->field_0x20 + fStack_34;
      *(float *)&this_ptr->field_0x24 = *(float *)&this_ptr->field_0x24 + fStack_30;
      *(float *)&this_ptr->field_0x28 = *(float *)&this_ptr->field_0x28 + fStack_2c;
      core_boxactor_cpp_FUN_0041f1e0(this_ptr);
      core_boxactor_cpp_FUN_004201a0(this_ptr);
      return;
    }
  }
  return;
}
