// Name: core_mimic.cpp_CMimic_setupCloth_FUN_00520500
// Address: 00520500
// Address Range: [[00520500, 005205e8]]
// Convention: __cdecl
// Signature: void __cdecl core_mimic_cpp_CMimic_setupCloth_FUN_00520500(CMimic *this_ptr)

#include "nocturne.h"

void __cdecl core_mimic_cpp_CMimic_setupCloth_FUN_00520500(CMimic *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  CDemonActor *pCVar1;
  SMotion *motion_name;
  uint uVar2;
  int iVar3;
  int *piVar4;
  SClothVertex *pSVar5;
  byte bVar6;
  float frame_number;
  
  bVar6 = 0;
  this_ptr->attack_mode = 2;
  core_cloth_cpp_CCloth_setup_FUN_00439710
            (&this_ptr->cloth,&(this_ptr->base).base.base.location.position,
             &(this_ptr->base).base.base.orient.vec,&(this_ptr->base).base.model);
  pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c790
                     ((CDemonActor *)g_HeroActors[g_LocalHeroIndex],g_CGabriellaClassInfo.name_hash)
  ;
  if (pCVar1 != (CDemonActor *)0x0) {
    piVar4 = &pCVar1[0x1ba].is_transparent;
    pSVar5 = (this_ptr->cloth).vertices;
    for (uVar2 = (this_ptr->cloth).model.vertex_count * 0x47 & 0x3fffffff; uVar2 != 0;
        uVar2 = uVar2 - 1) {
      (pSVar5->position).x = (float)*piVar4;
      piVar4 = piVar4 + (uint)bVar6 * -2 + 1;
      pSVar5 = (SClothVertex *)((int)pSVar5 + (uint)bVar6 * -8 + 4);
    }
    for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(char *)&(pSVar5->position).x = (char)*piVar4;
      piVar4 = (int *)((int)piVar4 + (uint)bVar6 * -2 + 1);
      pSVar5 = (SClothVertex *)((int)pSVar5 + (uint)bVar6 * -2 + 1);
    }
  }
  frame_number = (g_HeroActors[g_LocalHeroIndex]->base).model.motion_controller.current_frame_number
  ;
  motion_name = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                          (&(g_HeroActors[g_LocalHeroIndex]->base).model.motion_controller);
  this_ptr_00 = &(this_ptr->base).base.model;
  core_motion_cpp_CMotionController_jumpToMotionByName_FUN_0052ddb0
            (&this_ptr_00->motion_controller,motion_name->motion_name,frame_number);
  core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
            (&this_ptr_00->motion_controller,1,1);
  engine_console_cpp_CConsole_printf_FUN_00441890
            (g_CConsolePtr,"%s attacking hero\n",this_ptr);
  return;
}
