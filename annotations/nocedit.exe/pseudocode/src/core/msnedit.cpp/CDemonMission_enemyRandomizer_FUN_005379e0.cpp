// Name: core_msnedit.cpp_CDemonMission_enemyRandomizer_FUN_005379e0
// Address: 005379e0
// Address Range: [[005379e0, 00537cff] [00537d5f, 00537dc1]]
// Convention: __cdecl
// Signature: void __cdecl core_msnedit_cpp_CDemonMission_enemyRandomizer_FUN_005379e0(CDemonMission *this_ptr)

#include "nocturne.h"

/* WARNING: Variable defined which should be unmapped: local_d00 */

void __cdecl core_msnedit_cpp_CDemonMission_enemyRandomizer_FUN_005379e0(CDemonMission *this_ptr)

{
  CDemonActor *pCVar1;
  CDemonActor_vtable *pCVar2;
  CEnemy *this_ptr_00;
  int iVar3;
  CDemonActor *actor_ptr;
  float fVar4;
  int initial_selected_index;
  double dStack_d04;
  CPickList local_d00;
  CPickList local_958;
  CPickList local_5b0;
  char local_208 [296];
  char local_e0 [200];
  float local_18;
  int local_14;
  
  initial_selected_index = 0;
LAB_005379f3:
  do {
    while( true ) {
      shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_5b0);
      shape_edittool_cpp_CStrList_add_FUN_004a2b80
                (&local_5b0.base,"Randomize all enemies with randomizeMe flag set.");
      shape_edittool_cpp_CStrList_add_FUN_004a2b80
                (&local_5b0.base,"Randomize enemy speeds for specific enemies.");
      initial_selected_index =
           shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                     (&local_5b0,"Enemy randomizer",initial_selected_index,0);
      if (initial_selected_index < 0) {
        dStack_d04 = (double)((ulonglong)(uint)local_d00.base.item_count << 0x20);
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_5b0,0);
        return;
      }
      if (initial_selected_index == 0) {
        for (pCVar1 = this_ptr->first_actor; pCVar1 != (CDemonActor *)0x0;
            pCVar1 = pCVar1->next_actor) {
          this_ptr_00 = (CEnemy *)
                        core_actor_cpp_castToClassHash_FUN_0040c790
                                  (pCVar1,g_CEnemyClassInfo.name_hash);
          if ((this_ptr_00 != (CEnemy *)0x0) && (this_ptr_00->randomize_me != 0)) {
            dStack_d04._0_4_ = this_ptr_00;
            (*(((this_ptr_00->base).base.vtable._ue)->_ue).randomize)(this_ptr_00);
            local_d00.base.item_count = (int)this_ptr_00;
            (*((this_ptr_00->base).base.vtable._ub)->setup)((CDemonActor *)this_ptr_00);
          }
        }
      }
      if (initial_selected_index == 1) break;
LAB_00537aa5:
      dStack_d04 = (double)((ulonglong)(uint)local_d00.base.item_count << 0x20);
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_5b0,0);
    }
    iVar3 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                      (g_CEditorToolsPtr,"Enter enemy types to process","CEnemy",200,1
                      );
    if (iVar3 == 0) {
      dStack_d04 = (double)((ulonglong)(uint)local_d00.base.item_count << 0x20);
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_5b0,0);
      goto LAB_005379f3;
    }
    iVar3 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                      (g_CEditorToolsPtr,"Enter actor name wildcard",g_ActorWildcardBuffer,
                       200,1);
    if (iVar3 == 0) {
      dStack_d04 = (double)((ulonglong)(uint)local_d00.base.item_count << 0x20);
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_5b0,0);
    }
    else {
      iVar3 = shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
                        (g_CEditorToolsPtr,"Enter minimum random speed",&FLOAT_006804b0,1,
                         0.01,100.0,1);
      if (iVar3 == 0) {
        dStack_d04 = (double)((ulonglong)(uint)local_d00.base.item_count << 0x20);
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_5b0,0);
      }
      else {
        iVar3 = shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
                          (g_CEditorToolsPtr,"Enter maximum random speed",&FLOAT_006804b4,1,
                           0.9f,100.0,1);
        if (iVar3 == 0) {
          dStack_d04 = (double)((ulonglong)(uint)local_d00.base.item_count << 0x20);
          shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_5b0,0);
        }
        else {
          shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_958);
          shape_edittool_cpp_CStrList_add_FUN_004a2b80
                    (&local_958.base,"Randomize speed for specified enemies with randomizeMe flag set");
          shape_edittool_cpp_CStrList_add_FUN_004a2b80
                    (&local_958.base,"Randomize speed for all specified enemies");
          dStack_d04 = (double)((ulonglong)(uint)local_d00.base.item_count << 0x20);
          iVar3 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                            (&local_958,"Randomize speeds",INT_02f797e0,0);
          if (-1 < iVar3) {
            INT_02f797e0 = iVar3;
            shape_edittool_cpp_CPickList_ctor_FUN_004a3b90
                      ((CPickList *)((int)register0x00000010 + -0xd00));
            for (pCVar1 = this_ptr->first_actor; pCVar1 != (CDemonActor *)0x0;
                pCVar1 = pCVar1->next_actor) {
              actor_ptr = core_actor_cpp_castToClassHash_FUN_0040c790
                                    (pCVar1,g_CEnemyClassInfo.name_hash);
              if (((actor_ptr != (CDemonActor *)0x0) &&
                  (((INT_02f797e0 != 0 || (*(int *)(actor_ptr[0x8d].create_event + 0x3c) != 0)) &&
                   (iVar3 = core_actor_cpp_isOfClass_FUN_0040c6d0(actor_ptr,"CEnemy"),
                   iVar3 != 0)))) &&
                 (iVar3 = shape_edittool_cpp_wildcardStringMatch_FUN_004a6e20
                                    (g_ActorWildcardBuffer,actor_ptr->actor_name,0), iVar3 != 0)) {
                fVar4 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.9f,1.1f);
                pCVar2 = (actor_ptr->vtable)._ub;
                dStack_d04._0_4_ = actor_ptr;
                *(float *)(actor_ptr[0x8d].create_event + 0x34) = fVar4;
                (*pCVar2->setup)(actor_ptr);
                dStack_d04 = (double)*(float *)(actor_ptr[0x8d].create_event + 0x34);
                _sprintf
                          (local_208 + 4,"%s\n%7.3f",actor_ptr,dStack_d04);
                local_d00.base.item_count = (int)(local_208 + 4);
                shape_edittool_cpp_CStrList_add_FUN_004a2b80
                          ((CStrList *)
                           &(((CPickList *)((int)register0x00000010 + -0xd00))->base).capacity,
                           (char *)local_d00.base.item_count);
              }
            }
            if (local_d00.base.item_count < 1) {
              dStack_d04._0_4_ = "No enemies matched criteria, no speeds randomized.";
              shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
                        (g_CEditorToolsPtr,"No enemies matched criteria, no speeds randomized.");
            }
            else {
              _sprintf
                        (local_e0 + 4,"%d enemy speeds randomized",local_d00.base.item_count)
              ;
              dStack_d04 = (double)((ulonglong)(uint)local_d00.base.item_count << 0x20);
              shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                        ((CPickList *)((int)register0x00000010 + -0xd00),local_e0 + 4,-1,0);
            }
            dStack_d04 = (double)((ulonglong)dStack_d04 & 0xffffffff00000000);
            shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                      ((CPickList *)((int)register0x00000010 + -0xd00),0);
            shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_958,0);
            goto LAB_00537aa5;
          }
          dStack_d04 = (double)((ulonglong)(uint)local_d00.base.item_count << 0x20);
          shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_958,0);
          dStack_d04 = (double)((ulonglong)dStack_d04 & 0xffffffff00000000);
          shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_5b0,0);
        }
      }
    }
  } while( true );
}
