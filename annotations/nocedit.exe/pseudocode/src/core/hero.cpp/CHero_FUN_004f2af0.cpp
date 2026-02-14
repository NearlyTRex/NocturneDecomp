// Name: core_hero.cpp_CHero_FUN_004f2af0
// Address: 004f2af0
// Address Range: [[004f2af0, 004f2c33]]
// Convention: __cdecl
// Signature: int __cdecl core_hero_cpp_CHero_FUN_004f2af0(CHero *this_ptr)

#include "nocturne.h"

int __cdecl core_hero_cpp_CHero_FUN_004f2af0(CHero *this_ptr)

{
  CBoundingBox3D *pCVar1;
  int iVar2;
  int iVar3;
  int iVar4;
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
  
  pCVar1 = (*((this_ptr->base).base.vtable._ub)->getBoundingBox)((CDemonActor *)this_ptr,&local_64);
  fStack_34 = (pCVar1->min).x + (pCVar1->max).x;
  fStack_30 = (pCVar1->min).y + (pCVar1->max).y;
  fStack_28 = fStack_34 * 0.5f;
  fStack_2c = (pCVar1->min).z + (pCVar1->max).z;
  CStack_40.y = fStack_30 * 0.5f;
  fStack_20 = fStack_2c * 0.5f;
  CStack_40.x = 0.0;
  CStack_40.z = 1.5;
  iVar2 = 0;
  fStack_24 = CStack_40.y;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            ((CDemonActor *)this_ptr,&CStack_4c,&CStack_40);
  fStack_1c = 1e+30;
  iVar4 = 0;
  for (iVar3 = 0; iVar3 < (int)g_CDemonSetPtr->actor_list_ptr; iVar3 = iVar3 + 1) {
    fStack_18 = (float)(**(code **)(*(int *)(*(int *)(g_CDemonSetPtr->actor_list_data + iVar2) +
                                            0x154) + 0x58))
                                 (*(int *)(g_CDemonSetPtr->actor_list_data + iVar2),this_ptr,
                                  &CStack_4c);
    if ((0.0 <= fStack_18) && (fStack_18 < fStack_1c)) {
      iVar4 = *(int *)(g_CDemonSetPtr->actor_list_data + iVar2);
      fStack_1c = fStack_18;
    }
    iVar2 = iVar2 + 4;
  }
  if (iVar4 != 0) {
    iVar4 = (**(code **)(*(int *)(iVar4 + 0x154) + 0x5c))(iVar4);
    if (iVar4 != 0) {
      (this_ptr->player_control).action_states[3] = 0;
    }
    return 1;
  }
  return 0;
}
