// Name: core_msnedit.cpp_CDemonMission_enemyRandomizer_FUN_005379e0
// Address: 005379e0
// Address Range: [[005379e0, 00537cff] [00537d5f, 00537dc1]]
// Convention: __cdecl
// Signature: void __cdecl core_msnedit_cpp_CDemonMission_enemyRandomizer_FUN_005379e0(CDemonMission *this_ptr)

#include "nocturne.h"

void __cdecl core_msnedit_cpp_CDemonMission_enemyRandomizer_FUN_005379e0(CDemonMission *this_ptr)

{
  CDemonActor *pCVar1;
  CDemonActor_vtable *pCVar2;
  CDemonActor *pCVar3;
  int iVar4;
  int config_param1;
  ulonglong in_stack_fffff2fc;
  char *string_data;
  ulonglong uVar5;
  CStrList aCStack_cfc [58];
  CPickList CStack_958;
  CPickList local_5b0;
  char acStack_204 [296];
  char acStack_dc [200];
  float fStack_14;
  
  config_param1 = 0;
LAB_005379f3:
  do {
    while( true ) {
      string_data = (char *)(in_stack_fffff2fc >> 0x20);
      shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_5b0);
      shape_edittool_cpp_CStrList_add_FUN_004a2b80
                (&local_5b0.base,"Randomize all enemies with randomizeMe flag set.");
      shape_edittool_cpp_CStrList_add_FUN_004a2b80
                (&local_5b0.base,"Randomize enemy speeds for specific enemies.");
      config_param1 =
           shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                     (&local_5b0,"Enemy randomizer",config_param1,0);
      if (config_param1 < 0) {
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_5b0,0);
        return;
      }
      if (config_param1 == 0) {
        for (pCVar1 = this_ptr->first_actor; pCVar1 != (CDemonActor *)0x0;
            pCVar1 = pCVar1->next_actor) {
          pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c790(pCVar1,g_CEnemyClassInfo.name_hash);
          if ((pCVar3 != (CDemonActor *)0x0) && (*(int *)(pCVar3[0x8d].create_event + 0x3c) != 0)) {
            (*(((pCVar3->vtable)._ue)->_ue).enemyfunc3)();
            (*((pCVar3->vtable)._ub)->setup)(pCVar3);
          }
        }
      }
      if (config_param1 == 1) break;
LAB_00537aa5:
      in_stack_fffff2fc = ZEXT48(string_data) << 0x20;
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_5b0,0);
    }
    iVar4 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                      (g_CEditorToolsPtr,"Enter enemy types to process","CEnemy",200,1
                      );
    if (iVar4 == 0) {
      in_stack_fffff2fc = ZEXT48(string_data) << 0x20;
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_5b0,0);
      goto LAB_005379f3;
    }
    iVar4 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                      (g_CEditorToolsPtr,"Enter actor name wildcard",&DAT_00680580,200,1);
    if (iVar4 == 0) {
      in_stack_fffff2fc = ZEXT48(string_data) << 0x20;
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_5b0,0);
    }
    else {
      iVar4 = shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
                        (g_CEditorToolsPtr,"Enter minimum random speed",&0.9f,1,
                         0.01,100.0,1);
      if (iVar4 == 0) {
        in_stack_fffff2fc = ZEXT48(string_data) << 0x20;
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_5b0,0);
      }
      else {
        iVar4 = shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
                          (g_CEditorToolsPtr,"Enter maximum random speed",&1.1f,1,
                           0.9f,100.0,1);
        if (iVar4 == 0) {
          in_stack_fffff2fc = ZEXT48(string_data) << 0x20;
          shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_5b0,0);
        }
        else {
          shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&CStack_958);
          shape_edittool_cpp_CStrList_add_FUN_004a2b80
                    (&CStack_958.base,"Randomize speed for specified enemies with randomizeMe flag set");
          shape_edittool_cpp_CStrList_add_FUN_004a2b80
                    (&CStack_958.base,"Randomize speed for all specified enemies");
          iVar4 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                            (&CStack_958,"Randomize speeds",DAT_02f797e0,0);
          if (-1 < iVar4) {
            DAT_02f797e0 = iVar4;
            shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xfffff300);
            for (pCVar1 = this_ptr->first_actor; pCVar1 != (CDemonActor *)0x0;
                pCVar1 = pCVar1->next_actor) {
              pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c790
                                 (pCVar1,g_CEnemyClassInfo.name_hash);
              if (((pCVar3 != (CDemonActor *)0x0) &&
                  (((DAT_02f797e0 != 0 || (*(int *)(pCVar3[0x8d].create_event + 0x3c) != 0)) &&
                   (iVar4 = core_actor_cpp_isOfClass_FUN_0040c6d0(pCVar3,"CEnemy"),
                   iVar4 != 0)))) &&
                 (iVar4 = shape_edittool_cpp_wildcardStringMatch_FUN_004a6e20
                                    (&DAT_00680580,pCVar3->actor_name,0), iVar4 != 0)) {
                fStack_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10
                                      (0.9f,1.1f);
                pCVar2 = (pCVar3->vtable)._ub;
                *(float *)(pCVar3[0x8d].create_event + 0x34) = fStack_14;
                (*pCVar2->setup)(pCVar3);
                sprintf
                          (acStack_204,"%s\n%7.3f",pCVar3,
                           (double)*(float *)(pCVar3[0x8d].create_event + 0x34));
                string_data = acStack_204;
                shape_edittool_cpp_CStrList_add_FUN_004a2b80(aCStack_cfc,string_data);
              }
            }
            if ((int)string_data < 1) {
              shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
                        (g_CEditorToolsPtr,"No enemies matched criteria, no speeds randomized.");
            }
            else {
              sprintf
                        (acStack_dc,"%d enemy speeds randomized",string_data);
              shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                        ((CPickList *)&stack0xfffff300,acStack_dc,-1,0);
            }
            shape_edittool_cpp_CPickList_dtor_FUN_004a3c80((CPickList *)&stack0xfffff300,0);
            shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&CStack_958,0);
            goto LAB_00537aa5;
          }
          uVar5 = ZEXT48(string_data) << 0x20;
          shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&CStack_958,0);
          in_stack_fffff2fc = uVar5 & 0xffffffff00000000;
          shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_5b0,0);
        }
      }
    }
  } while( true );
}
