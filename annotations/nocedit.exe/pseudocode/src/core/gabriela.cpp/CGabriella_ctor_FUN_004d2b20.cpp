// Name: core_gabriela.cpp_CGabriella_ctor_FUN_004d2b20
// Address: 004d2b20
// Address Range: [[004d2b20, 004d2c37]]
// Convention: __cdecl
// Signature: CGabriella * __cdecl core_gabriela_cpp_CGabriella_ctor_FUN_004d2b20(CGabriella *this_ptr)

#include "nocturne.h"

CGabriella * __cdecl core_gabriela_cpp_CGabriella_ctor_FUN_004d2b20(CGabriella *this_ptr)

{
  float fVar1;
  CGabriella *pCVar2;
  CGabriella_ptr_130068 pCVar3;
  
  pCVar2 = (CGabriella *)core_hero_cpp_CHero_ctor_FUN_004f2340(&this_ptr->base);
  pCVar3 = core_cloth_cpp_CCloth_ctor_FUN_00438ba0(&pCVar2->coat_cloth);
  ADJ(pCVar3)->base.base.base.vtable._ub = &g_CGabriellaVTable;
  ADJ(pCVar3)->weapon_state_flags = 0;
  ADJ(pCVar3)->holster_blend = 0.0;
  ADJ(pCVar3)->draw_blend = 0.0;
  ADJ(pCVar3)->aim_blend = 0.0;
  ADJ(pCVar3)->aim_target = (CDemonActor *)0x0;
  ADJ(pCVar3)->light_aim_blend = 0.0;
  ADJ(pCVar3)->flashlight_angle = -0.5235988;
  ADJ(pCVar3)->fire_cooldown_timer = 0.0;
  ADJ(pCVar3)->aim_pitch = 0.0;
  ADJ(pCVar3)->target_aim_pitch = 0.0;
  ADJ(pCVar3)->aim_weight = 0.0;
  fVar1 = 10.0f;
  ADJ(pCVar3)->fire_state = 0;
  ADJ(pCVar3)->dynamite_charge_power = fVar1;
  ADJ(pCVar3)->left_clavicle_blend = 0.0;
  ADJ(pCVar3)->right_clavicle_blend = 0.0;
  ADJ(pCVar3)->aim_yaw = ADJ(pCVar3)->aim_pitch;
  ADJ(pCVar3)->target_aim_yaw = ADJ(pCVar3)->target_aim_pitch;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            (&ADJ(pCVar3)->base.base.model,"gabriela.dfm");
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (&(ADJ(pCVar3)->base.inventory.selected_weapon)->model,"gabgun.kfm");
  return ADJ(pCVar3);
}
