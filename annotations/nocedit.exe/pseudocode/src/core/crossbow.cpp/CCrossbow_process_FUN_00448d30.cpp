// Name: core_crossbow.cpp_CCrossbow_process_FUN_00448d30
// Address: 00448d30
// Address Range: [[00448d30, 00448df3]]
// Convention: __cdecl
// Signature: void core_crossbow.cpp_CCrossbow_process_FUN_00448d30(CCrossbow * this_ptr)

#include "nocturne.h"

void __cdecl core_crossbow_cpp_CCrossbow_process_FUN_00448d30(CCrossbow *this_ptr)

{
  CVector3f *pCVar1;
  BADSPACEBASE *in_ESP;
  char *pcStack_c;
  
  core_weapon_cpp_CWeapon_process_FUN_005ee110(&this_ptr->base_weapon);
  pCVar1 = (CVector3f *)
           (*(this_ptr->base_weapon).base_actor.vtable[1].renderOpaque)((CDemonActor *)this_ptr);
  pCVar1 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                     ((CDemonActor *)this_ptr,(CVector3f *)&pcStack_c,pCVar1);
  *(float *)(this_ptr->field1_0x578 + 0x24) = pCVar1->x;
  *(float *)(this_ptr->field1_0x578 + 0x28) = pCVar1->y;
  *(float *)(this_ptr->field1_0x578 + 0x2c) = pCVar1->z;
  if (((((this_ptr->base_weapon).weapon_state != 2) || ((this_ptr->base_weapon).ammo_count < 1)) ||
      ((this_ptr->base_weapon).ammo_type != 5)) ||
     (0.0 < *(float *)((this_ptr->base_weapon).field7_0x2f4 + 0xc))) {
    pcStack_c = this_ptr->field1_0x578 + 4;
    core_flame_cpp_FUN_004caa70();
    this_ptr->field1_0x578[0] = '\0';
    this_ptr->field1_0x578[1] = '\0';
    this_ptr->field1_0x578[2] = '\0';
    this_ptr->field1_0x578[3] = '\0';
  }
  else {
    this_ptr->field1_0x578[0] = '\x01';
    this_ptr->field1_0x578[1] = '\0';
    this_ptr->field1_0x578[2] = '\0';
    this_ptr->field1_0x578[3] = '\0';
  }
  pcStack_c = this_ptr->field1_0x578 + 4;
  core_flame_cpp_FUN_004c9c00();
  (this_ptr->base_weapon).base_actor.is_transparent = *(int *)this_ptr->field1_0x578;
  return;
}
