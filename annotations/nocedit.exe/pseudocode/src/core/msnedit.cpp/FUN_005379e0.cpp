// Name: core_msnedit.cpp_FUN_005379e0
// Address: 005379e0
// Address Range: [[005379e0, 00537cff] [00537d5f, 00537dc1]]
// Convention: unknown
// Signature: undefined core_msnedit.cpp_FUN_005379e0()

#include "nocturne.h"

/* Signature: byte core_msnedit.cpp_FUN_005379e0(uint param_1) */

void core_msnedit_cpp_FUN_005379e0(void)

{
  CDemonActor *pCVar1;
  uint *puVar2;
  CDemonActor *this_ptr;
  int iVar3;
  CPickList *actor_ptr;
  int iVar4;
  float fVar5;
  BADSPACEBASE *in_ESP;
  int config_param1;
  int in_stack_00000004;
  int in_stack_fffff2f0;
  char *in_stack_fffff310;
  CPickList *in_stack_fffff314;
  CPickList *in_stack_fffff318;
  char *in_stack_fffff31c;
  char *in_stack_fffff320;
  uint uVar6;
  ulonglong in_stack_fffff324;
  ulonglong uVar7;
  CPickList *in_stack_fffff32c;
  uint in_stack_fffff330;
  uint in_stack_fffff334;
  CPickList *in_stack_fffff338;
  CStrList_vtable *in_stack_fffff33c;
  char **in_stack_fffff340;
  CStrList_vtable *in_stack_fffff344;
  CStrList_vtable *in_stack_fffff348;
  uint in_stack_fffff34c;
  uint in_stack_fffff350;
  byte auStack_938 [16];
  byte auStack_928 [888];
  byte local_5b0 [16];
  byte auStack_5a0 [8];
  byte auStack_598 [8];
  byte auStack_590 [952];
  char acStack_1d8 [304];
  char acStack_a8 [152];
  
  config_param1 = 0;
LAB_005379f3:
  do {
    while( true ) {
      shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)local_5b0);
      shape_edittool_cpp_CStrList_add_FUN_004a2b80
                ((CStrList *)(local_5b0 + 4),"Randomize all enemies with randomizeMe flag set.");
      shape_edittool_cpp_CStrList_add_FUN_004a2b80
                ((CStrList *)(local_5b0 + 8),"Randomize enemy speeds for specific enemies.");
      config_param1 =
           shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                     ((CPickList *)(local_5b0 + 0xc),"Enemy randomizer",config_param1,0);
      if (config_param1 < 0) {
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                  ((CPickList *)auStack_5a0,0,(uint)in_stack_fffff310,(uint)in_stack_fffff314,
                   (uint)in_stack_fffff318,(uint)in_stack_fffff31c,(uint)in_stack_fffff320);
        return;
      }
      if (config_param1 == 0) {
        for (pCVar1 = *(CDemonActor **)(in_stack_00000004 + 0x548); pCVar1 != (CDemonActor *)0x0;
            pCVar1 = pCVar1->next_actor) {
          this_ptr = core_actor_cpp_castToClassHash_FUN_0040c790(pCVar1,g_CEnemyClassInfo.name_hash)
          ;
          if ((this_ptr != (CDemonActor *)0x0) &&
             (*(int *)(this_ptr[0x8d].create_event + 0x3c) != 0)) {
            (*this_ptr->vtable[1].processMeleeHit)(this_ptr,in_stack_fffff2f0);
            (*this_ptr->vtable->setup)(this_ptr);
          }
        }
      }
      if (config_param1 == 1) break;
LAB_00537aa5:
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                ((CPickList *)auStack_5a0,0,(uint)in_stack_fffff310,(uint)in_stack_fffff314,
                 (uint)in_stack_fffff318,(uint)in_stack_fffff31c,(uint)in_stack_fffff320);
    }
    in_stack_fffff310 =
         (char *)shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                           (g_CEditorToolsPtr,"Enter enemy types to process","CEnemy",
                            200,1);
    if ((CPickList *)in_stack_fffff310 == (CPickList *)0x0) {
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                ((CPickList *)(auStack_5a0 + 4),0,(uint)in_stack_fffff314,(uint)in_stack_fffff318,
                 (uint)in_stack_fffff31c,(uint)in_stack_fffff320,(uint)in_stack_fffff324);
      goto LAB_005379f3;
    }
    in_stack_fffff314 =
         (CPickList *)
         shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                   (g_CEditorToolsPtr,"Enter actor name wildcard",&DAT_00680580,200,1);
    if (in_stack_fffff314 == (CPickList *)0x0) {
      in_stack_fffff310 = auStack_598;
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                ((CPickList *)in_stack_fffff310,0,(uint)in_stack_fffff318,(uint)in_stack_fffff31c,
                 (uint)in_stack_fffff320,(uint)in_stack_fffff324,
                 (uint)((ulonglong)in_stack_fffff324 >> 0x20));
    }
    else {
      in_stack_fffff318 =
           (CPickList *)
           shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
                     (g_CEditorToolsPtr,"Enter minimum random speed",&DAT_006804b0,true,0.01,
                      100.0,true);
      if (in_stack_fffff318 == (CPickList *)0x0) {
        in_stack_fffff314 = (CPickList *)(auStack_598 + 4);
        in_stack_fffff310 = (char *)0x537b64;
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                  (in_stack_fffff314,0,(uint)in_stack_fffff31c,(uint)in_stack_fffff320,
                   (uint)in_stack_fffff324,(uint)((ulonglong)in_stack_fffff324 >> 0x20),
                   (uint)in_stack_fffff32c);
      }
      else {
        in_stack_fffff314 = (CPickList *)0x42c80000;
        in_stack_fffff310 = (char *)DAT_006804b0;
        in_stack_fffff31c =
             (char *)shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
                               (g_CEditorToolsPtr,"Enter maximum random speed",&DAT_006804b4,
                                true,DAT_006804b0,100.0,true);
        if ((CPickList *)in_stack_fffff31c == (CPickList *)0x0) {
          in_stack_fffff318 = (CPickList *)auStack_590;
          in_stack_fffff314 = (CPickList *)0x537ba4;
          shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                    (in_stack_fffff318,0,(uint)in_stack_fffff320,(uint)in_stack_fffff324,
                     (uint)((ulonglong)in_stack_fffff324 >> 0x20),(uint)in_stack_fffff32c,
                     in_stack_fffff330);
        }
        else {
          shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)auStack_938);
          shape_edittool_cpp_CStrList_add_FUN_004a2b80
                    ((CStrList *)(auStack_938 + 4),"Randomize speed for specified enemies with randomizeMe flag set");
          shape_edittool_cpp_CStrList_add_FUN_004a2b80
                    ((CStrList *)(auStack_938 + 8),"Randomize speed for all specified enemies");
          in_stack_fffff320 = "Randomize speeds";
          in_stack_fffff31c = auStack_938 + 0xc;
          in_stack_fffff318 = (CPickList *)0x537c01;
          iVar4 = DAT_02f797e0;
          iVar3 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                            ((CPickList *)in_stack_fffff31c,"Randomize speeds",DAT_02f797e0
                             ,0);
          if (-1 < iVar3) {
            uVar7 = CONCAT44 /* combine 2-byte values */(0x537c19,iVar4);
            DAT_02f797e0 = iVar3;
            shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xfffff330);
            for (pCVar1 = *(CDemonActor **)(in_stack_00000004 + 0x548); pCVar1 != (CDemonActor *)0x0
                ; pCVar1 = pCVar1->next_actor) {
              actor_ptr = (CPickList *)
                          core_actor_cpp_castToClassHash_FUN_0040c790
                                    (pCVar1,g_CEnemyClassInfo.name_hash);
              if ((actor_ptr != (CPickList *)0x0) &&
                 ((DAT_02f797e0 != 0 ||
                  (actor_ptr[0x34].base_strlist.vtable != (CStrList_vtable *)0x0)))) {
                in_stack_fffff310 = "CEnemy";
                iVar4 = core_actor_cpp_isOfClass_FUN_0040c6d0
                                  ((CDemonActor *)actor_ptr,"CEnemy");
                if (iVar4 != 0) {
                  in_stack_fffff314 = (CPickList *)0x0;
                  in_stack_fffff310 = (char *)actor_ptr;
                  iVar4 = shape_edittool_cpp_wildcardStringMatch_FUN_004a6e20
                                    (&DAT_00680580,(char *)actor_ptr,0);
                  if (iVar4 != 0) {
                    in_stack_fffff310 = (char *)0x537d00;
                    fVar5 = core_actor_cpp_getRandomFloat_FUN_0040cc10(DAT_006804b0,DAT_006804b4);
                    puVar2 = *(uint **)(actor_ptr->search_text_buffer + 0x48);
                    actor_ptr[0x34].base_strlist.capacity = (int)fVar5;
                    (*(code *)*puVar2)((CDemonActor *)actor_ptr);
                    in_stack_fffff31c = "%s\n%7.3f";
                    in_stack_fffff318 = (CPickList *)(auStack_590 + 0x3b4);
                    in_stack_fffff314 = (CPickList *)0x537d42;
                    crt_stdio_c_sprintf_FUN_005fdbd0
                              ((char *)in_stack_fffff318,"%s\n%7.3f",actor_ptr,
                               (double)(float)actor_ptr[0x34].base_strlist.capacity);
                    uVar7 = 0x537d57;
                    shape_edittool_cpp_CStrList_add_FUN_004a2b80
                              ((CStrList *)&stack0xfffff330,acStack_1d8);
                    in_stack_fffff320 = (char *)actor_ptr;
                  }
                }
              }
            }
            if ((int)in_stack_fffff334 < 1) {
              in_stack_fffff324 = CONCAT44 /* combine 2-byte values */(0x537c62,(int)uVar7);
              in_stack_fffff32c = (CPickList *)g_CEditorToolsPtr;
              shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
                        (g_CEditorToolsPtr,"No enemies matched criteria, no speeds randomized.");
            }
            else {
              crt_stdio_c_sprintf_FUN_005fdbd0(acStack_a8,"%d enemy speeds randomized");
              in_stack_fffff32c = (CPickList *)(acStack_a8 + 4);
              in_stack_fffff324 = CONCAT44 /* combine 2-byte values */((CPickList *)&stack0xfffff338,0x537d9d);
              shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                        ((CPickList *)&stack0xfffff338,(char *)in_stack_fffff32c,-1,0);
            }
            in_stack_fffff330 = 0x537c71;
            shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                      ((CPickList *)&stack0xfffff33c,0,(uint)in_stack_fffff33c,
                       (uint)in_stack_fffff340,(uint)in_stack_fffff344,(uint)in_stack_fffff348,
                       in_stack_fffff34c);
            in_stack_fffff33c = (CStrList_vtable *)0x0;
            in_stack_fffff338 = (CPickList *)(auStack_928 + 0x10);
            in_stack_fffff334 = 0x537c83;
            shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                      (in_stack_fffff338,0,(uint)in_stack_fffff340,(uint)in_stack_fffff344,
                       (uint)in_stack_fffff348,in_stack_fffff34c,in_stack_fffff350);
            goto LAB_00537aa5;
          }
          uVar6 = 0x537c9a;
          shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                    ((CPickList *)auStack_928,0,in_stack_fffff330,in_stack_fffff334,
                     (uint)in_stack_fffff338,(uint)in_stack_fffff33c,(uint)in_stack_fffff340);
          in_stack_fffff330 = 0;
          in_stack_fffff32c = (CPickList *)(auStack_590 + 0x14);
          in_stack_fffff324 = CONCAT44 /* combine 2-byte values */(0x537cac,uVar6);
          shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                    (in_stack_fffff32c,0,in_stack_fffff334,(uint)in_stack_fffff338,
                     (uint)in_stack_fffff33c,(uint)in_stack_fffff340,(uint)in_stack_fffff344);
        }
      }
    }
  } while( true );
}
