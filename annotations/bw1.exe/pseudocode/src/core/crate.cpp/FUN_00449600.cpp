// Name: core_crate.cpp_FUN_00449600
// Address: 00449600
// Address Range: [[00449600, 004496bb]]
// Convention: __cdecl
// Signature: void __cdecl core_crate_cpp_FUN_00449600(CCrate *this_ptr)

#include "nocturne.h"

void __cdecl core_crate_cpp_FUN_00449600(CCrate *this_ptr)

{
  CLocation *pCVar1;
  int iVar2;
  CBoundingBox3D *unaff_ESI;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  uint auStack_38 [4];
  uint local_28 [8];
  float fStack_8;
  
  bVar5 = 0;
  if ((this_ptr->base).lifecycle_state != ACTOR_CREATED) {
    return;
  }
  engine_console_cpp_FUN_00445430(g_CConsolePtr,"?%s exploding!\n" + 1,this_ptr);
  (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,unaff_ESI);
  pCVar1 = &(this_ptr->base).location;
  puVar3 = auStack_38;
  puVar4 = local_28;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  if ((CLocation *)&fStack_8 != pCVar1) {
    fStack_8 = (pCVar1->position).x;
  }
  core_fire_cpp_CFireEffect_createExplosion_FUN_004b6c60
            (0x01C57074,(CVector3f *)&fStack_8,32.0,1500.0,4.0);
  core_mission_cpp_FUN_0051b740(0x01D2C900,this_ptr,1);
  (this_ptr->base).lifecycle_state = ACTOR_DESTROYED;
  return;
}
