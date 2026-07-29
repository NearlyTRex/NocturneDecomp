// Name: core_elephant.cpp_CElephantGun_process_FUN_004777a0
// Address: 004777a0
// Address Range: [[004777a0, 00477889]]
// Convention: __cdecl
// Signature: void __cdecl core_elephant_cpp_CElephantGun_process_FUN_004777a0(CElephantGun *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_elephant_cpp_CElephantGun_process_FUN_004777a0(CElephantGun *this_ptr,float delta_time)

{
  CVector3f *input_local_point;
  float in_stack_0000000c;
  CVector3f CStack_1c;
  
  if (this_ptr->muzzle_flash_active != 0) {
    _DAT_01c762f4 = 1;
    input_local_point =
         (CVector3f *)(*(((this_ptr->base).base.vtable._uc)->_uc).canWalk)((CCharacter *)this_ptr);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
              ((CDemonActor *)this_ptr,&CStack_1c,input_local_point);
    _DAT_01c762fc = 0;
    if (&stack0x00000000 != (byte *)0x1c74760) {
      _DAT_01c74744 = CStack_1c.x;
      _DAT_01c74748 = CStack_1c.y;
      _DAT_01c7474c = CStack_1c.z;
    }
    core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0
              ((CMatrix3x3f *)&DAT_01c74750,&(this_ptr->base).base.orient.vec);
    _DAT_01c74740 = this_ptr->projectile_distance;
    _DAT_01c74778 = 0x42e00000;
    core_dlight_cpp_CDemonLight_setVolumetricIntensity_FUN_00452080
              ((CDemonLight *)&DAT_01c74640,1.0);
    _DAT_01c76310 = 0;
    core_set_cpp_CDemonSet_addDynamicLight_FUN_0050a970(0x01E57284,(CDemonLight *)&DAT_01c74640);
  }
  this_ptr->muzzle_flash_active = 0;
  core_weapon_cpp_CWeapon_process_FUN_00554030(&this_ptr->base,in_stack_0000000c);
  return;
}
