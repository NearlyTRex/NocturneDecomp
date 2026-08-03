// Name: core_mimic.cpp_CMimic_setupCloth_FUN_004d5770
// Address: 004d5770
// Address Range: [[004d5770, 004d5858]]
// Convention: __cdecl
// Signature: void __cdecl core_mimic_cpp_CMimic_setupCloth_FUN_004d5770(CMimic *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_mimic_cpp_CMimic_setupCloth_FUN_004d5770(CMimic *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  CDemonActor *pCVar1;
  SMotion *motion_name;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  SClothVertex *pSVar5;
  byte bVar6;
  float frame_number;
  
  bVar6 = 0;
  this_ptr->attack_mode = 2;
  core_cloth_cpp_CCloth_setup_FUN_004359e0
            (&this_ptr->cloth,&(this_ptr->base).base.base.location.position,
             &(this_ptr->base).base.base.orient.vec,&(this_ptr->base).base.model);
  pCVar1 = core_actor_cpp_castToClassHash_FUN_0040d890
                     (*(CDemonActor **)(_DAT_01cae0e8 * 4 + 0x1cae0d8),
                      g_CGabriellaActorType_01c713e8.name_hash);
  if (pCVar1 != (CDemonActor *)0x0) {
    pcVar4 = pCVar1[0x184].create_event + 0x5c;
    pSVar5 = (this_ptr->cloth).vertices;
    for (uVar2 = (this_ptr->cloth).model.vertex_count * 0x47 & 0x3fffffff; uVar2 != 0;
        uVar2 = uVar2 - 1) {
      (pSVar5->position).x = *(float *)pcVar4;
      pcVar4 = pcVar4 + (uint)bVar6 * -8 + 4;
      pSVar5 = (SClothVertex *)((int)pSVar5 + (uint)bVar6 * -8 + 4);
    }
    for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(char *)&(pSVar5->position).x = *pcVar4;
      pcVar4 = pcVar4 + (uint)bVar6 * -2 + 1;
      pSVar5 = (SClothVertex *)((int)pSVar5 + (uint)bVar6 * -2 + 1);
    }
  }
  iVar3 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
  frame_number = *(float *)(iVar3 + 0x158);
  motion_name = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                          ((CMotionController *)(iVar3 + 0x150));
  this_ptr_00 = &(this_ptr->base).base.model;
  core_motion_cpp_CMotionController_jumpToMotionByName_FUN_004e1960
            (&this_ptr_00->motion_controller,motion_name->motion_name,frame_number);
  core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
            (&this_ptr_00->motion_controller,1,1);
  engine_console_cpp_CConsole_printf_FUN_0043ac60
            (g_CConsole_PTR_005ad350,"%s attacking hero\n",this_ptr);
  return;
}
