// Name: core_mimic.cpp_CMimic_setupCloth_FUN_00510530
// Address: 00510530
// Address Range: [[00510530, 00510618]]
// Convention: __cdecl
// Signature: void __cdecl core_mimic_cpp_CMimic_setupCloth_FUN_00510530(CMimic *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_mimic_cpp_CMimic_setupCloth_FUN_00510530(CMimic *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  int iVar1;
  SMotion *motion_name;
  uint uVar2;
  float *pfVar3;
  SClothVertex *pSVar4;
  byte bVar5;
  float frame_number;
  
  bVar5 = 0;
  this_ptr->attack_mode = 2;
  core_cloth_cpp_FUN_0043eea0
            (&this_ptr->cloth,&(this_ptr->base).base.base.location.position,
             &(this_ptr->base).base.base.orient.vec,&(this_ptr->base).base.model);
  iVar1 = core_actor_cpp_castToClassHash_FUN_0040c600
                    (*(uint *)(_DAT_01d06ab4 * 4 + 0x1d06aa4),g_CGabriellaClassInfo.name_hash)
  ;
  if (iVar1 != 0) {
    pfVar3 = (float *)(iVar1 + 0x20384);
    pSVar4 = (this_ptr->cloth).vertices;
    for (uVar2 = (this_ptr->cloth).model.vertex_count * 0x47 & 0x3fffffff; uVar2 != 0;
        uVar2 = uVar2 - 1) {
      (pSVar4->position).x = *pfVar3;
      pfVar3 = pfVar3 + (uint)bVar5 * -2 + 1;
      pSVar4 = (SClothVertex *)((int)pSVar4 + (uint)bVar5 * -8 + 4);
    }
    for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(byte *)&(pSVar4->position).x = *(byte *)pfVar3;
      pfVar3 = (float *)((int)pfVar3 + (uint)bVar5 * -2 + 1);
      pSVar4 = (SClothVertex *)((int)pSVar4 + (uint)bVar5 * -2 + 1);
    }
  }
  iVar1 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
  frame_number = *(float *)(iVar1 + 0x160);
  motion_name = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                          ((CMotionController *)(iVar1 + 0x158));
  this_ptr_00 = &(this_ptr->base).base.model;
  core_motion_cpp_CMotionController_jumpToMotionByName_FUN_00524ae0
            (&this_ptr_00->base,motion_name->motion_name,frame_number);
  core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&this_ptr_00->base,1,1);
  engine_console_cpp_FUN_00445430(g_CConsolePtr,">@%s attacking hero\n" + 2,this_ptr);
  return;
}
