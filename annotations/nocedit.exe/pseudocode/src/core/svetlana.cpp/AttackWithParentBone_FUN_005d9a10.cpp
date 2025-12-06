// Name: core_svetlana.cpp_AttackWithParentBone_FUN_005d9a10
// Address: 005d9a10
// Address Range: [[005d9a10, 005d9ba2]]
// Convention: unknown
// Signature: undefined core_svetlana.cpp_AttackWithParentBone_FUN_005d9a10()

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x005d9b82) */
/* Signature: byte actors_hero_svetlana.cpp_AttackWithParentBone(uint param_1,
   uint param_2) */

void core_svetlana_cpp_AttackWithParentBone_FUN_005d9a10(void)

{
  CDemonActor *this_ptr;
  float fVar1;
  CSkeleton *pCVar2;
  CVector3f *pCVar3;
  int iVar4;
  float fVar5;
  BADSPACEBASE *in_ESP;
  int unaff_ESI;
  CSkeleton *pCVar6;
  int iVar7;
  int iVar8;
  CDemonActor *in_stack_00000004;
  int in_stack_00000008;
  byte auStack_6c [68];
  CVector3f CStack_28;
  float local_14;
  
  fVar5 = 0.0;
  pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
                     ((CDeformableModelInstance *)(in_stack_00000004 + 1));
  local_14 = -NAN;
  pCVar6 = pCVar2;
  fVar1 = local_14;
  if (0 < pCVar2->bone_count) {
    do {
      fVar1 = fVar5;
      if (in_stack_00000008 == pCVar6->bone_list[0].parent_index) break;
      fVar5 = (float)((int)fVar5 + 1);
      pCVar6 = (CSkeleton *)((pCVar6->motion_list).state_names[1] + 2);
      fVar1 = local_14;
    } while ((int)fVar5 < pCVar2->bone_count);
  }
  local_14 = fVar1;
  if (local_14 == -NAN) {
    g_CurrentFilename = "..\\core\\svetlana.cpp";
    g_CurrentLineNumber = 0x2f0;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Can't find svetlana's parent bone");
  }
  pCVar3 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                     ((CDeformableModelInstance *)(in_stack_00000004 + 1),&CStack_28,
                      in_stack_00000008);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            (in_stack_00000004,(CVector3f *)&stack0xffffffe8,pCVar3);
  pCVar3 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                     ((CDeformableModelInstance *)(in_stack_00000004 + 1),
                      (CVector3f *)(auStack_6c + 0x34),unaff_ESI);
  iVar7 = 0;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(in_stack_00000004,&CStack_28,pCVar3);
  iVar8 = 0;
  do {
    while( true ) {
      if (g_CDemonSetPtr->damage_listener_count <= iVar8) {
        (*in_stack_00000004->vtable->playSound)(in_stack_00000004,"svetlana-miss?.wav");
        return;
      }
      this_ptr = *(CDemonActor **)(g_CDemonSetPtr->field19_0x14f0a0 + iVar7 + -4);
      if (this_ptr != in_stack_00000004) break;
LAB_005d9adc:
      iVar8 = iVar8 + 1;
      iVar7 = iVar7 + 4;
    }
    core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)auStack_6c);
    auStack_6c._8_4_ = 0x41700000;
    auStack_6c._0_4_ = 0;
    auStack_6c._44_4_ = 4.2039e-45;
    auStack_6c._48_4_ = 0x3f333333;
    auStack_6c._52_4_ = (CDemonActor *)0x67;
    iVar4 = (*this_ptr->vtable[1].playSoundWithVolume)
                      (this_ptr,&stack0xfffffff8,(float)&CStack_28.z);
    if (iVar4 == 0) goto LAB_005d9adc;
    iVar8 = iVar8 + 1;
    iVar7 = iVar7 + 4;
  } while( true );
}
