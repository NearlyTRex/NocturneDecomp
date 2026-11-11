// Name: core_mimic.cpp_CMimic_setupCloth_FUN_004f17a0
// Address: 004f17a0
// Address Range: [[004f17a0, 004f1888]]
// Convention: __cdecl
// Signature: void __cdecl core_mimic_cpp_CMimic_setupCloth_FUN_004f17a0(CMimic *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_mimic_cpp_CMimic_setupCloth_FUN_004f17a0(CMimic *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  int iVar1;
  char *motion_name;
  uint uVar2;
  float *pfVar3;
  SClothVertex *pSVar4;
  byte bVar5;
  float frame_number;
  
  bVar5 = 0;
  this_ptr->attack_mode = 2;
  core_cloth_cpp_FUN_005ae680
            (&this_ptr->cloth,&(this_ptr->base).base.base.location.position,
             &(this_ptr->base).base.base.orient.vec,&(this_ptr->base).base.model);
  iVar1 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                    (*(uint *)(_DAT_01cedef4 * 4 + 0x1cedee4),g_CGabriellaClassInfo.name_hash)
  ;
  if (iVar1 != 0) {
    pfVar3 = (float *)(iVar1 + 0x25a18);
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
  iVar1 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
  frame_number = *(float *)(iVar1 + 700);
  motion_name = (char *)core_motion_cpp_FUN_005035c0(iVar1 + 0x2b4);
  this_ptr_00 = &(this_ptr->base).base.model;
  core_motion_cpp_CMotionController_jumpToMotionByName_FUN_00503950
            (&this_ptr_00->base,motion_name,frame_number);
  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&this_ptr_00->base,1,1);
  engine_console_cpp_FUN_00436710(g_CConsolePtr,">@%s attacking hero\n" + 2,this_ptr);
  return;
}
