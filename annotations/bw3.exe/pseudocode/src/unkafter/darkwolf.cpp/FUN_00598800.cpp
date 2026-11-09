// Name: unkafter_darkwolf.cpp_FUN_00598800
// Address: 00598800
// Address Range: [[00598800, 005989d6]]
// Convention: unknown
// Signature: void unkafter_darkwolf_cpp_FUN_00598800(CEnemy *param_1)

#include "nocturne.h"

void unkafter_darkwolf_cpp_FUN_00598800(CEnemy *param_1)

{
  byte *this_ptr;
  byte *this_ptr_00;
  char cVar1;
  int iVar2;
  CMotionList *this_ptr_01;
  char *pcVar3;
  char *pcVar4;
  
  core_enemy_cpp_CEnemy_setup_FUN_00489110(param_1);
  core_skeleton_cpp_FUN_0054e6b0((CDeformableModelInstance *)&param_1->field_0x158);
  core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0
            ((CDeformableModelInstance *)&param_1->field_0x158);
  iVar2 = core_actor_cpp_createActorByName_FUN_0040c4f0("CTawiscara");
  *(int *)&param_1[1].field_0xc = iVar2;
  core_skeleton_cpp_FUN_0054eae0(iVar2 + 0x158,"wolfbrn.dfm");
  if (*(int *)&param_1->field_0x27a8 != 0) {
    *(uint *)&param_1->field_0xfc = 1;
  }
  pcVar3 = "tawiscara";
  pcVar4 = *(char **)&param_1[1].field_0xc;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  iVar2 = *(int *)&param_1[1].field_0xc;
  *(uint *)(iVar2 + 0x20) = *(uint *)&param_1->field_0x20;
  *(uint *)(iVar2 + 0x24) = *(uint *)&param_1->field_0x24;
  *(uint *)(iVar2 + 0x28) = *(uint *)&param_1->field_0x28;
  *(uint *)(iVar2 + 0x2c) = *(uint *)&param_1->field_0x2c;
  iVar2 = *(int *)&param_1[1].field_0xc;
  if ((uint *)(iVar2 + 0x30) != (uint *)&param_1->field_0x30) {
    *(uint *)(iVar2 + 0x30) = *(uint *)&param_1->field_0x30;
    *(uint *)(iVar2 + 0x34) = *(uint *)&param_1->field_0x34;
    *(uint *)(iVar2 + 0x38) = *(uint *)&param_1->field_0x38;
  }
  *(uint *)(*(int *)&param_1[1].field_0xc + 0x27b8) = 0x3f800000;
  (*(code *)**(uint **)(*(int *)&param_1[1].field_0xc + 0x154))(*(int *)&param_1[1].field_0xc)
  ;
  iVar2 = 1;
  pcVar4 = "stand";
  this_ptr_01 = core_motion_cpp_FUN_004fc310
                          ((CMotionController *)(*(int *)&param_1[1].field_0xc + 0x158));
  iVar2 = core_motion_cpp_FUN_004fb9c0(this_ptr_01,pcVar4,iVar2);
  core_motion_cpp_CMotionController_jumpToMotion_FUN_004fc420
            ((CMotionController *)(*(int *)&param_1[1].field_0xc + 0x158),iVar2,0.0);
  core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0054c090
            ((CDeformableModelInstance *)(*(int *)&param_1[1].field_0xc + 0x158));
  core_skeleton_cpp_FUN_0054dd10
            ((CDeformableModelInstance *)(*(int *)&param_1[1].field_0xc + 0x158));
  this_ptr = &param_1->field_0x158;
  core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0054c090
            ((CDeformableModelInstance *)this_ptr);
  core_skeleton_cpp_FUN_0054dd10((CDeformableModelInstance *)this_ptr);
  core_skeleton_cpp_FUN_0054e6b0((CDeformableModelInstance *)this_ptr);
  this_ptr_00 = &param_1[1].field_0x10;
  core_morph_cpp_CMorph_setupModelFromDeformable_FUN_004fa9c0
            ((CMorph *)this_ptr_00,0,(CDeformableModelInstance *)this_ptr);
  core_morph_cpp_CMorph_setupModelFromDeformable_FUN_004fa9c0
            ((CMorph *)this_ptr_00,1,
             (CDeformableModelInstance *)(*(int *)&param_1[1].field_0xc + 0x158));
  core_morph_cpp_CMorph_getReady_FUN_004fac10((CMorph *)this_ptr_00);
  *(uint *)&param_1[1].field_0xc3c = 0;
  core_skeleton_cpp_FUN_0054c110((CDeformableModelInstance *)this_ptr);
  core_skeleton_cpp_FUN_0054c110
            ((CDeformableModelInstance *)(*(int *)&param_1[1].field_0xc + 0x158));
  sound_sndmain_cpp_FUN_00556230("dog_howl.wav");
  return;
}
