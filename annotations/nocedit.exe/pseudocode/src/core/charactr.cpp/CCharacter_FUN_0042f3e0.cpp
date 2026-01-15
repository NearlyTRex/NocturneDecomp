// Name: core_charactr.cpp_CCharacter_FUN_0042f3e0
// Address: 0042f3e0
// Address Range: [[0042f3e0, 0042f72b]]
// Convention: unknown
// Signature: undefined core_charactr.cpp_CCharacter_FUN_0042f3e0()

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
  float fVar7;
  int iVar8;
  int iVar9;
  CDemonActor *in_stack_00000004;
  byte *in_stack_fffff6d0;
  byte *puVar10;
  CCharacter *in_stack_fffff6d4;
  char **in_stack_fffff6d8;
  CStrList_vtable *in_stack_fffff6dc;
  CStrList_vtable *in_stack_fffff6e0;
  CPickList local_588;
  char local_1e0 [404];
  CVector3f CStack_4c;
  CVector3f CStack_40;
  SCarryHand *local_30;
  CDeformableModelInstance *local_2c;
  CDeformableModelInstance *local_28;
  float local_24;
  COrientation *local_20;
  CDeformableModelInstance *local_1c;
  SCarryHand *local_18;
  int *local_14;
  
  this_ptr = (CCharacter *)
             core_actor_cpp_castToClassHash_FUN_0040c790
                       (in_stack_00000004,g_CCharacterClassInfo.name_hash);
  local_28 = (CDeformableModelInstance *)0x0;
  local_2c = &this_ptr->model;
  local_20 = &(this_ptr->base_actor).orient;
  local_30 = this_ptr->carry_hands;
  local_1c = local_2c;
  do {
    fVar7 = 0.0;
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_588);
    pCVar6 = this_ptr;
    do {
      if (-1 < *(int *)pCVar6->carry_hands[0].field0_0x0) {
        (&CStack_40.z)[local_588.base_strlist.item_count] = fVar7;
        pCVar4 = pCVar6->carry_hands[0].carry_actor;
        pCVar1 = (CDemonActor *)"(nothing)";
        if (pCVar4 != (CDemonActor *)0x0) {
          pCVar1 = pCVar4;
        }
        iVar8 = *(int *)pCVar6->carry_hands[0].field0_0x0;
        pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(local_1c);
        crt_stdio_c_sprintf_FUN_005fdbd0
                  (local_1e0,"Hand %d\t%s\t%s\n",fVar7,pCVar2->bone_list + iVar8,pCVar1);
        shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_588.base_strlist,local_1e0);
      }
      fVar7 = (float)((int)fVar7 + 1);
      pCVar6 = (CCharacter *)&(pCVar6->base_actor).orient_matrix.m[0].z;
    } while ((int)fVar7 < 2);
    if (local_588.base_strlist.item_count < 1) {
      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                (g_CEditorToolsPtr,"No hands an carry items!");
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                (&local_588,0,(uint)in_stack_fffff6d0,(uint)in_stack_fffff6d4,
                 (uint)in_stack_fffff6d8,(uint)in_stack_fffff6dc,(uint)in_stack_fffff6e0);
      return 0;
    }
    local_28 = (CDeformableModelInstance *)
               shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                         (&local_588,"Select hand to carry/drop item.",(int)local_28,0);
    if ((int)local_28 < 0) {
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                (&local_588,0,(uint)in_stack_fffff6d0,(uint)in_stack_fffff6d4,
                 (uint)in_stack_fffff6d8,(uint)in_stack_fffff6dc,(uint)in_stack_fffff6e0);
      core_charactr_cpp_CCharacter_FUN_0042d090(this_ptr);
      return 1;
    }
    local_24 = (&CStack_40.z)[(int)local_28];
    local_18 = local_30 + (int)local_24;
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xfffff6d0);
    iVar8 = 0;
    shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffff6d0,"(nothing)");
    iVar9 = 0;
    local_14 = (int *)0x0;
    while (iVar8 < (int)g_CDemonSetPtr->actor_list_ptr) {
      pCVar6 = *(CCharacter **)(g_CDemonSetPtr->actor_list_data + iVar9);
      if (pCVar6 == this_ptr) {
LAB_0042f571:
        iVar8 = iVar8 + 1;
        iVar9 = iVar9 + 4;
      }
      else {
        iVar3 = (*((pCVar6->base_actor).vtable)->canPickup)
                          (&pCVar6->base_actor,(CDemonActor *)this_ptr);
        puVar10 = &stack0xfffff6d8;
        if (iVar3 != 3) goto LAB_0042f571;
        shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffff6d8,(char *)pCVar6);
        iVar8 = iVar8 + 1;
        iVar9 = iVar9 + 4;
        in_stack_fffff6d0 = puVar10;
        in_stack_fffff6d4 = pCVar6;
      }
    }
    iVar8 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                      ((CPickList *)&stack0xfffff6d0,"Select actor to carry.",(int)local_14,
                       0);
    if (-1 < iVar8) {
      (*(this_ptr->base_actor).vtable[1].renderTargetPoints)((CDemonActor *)this_ptr);
      if (0 < iVar8) {
        shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70((CStrList *)&stack0xfffff6d4,iVar8);
        pCVar4 = (CDemonActor *)core_mission_cpp_CDemonMission_FUN_00524030(g_CDemonMissionPtr);
        pCVar5 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                           (local_28,&CStack_40,*local_14);
        pCVar5 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                           ((CDemonActor *)this_ptr,&CStack_4c,pCVar5);
        (pCVar4->location).position.x = pCVar5->x;
        (pCVar4->location).position.y = pCVar5->y;
        (pCVar4->location).position.z = pCVar5->z;
        if ((CDeformableModelInstance *)&pCVar4->orient != local_1c) {
          (pCVar4->orient).pitch = (float)(local_1c->motion_controller).motion_list_ptr;
          (pCVar4->orient).bank = (float)(local_1c->motion_controller).current_motion_index;
          (pCVar4->orient).heading = (local_1c->motion_controller).current_frame_number;
        }
        core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(pCVar4);
        in_stack_fffff6d0 = (byte *)0x0;
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
