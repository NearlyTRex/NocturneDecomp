// Name: core_charactr.cpp_CCharacter_FUN_0042f3e0
// Address: 0042f3e0
// Address Range: [[0042f3e0, 0042f72b]]
// Convention: unknown
// Signature: undefined core_charactr.cpp_CCharacter_FUN_0042f3e0()

#include "nocturne.h"

uint core_charactr_cpp_CCharacter_FUN_0042f3e0(void)

{
  CCharacter *this_ptr;
  CSkeleton *pCVar1;
  int iVar2;
  CDemonActor *this_ptr_00;
  CVector3f *pCVar3;
  CCharacter *pCVar4;
  uint uVar5;
  BADSPACEBASE *in_ESP;
  int iVar6;
  int iVar7;
  CDemonActor *in_stack_00000004;
  int in_stack_00000010;
  CCharacter *in_stack_00000014;
  CCharacter *in_stack_fffff6dc;
  uint in_stack_fffff6e0;
  char **in_stack_fffff6e4;
  CStrList_vtable *in_stack_fffff6e8;
  CStrList_vtable *in_stack_fffff6ec;
  CCharacter *in_stack_fffff6f8;
  uint in_stack_fffff70c;
  uint in_stack_fffff710;
  char **in_stack_fffff714;
  CStrList_vtable *in_stack_fffff718;
  uint in_stack_fffff71c;
  uint in_stack_fffff720;
  byte auStack_584 [8];
  byte auStack_57c [936];
  char acStack_1d4 [420];
  int local_30;
  SCarryHand *local_2c;
  CDeformableModelInstance *local_28;
  int local_24;
  CVector3f local_20;
  CDeformableModelInstance *local_14;
  
  this_ptr = (CCharacter *)
             core_actor_cpp_castToClassHash_FUN_0040c790
                       (in_stack_00000004,g_CCharacterClassInfo.name_hash);
  local_24 = 0;
  local_28 = &this_ptr->model;
  local_20.y = (float)&(this_ptr->base_actor).orient;
  local_2c = this_ptr->carry_hands;
  local_20.z = (float)local_28;
  do {
    iVar6 = 0;
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)auStack_584);
    pCVar4 = this_ptr;
    do {
      if (-1 < *(int *)pCVar4->carry_hands[0].field0_0x0) {
        (&local_30)[auStack_584._4_4_] = iVar6;
        iVar7 = *(int *)pCVar4->carry_hands[0].field0_0x0;
        pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(local_14);
        crt_stdio_c_sprintf_FUN_005fdbd0
                  (acStack_1d4,"Hand %d\t%s\t%s\n",iVar6,pCVar1->bone_list + iVar7);
        in_stack_fffff6dc = (CCharacter *)(acStack_1d4 + 4);
        shape_edittool_cpp_CStrList_add_FUN_004a2b80
                  ((CStrList *)(auStack_57c + 4),(char *)in_stack_fffff6dc);
      }
      iVar6 = iVar6 + 1;
      pCVar4 = (CCharacter *)&(pCVar4->base_actor).orient_matrix.m[0].z;
    } while (iVar6 < 2);
    if ((int)auStack_584._4_4_ < 1) {
      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                (g_CEditorToolsPtr,"No hands an carry items!");
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                ((CPickList *)auStack_57c,0,(uint)in_stack_fffff6dc,in_stack_fffff6e0,
                 (uint)in_stack_fffff6e4,(uint)in_stack_fffff6e8,(uint)in_stack_fffff6ec);
      return 0;
    }
    local_20.y = (float)shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                                  ((CPickList *)(auStack_584 + 4),
                                   "Select hand to carry/drop item.",(int)local_20.x,0);
    if ((int)local_20.y < 0) {
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                ((CPickList *)auStack_57c,0,(uint)in_stack_fffff6dc,in_stack_fffff6e0,
                 (uint)in_stack_fffff6e4,(uint)in_stack_fffff6e8,(uint)in_stack_fffff6ec);
      core_charactr_cpp_CCharacter_FUN_0042d090(this_ptr);
      return 1;
    }
    local_20.z = (float)(&local_2c)[(int)local_20.y];
    uVar5 = local_24 + (int)local_20.z * 0x44;
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xfffff6dc);
    iVar6 = 0;
    shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffff6e0,"(nothing)");
    iVar7 = 0;
    in_stack_fffff6dc = (CCharacter *)0x0;
    while (iVar6 < (int)g_CDemonSetPtr->actor_list_ptr) {
      pCVar4 = *(CCharacter **)(g_CDemonSetPtr->actor_list_data + iVar7);
      if (pCVar4 == this_ptr) {
LAB_0042f571:
        iVar6 = iVar6 + 1;
        iVar7 = iVar7 + 4;
      }
      else {
        iVar2 = (*((pCVar4->base_actor).vtable)->canPickup)
                          (&pCVar4->base_actor,(CDemonActor *)this_ptr);
        if (iVar2 != 3) goto LAB_0042f571;
        if (pCVar4 == *(CCharacter **)(in_stack_00000010 + 8)) {
          in_stack_00000014 = in_stack_fffff6f8;
        }
        in_stack_fffff6ec = (CStrList_vtable *)0x42f5df;
        shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffff6f8,(char *)pCVar4);
        iVar6 = iVar6 + 1;
        iVar7 = iVar7 + 4;
      }
    }
    in_stack_fffff6e0 = 0;
    iVar6 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                      ((CPickList *)&stack0xfffff6e4,"Select actor to carry.",0,0);
    if (-1 < iVar6) {
      in_stack_fffff6e4 = (char **)0x0;
      in_stack_fffff6dc = this_ptr;
      (*(this_ptr->base_actor).vtable[1].renderTargetPoints)((CDemonActor *)this_ptr);
      in_stack_fffff6e0 = uVar5;
      if (0 < iVar6) {
        in_stack_fffff6e8 = (CStrList_vtable *)0x42f63e;
        shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70((CStrList *)&stack0xfffff6f4,iVar6);
        this_ptr_00 = (CDemonActor *)core_mission_cpp_CDemonMission_FUN_00524030(g_CDemonMissionPtr)
        ;
        in_stack_fffff6ec = (CStrList_vtable *)0x42f674;
        pCVar3 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                           ((CDeformableModelInstance *)0x0,(CVector3f *)&local_20.z,
                            *(int *)(in_stack_00000014->base_actor).actor_name);
        pCVar3 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                           ((CDemonActor *)this_ptr,&local_20,pCVar3);
        (this_ptr_00->location).position.x = pCVar3->x;
        (this_ptr_00->location).position.y = pCVar3->y;
        (this_ptr_00->location).position.z = pCVar3->z;
        if ((CCharacter *)&this_ptr_00->orient != in_stack_00000014) {
          (this_ptr_00->orient).pitch = *(float *)(in_stack_00000014->base_actor).actor_name;
          (this_ptr_00->orient).bank = *(float *)((in_stack_00000014->base_actor).actor_name + 4);
          (this_ptr_00->orient).heading = *(float *)((in_stack_00000014->base_actor).actor_name + 8)
          ;
        }
        core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(this_ptr_00);
        in_stack_fffff6f8 = this_ptr;
        core_charactr_cpp_CCharacter_pickupObjectNow_FUN_0042cdb0(this_ptr);
        in_stack_fffff6e0 = uVar5;
      }
    }
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              ((CPickList *)&stack0xfffff70c,0,in_stack_fffff70c,in_stack_fffff710,
               (uint)in_stack_fffff714,(uint)in_stack_fffff718,in_stack_fffff71c);
    in_stack_fffff70c = 0;
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              ((CPickList *)(auStack_57c + 0x34),0,in_stack_fffff710,(uint)in_stack_fffff714,
               (uint)in_stack_fffff718,in_stack_fffff71c,in_stack_fffff720);
  } while( true );
}
