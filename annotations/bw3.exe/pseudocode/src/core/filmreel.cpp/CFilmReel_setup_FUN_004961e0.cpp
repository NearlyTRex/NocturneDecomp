// Name: core_filmreel.cpp_CFilmReel_setup_FUN_004961e0
// Address: 004961e0
// Address Range: [[004961e0, 00496276]]
// Convention: __cdecl
// Signature: void __cdecl core_filmreel_cpp_CFilmReel_setup_FUN_004961e0(CFilmReel *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_filmreel_cpp_CFilmReel_setup_FUN_004961e0(CFilmReel *this_ptr)

{
  float fVar1;
  float fVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  CBoundingBox3D *in_stack_ffffffbc;
  float fStack_3c;
  float fStack_34;
  float fStack_30;
  float fStack_28;
  uint auStack_24 [6];
  
  bVar6 = 0;
  core_actor_cpp_CDemonActor_setup_FUN_00408890(&this_ptr->base);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00462580(&this_ptr->model);
  (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,in_stack_ffffffbc);
  puVar4 = auStack_24;
  puVar5 = (uint *)&stack0xffffffbc;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
    puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
  }
  fVar1 = (fStack_30 - fStack_3c) * (float)_DAT_005c03f3;
  fVar2 = (fStack_28 - fStack_34) * (float)_DAT_005c03f3;
  if (fVar1 < fVar2) {
    fVar2 = fVar1;
  }
  this_ptr->pickup_radius = fVar2;
  this_ptr->carrier = (CDemonActor *)0x0;
  return;
}
