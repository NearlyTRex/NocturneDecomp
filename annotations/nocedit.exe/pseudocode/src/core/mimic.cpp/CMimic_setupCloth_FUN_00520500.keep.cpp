// Name: core_mimic.cpp_CMimic_setupCloth_FUN_00520500
// Address: 00520500
// MANUAL RECONSTRUCTION
// Address Range: [[00520500, 005205e8]]
// Convention: __cdecl
// Signature: void __cdecl core_mimic_cpp_CMimic_setupCloth_FUN_00520500(CMimic *this_ptr)

#include "nocturne.h"

void __cdecl core_mimic_cpp_CMimic_setupCloth_FUN_00520500(CMimic *this_ptr)

{
  CDeformableModelInstance *this_ptr_01;
  CGabriella *pCVar1;
  SMotion *motion_name;
  float frame_number;
  CHero *mirror_hero;

#if NOCTURNE_AUTHENTIC_NETPLAY
  mirror_hero = g_HeroActors[g_LocalHeroIndex];
#else
  mirror_hero = nocturne_net_sim_mimic_hero();
  if (mirror_hero == (CHero *)0x0) {
    return;
  }
#endif
  this_ptr->attack_mode = 2;
  core_cloth_cpp_CCloth_setup_FUN_00439710
            (&this_ptr->cloth,&(this_ptr->base).base.base.location.position,
             &(this_ptr->base).base.base.orient.vec,&(this_ptr->base).base.model);
  pCVar1 = (CGabriella *)
           core_actor_cpp_castToClassHash_FUN_0040c790
                     ((CDemonActor *)mirror_hero,g_CGabriellaClassInfo.name_hash);
  if (pCVar1 != (CGabriella *)0x0) {
    memcpy((this_ptr->cloth).vertices,(pCVar1->coat_cloth).vertices,
           (this_ptr->cloth).model.vertex_count * sizeof(SClothVertex));
  }
  frame_number = (mirror_hero->base).model.motion_controller.current_frame_number;
  motion_name = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                          (&(mirror_hero->base).model.motion_controller);
  this_ptr_01 = &(this_ptr->base).base.model;
  core_motion_cpp_CMotionController_jumpToMotionByName_FUN_0052ddb0
            (&this_ptr_01->motion_controller,motion_name->motion_name,frame_number);
  core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
            (&this_ptr_01->motion_controller,1,1);
  engine_console_cpp_CConsole_printf_FUN_00441890
            (g_CConsolePtr,"%s attacking hero\n",this_ptr->base.base.base.actor_name);
  return;
}
