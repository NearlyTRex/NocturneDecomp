// Name: core_hero.cpp_CHero_tryInteract_FUN_004b4e90
// Address: 004b4e90
// Address Range: [[004b4e90, 004b4fd3]]
// Convention: __cdecl
// Signature: int __cdecl core_hero_cpp_CHero_tryInteract_FUN_004b4e90(CHero *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_hero_cpp_CHero_tryInteract_FUN_004b4e90(CHero *this_ptr)

{
  int iVar1;
  CBoundingBox3D *pCVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  CBoundingBox3D local_64;
  CVector3f CStack_4c;
  CVector3f CStack_40;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  
  pCVar2 = (*((this_ptr->base).base.vtable._ub)->getBoundingBox)((CDemonActor *)this_ptr,&local_64);
  fStack_34 = (pCVar2->min).x + (pCVar2->max).x;
  fStack_30 = (pCVar2->min).y + (pCVar2->max).y;
  fStack_28 = fStack_34 * _DAT_00585827;
  fStack_2c = (pCVar2->min).z + (pCVar2->max).z;
  CStack_40.y = fStack_30 * _DAT_00585827;
  fStack_20 = fStack_2c * _DAT_00585827;
  CStack_40.x = 0.0;
  CStack_40.z = 1.5;
  iVar3 = 0;
  fStack_24 = CStack_40.y;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
            ((CDemonActor *)this_ptr,&CStack_4c,&CStack_40);
  fStack_1c = 1e+30;
  iVar5 = 0;
  for (iVar4 = 0; iVar4 < *(int *)(0x01E57284 + 0x14cd6c); iVar4 = iVar4 + 1) {
    iVar1 = *(int *)(iVar3 + 0x14cd70 + 0x01E57284);
    fStack_18 = (float)(**(code **)(*(int *)(iVar1 + 0x14c) + 0x58))(iVar1,this_ptr,&CStack_4c);
    if ((0.0 <= fStack_18) && (fStack_18 < fStack_1c)) {
      iVar5 = *(int *)(iVar3 + 0x14cd70 + 0x01E57284);
      fStack_1c = fStack_18;
    }
    iVar3 = iVar3 + 4;
  }
  if (iVar5 != 0) {
    iVar5 = (**(code **)(*(int *)(iVar5 + 0x14c) + 0x5c))(iVar5);
    if (iVar5 != 0) {
      (this_ptr->player_input).action_state.fire = 0;
    }
    return 1;
  }
  return 0;
}
