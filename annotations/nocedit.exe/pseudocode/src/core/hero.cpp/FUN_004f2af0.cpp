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
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  CDemonActor *in_stack_00000004;
  CVector3f CStack_44;
  CVector3f CStack_38;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  pCVar1 = (*in_stack_00000004->vtable->getBoundingBox)
                     (in_stack_00000004,(CBoundingBox3D *)&stack0xffffff9c);
  fStack_2c = (pCVar1->min).x + (pCVar1->max).x;
  fStack_28 = (pCVar1->min).y + (pCVar1->max).y;
  fStack_20 = fStack_2c * 0.5f;
  fStack_24 = (pCVar1->min).z + (pCVar1->max).z;
  CStack_38.y = fStack_28 * 0.5f;
  fStack_18 = fStack_24 * 0.5f;
  CStack_38.x = 0.0;
  CStack_38.z = 1.5;
  iVar3 = 0;
  fStack_1c = CStack_38.y;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(in_stack_00000004,&CStack_44,&CStack_38)
  ;
  fStack_14 = 1e+30;
  iVar5 = 0;
  for (iVar4 = 0; iVar4 < (int)g_CDemonSetPtr->actor_list_ptr; iVar4 = iVar4 + 1) {
    fVar2 = (float)(**(code **)(*(int *)(*(int *)(g_CDemonSetPtr->actor_list_data + iVar3) + 0x154)
                               + 0x58))();
    if ((0.0 <= fVar2) && (fVar2 < fStack_14)) {
      iVar5 = *(int *)(g_CDemonSetPtr->actor_list_data + iVar3);
      fStack_14 = fVar2;
    }
    iVar3 = iVar3 + 4;
  }
  if (iVar5 != 0) {
    iVar5 = (**(code **)(*(int *)(iVar5 + 0x154) + 0x5c))();
    if (iVar5 != 0) {
      in_stack_00000004[0x8d].create_event[0x48] = '\0';
      in_stack_00000004[0x8d].create_event[0x49] = '\0';
      in_stack_00000004[0x8d].create_event[0x4a] = '\0';
      in_stack_00000004[0x8d].create_event[0x4b] = '\0';
    }
    return 1;
  }
  return 0;
}
