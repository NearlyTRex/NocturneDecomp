// Name: core_msnedit.cpp_FUN_005379e0
// Address: 005379e0
// Address Range: [[005379e0, 00537cff] [00537d5f, 00537dc1]]
// Convention: unknown
// Signature: undefined core_msnedit.cpp_FUN_005379e0()
// Cross-references:
//   core_msnedit.cpp_CDemonMission_showEditorMenu_FUN_005381e0 (005381e0) at 00538820 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Randomize_all_enemies_wi_0063ba9d
//   TerminatedCString s_Randomize_enemy_speeds_f_0063bace
//   TerminatedCString s_Enemy_randomizer_0063bafb
//   TerminatedCString s_Enter_enemy_types_to_pro_0063bb0c
//   TerminatedCString s_Enter_actor_name_wildcar_0063bb29
//   TerminatedCString s_Enter_minimum_random_spe_0063bb43
//   TerminatedCString s_Enter_maximum_random_spe_0063bb5e
//   TerminatedCString s_Randomize_speed_for_spec_0063bb79
//   TerminatedCString s_Randomize_speed_for_all__0063bbb9
//   TerminatedCString s_Randomize_speeds_0063bbe3
//   TerminatedCString s_No_enemies_matched_crite_0063bbfd
//   TerminatedCString s_d_enemy_speeds_randomize_0063bc30
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   undefined4 DAT_006804b0
//   undefined4 DAT_006804b4
//   TerminatedCString s_CEnemy_006804b8
//   undefined4 DAT_00680580
//   CEditorTools g_CEditorToolsPtr
//   undefined4 g_CEnemyClassInfo.name_hash
//   undefined4 DAT_02f797e0
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790
//   core_actor.cpp_getRandomFloat_FUN_0040cc10
//   core_actor.cpp_isOfClass_FUN_0040c6d0
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
//   shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0
//   shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
//   shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   shape_edittool.cpp_wildcardStringMatch_FUN_004a6e20

#include "nocturne.h"

/* Signature: undefined1 core_msnedit.cpp_FUN_005379e0(undefined4 param_1) */

void core_msnedit_cpp_FUN_005379e0(void)

{
  CDemonActor *pCVar1;
  undefined4 *puVar2;
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
  undefined4 uVar6;
  undefined8 in_stack_fffff324;
  undefined8 uVar7;
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
  undefined1 auStack_938 [16];
  undefined1 auStack_928 [888];
  undefined1 local_5b0 [16];
  undefined1 auStack_5a0 [8];
  undefined1 auStack_598 [8];
  undefined1 auStack_590 [952];
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
            pCVar1 = (pCVar1->metadata).next_actor) {
          this_ptr = core_actor_cpp_castToClassHash_FUN_0040c790(pCVar1,g_CEnemyClassInfo.name_hash)
          ;
          if ((this_ptr != (CDemonActor *)0x0) &&
             (*(int *)(this_ptr[0x8d].create_event + 0x3c) != 0)) {
            (*(this_ptr->metadata).vtable[1].processMeleeHit)(this_ptr,in_stack_fffff2f0);
            (*((this_ptr->metadata).vtable)->setup)(this_ptr);
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
            uVar7 = CONCAT44(0x537c19,iVar4);
            DAT_02f797e0 = iVar3;
            shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xfffff330);
            for (pCVar1 = *(CDemonActor **)(in_stack_00000004 + 0x548); pCVar1 != (CDemonActor *)0x0
                ; pCVar1 = (pCVar1->metadata).next_actor) {
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
                    puVar2 = *(undefined4 **)(actor_ptr->search_text_buffer + 0x48);
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
              in_stack_fffff324 = CONCAT44(0x537c62,(int)uVar7);
              in_stack_fffff32c = (CPickList *)g_CEditorToolsPtr;
              shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
                        (g_CEditorToolsPtr,"No enemies matched criteria, no speeds randomized.");
            }
            else {
              crt_stdio_c_sprintf_FUN_005fdbd0(acStack_a8,"%d enemy speeds randomized");
              in_stack_fffff32c = (CPickList *)(acStack_a8 + 4);
              in_stack_fffff324 = CONCAT44((CPickList *)&stack0xfffff338,0x537d9d);
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
          in_stack_fffff324 = CONCAT44(0x537cac,uVar6);
          shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                    (in_stack_fffff32c,0,in_stack_fffff334,(uint)in_stack_fffff338,
                     (uint)in_stack_fffff33c,(uint)in_stack_fffff340,(uint)in_stack_fffff344);
        }
      }
    }
  } while( true );
}


// Assembly code:
// 005379e0: PUSH EBX
//   Label: core_msnedit.cpp_FUN_005379e0
// 005379e1: PUSH ESI
// 005379e2: PUSH EDI
// 005379e3: PUSH EBP
// 005379e4: SUB ESP,0xcf0
// 005379ea: MOV EBP,dword ptr [ESP + 0xd04]
// 005379f1: XOR EDI,EDI
// 005379f3: LEA EAX,[ESP + 0x750]
//   Label: LAB_005379f3
// 005379fa: PUSH EAX
// 005379fb: CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
// 00537a00: ADD ESP,0x4
// 00537a03: PUSH 0x63ba9d
//   XREF to: 0063ba9d (DATA)
// 00537a08: LEA EAX,[ESP + 0x754]
// 00537a0f: PUSH EAX
// 00537a10: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 00537a15: ADD ESP,0x8
// 00537a18: PUSH 0x63bace
//   XREF to: 0063bace (DATA)
// 00537a1d: LEA EAX,[ESP + 0x754]
// 00537a24: PUSH EAX
// 00537a25: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 00537a2a: ADD ESP,0x8
// 00537a2d: PUSH 0x0
// 00537a2f: PUSH EDI
// 00537a30: PUSH 0x63bafb
//   XREF to: 0063bafb (DATA)
// 00537a35: LEA EAX,[ESP + 0x75c]
// 00537a3c: PUSH EAX
// 00537a3d: CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
// 00537a42: ADD ESP,0x10
// 00537a45: MOV EDI,EAX
// 00537a47: TEST EAX,EAX
// 00537a49: JL 0x00537da5
//   XREF to: 00537da5 (CONDITIONAL_JUMP)
// 00537a4f: JNZ 0x00537aa0
//   XREF to: 00537aa0 (CONDITIONAL_JUMP)
// 00537a51: MOV ESI,dword ptr [EBP + 0x548]
// 00537a57: TEST ESI,ESI
// 00537a59: JZ 0x00537aa0
//   XREF to: 00537aa0 (CONDITIONAL_JUMP)
// 00537a5b: MOV EDX,dword ptr [0x02cf2bf0]
//   Label: LAB_00537a5b
//   XREF to: 02cf2bf0 (READ)
// 00537a61: PUSH EDX
// 00537a62: PUSH ESI
// 00537a63: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 00537a68: MOV EBX,EAX
// 00537a6a: ADD ESP,0x8
// 00537a6d: TEST EAX,EAX
// 00537a6f: JZ 0x00537a96
//   XREF to: 00537a96 (CONDITIONAL_JUMP)
// 00537a71: CMP dword ptr [EAX + 0xbe2c],0x0
// 00537a78: JZ 0x00537a96
//   XREF to: 00537a96 (CONDITIONAL_JUMP)
// 00537a7a: PUSH EBX
// 00537a7b: MOV EAX,dword ptr [EAX + 0x154]
// 00537a81: CALL dword ptr [EAX + 0x15c]
// 00537a87: ADD ESP,0x4
// 00537a8a: MOV EAX,dword ptr [EBX + 0x154]
// 00537a90: PUSH EBX
// 00537a91: CALL dword ptr [EAX]
// 00537a93: ADD ESP,0x4
// 00537a96: MOV ESI,dword ptr [ESI + 0x14c]
//   Label: LAB_00537a96
// 00537a9c: TEST ESI,ESI
// 00537a9e: JNZ 0x00537a5b
//   XREF to: 00537a5b (CONDITIONAL_JUMP)
// 00537aa0: CMP EDI,0x1
//   Label: LAB_00537aa0
// 00537aa3: JZ 0x00537abc
//   XREF to: 00537abc (CONDITIONAL_JUMP)
// 00537aa5: PUSH 0x0
//   Label: LAB_00537aa5
// 00537aa7: LEA EAX,[ESP + 0x754]
// 00537aae: PUSH EAX
// 00537aaf: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 00537ab4: ADD ESP,0x8
// 00537ab7: JMP 0x005379f3
//   XREF to: 005379f3 (UNCONDITIONAL_JUMP)
// 00537abc: PUSH EDI
//   Label: LAB_00537abc
// 00537abd: PUSH 0xc8
// 00537ac2: PUSH 0x6804b8
//   XREF to: 006804b8 (DATA)
// 00537ac7: PUSH 0x63bb0c
//   XREF to: 0063bb0c (DATA)
// 00537acc: MOV EBX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
//   XREF to: 02cf1cd4 (PARAM)
// 00537ad2: PUSH EBX
//   XREF to: 02cf1cd4 (DATA)
// 00537ad3: CALL shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
//   XREF to: 004a03d0 (UNCONDITIONAL_CALL)
// 00537ad8: ADD ESP,0x14
// 00537adb: TEST EAX,EAX
// 00537add: JNZ 0x00537af5
//   XREF to: 00537af5 (CONDITIONAL_JUMP)
// 00537adf: PUSH EAX
// 00537ae0: LEA EAX,[ESP + 0x754]
// 00537ae7: PUSH EAX
// 00537ae8: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 00537aed: ADD ESP,0x8
// 00537af0: JMP 0x005379f3
//   XREF to: 005379f3 (UNCONDITIONAL_JUMP)
// 00537af5: PUSH EDI
//   Label: LAB_00537af5
// 00537af6: PUSH 0xc8
// 00537afb: PUSH 0x680580
//   XREF to: 00680580 (DATA)
// 00537b00: PUSH 0x63bb29
//   XREF to: 0063bb29 (DATA)
// 00537b05: MOV ESI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 00537b0b: PUSH ESI
//   XREF to: 02cf1cd4 (DATA)
// 00537b0c: CALL shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
//   XREF to: 004a03d0 (UNCONDITIONAL_CALL)
// 00537b11: ADD ESP,0x14
// 00537b14: TEST EAX,EAX
// 00537b16: JNZ 0x00537b2e
//   XREF to: 00537b2e (CONDITIONAL_JUMP)
// 00537b18: PUSH EAX
// 00537b19: LEA EAX,[ESP + 0x754]
// 00537b20: PUSH EAX
// 00537b21: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 00537b26: ADD ESP,0x8
// 00537b29: JMP 0x005379f3
//   XREF to: 005379f3 (UNCONDITIONAL_JUMP)
// 00537b2e: PUSH EDI
//   Label: LAB_00537b2e
// 00537b2f: PUSH 0x42c80000
// 00537b34: PUSH 0x3c23d70a
// 00537b39: PUSH EDI
// 00537b3a: PUSH 0x6804b0
//   XREF to: 006804b0 (DATA)
// 00537b3f: PUSH 0x63bb43
//   XREF to: 0063bb43 (DATA)
// 00537b44: MOV EAX,[0x00678a60]
//   XREF to: 00678a60 (READ)
// 00537b49: PUSH EAX
//   XREF to: 02cf1cd4 (DATA)
// 00537b4a: CALL shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
//   XREF to: 004a00f0 (UNCONDITIONAL_CALL)
// 00537b4f: ADD ESP,0x1c
// 00537b52: TEST EAX,EAX
// 00537b54: JNZ 0x00537b6c
//   XREF to: 00537b6c (CONDITIONAL_JUMP)
// 00537b56: PUSH EAX
// 00537b57: LEA EAX,[ESP + 0x754]
// 00537b5e: PUSH EAX
// 00537b5f: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 00537b64: ADD ESP,0x8
// 00537b67: JMP 0x005379f3
//   XREF to: 005379f3 (UNCONDITIONAL_JUMP)
// 00537b6c: PUSH EDI
//   Label: LAB_00537b6c
// 00537b6d: PUSH 0x42c80000
// 00537b72: PUSH dword ptr [0x006804b0]
//   XREF to: 006804b0 (READ)
// 00537b78: PUSH EDI
// 00537b79: PUSH 0x6804b4
//   XREF to: 006804b4 (DATA)
// 00537b7e: PUSH 0x63bb5e
//   XREF to: 0063bb5e (DATA)
// 00537b83: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 00537b89: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 00537b8a: CALL shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
//   XREF to: 004a00f0 (UNCONDITIONAL_CALL)
// 00537b8f: ADD ESP,0x1c
// 00537b92: TEST EAX,EAX
// 00537b94: JNZ 0x00537bac
//   XREF to: 00537bac (CONDITIONAL_JUMP)
// 00537b96: PUSH EAX
// 00537b97: LEA EAX,[ESP + 0x754]
// 00537b9e: PUSH EAX
// 00537b9f: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 00537ba4: ADD ESP,0x8
// 00537ba7: JMP 0x005379f3
//   XREF to: 005379f3 (UNCONDITIONAL_JUMP)
// 00537bac: LEA EAX,[ESP + 0x3a8]
//   Label: LAB_00537bac
// 00537bb3: PUSH EAX
// 00537bb4: CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
// 00537bb9: ADD ESP,0x4
// 00537bbc: PUSH 0x63bb79
//   XREF to: 0063bb79 (DATA)
// 00537bc1: LEA EAX,[ESP + 0x3ac]
// 00537bc8: PUSH EAX
// 00537bc9: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 00537bce: ADD ESP,0x8
// 00537bd1: PUSH 0x63bbb9
//   XREF to: 0063bbb9 (DATA)
// 00537bd6: LEA EAX,[ESP + 0x3ac]
// 00537bdd: PUSH EAX
// 00537bde: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 00537be3: ADD ESP,0x8
// 00537be6: PUSH 0x0
// 00537be8: MOV ECX,dword ptr [0x02f797e0]
//   XREF to: 02f797e0 (READ)
// 00537bee: PUSH ECX
// 00537bef: PUSH 0x63bbe3
//   XREF to: 0063bbe3 (DATA)
// 00537bf4: LEA EAX,[ESP + 0x3b4]
// 00537bfb: PUSH EAX
// 00537bfc: CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
// 00537c01: ADD ESP,0x10
// 00537c04: TEST EAX,EAX
// 00537c06: JL 0x00537c8b
//   XREF to: 00537c8b (CONDITIONAL_JUMP)
// 00537c0c: MOV [0x02f797e0],EAX
//   XREF to: 02f797e0 (WRITE)
// 00537c11: MOV EAX,ESP
// 00537c13: PUSH EAX
// 00537c14: CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
// 00537c19: MOV ESI,dword ptr [EBP + 0x548]
// 00537c1f: ADD ESP,0x4
// 00537c22: TEST ESI,ESI
// 00537c24: JZ 0x00537c46
//   XREF to: 00537c46 (CONDITIONAL_JUMP)
// 00537c26: MOV EDX,dword ptr [0x02cf2bf0]
//   Label: LAB_00537c26
//   XREF to: 02cf2bf0 (READ)
// 00537c2c: PUSH EDX
// 00537c2d: PUSH ESI
// 00537c2e: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 00537c33: ADD ESP,0x8
// 00537c36: MOV EBX,EAX
// 00537c38: TEST EAX,EAX
// 00537c3a: JNZ 0x00537cb4
//   XREF to: 00537cb4 (CONDITIONAL_JUMP)
// 00537c3c: MOV ESI,dword ptr [ESI + 0x14c]
//   Label: LAB_00537c3c
// 00537c42: TEST ESI,ESI
// 00537c44: JNZ 0x00537c26
//   XREF to: 00537c26 (CONDITIONAL_JUMP)
// 00537c46: MOV EBX,dword ptr [ESP]
//   Label: LAB_00537c46
// 00537c49: CMP EBX,0x1
// 00537c4c: JGE 0x00537d71
//   XREF to: 00537d71 (CONDITIONAL_JUMP)
// 00537c52: PUSH 0x63bbfd
//   XREF to: 0063bbfd (DATA)
// 00537c57: MOV EAX,[0x00678a60]
//   XREF to: 00678a60 (READ)
// 00537c5c: PUSH EAX
//   XREF to: 02cf1cd4 (DATA)
// 00537c5d: CALL shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0
//   XREF to: 0049e6a0 (UNCONDITIONAL_CALL)
// 00537c62: ADD ESP,0x8
// 00537c65: PUSH 0x0
//   Label: LAB_00537c65
// 00537c67: LEA EAX,[ESP + 0x4]
// 00537c6b: PUSH EAX
// 00537c6c: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 00537c71: ADD ESP,0x8
// 00537c74: PUSH 0x0
// 00537c76: LEA EAX,[ESP + 0x3ac]
// 00537c7d: PUSH EAX
// 00537c7e: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 00537c83: ADD ESP,0x8
// 00537c86: JMP 0x00537aa5
//   XREF to: 00537aa5 (UNCONDITIONAL_JUMP)
// 00537c8b: PUSH 0x0
//   Label: LAB_00537c8b
// 00537c8d: LEA EAX,[ESP + 0x3ac]
// 00537c94: PUSH EAX
// 00537c95: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 00537c9a: ADD ESP,0x8
// 00537c9d: PUSH 0x0
// 00537c9f: LEA EAX,[ESP + 0x754]
// 00537ca6: PUSH EAX
// 00537ca7: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 00537cac: ADD ESP,0x8
// 00537caf: JMP 0x005379f3
//   XREF to: 005379f3 (UNCONDITIONAL_JUMP)
// 00537cb4: CMP dword ptr [0x02f797e0],0x0
//   Label: LAB_00537cb4
//   XREF to: 02f797e0 (READ)
// 00537cbb: JZ 0x00537d5f
//   XREF to: 00537d5f (CONDITIONAL_JUMP)
// 00537cc1: PUSH 0x6804b8
//   Label: LAB_00537cc1
//   XREF to: 006804b8 (DATA)
// 00537cc6: PUSH EBX
// 00537cc7: CALL core_actor.cpp_isOfClass_FUN_0040c6d0
//   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
// 00537ccc: ADD ESP,0x8
// 00537ccf: TEST EAX,EAX
// 00537cd1: JZ 0x00537c3c
//   XREF to: 00537c3c (CONDITIONAL_JUMP)
// 00537cd7: PUSH 0x0
// 00537cd9: PUSH EBX
// 00537cda: PUSH 0x680580
//   XREF to: 00680580 (DATA)
// 00537cdf: CALL shape_edittool.cpp_wildcardStringMatch_FUN_004a6e20
//   XREF to: 004a6e20 (UNCONDITIONAL_CALL)
// 00537ce4: ADD ESP,0xc
// 00537ce7: TEST EAX,EAX
// 00537ce9: JZ 0x00537c3c
//   XREF to: 00537c3c (CONDITIONAL_JUMP)
// 00537cef: PUSH dword ptr [0x006804b4]
//   XREF to: 006804b4 (READ)
// 00537cf5: PUSH dword ptr [0x006804b0]
//   XREF to: 006804b0 (READ)
// 00537cfb: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
// 00537d5f: CMP dword ptr [EAX + 0xbe2c],0x0
//   Label: LAB_00537d5f
// 00537d66: JNZ 0x00537cc1
//   XREF to: 00537cc1 (CONDITIONAL_JUMP)
// 00537d6c: JMP 0x00537c3c
//   XREF to: 00537c3c (UNCONDITIONAL_JUMP)
// 00537d71: PUSH EBX
//   Label: LAB_00537d71
// 00537d72: PUSH 0x63bc30
//   XREF to: 0063bc30 (DATA)
// 00537d77: LEA EAX,[ESP + 0xc2c]
// 00537d7e: PUSH EAX
// 00537d7f: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00537d84: ADD ESP,0xc
// 00537d87: PUSH 0x0
// 00537d89: PUSH -0x1
// 00537d8b: LEA EAX,[ESP + 0xc2c]
// 00537d92: PUSH EAX
// 00537d93: LEA EAX,[ESP + 0xc]
// 00537d97: PUSH EAX
// 00537d98: CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
// 00537d9d: ADD ESP,0x10
// 00537da0: JMP 0x00537c65
//   XREF to: 00537c65 (UNCONDITIONAL_JUMP)
// 00537da5: PUSH 0x0
//   Label: LAB_00537da5
// 00537da7: LEA EAX,[ESP + 0x754]
// 00537dae: PUSH EAX
// 00537daf: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 00537db4: ADD ESP,0x8
// 00537db7: ADD ESP,0xcf0
// 00537dbd: POP EBP
// 00537dbe: POP EDI
// 00537dbf: POP ESI
// 00537dc0: POP EBX
// 00537dc1: RET
