// Name: core_charactr.cpp_CCharacter_propertyActionCallback_FUN_0042f3e0
// Address: 0042f3e0
// MANUAL RECONSTRUCTION
// Address Range: [[0042f3e0, 0042f72b]]
// Convention: __cdecl
// Signature: int __cdecl core_charactr_cpp_CCharacter_propertyActionCallback_FUN_0042f3e0(CCharacter *this_ptr,CActorProperty *property)

#include "nocturne.h"

int __cdecl core_charactr_cpp_CCharacter_propertyActionCallback_FUN_0042f3e0(CCharacter *this_ptr,CActorProperty *property)

{
  UOrientationVector *pUVar1;
  CDemonActor *pCVar3;
  int iVar4;
  CCharacter *this_ptr_01;
  CCharacter *this_ptr_00;
  CDemonActor *pCVar1;
  CSkeleton *pCVar2;
  int iVar3;
  char *name;
  CDemonActor *pCVar4;
  CVector3f *pCVar5;
  CVector3f *pCVar7;
  CCharacter *pCVar6;
  int iVar7;
  int iVar9;
  CPickList local_930;
  CPickList local_588;
  char local_1e0 [400];
  CVector3f CStack_50;
  CVector3f CStack_44;
  int aiStack_38 [2];
  int local_28;
  int local_14;
  
  this_ptr_00 = (CCharacter *)
                core_actor_cpp_castToClassHash_FUN_0040c790
                          (&this_ptr->base,g_CCharacterClassInfo.name_hash);
  local_28 = 0;
  pUVar1 = &(this_ptr_00->base).orient;
  do {
    iVar7 = 0;
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_588);
    pCVar6 = this_ptr_00;
    do {
      if (-1 < pCVar6->carry_hands[0].bone_index) {
        aiStack_38[local_588.base.item_count] = iVar7;
        pCVar3 = pCVar6->carry_hands[0].carry_actor;
        pCVar1 = (CDemonActor *)"(nothing)";
        if (pCVar3 != (CDemonActor *)0x0) {
          pCVar1 = pCVar3;
        }
        iVar4 = pCVar6->carry_hands[0].bone_index;
        pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
                           (&this_ptr_00->model);
        _sprintf
                  (local_1e0,"Hand %d\t%s\t%s\n",iVar7,(pCVar2->bone_list + iVar4)->bone_name,pCVar1->actor_name);
        shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_588.base,local_1e0);
      }
      iVar7 = iVar7 + 1;
      pCVar6 = (CCharacter *)&(pCVar6->base).orient_matrix.m[0].z;
    } while (iVar7 < 2);
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
    iVar4 = aiStack_38[local_28];
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_930);
    iVar9 = 0;
    shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_930.base,"(nothing)");
    local_14 = 0;
    while( true ) {
      if (g_CDemonSetPtr->actor_count <= iVar9) break;
      this_ptr_01 = (CCharacter *)g_CDemonSetPtr->actors[iVar9];
      if (this_ptr_01 == this_ptr_00) {
LAB_0042f571:
        iVar9 = iVar9 + 1;
      }
      else {
        iVar3 = (*((this_ptr_01->base).vtable._ub)->canPickup)
                          (&this_ptr_01->base,(CDemonActor *)this_ptr_00);
        if (iVar3 != 3) goto LAB_0042f571;
        if (this_ptr_01 == (CCharacter *)this_ptr_00->carry_hands[iVar4].carry_actor) {
          local_14 = local_930.base.item_count;
        }
        shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_930.base,(char *)this_ptr_01);
        iVar9 = iVar9 + 1;
      }
    }
    iVar9 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                      (&local_930,"Select actor to carry.",local_14,0);
    if (-1 < iVar9) {
      (*(((this_ptr_00->base).vtable._uc)->_uc).dropCarriedObject)
                (this_ptr_00,iVar4,(CVector3f *)0x0);
      if (0 < iVar9) {
        name = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&local_930.base,iVar9);
        pCVar4 = core_mission_cpp_CDemonMission_findActorByName_FUN_00524030
                           (g_CDemonMissionPtr,name);
        pCVar5 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                           (&this_ptr_00->model,&CStack_44,
                            this_ptr_00->carry_hands[iVar4].bone_index);
        pCVar7 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                           ((CDemonActor *)this_ptr_00,&CStack_50,pCVar5);
        (pCVar4->location).position.x = pCVar7->x;
        (pCVar4->location).position.y = pCVar7->y;
        (pCVar4->location).position.z = pCVar7->z;
        if (&pCVar4->orient != pUVar1) {
          (pCVar4->orient).vec.x = (pUVar1->vec).x;
          (pCVar4->orient).vec.y = (this_ptr_00->base).orient.vec.y;
          (pCVar4->orient).vec.z = (this_ptr_00->base).orient.vec.z;
        }
        core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(pCVar4);
        core_charactr_cpp_CCharacter_pickupObjectNow_FUN_0042cdb0(this_ptr_00,iVar4,pCVar4,0.0);
      }
    }
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_930,0);
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_588,0);
  } while( true );
}
