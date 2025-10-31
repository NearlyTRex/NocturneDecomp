// Name: core_charactr.cpp_CCharacter_FUN_0042f3e0
// Address: 0042f3e0
// Address Range: [[0042f3e0, 0042f72b]]
// Convention: unknown
// Signature: undefined core_charactr.cpp_CCharacter_FUN_0042f3e0()
// Cross-references:
//   core_charactr.cpp_CCharacter_FUN_0042f730 (0042f730) at 0042f77b [DATA]
// Globals:
//   TerminatedCString s_nothing_006176bb
//   TerminatedCString s_Hand_d_s_s_006176c5
//   TerminatedCString s_No_hands_an_carry_items_006176d4
//   TerminatedCString s_Select_hand_to_carry_dro_006176ed
//   TerminatedCString s_nothing_0061770d
//   TerminatedCString s_Select_actor_to_carry_00617717
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   CDemonMission* g_CDemonMissionPtr = 02f33740
//   CDemonSet* g_CDemonSetPtr = 03114278
//   undefined4 g_CCharacterClassInfo.name_hash
//   CEditorTools g_CEditorToolsPtr
//   CDemonMission g_CDemonMissionInstance
//   undefined4 g_CDemonSetInstance.actor_list_ptr
//   undefined4 g_CDemonSetInstance.actor_list_data[0]
//   undefined4 DAT_032613d4
//   undefined4 DAT_032613d8
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790
//   core_actor.cpp_CDemonActor_FUN_00408c10
//   core_actor.cpp_CDemonActor_FUN_00408ec0
//   core_charactr.cpp_CCharacter_FUN_0042d090
//   core_charactr.cpp_CCharacter_pickupObjectNow_FUN_0042cdb0
//   core_mission.cpp_CDemonMission_FUN_00524030
//   core_skeleton.cpp_CDeformableModelInstance_FUN_0059fa20
//   core_skeleton.cpp_CDeformableModelInstance_GetModelPtrAndSomething_FUN_005a0820
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70

#include "nocturne.h"

undefined4 core_charactr_cpp_CCharacter_FUN_0042f3e0(void)

{
  CCharacter *this_ptr;
  int iVar1;
  CDemonActor *this_ptr_00;
  float *pfVar2;
  CCharacter *pCVar3;
  uint uVar4;
  BADSPACEBASE *in_ESP;
  int iVar5;
  int iVar6;
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
  undefined1 auStack_584 [8];
  undefined1 auStack_57c [936];
  char acStack_1d4 [420];
  int local_30;
  SCarryHand *local_2c;
  CDeformableModelInstance *local_28;
  int local_24;
  int local_20;
  COrientation *local_1c;
  SCarryHand *local_18;
  
  this_ptr = (CCharacter *)
             core_actor_cpp_castToClassHash_FUN_0040c790
                       (in_stack_00000004,g_CCharacterClassInfo.name_hash);
  local_24 = 0;
  local_28 = &this_ptr->model;
  local_1c = &(this_ptr->base_actor).orient;
  local_2c = this_ptr->carry_hands;
  local_18 = (SCarryHand *)local_28;
  do {
    iVar5 = 0;
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)auStack_584);
    pCVar3 = this_ptr;
    do {
      if (-1 < *(int *)pCVar3->carry_hands[0].field0_0x0) {
        (&local_30)[auStack_584._4_4_] = iVar5;
        iVar6 = *(int *)pCVar3->carry_hands[0].field0_0x0;
        iVar1 = core_skeleton_cpp_CDeformableModelInstance_GetModelPtrAndSomething_FUN_005a0820();
        crt_stdio_c_sprintf_FUN_005fdbd0
                  (acStack_1d4,"Hand %d\t%s\t%s\n",iVar5,iVar1 + 0x2855c + iVar6 * 0x24);
        in_stack_fffff6dc = (CCharacter *)(acStack_1d4 + 4);
        shape_edittool_cpp_CStrList_add_FUN_004a2b80
                  ((CStrList *)(auStack_57c + 4),(char *)in_stack_fffff6dc);
      }
      iVar5 = iVar5 + 1;
      pCVar3 = (CCharacter *)&(pCVar3->base_actor).orient_matrix.m[0].z;
    } while (iVar5 < 2);
    if ((int)auStack_584._4_4_ < 1) {
      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                (g_CEditorToolsPtr,"No hands an carry items!");
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                ((CPickList *)auStack_57c,0,(uint)in_stack_fffff6dc,in_stack_fffff6e0,
                 (uint)in_stack_fffff6e4,(uint)in_stack_fffff6e8,(uint)in_stack_fffff6ec);
      return 0;
    }
    local_1c = (COrientation *)
               shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                         ((CPickList *)(auStack_584 + 4),"Select hand to carry/drop item.",
                          local_20,0);
    if ((int)local_1c < 0) {
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                ((CPickList *)auStack_57c,0,(uint)in_stack_fffff6dc,in_stack_fffff6e0,
                 (uint)in_stack_fffff6e4,(uint)in_stack_fffff6e8,(uint)in_stack_fffff6ec);
      core_charactr_cpp_CCharacter_FUN_0042d090(this_ptr);
      return 1;
    }
    local_18 = (&local_2c)[(int)local_1c];
    uVar4 = local_24 + (int)local_18 * 0x44;
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xfffff6dc);
    iVar5 = 0;
    shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffff6e0,"(nothing)");
    iVar6 = 0;
    in_stack_fffff6dc = (CCharacter *)0x0;
    while (iVar5 < (int)g_CDemonSetPtr->actor_list_ptr) {
      pCVar3 = *(CCharacter **)(g_CDemonSetPtr->actor_list_data + iVar6);
      if (pCVar3 == this_ptr) {
LAB_0042f571:
        iVar5 = iVar5 + 1;
        iVar6 = iVar6 + 4;
      }
      else {
        iVar1 = (*((pCVar3->base_actor).metadata.vtable)->canPickup)
                          (&pCVar3->base_actor,(CDemonActor *)this_ptr);
        if (iVar1 != 3) goto LAB_0042f571;
        if (pCVar3 == *(CCharacter **)(in_stack_00000010 + 8)) {
          in_stack_00000014 = in_stack_fffff6f8;
        }
        in_stack_fffff6ec = (CStrList_vtable *)0x42f5df;
        shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffff6f8,(char *)pCVar3);
        iVar5 = iVar5 + 1;
        iVar6 = iVar6 + 4;
      }
    }
    in_stack_fffff6e0 = 0;
    iVar5 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                      ((CPickList *)&stack0xfffff6e4,"Select actor to carry.",0,0);
    if (-1 < iVar5) {
      in_stack_fffff6e4 = (char **)0x0;
      in_stack_fffff6dc = this_ptr;
      (*(this_ptr->base_actor).metadata.vtable[1].renderTargetPoints)((CDemonActor *)this_ptr);
      in_stack_fffff6e0 = uVar4;
      if (0 < iVar5) {
        in_stack_fffff6e8 = (CStrList_vtable *)0x42f63e;
        shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70((CStrList *)&stack0xfffff6f4,iVar5);
        this_ptr_00 = (CDemonActor *)core_mission_cpp_CDemonMission_FUN_00524030(g_CDemonMissionPtr)
        ;
        in_stack_fffff6ec = (CStrList_vtable *)0x42f674;
        core_skeleton_cpp_CDeformableModelInstance_FUN_0059fa20();
        pfVar2 = core_actor_cpp_CDemonActor_FUN_00408ec0((CDemonActor *)this_ptr);
        (this_ptr_00->location).position.x = *pfVar2;
        (this_ptr_00->location).position.y = pfVar2[1];
        (this_ptr_00->location).position.z = pfVar2[2];
        if ((CCharacter *)&this_ptr_00->orient != in_stack_00000014) {
          (this_ptr_00->orient).pitch = *(float *)(in_stack_00000014->base_actor).actor_name;
          (this_ptr_00->orient).bank = *(float *)((in_stack_00000014->base_actor).actor_name + 4);
          (this_ptr_00->orient).heading = *(float *)((in_stack_00000014->base_actor).actor_name + 8)
          ;
        }
        core_actor_cpp_CDemonActor_FUN_00408c10(this_ptr_00);
        in_stack_fffff6f8 = this_ptr;
        core_charactr_cpp_CCharacter_pickupObjectNow_FUN_0042cdb0(this_ptr);
        in_stack_fffff6e0 = uVar4;
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


// Assembly code:
// 0042f3e0: PUSH EBX
//   Label: core_charactr.cpp_CCharacter_FUN_0042f3e0
// 0042f3e1: PUSH ESI
// 0042f3e2: PUSH EDI
// 0042f3e3: PUSH EBP
// 0042f3e4: SUB ESP,0x920
// 0042f3ea: MOV EDX,dword ptr [0x00823c4c]
//   XREF to: 00823c4c (READ)
// 0042f3f0: PUSH EDX
// 0042f3f1: MOV ECX,dword ptr [ESP + 0x938]
//   XREF to: Stack[0x4] (READ)
// 0042f3f8: PUSH ECX
// 0042f3f9: XOR EBX,EBX
// 0042f3fb: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 0042f400: ADD ESP,0x8
// 0042f403: MOV EBP,EAX
// 0042f405: MOV dword ptr [ESP + 0x908],EBX
//   XREF to: Stack[-0x28] (WRITE)
// 0042f40c: LEA EBX,[EAX + 0x158]
// 0042f412: MOV dword ptr [ESP + 0x904],EBX
//   XREF to: Stack[-0x2c] (WRITE)
// 0042f419: LEA EBX,[EAX + 0x30]
// 0042f41c: ADD EAX,0x24ac
// 0042f421: MOV dword ptr [ESP + 0x900],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 0042f428: MOV EAX,dword ptr [ESP + 0x904]
//   XREF to: Stack[-0x2c] (READ)
// 0042f42f: MOV dword ptr [ESP + 0x910],EBX
//   XREF to: Stack[-0x20] (WRITE)
// 0042f436: MOV dword ptr [ESP + 0x914],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0042f43d: LEA EAX,[ESP + 0x3a8]
//   Label: LAB_0042f43d
//   XREF to: Stack[-0x588] (DATA)
// 0042f444: PUSH EAX
// 0042f445: MOV EBX,EBP
// 0042f447: XOR ESI,ESI
// 0042f449: CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
// 0042f44e: ADD ESP,0x4
// 0042f451: CMP dword ptr [EBX + 0x24ac],0x0
//   Label: LAB_0042f451
// 0042f458: JL 0x0042f4c7
//   XREF to: 0042f4c7 (CONDITIONAL_JUMP)
// 0042f45a: MOV EAX,dword ptr [ESP + 0x3a8]
//   XREF to: Stack[-0x588] (READ)
// 0042f461: MOV dword ptr [ESP + EAX*0x4 + 0x8f8],ESI
// 0042f468: MOV EDX,dword ptr [EBX + 0x24b4]
// 0042f46e: MOV EAX,0x6176bb
//   XREF to: 006176bb (DATA)
// 0042f473: TEST EDX,EDX
// 0042f475: JZ 0x0042f479
//   XREF to: 0042f479 (CONDITIONAL_JUMP)
// 0042f477: MOV EAX,EDX
// 0042f479: IMUL EDI,dword ptr [EBX + 0x24ac],0x24
//   Label: LAB_0042f479
// 0042f480: PUSH EAX
//   XREF to: 006176bb (DATA)
// 0042f481: MOV EAX,dword ptr [ESP + 0x918]
//   XREF to: Stack[-0x1c] (READ)
// 0042f488: PUSH EAX
// 0042f489: CALL core_skeleton.cpp_CDeformableModelInstance_GetModelPtrAndSomething_FUN_005a0820
//   XREF to: 005a0820 (UNCONDITIONAL_CALL)
// 0042f48e: ADD EAX,0x2855c
// 0042f493: ADD ESP,0x4
// 0042f496: ADD EAX,EDI
// 0042f498: PUSH EAX
// 0042f499: PUSH ESI
// 0042f49a: PUSH 0x6176c5
//   XREF to: 006176c5 (DATA)
// 0042f49f: LEA EAX,[ESP + 0x760]
//   XREF to: Stack[-0x1e0] (DATA)
// 0042f4a6: PUSH EAX
// 0042f4a7: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0042f4ac: ADD ESP,0x14
// 0042f4af: LEA EAX,[ESP + 0x750]
//   XREF to: Stack[-0x1e0] (DATA)
// 0042f4b6: PUSH EAX
// 0042f4b7: LEA EAX,[ESP + 0x3ac]
//   XREF to: Stack[-0x588] (DATA)
// 0042f4be: PUSH EAX
// 0042f4bf: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 0042f4c4: ADD ESP,0x8
// 0042f4c7: INC ESI
//   Label: LAB_0042f4c7
// 0042f4c8: ADD EBX,0x44
// 0042f4cb: CMP ESI,0x2
// 0042f4ce: JL 0x0042f451
//   XREF to: 0042f451 (CONDITIONAL_JUMP)
// 0042f4d0: CMP dword ptr [ESP + 0x3a8],0x1
//   XREF to: Stack[-0x588] (READ)
// 0042f4d8: JL 0x0042f577
//   XREF to: 0042f577 (CONDITIONAL_JUMP)
// 0042f4de: PUSH 0x0
// 0042f4e0: MOV ECX,dword ptr [ESP + 0x90c]
//   XREF to: Stack[-0x28] (READ)
// 0042f4e7: PUSH ECX
// 0042f4e8: PUSH 0x6176ed
//   XREF to: 006176ed (DATA)
// 0042f4ed: LEA EAX,[ESP + 0x3b4]
//   XREF to: Stack[-0x588] (DATA)
// 0042f4f4: PUSH EAX
// 0042f4f5: CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
// 0042f4fa: ADD ESP,0x10
// 0042f4fd: MOV dword ptr [ESP + 0x908],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 0042f504: TEST EAX,EAX
// 0042f506: JL 0x0042f6fd
//   XREF to: 0042f6fd (CONDITIONAL_JUMP)
// 0042f50c: MOV EAX,dword ptr [ESP + EAX*0x4 + 0x8f8]
// 0042f513: MOV dword ptr [ESP + 0x90c],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 0042f51a: IMUL EAX,EAX,0x44
// 0042f51d: MOV EBX,dword ptr [ESP + 0x900]
//   XREF to: Stack[-0x30] (READ)
// 0042f524: ADD EBX,EAX
// 0042f526: MOV EAX,ESP
// 0042f528: PUSH EAX
// 0042f529: MOV dword ptr [ESP + 0x91c],EBX
//   XREF to: Stack[-0x18] (WRITE)
// 0042f530: CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
// 0042f535: ADD ESP,0x4
// 0042f538: PUSH 0x61770d
//   XREF to: 0061770d (DATA)
// 0042f53d: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x930] (DATA)
// 0042f541: PUSH EAX
// 0042f542: XOR ESI,ESI
// 0042f544: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 0042f549: ADD ESP,0x8
// 0042f54c: XOR EDI,EDI
// 0042f54e: MOV dword ptr [ESP + 0x91c],ESI
//   XREF to: Stack[-0x14] (WRITE)
// 0042f555: MOV EAX,[0x006810c8]
//   Label: LAB_0042f555
//   XREF to: 006810c8 (READ)
// 0042f55a: CMP ESI,dword ptr [EAX + 0x14d154]
//   XREF to: 032613cc (READ)
// 0042f560: JGE 0x0042f5eb
//   XREF to: 0042f5eb (CONDITIONAL_JUMP)
// 0042f566: MOV EBX,dword ptr [EDI + EAX*0x1 + 0x14d158]
//   XREF to: 032613d0 (READ)
//   XREF to: 032613d4 (READ)
//   XREF to: 032613d8 (READ)
// 0042f56d: CMP EBX,EBP
// 0042f56f: JNZ 0x0042f5ab
//   XREF to: 0042f5ab (CONDITIONAL_JUMP)
// 0042f571: INC ESI
//   Label: LAB_0042f571
// 0042f572: ADD EDI,0x4
// 0042f575: JMP 0x0042f555
//   XREF to: 0042f555 (UNCONDITIONAL_JUMP)
// 0042f577: PUSH 0x6176d4
//   Label: LAB_0042f577
//   XREF to: 006176d4 (DATA)
// 0042f57c: MOV EDI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 0042f582: PUSH EDI
//   XREF to: 02cf1cd4 (DATA)
// 0042f583: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 0042f588: ADD ESP,0x8
// 0042f58b: XOR EBX,EBX
// 0042f58d: PUSH EBX
// 0042f58e: LEA EAX,[ESP + 0x3ac]
//   XREF to: Stack[-0x588] (DATA)
// 0042f595: PUSH EAX
// 0042f596: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 0042f59b: ADD ESP,0x8
// 0042f59e: MOV EAX,EBX
// 0042f5a0: ADD ESP,0x920
// 0042f5a6: POP EBP
// 0042f5a7: POP EDI
// 0042f5a8: POP ESI
// 0042f5a9: POP EBX
// 0042f5aa: RET
// 0042f5ab: PUSH EBP
//   Label: LAB_0042f5ab
// 0042f5ac: MOV EAX,dword ptr [EBX + 0x154]
// 0042f5b2: PUSH EBX
// 0042f5b3: CALL dword ptr [EAX + 0x7c]
// 0042f5b6: ADD ESP,0x8
// 0042f5b9: CMP EAX,0x3
// 0042f5bc: JNZ 0x0042f571
//   XREF to: 0042f571 (CONDITIONAL_JUMP)
// 0042f5be: MOV EAX,dword ptr [ESP + 0x918]
// 0042f5c5: CMP EBX,dword ptr [EAX + 0x8]
// 0042f5c8: JNZ 0x0042f5d4
//   XREF to: 0042f5d4 (CONDITIONAL_JUMP)
// 0042f5ca: MOV EAX,dword ptr [ESP]
// 0042f5cd: MOV dword ptr [ESP + 0x91c],EAX
// 0042f5d4: PUSH EBX
//   Label: LAB_0042f5d4
// 0042f5d5: LEA EAX,[ESP + 0x4]
// 0042f5d9: PUSH EAX
// 0042f5da: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 0042f5df: ADD ESP,0x8
// 0042f5e2: INC ESI
// 0042f5e3: ADD EDI,0x4
// 0042f5e6: JMP 0x0042f555
//   XREF to: 0042f555 (UNCONDITIONAL_JUMP)
// 0042f5eb: PUSH 0x0
//   Label: LAB_0042f5eb
// 0042f5ed: MOV ECX,dword ptr [ESP + 0x920]
// 0042f5f4: PUSH ECX
// 0042f5f5: PUSH 0x617717
//   XREF to: 00617717 (DATA)
// 0042f5fa: LEA EAX,[ESP + 0xc]
// 0042f5fe: PUSH EAX
// 0042f5ff: CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
// 0042f604: MOV EBX,EAX
// 0042f606: ADD ESP,0x10
// 0042f609: TEST EAX,EAX
// 0042f60b: JL 0x0042f6d7
//   XREF to: 0042f6d7 (CONDITIONAL_JUMP)
// 0042f611: PUSH 0x0
// 0042f613: MOV ESI,dword ptr [ESP + 0x910]
// 0042f61a: PUSH ESI
// 0042f61b: MOV EAX,dword ptr [EBP + 0x154]
// 0042f621: PUSH EBP
// 0042f622: CALL dword ptr [EAX + 0x13c]
// 0042f628: ADD ESP,0xc
// 0042f62b: TEST EBX,EBX
// 0042f62d: JLE 0x0042f6d7
//   XREF to: 0042f6d7 (CONDITIONAL_JUMP)
// 0042f633: PUSH EBX
// 0042f634: LEA EAX,[ESP + 0x4]
// 0042f638: PUSH EAX
// 0042f639: CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
// 0042f63e: ADD ESP,0x8
// 0042f641: PUSH EAX
// 0042f642: MOV EDI,dword ptr [0x0067d550]
//   XREF to: 0067d550 (READ)
// 0042f648: PUSH EDI
//   XREF to: 02f33740 (DATA)
// 0042f649: CALL core_mission.cpp_CDemonMission_FUN_00524030
//   XREF to: 00524030 (UNCONDITIONAL_CALL)
// 0042f64e: MOV EBX,EAX
// 0042f650: ADD ESP,0x8
// 0042f653: MOV EDI,EAX
// 0042f655: MOV EAX,dword ptr [ESP + 0x918]
// 0042f65c: MOV EDX,dword ptr [EAX]
// 0042f65e: PUSH EDX
// 0042f65f: LEA EAX,[ESP + 0x8f0]
// 0042f666: PUSH EAX
// 0042f667: MOV ECX,dword ptr [ESP + 0x90c]
// 0042f66e: PUSH ECX
// 0042f66f: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_0059fa20
//   XREF to: 0059fa20 (UNCONDITIONAL_CALL)
// 0042f674: ADD ESP,0xc
// 0042f677: PUSH EAX
// 0042f678: LEA EAX,[ESP + 0x8e4]
// 0042f67f: PUSH EAX
// 0042f680: PUSH EBP
// 0042f681: LEA ESI,[EBX + 0x20]
// 0042f684: CALL core_actor.cpp_CDemonActor_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 0042f689: FLD float ptr [EAX]
// 0042f68b: ADD ESP,0xc
// 0042f68e: FSTP float ptr [ESI]
// 0042f690: MOV EDX,dword ptr [EAX + 0x4]
// 0042f693: MOV dword ptr [ESI + 0x4],EDX
// 0042f696: FLD float ptr [EAX + 0x8]
// 0042f699: LEA EAX,[EBX + 0x30]
// 0042f69c: MOV EBX,dword ptr [ESP + 0x910]
// 0042f6a3: FSTP float ptr [ESI + 0x8]
// 0042f6a6: CMP EAX,EBX
// 0042f6a8: JZ 0x0042f6ba
//   XREF to: 0042f6ba (CONDITIONAL_JUMP)
// 0042f6aa: MOV EDX,dword ptr [EBX]
// 0042f6ac: MOV dword ptr [EAX],EDX
// 0042f6ae: MOV EDX,dword ptr [EBX + 0x4]
// 0042f6b1: MOV dword ptr [EAX + 0x4],EDX
// 0042f6b4: MOV EDX,dword ptr [EBX + 0x8]
// 0042f6b7: MOV dword ptr [EAX + 0x8],EDX
// 0042f6ba: PUSH EDI
//   Label: LAB_0042f6ba
// 0042f6bb: CALL core_actor.cpp_CDemonActor_FUN_00408c10
//   XREF to: 00408c10 (UNCONDITIONAL_CALL)
// 0042f6c0: ADD ESP,0x4
// 0042f6c3: PUSH 0x0
// 0042f6c5: PUSH EDI
// 0042f6c6: MOV ESI,dword ptr [ESP + 0x914]
// 0042f6cd: PUSH ESI
// 0042f6ce: PUSH EBP
// 0042f6cf: CALL core_charactr.cpp_CCharacter_pickupObjectNow_FUN_0042cdb0
//   XREF to: 0042cdb0 (UNCONDITIONAL_CALL)
// 0042f6d4: ADD ESP,0x10
// 0042f6d7: PUSH 0x0
//   Label: LAB_0042f6d7
// 0042f6d9: LEA EAX,[ESP + 0x4]
// 0042f6dd: PUSH EAX
// 0042f6de: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 0042f6e3: ADD ESP,0x8
// 0042f6e6: PUSH 0x0
// 0042f6e8: LEA EAX,[ESP + 0x3ac]
// 0042f6ef: PUSH EAX
// 0042f6f0: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 0042f6f5: ADD ESP,0x8
// 0042f6f8: JMP 0x0042f43d
//   XREF to: 0042f43d (UNCONDITIONAL_JUMP)
// 0042f6fd: PUSH 0x0
//   Label: LAB_0042f6fd
// 0042f6ff: LEA EAX,[ESP + 0x3ac]
//   XREF to: Stack[-0x588] (DATA)
// 0042f706: PUSH EAX
// 0042f707: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 0042f70c: ADD ESP,0x8
// 0042f70f: PUSH 0x0
// 0042f711: PUSH EBP
// 0042f712: MOV EBX,0x1
// 0042f717: CALL core_charactr.cpp_CCharacter_FUN_0042d090
//   XREF to: 0042d090 (UNCONDITIONAL_CALL)
// 0042f71c: ADD ESP,0x8
// 0042f71f: MOV EAX,EBX
// 0042f721: ADD ESP,0x920
// 0042f727: POP EBP
// 0042f728: POP EDI
// 0042f729: POP ESI
// 0042f72a: POP EBX
// 0042f72b: RET
