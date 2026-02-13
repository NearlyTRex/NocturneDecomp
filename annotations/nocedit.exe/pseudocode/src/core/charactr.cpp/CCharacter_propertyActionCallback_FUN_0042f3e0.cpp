// Name: core_charactr.cpp_CCharacter_propertyActionCallback_FUN_0042f3e0
// Address: 0042f3e0
// Address Range: [[0042f3e0, 0042f72b]]
// Convention: __cdecl
// Signature: int __cdecl core_charactr_cpp_CCharacter_propertyActionCallback_FUN_0042f3e0 (CCharacter *this_ptr,CActorProperty *property)

#include "nocturne.h"

int __cdecl
core_charactr_cpp_CCharacter_propertyActionCallback_FUN_0042f3e0
          (CCharacter *this_ptr,CActorProperty *property)

{
  CCharacter *this_ptr_00;
  CDemonActor *pCVar1;
  CSkeleton *pCVar2;
  int iVar3;
  char *name;
  CDemonActor *pCVar4;
  CVector3f *pCVar5;
  CCharacter *pCVar6;
  int unaff_EBP;
  float fVar7;
  int iVar8;
  char **unaff_EDI;
  int iVar9;
  char **in_stack_fffff6d8;
  CStrList aCStack_924 [57];
  CPickList local_588;
  char local_1e0 [412];
  CVector3f CStack_44;
  CVector3f CStack_38;
  CDeformableModelInstance *local_2c;
  int local_28;
  float local_24;
  CDeformableModelInstance *local_20;
  CDeformableModelInstance *local_1c;
  SCarryHand *local_18;
  float *local_14;
  
  this_ptr_00 = (CCharacter *)
                core_actor_cpp_castToClassHash_FUN_0040c790
                          (&this_ptr->base,g_CCharacterClassInfo.name_hash);
  local_28 = 0;
  local_2c = &this_ptr_00->model;
  local_20 = (CDeformableModelInstance *)&(this_ptr_00->base).orient;
  CStack_38.z = (float)this_ptr_00->carry_hands;
  local_1c = local_2c;
  do {
    fVar7 = 0.0;
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_588);
    pCVar6 = this_ptr_00;
    do {
      if (-1 < pCVar6->carry_hands[0].bone_index) {
        (&CStack_38.x)[local_588.base.item_count] = fVar7;
        pCVar4 = pCVar6->carry_hands[0].carry_actor;
        pCVar1 = (CDemonActor *)"(nothing)";
        if (pCVar4 != (CDemonActor *)0x0) {
          pCVar1 = pCVar4;
        }
        iVar8 = pCVar6->carry_hands[0].bone_index;
        pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(local_1c);
        _sprintf
                  (local_1e0,"Hand %d\t%s\t%s\n",fVar7,pCVar2->bone_list + iVar8,pCVar1);
        shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_588.base,local_1e0);
      }
      fVar7 = (float)((int)fVar7 + 1);
      pCVar6 = (CCharacter *)&(pCVar6->base).orient_matrix.m[0].z;
    } while ((int)fVar7 < 2);
    if (local_588.base.item_count < 1) {
      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                (g_CEditorToolsPtr,"No hands an carry items!");
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_588,0);
      return 0;
    }
    local_28 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                         (&local_588,"Select hand to carry/drop item.",local_28,0);
    if (local_28 < 0) {
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_588,0);
      core_charactr_cpp_CCharacter_updateCarriedObjects_FUN_0042d090(this_ptr_00,0.0);
      return 1;
    }
    local_24 = (&CStack_38.x)[local_28];
    local_18 = (SCarryHand *)((int)CStack_38.z + local_24 * 0x44);
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xfffff6d0);
    iVar8 = 0;
    shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffff6d0,"(nothing)");
    iVar9 = 0;
    local_14 = (float *)0x0;
    while( true ) {
      if ((int)g_CDemonSetPtr->actor_list_ptr <= iVar8) break;
      pCVar6 = *(CCharacter **)(g_CDemonSetPtr->actor_list_data + iVar9);
      if (pCVar6 == this_ptr_00) {
LAB_0042f571:
        iVar8 = iVar8 + 1;
        iVar9 = iVar9 + 4;
      }
      else {
        iVar3 = (*((pCVar6->base).vtable._ub)->canPickup)(&pCVar6->base,(CDemonActor *)this_ptr_00);
        if (iVar3 != 3) goto LAB_0042f571;
        if (pCVar6 == *(CCharacter **)(unaff_EBP + 8)) {
          unaff_EDI = in_stack_fffff6d8;
        }
        shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffff6d8,(char *)pCVar6);
        iVar8 = iVar8 + 1;
        iVar9 = iVar9 + 4;
      }
    }
    iVar8 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                      ((CPickList *)&stack0xfffff6d0,"Select actor to carry.",(int)local_14,
                       0);
    if (-1 < iVar8) {
      (*(((this_ptr_00->base).vtable._uc)->_uc).dropCarriedObject)
                (this_ptr_00,(int)local_24,(CVector3f *)0x0);
      if (0 < iVar8) {
        name = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(aCStack_924,iVar8);
        pCVar4 = core_mission_cpp_CDemonMission_findActorByName_FUN_00524030
                           (g_CDemonMissionPtr,name);
        pCVar5 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                           (local_20,&CStack_38,(int)*unaff_EDI);
        pCVar5 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                           ((CDemonActor *)this_ptr_00,&CStack_44,pCVar5);
        (pCVar4->location).position.x = pCVar5->x;
        (pCVar4->location).position.y = pCVar5->y;
        (pCVar4->location).position.z = pCVar5->z;
        if (&pCVar4->orient != (UOrientationVector *)local_14) {
          (pCVar4->orient).vec.x = *local_14;
          (pCVar4->orient).vec.y = local_14[1];
          (pCVar4->orient).vec.z = local_14[2];
        }
        core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(pCVar4);
        in_stack_fffff6d8 = (char **)0x0;
        core_charactr_cpp_CCharacter_pickupObjectNow_FUN_0042cdb0
                  (this_ptr_00,(int)local_18,pCVar4,0.0);
      }
    }
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80((CPickList *)&stack0xfffff6d0,0);
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_588,0);
  } while( true );
}
