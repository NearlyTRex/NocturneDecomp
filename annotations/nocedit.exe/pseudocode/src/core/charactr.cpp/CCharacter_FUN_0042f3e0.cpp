// Name: core_charactr.cpp_CCharacter_FUN_0042f3e0
// Address: 0042f3e0
// Address Range: [[0042f3e0, 0042f72b]]
// Convention: unknown
// Signature: undefined4 core_charactr_cpp_CCharacter_FUN_0042f3e0(void)

#include "nocturne.h"

uint core_charactr_cpp_CCharacter_FUN_0042f3e0(void)

{
  CCharacter *this_ptr;
  CDemonActor *pCVar1;
  CSkeleton *pCVar2;
  int iVar3;
  CDemonActor *pCVar4;
  CVector3f *pCVar5;
  CCharacter *pCVar6;
  int iVar7;
  int iVar8;
  CDemonActor *in_stack_00000004;
  byte *in_stack_fffff6d0;
  byte *puVar9;
  CCharacter *in_stack_fffff6d4;
  char **in_stack_fffff6d8;
  CStrList_vtable *in_stack_fffff6dc;
  char **in_stack_fffff6e0;
  CPickList local_588;
  char local_1e0 [400];
  CVector3f CStack_50;
  CVector3f CStack_44;
  int aiStack_38 [2];
  SCarryHand *local_30;
  CDeformableModelInstance *local_2c;
  int local_28;
  int local_24;
  COrientation *local_20;
  CDeformableModelInstance *local_1c;
  SCarryHand *local_18;
  int local_14;
  
  this_ptr = (CCharacter *)
             core_actor_cpp_castToClassHash_FUN_0040c790
                       (in_stack_00000004,g_CCharacterClassInfo.name_hash);
  local_28 = 0;
  local_2c = &this_ptr->model;
  local_20 = &(this_ptr->base).orient;
  local_30 = this_ptr->carry_hands;
  local_1c = local_2c;
  do {
    iVar7 = 0;
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_588);
    pCVar6 = this_ptr;
    do {
      if (-1 < *(int *)pCVar6->carry_hands[0].unk1) {
        aiStack_38[local_588.base.item_count] = iVar7;
        pCVar4 = pCVar6->carry_hands[0].carry_actor;
        pCVar1 = (CDemonActor *)"(nothing)";
        if (pCVar4 != (CDemonActor *)0x0) {
          pCVar1 = pCVar4;
        }
        iVar8 = *(int *)pCVar6->carry_hands[0].unk1;
        pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(local_1c);
        crt_stdio_c_sprintf_FUN_005fdbd0
                  (local_1e0,"Hand %d\t%s\t%s\n",iVar7,pCVar2->bone_list + iVar8,pCVar1);
        shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_588.base,local_1e0);
      }
      iVar7 = iVar7 + 1;
      pCVar6 = (CCharacter *)&(pCVar6->base).orient_matrix.m[0].z;
    } while (iVar7 < 2);
    if (local_588.base.item_count < 1) {
      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                (g_CEditorToolsPtr,"No hands an carry items!");
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                (&local_588,0,(uint)in_stack_fffff6d0,(uint)in_stack_fffff6d4,
                 (uint)in_stack_fffff6d8,(uint)in_stack_fffff6dc,(uint)in_stack_fffff6e0);
      return 0;
    }
    local_28 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                         (&local_588,"Select hand to carry/drop item.",local_28,0);
    if (local_28 < 0) {
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                (&local_588,0,(uint)in_stack_fffff6d0,(uint)in_stack_fffff6d4,
                 (uint)in_stack_fffff6d8,(uint)in_stack_fffff6dc,(uint)in_stack_fffff6e0);
      core_charactr_cpp_CCharacter_FUN_0042d090(this_ptr);
      return 1;
    }
    local_24 = aiStack_38[local_28];
    local_18 = local_30 + local_24;
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xfffff6d0);
    iVar7 = 0;
    shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffff6d0,"(nothing)");
    iVar8 = 0;
    local_14 = 0;
    while (iVar7 < (int)g_CDemonSetPtr->actor_list_ptr) {
      pCVar6 = *(CCharacter **)(g_CDemonSetPtr->actor_list_data + iVar8);
      if (pCVar6 == this_ptr) {
LAB_0042f571:
        iVar7 = iVar7 + 1;
        iVar8 = iVar8 + 4;
      }
      else {
        iVar3 = (*((pCVar6->base).vtable._ub)->canPickup)(&pCVar6->base,(CDemonActor *)this_ptr);
        puVar9 = &stack0xfffff6d8;
        if (iVar3 != 3) goto LAB_0042f571;
        shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffff6d8,(char *)pCVar6);
        iVar7 = iVar7 + 1;
        iVar8 = iVar8 + 4;
        in_stack_fffff6d0 = puVar9;
        in_stack_fffff6d4 = pCVar6;
      }
    }
    iVar7 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                      ((CPickList *)&stack0xfffff6d0,"Select actor to carry.",local_14,0);
    if (-1 < iVar7) {
      (*(((this_ptr->base).vtable._uc)->_uc).cfunc21)();
      if (0 < iVar7) {
        shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70((CStrList *)&stack0xfffff6d0,iVar7);
        pCVar4 = (CDemonActor *)core_mission_cpp_CDemonMission_FUN_00524030(g_CDemonMissionPtr);
        pCVar5 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                           (local_2c,&CStack_44,*(int *)local_18->unk1);
        pCVar5 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                           ((CDemonActor *)this_ptr,&CStack_50,pCVar5);
        (pCVar4->location).position.x = pCVar5->x;
        (pCVar4->location).position.y = pCVar5->y;
        (pCVar4->location).position.z = pCVar5->z;
        if (&pCVar4->orient != local_20) {
          (pCVar4->orient).pitch = local_20->pitch;
          (pCVar4->orient).bank = local_20->bank;
          (pCVar4->orient).heading = local_20->heading;
        }
        core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(pCVar4);
        core_charactr_cpp_CCharacter_pickupObjectNow_FUN_0042cdb0(this_ptr);
      }
    }
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              ((CPickList *)&stack0xfffff6d0,0,(uint)in_stack_fffff6d0,(uint)in_stack_fffff6d4,
               (uint)in_stack_fffff6d8,(uint)in_stack_fffff6dc,(uint)in_stack_fffff6e0);
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              (&local_588,0,(uint)in_stack_fffff6d0,(uint)in_stack_fffff6d4,(uint)in_stack_fffff6d8,
               (uint)in_stack_fffff6dc,(uint)in_stack_fffff6e0);
  } while( true );
}
