// Name: core_mimic.cpp_CMimic_setupCloth_FUN_00510530
// Address: 00510530
// Address Range: [[00510530, 00510618]]
// Convention: __cdecl
// Signature: void __cdecl core_mimic_cpp_CMimic_setupCloth_FUN_00510530(CMimic *this_ptr)

#include "nocturne.h"

void __cdecl core_mimic_cpp_CMimic_setupCloth_FUN_00510530(CMimic *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  CDemonActor *pCVar1;
  SMotion *motion_name;
  uint uVar2;
  int iVar3;
  CPlatform **ppCVar4;
  SClothVertex *pSVar5;
  byte bVar6;
  float frame_number;
  
  bVar6 = 0;
  this_ptr->attack_mode = 2;
  core_cloth_cpp_CCloth_setup_FUN_0043eea0
            (&this_ptr->cloth,&(this_ptr->base).base.base.location.position,
             &(this_ptr->base).base.base.orient.vec,&(this_ptr->base).base.model);
  pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c600
                     ((CDemonActor *)g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4],
                      g_CGabriellaClassInfo.name_hash);
  if (pCVar1 != (CDemonActor *)0x0) {
    ppCVar4 = &pCVar1[0x17f].standing_platform;
    pSVar5 = (this_ptr->cloth).vertices;
    for (uVar2 = (this_ptr->cloth).model.vertex_count * 0x47 & 0x3fffffff; uVar2 != 0;
        uVar2 = uVar2 - 1) {
      (pSVar5->position).x = (float)*ppCVar4;
      ppCVar4 = ppCVar4 + (uint)bVar6 * -2 + 1;
      pSVar5 = (SClothVertex *)((int)pSVar5 + (uint)bVar6 * -8 + 4);
    }
    for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(byte *)&(pSVar5->position).x = *(byte *)ppCVar4;
      ppCVar4 = (CPlatform **)((int)ppCVar4 + (uint)bVar6 * -2 + 1);
      pSVar5 = (SClothVertex *)((int)pSVar5 + (uint)bVar6 * -2 + 1);
    }
  }
  frame_number = (g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4]->base).model.base.current_frame_number;
  motion_name = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                          (&(g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4]->base).model.base);
  this_ptr_00 = &(this_ptr->base).base.model;
  core_motion_cpp_CMotionController_jumpToMotionByName_FUN_00524ae0
            (&this_ptr_00->base,motion_name->motion_name,frame_number);
  core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&this_ptr_00->base,1,1);
  engine_console_cpp_CConsole_printf_FUN_00445430(g_CConsolePtr,"%s attacking hero\n");
  return;
}
