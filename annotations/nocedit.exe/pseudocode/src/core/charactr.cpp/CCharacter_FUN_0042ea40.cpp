// Name: core_charactr.cpp_CCharacter_FUN_0042ea40
// Address: 0042ea40
// Address Range: [[0042ea40, 0042ec3f]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_FUN_0042ea40(CCharacter *this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_FUN_0042ea40(CCharacter *this_ptr)

{
  float fVar1;
  SMotion *pSVar2;
  CSkeleton *pCVar3;
  int iVar4;
  CVector3f *pCVar5;
  float in_stack_00000008;
  CVector3f local_70;
  CVector3f local_64;
  CVector3f local_58;
  CVector3f local_4c;
  CVector3f local_40;
  CVector3f local_34;
  CVector3f local_28;
  CVector3f local_1c;
  
  if ((*(int *)this_ptr->unk3 != 0) &&
     (*(float *)(g_CDemonSetPtr->unk4 + 0xbbd4) < (float)32)) {
    pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       (&(this_ptr->model).motion_controller);
    if (pSVar2->state_index == 0) {
      if ((*(int *)(this_ptr->cloth_data + 0x1c0) == 0) &&
         (fVar1 = *(float *)(this_ptr->cloth_data + 0x1b8) - in_stack_00000008,
         *(float *)(this_ptr->cloth_data + 0x1b8) = fVar1, fVar1 < 0.0)) {
        *(float *)(this_ptr->cloth_data + 0x1b8) =
             *(float *)(this_ptr->cloth_data + 0x1b8) + 0.2f;
        local_4c.y = -0.5;
        local_4c.x = 0.0;
        local_4c.z = 1.0;
        core_actor_cpp_CDemonActor_transformVector_FUN_00408e80(&this_ptr->base,&local_1c,&local_4c)
        ;
        pCVar3 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
                           (&this_ptr->model);
        iVar4 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(pCVar3,"Bip01 head");
        if (iVar4 != -1) {
          local_64.x = 0.0;
          local_64.z = 0.5;
          local_64.y = 0.2;
          pCVar5 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                             (&local_58,&local_64,
                              (this_ptr->model).bone_transform.bone_world_matrices + iVar4);
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                    (&this_ptr->base,&local_34,pCVar5);
          core_fire_cpp_CFireEffect_createSmokeParticle_FUN_004c7b20
                    (g_CFireEffectPtr,&local_34,0.5,&local_1c,0x8000);
        }
      }
      fVar1 = *(float *)(this_ptr->cloth_data + 0x1bc) - in_stack_00000008;
      *(float *)(this_ptr->cloth_data + 0x1bc) = fVar1;
      if (fVar1 < 0.0) {
        *(float *)(this_ptr->cloth_data + 0x1bc) =
             *(float *)(this_ptr->cloth_data + 0x1bc) + 1.5f;
        pCVar3 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
                           (&this_ptr->model);
        iVar4 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(pCVar3,"Bip01 head");
        if (iVar4 != -1) {
          local_40.x = 0.0;
          local_40.y = 0.2;
          local_40.z = 0.5;
          pCVar5 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                             (&local_70,&local_40,
                              (this_ptr->model).bone_transform.bone_world_matrices + iVar4);
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                    (&this_ptr->base,&local_28,pCVar5);
          iVar4 = core_setcolid_cpp_CDemonSet_FUN_00574580(g_CDemonSetPtr);
          if (iVar4 == 0) {
            *(uint *)(this_ptr->cloth_data + 0x1c0) =
                 (uint)(*(int *)(this_ptr->cloth_data + 0x1c0) == 0);
            return;
          }
        }
      }
    }
  }
  return;
}
