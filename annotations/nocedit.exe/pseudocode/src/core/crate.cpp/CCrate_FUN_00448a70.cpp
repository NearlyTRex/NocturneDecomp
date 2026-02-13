// Name: core_crate.cpp_CCrate_FUN_00448a70
// Address: 00448a70
// Address Range: [[00448a70, 00448b1b]]
// Convention: __cdecl
// Signature: void __cdecl core_crate_cpp_CCrate_FUN_00448a70(CCrate *this_ptr)

#include "nocturne.h"

void __cdecl core_crate_cpp_CCrate_FUN_00448a70(CCrate *this_ptr)

{
  CLocation *pCVar1;
  float fStack_8;
  
  if ((this_ptr->base).was_created != 1) {
    return;
  }
  engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"%s exploding!\n",this_ptr);
  (*((this_ptr->base).vtable._ub)->getBoundingBox)
            (&this_ptr->base,(CBoundingBox3D *)&stack0xffffffd8);
  pCVar1 = &(this_ptr->base).location;
  if ((CLocation *)&fStack_8 != pCVar1) {
    fStack_8 = (pCVar1->position).x;
  }
  core_fire_cpp_CFireEffect_createExplosion_FUN_004c8c10(g_CFireEffectPtr,(CVector3f *)&fStack_8);
  core_mission_cpp_CDemonMission_markActorToDelete_FUN_005240a0
            (g_CDemonMissionPtr,&this_ptr->base,1);
  (this_ptr->base).was_created = 2;
  return;
}
