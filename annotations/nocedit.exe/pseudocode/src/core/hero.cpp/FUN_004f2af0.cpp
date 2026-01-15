// Name: core_hero.cpp_FUN_004f2af0
// Address: 004f2af0
// Address Range: [[004f2af0, 004f2c33]]
// Convention: unknown
// Signature: undefined core_hero.cpp_FUN_004f2af0()

#include "nocturne.h"

/* Signature: byte actors_hero_hero.cpp_FUN_004f2af0(uint param_1) */

uint core_hero_cpp_FUN_004f2af0(void)

{
  CBoundingBox3D *pCVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  CDemonActor *in_stack_00000004;
  CBoundingBox3D CStack_60;
  CVector3f CStack_48;
  CVector3f CStack_3c;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  pCVar1 = (*in_stack_00000004->vtable->getBoundingBox)(in_stack_00000004,&CStack_60);
  fStack_30 = (pCVar1->min).x + (pCVar1->max).x;
  fStack_2c = (pCVar1->min).y + (pCVar1->max).y;
  fStack_24 = fStack_30 * 0.5f;
  fStack_28 = (pCVar1->min).z + (pCVar1->max).z;
  CStack_3c.y = fStack_2c * 0.5f;
  fStack_1c = fStack_28 * 0.5f;
  CStack_3c.x = 0.0;
  CStack_3c.z = 1.5;
  iVar2 = 0;
  fStack_20 = CStack_3c.y;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(in_stack_00000004,&CStack_48,&CStack_3c)
  ;
  fStack_18 = 1e+30;
  iVar4 = 0;
  for (iVar3 = 0; iVar3 < (int)g_CDemonSetPtr->actor_list_ptr; iVar3 = iVar3 + 1) {
    fStack_14 = (float)(**(code **)(*(int *)(*(int *)(g_CDemonSetPtr->actor_list_data + iVar2) +
                                            0x154) + 0x58))();
    if ((0.0 <= fStack_14) && (fStack_14 < fStack_18)) {
      iVar4 = *(int *)(g_CDemonSetPtr->actor_list_data + iVar2);
      fStack_18 = fStack_14;
    }
    iVar2 = iVar2 + 4;
  }
  if (iVar4 != 0) {
    iVar4 = (**(code **)(*(int *)(iVar4 + 0x154) + 0x5c))();
    if (iVar4 != 0) {
      in_stack_00000004[0x8d].create_event[0x48] = '\0';
      in_stack_00000004[0x8d].create_event[0x49] = '\0';
      in_stack_00000004[0x8d].create_event[0x4a] = '\0';
      in_stack_00000004[0x8d].create_event[0x4b] = '\0';
    }
    return 1;
  }
  return 0;
}
