// Name: core_crate.cpp_CCrate_explode_FUN_0043cdb0
// Address: 0043cdb0
// Address Range: [[0043cdb0, 0043ce5b]]
// Convention: __cdecl
// Signature: void __cdecl core_crate_cpp_CCrate_explode_FUN_0043cdb0(CCrate *this_ptr)

#include "nocturne.h"

void __cdecl core_crate_cpp_CCrate_explode_FUN_0043cdb0(CCrate *this_ptr)

{
  CLocation *pCVar1;
  CBoundingBox3D CStack_28;
  CVector3f CStack_10;
  
  if ((this_ptr->base).lifecycle_state != ACTOR_CREATED) {
    return;
  }
  engine_console_cpp_CConsole_printf_FUN_0043ac60(PTR_DAT_005ad350,"%s exploding!\n",this_ptr);
  (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&CStack_28);
  pCVar1 = &(this_ptr->base).location;
  if ((CLocation *)&CStack_10 != pCVar1) {
    CStack_10.x = (pCVar1->position).x;
    CStack_10.y = (this_ptr->base).location.position.y;
    CStack_10.z = (this_ptr->base).location.position.z;
  }
  CStack_10.y = (CStack_28.max.y - CStack_28.min.y) + CStack_10.y;
  core_fire_cpp_FUN_0048c0d0(0x01C08D04,&CStack_10,32.0,1500.0,4.0);
  core_mission_cpp_FUN_004d9110(0x01CC9450,this_ptr,1);
  (this_ptr->base).lifecycle_state = ACTOR_DESTROYED;
  return;
}
