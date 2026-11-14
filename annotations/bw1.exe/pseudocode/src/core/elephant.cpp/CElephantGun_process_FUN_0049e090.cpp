// Name: core_elephant.cpp_CElephantGun_process_FUN_0049e090
// Address: 0049e090
// Address Range: [[0049e090, 0049e191]]
// Convention: __cdecl
// Signature: void __cdecl core_elephant_cpp_CElephantGun_process_FUN_0049e090(CElephantGun *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_elephant_cpp_CElephantGun_process_FUN_0049e090(CElephantGun *this_ptr,float delta_time)

{
  byte bVar1;
  float in_stack_0000000c;
  float afStackY_1020 [1015];
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_10;
  
  bVar1 = 0;
  if (this_ptr->muzzle_flash_active != 0) {
    g_CDemonLightInstance.light_enabled_flag = 1;
    (*(((this_ptr->base).base.vtable._uc)->_uc).isInvulnerable)((CCharacter *)this_ptr);
    *(uint *)(&stack0xffffffcc + (uint)bVar1 * -8) =
         *(uint *)(&stack0xffffffe8 + (uint)bVar1 * -8);
    *(uint *)(&stack0xffffffd0 + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
         *(uint *)(&stack0xffffffec + (uint)bVar1 * -8 + (uint)bVar1 * -8);
    core_actor_cpp_FUN_00408b40();
    fStack_28 = fStack_10;
    *(uint *)((int)&stack0xffffffdc + (uint)bVar1 * -8) =
         *(uint *)(&stack0xfffffff4 + (uint)bVar1 * -8);
    *(uint *)((int)&stack0xffffffe0 + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
         *(uint *)(&stack0xfffffff8 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
    g_CDemonLightInstance.volumetric_enabled = 0;
    if ((float *)&stack0x00000000 != &g_CDemonLightInstance.base.base.rotation_matrix.m[2].y) {
      g_CDemonLightInstance.base.base.position.f.x = fStack_28;
      g_CDemonLightInstance.base.base.position.f.y = fStack_24;
      g_CDemonLightInstance.base.base.position.f.z = fStack_20;
    }
    core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0
              (&g_CDemonLightInstance.base.base.rotation_matrix,&(this_ptr->base).base.orient.vec);
    g_CDemonLightInstance.base.max_distance = this_ptr->projectile_distance;
    g_CDemonLightInstance.base.base.focal_length = 112.0;
    core_dlight_cpp_CDemonLight_setVolumetricIntensity_FUN_00465da0(&g_CDemonLightInstance,1.0);
    g_CDemonLightInstance.antialiasing_enabled = 0;
    core_set_cpp_CDemonSet_addDynamicLight_FUN_005518e0(g_CDemonSetPtr,&g_CDemonLightInstance);
  }
  this_ptr->muzzle_flash_active = 0;
  core_weapon_cpp_CWeapon_process_FUN_005ad770(&this_ptr->base,in_stack_0000000c);
  return;
}
