// Name: core_shotgun.cpp_CShotgun_process_FUN_00561650
// Address: 00561650
// Address Range: [[00561650, 00561751]]
// Convention: __cdecl
// Signature: void __cdecl core_shotgun_cpp_CShotgun_process_FUN_00561650(CShotgun *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_shotgun_cpp_CShotgun_process_FUN_00561650(CShotgun *this_ptr,float delta_time)

{
  byte bVar1;
  float in_stack_0000000c;
  float afStackY_1020 [1015];
  CVector3f *input_local_point;
  CVector3f CStack_34;
  float fStack_28;
  float afStack_24 [5];
  float fStack_10;
  
  bVar1 = 0;
  if (this_ptr->muzzle_flash_active != 0) {
    g_CDemonLightInstance.light_enabled_flag = 1;
    (*(((this_ptr->base).base.vtable._uc)->_uc).isInvulnerable)((CCharacter *)this_ptr);
    input_local_point = &CStack_34;
    *(float *)((int)&CStack_34 + (uint)bVar1 * -8) = afStack_24[(uint)bVar1 * -2 + 3];
    *(float *)((int)&CStack_34 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 4) =
         afStack_24[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 4];
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40
              ((CDemonActor *)this_ptr,input_local_point,(CVector3f *)(afStack_24 + 5));
    fStack_28 = fStack_10;
    afStack_24[(uint)bVar1 * -2] = afStack_24[(uint)bVar1 * -2 + 6];
    afStack_24[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 1] =
         *(float *)(&stack0xfffffff8 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
    g_CDemonLightInstance.volumetric_enabled = 0;
    if ((float *)&stack0x00000000 != &g_CDemonLightInstance.base.base.rotation_matrix.m[2].y) {
      g_CDemonLightInstance.base.base.position.f.x = fStack_28;
      g_CDemonLightInstance.base.base.position.f.y = afStack_24[0];
      g_CDemonLightInstance.base.base.position.f.z = afStack_24[1];
    }
    core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0
              (&g_CDemonLightInstance.base.base.rotation_matrix,&(this_ptr->base).base.orient.vec);
    g_CDemonLightInstance.base.max_distance = this_ptr->muzzle_flash_distance;
    g_CDemonLightInstance.base.base.focal_length = 112.0;
    core_dlight_cpp_CDemonLight_setVolumetricIntensity_FUN_00465da0(&g_CDemonLightInstance,1.0);
    g_CDemonLightInstance.antialiasing_enabled = 0;
    core_set_cpp_CDemonSet_addDynamicLight_FUN_005518e0(g_CDemonSetPtr,&g_CDemonLightInstance);
  }
  this_ptr->muzzle_flash_active = 0;
  core_weapon_cpp_CWeapon_process_FUN_005ad770(&this_ptr->base,in_stack_0000000c);
  return;
}
