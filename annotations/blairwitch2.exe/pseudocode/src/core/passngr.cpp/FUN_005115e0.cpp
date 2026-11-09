// Name: core_passngr.cpp_FUN_005115e0
// Address: 005115e0
// Address Range: [[005115e0, 00511798]]
// Convention: unknown
// Signature: void core_passngr_cpp_FUN_005115e0(int param_1)

#include "nocturne.h"

void core_passngr_cpp_FUN_005115e0(int param_1)

{
  CDeformableModelInstance *this_ptr;
  CMorph *this_ptr_00;
  char cVar1;
  char *pcVar2;
  CMotionList *this_ptr_01;
  char *pcVar3;
  int iVar4;
  
  core_npc_cpp_FUN_00510510(param_1);
  if (*(int *)(param_1 + 0x24450) == 0) {
    pcVar2 = (char *)core_actor_cpp_createActorByName_FUN_0040c5a0("CWerewolf");
    pcVar3 = (char *)(param_1 + 0x243cc);
    *(char **)(param_1 + 0x24450) = pcVar2;
    do {
      cVar1 = *pcVar3;
      *pcVar2 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      pcVar2[1] = cVar1;
      pcVar2 = pcVar2 + 2;
    } while (cVar1 != '\0');
    iVar4 = *(int *)(param_1 + 0x24450);
    *(uint *)(iVar4 + 0x20) = *(uint *)(param_1 + 0x20);
    *(uint *)(iVar4 + 0x24) = *(uint *)(param_1 + 0x24);
    *(uint *)(iVar4 + 0x28) = *(uint *)(param_1 + 0x28);
    *(uint *)(iVar4 + 0x2c) = *(uint *)(param_1 + 0x2c);
    iVar4 = *(int *)(param_1 + 0x24450);
    if ((uint *)(iVar4 + 0x30) != (uint *)(param_1 + 0x30)) {
      *(uint *)(iVar4 + 0x30) = *(uint *)(param_1 + 0x30);
      *(uint *)(iVar4 + 0x34) = *(uint *)(param_1 + 0x34);
      *(uint *)(iVar4 + 0x38) = *(uint *)(param_1 + 0x38);
    }
    core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
              ((CDeformableModelInstance *)(*(int *)(param_1 + 0x24450) + 0x2b4),
               (char *)(param_1 + 0x243ac));
    *(uint *)(*(int *)(param_1 + 0x24450) + 0x2824) = *(uint *)(param_1 + 0x25084);
    (**(code **)(*(int *)(*(int *)(param_1 + 0x24450) + 0x2b0) + 8))(*(int *)(param_1 + 0x24450));
    iVar4 = 1;
    pcVar3 = "transform";
    this_ptr_01 = core_motion_cpp_FUN_00503860
                            ((CMotionController *)(*(int *)(param_1 + 0x24450) + 0x2b4));
    iVar4 = core_motion_cpp_FUN_00502f10(this_ptr_01,pcVar3,iVar4);
    core_motion_cpp_CMotionController_jumpToMotion_FUN_00503980
              ((CMotionController *)(*(int *)(param_1 + 0x24450) + 0x2b4),iVar4,0.0);
  }
  core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_00544e60
            ((CDeformableModelInstance *)(*(int *)(param_1 + 0x24450) + 0x2b4));
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00546ae0
            ((CDeformableModelInstance *)(*(int *)(param_1 + 0x24450) + 0x2b4));
  this_ptr = (CDeformableModelInstance *)(param_1 + 0x2b4);
  core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_00544e60(this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00546ae0(this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_00547480(this_ptr);
  this_ptr_00 = (CMorph *)(param_1 + 0x24454);
  core_morph_cpp_CMorph_setupModelFromDeformable_FUN_005b6f80(this_ptr_00,0,this_ptr);
  core_morph_cpp_CMorph_setupModelFromDeformable_FUN_005b6f80
            (this_ptr_00,1,(CDeformableModelInstance *)(*(int *)(param_1 + 0x24450) + 0x2b4));
  core_morph_cpp_CMorph_getReady_FUN_005b71d0(this_ptr_00);
  *(uint *)(param_1 + 0x25080) = 0;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00544ee0(this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00544ee0
            ((CDeformableModelInstance *)(*(int *)(param_1 + 0x24450) + 0x2b4));
  return;
}
