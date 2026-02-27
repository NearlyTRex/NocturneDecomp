// Name: core_crate.cpp_CCrate_FUN_00448a70
// Address: 00448a70
// Address Range: [[00448a70, 00448b1b]]
// Convention: __cdecl
// Signature: void __cdecl core_crate_cpp_CCrate_FUN_00448a70(CCrate *this_ptr)

#include "nocturne.h"

void __cdecl core_crate_cpp_CCrate_FUN_00448a70(CCrate *this_ptr)

{
  CLocation *pCVar1;
  CBoundingBox3D CStack_28;
  CVector3f CStack_10;
  
  if ((this_ptr->base).was_created != 1) {
    return;
  }
  engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"%s exploding!\n",this_ptr);
  (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&CStack_28);
  pCVar1 = &(this_ptr->base).location;
  if ((CLocation *)&CStack_10 != pCVar1) {
    CStack_10.x = (pCVar1->position).x;
    CStack_10.y = (this_ptr->base).location.position.y;
    CStack_10.z = (this_ptr->base).location.position.z;
  }
  CStack_10.y = (CStack_28.max.y - CStack_28.min.y) + CStack_10.y;
  core_fire_cpp_CFireEffect_createExplosion_FUN_004c8c10
            (g_CFireEffectPtr,&CStack_10,32.0,0x44bb8000);
  core_mission_cpp_CDemonMission_markActorToDelete_FUN_005240a0
            (g_CDemonMissionPtr,&this_ptr->base,1);
  (this_ptr->base).was_created = 2;
  return;
}
