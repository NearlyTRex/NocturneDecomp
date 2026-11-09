// Name: core_passngr.cpp_FUN_00532930
// Address: 00532930
// Address Range: [[00532930, 00532ae7]]
// Convention: unknown
// Signature: void core_passngr_cpp_FUN_00532930(int param_1)

#include "nocturne.h"

void core_passngr_cpp_FUN_00532930(int param_1)

{
  CDeformableModelInstance *this_ptr;
  CMorph *this_ptr_00;
  char cVar1;
  char *pcVar2;
  CMotionList *this_ptr_01;
  char *pcVar3;
  int iVar4;
  
  core_npc_cpp_FUN_00531720(param_1);
  if (*(int *)(param_1 + 0x1fbc0) == 0) {
    pcVar2 = (char *)core_actor_cpp_createActorByName_FUN_0040c2b0("CWerewolf");
    pcVar3 = (char *)(param_1 + 0x1fb3c);
    *(char **)(param_1 + 0x1fbc0) = pcVar2;
    do {
      cVar1 = *pcVar3;
      *pcVar2 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      pcVar2[1] = cVar1;
      pcVar2 = pcVar2 + 2;
    } while (cVar1 != '\0');
    iVar4 = *(int *)(param_1 + 0x1fbc0);
    *(uint *)(iVar4 + 0x20) = *(uint *)(param_1 + 0x20);
    *(uint *)(iVar4 + 0x24) = *(uint *)(param_1 + 0x24);
    *(uint *)(iVar4 + 0x28) = *(uint *)(param_1 + 0x28);
    *(uint *)(iVar4 + 0x2c) = *(uint *)(param_1 + 0x2c);
    iVar4 = *(int *)(param_1 + 0x1fbc0);
    if ((uint *)(iVar4 + 0x30) != (uint *)(param_1 + 0x30)) {
      *(uint *)(iVar4 + 0x30) = *(uint *)(param_1 + 0x30);
      *(uint *)(iVar4 + 0x34) = *(uint *)(param_1 + 0x34);
      *(uint *)(iVar4 + 0x38) = *(uint *)(param_1 + 0x38);
    }
    core_skeleton_cpp_FUN_00569f50(*(int *)(param_1 + 0x1fbc0) + 0x158,param_1 + 0x1fb1c);
    *(uint *)(*(int *)(param_1 + 0x1fbc0) + 0x27b8) = *(uint *)(param_1 + 0x207f4);
    (*(code *)**(uint **)(*(int *)(param_1 + 0x1fbc0) + 0x154))(*(int *)(param_1 + 0x1fbc0));
    iVar4 = 1;
    pcVar3 = "transform";
    this_ptr_01 = core_motion_cpp_FUN_00524a00
                            ((CMotionController *)(*(int *)(param_1 + 0x1fbc0) + 0x158));
    iVar4 = core_motion_cpp_FUN_005240c0(this_ptr_01,pcVar3,iVar4);
    core_motion_cpp_CMotionController_jumpToMotion_FUN_00524b10
              ((CMotionController *)(*(int *)(param_1 + 0x1fbc0) + 0x158),iVar4,0.0);
  }
  core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_00567500
            ((CDeformableModelInstance *)(*(int *)(param_1 + 0x1fbc0) + 0x158));
  core_skeleton_cpp_FUN_00569180((CDeformableModelInstance *)(*(int *)(param_1 + 0x1fbc0) + 0x158));
  this_ptr = (CDeformableModelInstance *)(param_1 + 0x158);
  core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_00567500(this_ptr);
  core_skeleton_cpp_FUN_00569180(this_ptr);
  core_skeleton_cpp_FUN_00569b20(this_ptr);
  this_ptr_00 = (CMorph *)(param_1 + 0x1fbc4);
  core_morph_cpp_CMorph_setupModelFromDeformable_FUN_005230c0(this_ptr_00,0,this_ptr);
  core_morph_cpp_CMorph_setupModelFromDeformable_FUN_005230c0
            (this_ptr_00,1,(CDeformableModelInstance *)(*(int *)(param_1 + 0x1fbc0) + 0x158));
  core_morph_cpp_CMorph_getReady_FUN_00523310(this_ptr_00);
  *(uint *)(param_1 + 0x207f0) = 0;
  core_skeleton_cpp_FUN_00567580(this_ptr);
  core_skeleton_cpp_FUN_00567580((CDeformableModelInstance *)(*(int *)(param_1 + 0x1fbc0) + 0x158));
  return;
}
