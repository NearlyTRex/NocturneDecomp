// Name: core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0
// Address: 004286e0
// Address Range: [[004286e0, 00428d7c]]
// Convention: __cdecl
// Signature: int core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0(CCharacter * this_ptr)
// Cross-references:
//   core_batcreat.cpp_CBatCreature_process_FUN_00415470 (00415470) at 00415b09 [UNCONDITIONAL_CALL]
//   core_batman.cpp_CBatman_process_FUN_00416870 (00416870) at 0041724e [UNCONDITIONAL_CALL]
//   core_boneguy.cpp_FUN_0041bf90 (0041bf90) at 0041c961 [UNCONDITIONAL_CALL]
//   core_boneguy.cpp_FUN_0041cc40 (0041cc40) at 0041cea8 [UNCONDITIONAL_CALL]
//   core_bride.cpp_FUN_00423a30 (00423a30) at 00423d6b [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042c5f0 (0042c5f0) at 0042c8c3 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042ca70 (0042ca70) at 0042cb92 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042e050 (0042e050) at 0042e32c [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042ede0 (0042ede0) at 0042f2cc [UNCONDITIONAL_CALL]
//   core_cow.cpp_FUN_00444310 (00444310) at 004447bc [UNCONDITIONAL_CALL]
//   core_dog.cpp_CZombieDog_process_FUN_0047f140 (0047f140) at 0047f6cc [UNCONDITIONAL_CALL]
//   core_dracbrid.cpp_FUN_00484410 (00484410) at 0048534a [UNCONDITIONAL_CALL]
//   core_drone.cpp_FUN_0048ec70 (0048ec70) at 0048f1e5 [UNCONDITIONAL_CALL]
//   core_gargoyle.cpp_CGargoyle_unk6_FUN_004e4a00 (004e4a00) at 004e515e [UNCONDITIONAL_CALL]
//   core_ghoul.cpp_CGhoul_FUN_004e6600 (004e6600) at 004e7148 [UNCONDITIONAL_CALL]
//   core_hotdemon.cpp_FUN_004f6f20 (004f6f20) at 004f74a5 [UNCONDITIONAL_CALL]
//   core_imp.cpp_FUN_004f9c30 (004f9c30) at 004fa58e [UNCONDITIONAL_CALL]
//   core_larva.cpp_FUN_00503080 (00503080) at 00503752 [UNCONDITIONAL_CALL]
//   core_mimic.cpp_FUN_0051fcc0 (0051fcc0) at 00520140 [UNCONDITIONAL_CALL]
//   core_mobster.cpp_FUN_00525840 (00525840) at 0052641d [UNCONDITIONAL_CALL]
//   core_mobster.cpp_FUN_00526d90 (00526d90) at 00527024 [UNCONDITIONAL_CALL]
//   core_sentinel.cpp_FUN_00568030 (00568030) at 00568810 [UNCONDITIONAL_CALL]
//   core_smiley.cpp_FUN_005a2800 (005a2800) at 005a2fb4 [UNCONDITIONAL_CALL]
//   core_succubus.cpp_CSuccubus_process_FUN_005c6e90 (005c6e90) at 005c7465 [UNCONDITIONAL_CALL]
//   core_werewolf.cpp_CWerewolf_process_FUN_005efde0 (005efde0) at 005f0bd0 [UNCONDITIONAL_CALL]
//   core_zombie.cpp_CZombie_PickupSomethingPossibly_FUN_005fb530 (005fb530) at 005fb8e6 [UNCONDITIONAL_CALL]
//   core_zombie.cpp_CZombie_process_FUN_005f9470 (005f9470) at 005fa217 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_CCharacter_walkToPoint_g_00617005
//   double DOUBLE_0061703a = 0.0100000000000000
//   double DOUBLE_00617042 = 5
//   double DOUBLE_0061704a = 0.318309886192889
//   double DOUBLE_00617052 = 2
//   double DOUBLE_0061705a = 1.5
//   double DOUBLE_00617062 = 0.5
//   double DOUBLE_0061706a = 4
//   CConsole* g_CConsolePtr = 0083b1a4
//   CConsole g_ConsolePtr
// Function calls:
//   core_actor.cpp_CDemonActor_FUN_00408e80
//   core_actor.cpp_CDemonActor_FUN_00408ec0
//   core_actor.cpp_CDemonActor_FUN_00408f10
//   core_actor.cpp_FUN_0040cd70
//   core_path.cpp_CPathMap_findPathWithRetry_FUN_00547d00
//   core_path.cpp_FUN_00548500
//   core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   engine_console.cpp_CConsole_printf_FUN_00441890

#include "nocturne.h"

int __cdecl core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0(CCharacter *this_ptr)

{
  char *pcVar1;
  CVector3f *pCVar2;
  int iVar3;
  CCharacter *pCVar4;
  CCharacter *pCVar5;
  float fVar6;
  float fVar7;
  BADSPACEBASE *in_ESP;
  float *in_stack_00000008;
  CPathMap *in_stack_0000000c;
  CVector3f *in_stack_00000010;
  float in_stack_00000014;
  float in_stack_00000018;
  float fVar8;
  float local_fc;
  float fStack_f4;
  float local_ec;
  float fStack_e4;
  undefined1 local_d4 [12];
  float local_c8;
  undefined1 local_b8 [8];
  CVector3f local_b0;
  float local_a4;
  float local_8c;
  float local_88;
  float local_84;
  CVector3f local_80;
  float local_74;
  CVector3f local_70;
  CVector3f local_64;
  float local_54;
  float local_50;
  undefined4 local_40;
  undefined4 local_3c;
  float local_38;
  float local_34;
  int local_30;
  float local_2c;
  float local_28;
  float local_20;
  undefined4 local_1c;
  float fStack_14;
  
  local_1c = *(undefined4 *)(this_ptr->field2_0x240c + 0x2c);
  fVar8 = SQRT(in_stack_00000010->x * in_stack_00000010->x +
               in_stack_00000010->z * in_stack_00000010->z);
  core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_b0,in_stack_00000010);
  core_actor_cpp_CDemonActor_FUN_00408f10(&this_ptr->base_actor);
  pCVar2 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                     ((CVector3f *)(local_d4 + 8),(CVector3f *)(local_b8 + 4));
  fStack_14 = pCVar2->y;
  fVar7 = fVar8 - fStack_f4;
  local_40 = 0;
  if (0.0 < SQRT(in_stack_00000010->z * in_stack_00000010->z +
                 in_stack_00000010->x * in_stack_00000010->x +
                 in_stack_00000010->y * in_stack_00000010->y)) {
    fVar6 = core_actor_cpp_FUN_0040cd70(fStack_14 - local_fc);
    local_ec = ABS(fVar6);
  }
  if (((fStack_f4 < in_stack_00000014 + (float)DOUBLE_0061703a) &&
      (local_ec < in_stack_00000018 + (float)DOUBLE_0061703a)) &&
     (ABS(local_b0.z) < (float)DOUBLE_00617042)) {
    local_3c = 1;
  }
  (this_ptr->model).padding_0x0[0x225c] = '\0';
  (this_ptr->model).padding_0x0[0x225d] = '\0';
  (this_ptr->model).padding_0x0[0x225e] = '\0';
  (this_ptr->model).padding_0x0[0x225f] = '\0';
  *(undefined4 *)((this_ptr->model).padding_0x0 + 0x2258) =
       *(undefined4 *)((this_ptr->model).padding_0x0 + 0x225c);
  *(undefined4 *)((this_ptr->model).padding_0x0 + 0x2254) =
       *(undefined4 *)((this_ptr->model).padding_0x0 + 0x2258);
  if (((float)DOUBLE_0061705a * 0.0 + (float)DOUBLE_00617062 +
       ABS(ABS(fVar7)) * (float)DOUBLE_0061704a * (float)DOUBLE_00617052 <= local_fc) ||
     (1.0 < ABS(local_b0.z))) {
    if (in_stack_0000000c == (CPathMap *)0x0) {
      in_stack_0000000c = (CPathMap *)core_path_cpp_FUN_00548500();
    }
    iVar3 = core_path_cpp_CPathMap_findPathWithRetry_FUN_00547d00
                      (in_stack_0000000c,(CVector3f *)0x42886d,&local_64,
                       (this_ptr->base_actor).field7_0x6c);
    if (iVar3 == 0) {
      if (local_30 != 0) {
        return 1;
      }
      engine_console_cpp_CConsole_printf_FUN_00441890
                (g_CConsolePtr,"CCharacter::walkToPoint - go somewhere failed\n");
      return -1;
    }
    local_38 = -fStack_f4;
    local_34 = 0.0 - fStack_e4;
    local_28 = local_38;
    if ((local_38 <= local_34) && (local_28 = local_34, fStack_f4 < local_34)) {
      local_28 = fStack_f4;
    }
    *(float *)(this_ptr->field2_0x240c + 0x18) =
         *(float *)(this_ptr->field2_0x240c + 0x18) + local_28;
    fVar8 = local_54 - (this_ptr->base_actor).orient.bank;
    fVar6 = core_actor_cpp_FUN_0040cd70(fVar8);
    fVar7 = -fVar8;
    if ((fVar7 <= fVar6) && (fVar7 = fVar6, fVar8 < fVar6)) {
      fVar7 = fVar8;
    }
    *(float *)(this_ptr->field2_0x240c + 0xc) = *(float *)(this_ptr->field2_0x240c + 0xc) + fVar7;
  }
  else {
    if (fVar8 * (float)DOUBLE_0061706a + 0.0 <= local_fc) {
      local_54 = -fVar8;
      local_2c = local_fc - 0.0;
      local_20 = local_54;
      if ((local_54 <= local_2c) && (local_20 = local_2c, fVar8 < local_2c)) {
        local_20 = fVar8;
      }
      *(float *)(this_ptr->field2_0x240c + 0x18) =
           *(float *)(this_ptr->field2_0x240c + 0x18) + local_20;
      core_actor_cpp_CDemonActor_FUN_00408ec0(&this_ptr->base_actor);
      pCVar2 = core_actor_cpp_CDemonActor_FUN_00408e80(&this_ptr->base_actor);
      local_8c = *in_stack_00000008 - pCVar2->x;
      local_88 = in_stack_00000008[1] - pCVar2->y;
      local_80.x = local_8c - local_74;
      local_84 = in_stack_00000008[2] - pCVar2->z;
      local_80.y = local_88 - local_70.x;
      local_80.z = local_84 - local_70.y;
      pCVar2 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                         ((CVector3f *)local_d4,&local_80);
      pCVar4 = (CCharacter *)
               core_actor_cpp_FUN_0040cd70(pCVar2->y - (this_ptr->base_actor).orient.bank);
      pCVar5 = (CCharacter *)-(float)this_ptr;
      if ((-(float)this_ptr <= (float)pCVar4) && (pCVar5 = pCVar4, (float)this_ptr < (float)pCVar4))
      {
        pCVar5 = this_ptr;
      }
    }
    else {
      local_d4._4_4_ = local_b0.y - in_stack_00000010->x;
      local_c8 = local_a4 - in_stack_00000010->z;
      local_50 = SQRT(local_c8 * local_c8 + (float)local_d4._4_4_ * (float)local_d4._4_4_);
      local_d4._8_4_ = 0.0;
      if (fVar8 < local_50) {
        local_38 = fVar8 / local_50;
        local_d4._4_4_ = (float)local_d4._4_4_ * local_38;
        local_d4._8_4_ = local_38 * 0.0;
        local_c8 = local_c8 * local_38;
      }
      pcVar1 = this_ptr->field2_0x240c + 0x10;
      *(float *)pcVar1 = *(float *)pcVar1 + (float)local_d4._4_4_;
      *(float *)(this_ptr->field2_0x240c + 0x14) =
           *(float *)(this_ptr->field2_0x240c + 0x14) + (float)local_d4._8_4_;
      *(float *)(this_ptr->field2_0x240c + 0x18) =
           *(float *)(this_ptr->field2_0x240c + 0x18) + local_c8;
      local_70.x = local_b0.y - *(float *)pcVar1;
      local_70.y = local_b0.z - *(float *)(this_ptr->field2_0x240c + 0x14);
      local_70.z = local_a4 - *(float *)(this_ptr->field2_0x240c + 0x18);
      pCVar2 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                         ((CVector3f *)local_b8,&local_70);
      pCVar4 = (CCharacter *)core_actor_cpp_FUN_0040cd70(pCVar2->y - local_ec);
      pCVar5 = (CCharacter *)-(float)this_ptr;
      if (((float)pCVar5 <= (float)pCVar4) && (pCVar5 = pCVar4, (float)this_ptr < (float)pCVar4)) {
        pCVar5 = this_ptr;
      }
    }
    *(CCharacter **)(this_ptr->field2_0x240c + 0xc) = pCVar5;
  }
  if (local_2c == 0.0) {
    return 0;
  }
  return 1;
}


// Assembly code:
// 004286e0: PUSH EBX
//   Label: core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0
// 004286e1: PUSH ESI
// 004286e2: PUSH EDI
// 004286e3: PUSH EBP
// 004286e4: MOV EBP,ESP
// 004286e6: SUB ESP,0x104
// 004286ec: AND ESP,0xfffffff8
// 004286ef: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004286f2: MOV EDI,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004286f5: MOV ESI,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 004286f8: FLD float ptr [ESI + 0x8]
// 004286fb: FMUL ST0
// 004286fd: MOV EAX,dword ptr [EBX + 0x2434]
// 00428703: FLD float ptr [ESI]
// 00428705: FMUL ST0
// 00428707: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x110] (WRITE)
// 0042870b: MOV EAX,dword ptr [EBX + 0x2438]
// 00428711: FADDP
// 00428713: MOV dword ptr [ESP + 0xfc],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0042871a: FSQRT
// 0042871c: PUSH ESI
// 0042871d: LEA EAX,[ESP + 0x6c]
//   XREF to: Stack[-0xb0] (DATA)
// 00428721: PUSH EAX
// 00428722: FSTP float ptr [ESP + 0x20]
//   XREF to: Stack[-0x100] (WRITE)
// 00428726: CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   XREF to: 005e7830 (UNCONDITIONAL_CALL)
// 0042872b: ADD ESP,0x8
// 0042872e: MOV EAX,dword ptr [EAX + 0x4]
// 00428731: PUSH EDI
// 00428732: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x108] (WRITE)
// 00428736: LEA EAX,[ESP + 0x60]
//   XREF to: Stack[-0xbc] (DATA)
// 0042873a: PUSH EAX
// 0042873b: PUSH EBX
// 0042873c: CALL core_actor.cpp_CDemonActor_FUN_00408f10
//   XREF to: 00408f10 (UNCONDITIONAL_CALL)
// 00428741: ADD ESP,0xc
// 00428744: FLD float ptr [ESP + 0x64]
//   XREF to: Stack[-0xb4] (READ)
// 00428748: FMUL ST0
// 0042874a: FLD float ptr [ESP + 0x5c]
//   XREF to: Stack[-0xbc] (READ)
// 0042874e: FMUL ST0
// 00428750: FADDP
// 00428752: FSQRT
// 00428754: LEA EAX,[ESP + 0x5c]
//   XREF to: Stack[-0xbc] (DATA)
// 00428758: PUSH EAX
// 00428759: LEA EAX,[ESP + 0x48]
//   XREF to: Stack[-0xd4] (DATA)
// 0042875d: PUSH EAX
// 0042875e: FSTP float ptr [ESP + 0x14]
//   XREF to: Stack[-0x10c] (WRITE)
// 00428762: CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   XREF to: 005e7830 (UNCONDITIONAL_CALL)
// 00428767: ADD ESP,0x8
// 0042876a: MOV EAX,dword ptr [EAX + 0x4]
// 0042876d: FLD float ptr [ESP + 0xc]
//   XREF to: Stack[-0x10c] (READ)
// 00428771: FSUB float ptr [ESP + 0x18]
//   XREF to: Stack[-0x100] (READ)
// 00428775: MOV dword ptr [ESP + 0xf8],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0042877c: FABS
// 0042877e: FLD float ptr [ESI + 0x4]
// 00428781: FMUL ST0
// 00428783: FLD float ptr [ESI]
// 00428785: FMUL ST0
// 00428787: FADDP
// 00428789: FLD float ptr [ESI + 0x8]
// 0042878c: FMUL ST0
// 0042878e: FADDP
// 00428790: FSQRT
// 00428792: XOR EDX,EDX
// 00428794: MOV dword ptr [ESP + 0xcc],EDX
//   XREF to: Stack[-0x4c] (WRITE)
// 0042879b: MOV dword ptr [ESP + 0x1c],EDX
//   XREF to: Stack[-0xfc] (WRITE)
// 0042879f: FXCH
// 004287a1: FSTP float ptr [ESP + 0x14]
//   XREF to: Stack[-0x104] (WRITE)
// 004287a5: FLDZ
// 004287a7: FCOMPP
// 004287a9: FNSTSW AX
// 004287ab: SAHF
// 004287ac: JC 0x00428892
//   XREF to: 00428892 (CONDITIONAL_JUMP)
// 004287b2: FLD float ptr [EBP + 0x24]
//   Label: LAB_004287b2
//   XREF to: Stack[0x14] (READ)
// 004287b5: FADD double ptr [0x0061703a]
//   XREF to: 0061703a (READ)
// 004287bb: FLD float ptr [ESP + 0x14]
//   XREF to: Stack[-0x104] (READ)
// 004287bf: FCOMPP
// 004287c1: FNSTSW AX
// 004287c3: SAHF
// 004287c4: JNC 0x004287f6
//   XREF to: 004287f6 (CONDITIONAL_JUMP)
// 004287c6: FLD float ptr [EBP + 0x28]
//   XREF to: Stack[0x18] (READ)
// 004287c9: FADD double ptr [0x0061703a]
//   XREF to: 0061703a (READ)
// 004287cf: FLD float ptr [ESP + 0x1c]
//   XREF to: Stack[-0xfc] (READ)
// 004287d3: FCOMPP
// 004287d5: FNSTSW AX
// 004287d7: SAHF
// 004287d8: JNC 0x004287f6
//   XREF to: 004287f6 (CONDITIONAL_JUMP)
// 004287da: FLD float ptr [ESP + 0x60]
//   XREF to: Stack[-0xb8] (READ)
// 004287de: FABS
// 004287e0: FCOMP double ptr [0x00617042]
//   XREF to: 00617042 (READ)
// 004287e6: FNSTSW AX
// 004287e8: SAHF
// 004287e9: JNC 0x004287f6
//   XREF to: 004287f6 (CONDITIONAL_JUMP)
// 004287eb: MOV dword ptr [ESP + 0xcc],0x1
//   XREF to: Stack[-0x4c] (WRITE)
// 004287f6: LEA EAX,[EBX + 0x23ac]
//   Label: LAB_004287f6
// 004287fc: MOV dword ptr [EAX + 0x8],0x0
// 00428803: FLD float ptr [ESP + 0x10]
//   XREF to: Stack[-0x108] (READ)
// 00428807: MOV EDX,dword ptr [EAX + 0x8]
// 0042880a: MOV dword ptr [EAX + 0x4],EDX
// 0042880d: MOV EDX,dword ptr [EAX + 0x4]
// 00428810: MOV dword ptr [EAX],EDX
// 00428812: FABS
// 00428814: FMUL double ptr [0x0061704a]
//   XREF to: 0061704a (READ)
// 0042881a: FMUL double ptr [0x00617052]
//   XREF to: 00617052 (READ)
// 00428820: FLD float ptr [ESP + 0x18]
//   XREF to: Stack[-0x100] (READ)
// 00428824: FST double ptr [ESP]
//   XREF to: Stack[-0x118] (DATA)
// 00428827: FMUL double ptr [0x0061705a]
//   XREF to: 0061705a (READ)
// 0042882d: FADD double ptr [0x00617062]
//   XREF to: 00617062 (READ)
// 00428833: FADDP
// 00428835: FCOMP float ptr [ESP + 0xc]
//   XREF to: Stack[-0x10c] (READ)
// 00428839: FNSTSW AX
// 0042883b: SAHF
// 0042883c: JA 0x004288c4
//   XREF to: 004288c4 (CONDITIONAL_JUMP)
// 00428842: CMP dword ptr [EBP + 0x1c],0x0
//   Label: LAB_00428842
//   XREF to: Stack[0xc] (READ)
// 00428846: JNZ 0x00428854
//   XREF to: 00428854 (CONDITIONAL_JUMP)
// 00428848: PUSH EDI
// 00428849: CALL core_path.cpp_FUN_00548500
//   XREF to: 00548500 (UNCONDITIONAL_CALL)
// 0042884e: ADD ESP,0x4
// 00428851: MOV dword ptr [EBP + 0x1c],EAX
//   XREF to: Stack[0xc] (WRITE)
// 00428854: MOV ESI,dword ptr [EBX + 0x6c]
//   Label: LAB_00428854
// 00428857: PUSH ESI
// 00428858: LEA EAX,[ESP + 0xa8]
//   XREF to: Stack[-0x74] (DATA)
// 0042885f: PUSH EAX
// 00428860: LEA EAX,[EBX + 0x20]
// 00428863: PUSH EAX
// 00428864: MOV EDI,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 00428867: PUSH EDI
// 00428868: CALL core_path.cpp_CPathMap_findPathWithRetry_FUN_00547d00
//   XREF to: 00547d00 (UNCONDITIONAL_CALL)
// 0042886d: ADD ESP,0x10
// 00428870: TEST EAX,EAX
// 00428872: JNZ 0x00428a92
//   XREF to: 00428a92 (CONDITIONAL_JUMP)
// 00428878: CMP dword ptr [ESP + 0xcc],0x0
//   XREF to: Stack[-0x4c] (READ)
// 00428880: JZ 0x00428a72
//   XREF to: 00428a72 (CONDITIONAL_JUMP)
// 00428886: MOV EAX,0x1
// 0042888b: MOV ESP,EBP
//   Label: LAB_0042888b
// 0042888d: POP EBP
// 0042888e: POP EDI
// 0042888f: POP ESI
// 00428890: POP EBX
// 00428891: RET
// 00428892: FLD float ptr [ESP + 0xf8]
//   Label: LAB_00428892
//   XREF to: Stack[-0x20] (READ)
// 00428899: FSUB float ptr [ESP + 0x10]
//   XREF to: Stack[-0x108] (READ)
// 0042889d: SUB ESP,0x4
// 004288a0: FSTP float ptr [ESP]
//   XREF to: Stack[-0x11c] (DATA)
// 004288a3: CALL core_actor.cpp_FUN_0040cd70
//   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
// 004288a8: MOV dword ptr [ESP + 0x104],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 004288af: FLD float ptr [ESP + 0x104]
//   XREF to: Stack[-0x18] (READ)
// 004288b6: FABS
// 004288b8: ADD ESP,0x4
// 004288bb: FSTP float ptr [ESP + 0x1c]
//   XREF to: Stack[-0xfc] (WRITE)
// 004288bf: JMP 0x004287b2
//   XREF to: 004287b2 (UNCONDITIONAL_JUMP)
// 004288c4: FLD float ptr [ESP + 0x60]
//   Label: LAB_004288c4
//   XREF to: Stack[-0xb8] (READ)
// 004288c8: FABS
// 004288ca: FLD1
// 004288cc: FCOMPP
// 004288ce: FNSTSW AX
// 004288d0: SAHF
// 004288d1: JC 0x00428842
//   XREF to: 00428842 (CONDITIONAL_JUMP)
// 004288d7: FLD float ptr [ESP + 0x8]
//   XREF to: Stack[-0x110] (READ)
// 004288db: FMUL double ptr [0x0061706a]
//   XREF to: 0061706a (READ)
// 004288e1: FADD double ptr [ESP]
//   XREF to: Stack[-0x118] (DATA)
// 004288e4: FLD float ptr [ESP + 0xc]
//   XREF to: Stack[-0x10c] (READ)
// 004288e8: FCOMPP
// 004288ea: FNSTSW AX
// 004288ec: SAHF
// 004288ed: JNC 0x00428bcf
//   XREF to: 00428bcf (CONDITIONAL_JUMP)
// 004288f3: FLD float ptr [ESP + 0x60]
//   XREF to: Stack[-0xb8] (READ)
// 004288f7: FLD float ptr [ESP + 0x5c]
//   XREF to: Stack[-0xbc] (READ)
// 004288fb: FSUB float ptr [ESI]
// 004288fd: FLD float ptr [ESP + 0x64]
//   XREF to: Stack[-0xb4] (READ)
// 00428901: FXCH
// 00428903: FSTP float ptr [ESP + 0x38]
//   XREF to: Stack[-0xe0] (WRITE)
// 00428907: FXCH
// 00428909: FSUB float ptr [ESI + 0x4]
// 0042890c: FLD float ptr [ESP + 0x38]
//   XREF to: Stack[-0xe0] (READ)
// 00428910: FXCH
// 00428912: FSTP float ptr [ESP + 0x3c]
//   XREF to: Stack[-0xdc] (WRITE)
// 00428916: FXCH
// 00428918: FSUB float ptr [ESI + 0x8]
// 0042891b: FXCH
// 0042891d: FMUL float ptr [ESP + 0x38]
//   XREF to: Stack[-0xe0] (READ)
// 00428921: FXCH
// 00428923: FST float ptr [ESP + 0x40]
//   XREF to: Stack[-0xd8] (WRITE)
// 00428927: FMUL float ptr [ESP + 0x40]
//   XREF to: Stack[-0xd8] (READ)
// 0042892b: FADDP
// 0042892d: FSQRT
// 0042892f: XOR EDX,EDX
// 00428931: MOV dword ptr [ESP + 0x3c],EDX
//   XREF to: Stack[-0xdc] (WRITE)
// 00428935: FST float ptr [ESP + 0xb8]
//   XREF to: Stack[-0x60] (WRITE)
// 0042893c: FCOMP float ptr [ESP + 0x8]
//   XREF to: Stack[-0x110] (READ)
// 00428940: FNSTSW AX
// 00428942: SAHF
// 00428943: JBE 0x00428986
//   XREF to: 00428986 (CONDITIONAL_JUMP)
// 00428945: FLD float ptr [ESP + 0x8]
//   XREF to: Stack[-0x110] (READ)
// 00428949: FDIV float ptr [ESP + 0xb8]
//   XREF to: Stack[-0x60] (READ)
// 00428950: FLD float ptr [ESP + 0x38]
//   XREF to: Stack[-0xe0] (READ)
// 00428954: FXCH
// 00428956: FSTP float ptr [ESP + 0xd0]
//   XREF to: Stack[-0x48] (WRITE)
// 0042895d: FMUL float ptr [ESP + 0xd0]
//   XREF to: Stack[-0x48] (READ)
// 00428964: FLDZ
// 00428966: FMUL float ptr [ESP + 0xd0]
//   XREF to: Stack[-0x48] (READ)
// 0042896d: FLD float ptr [ESP + 0x40]
//   XREF to: Stack[-0xd8] (READ)
// 00428971: FMUL float ptr [ESP + 0xd0]
//   XREF to: Stack[-0x48] (READ)
// 00428978: FXCH ST2
// 0042897a: FSTP float ptr [ESP + 0x38]
//   XREF to: Stack[-0xe0] (WRITE)
// 0042897e: FSTP float ptr [ESP + 0x3c]
//   XREF to: Stack[-0xdc] (WRITE)
// 00428982: FSTP float ptr [ESP + 0x40]
//   XREF to: Stack[-0xd8] (WRITE)
// 00428986: LEA ESI,[EBX + 0x241c]
//   Label: LAB_00428986
// 0042898c: LEA EAX,[ESP + 0x98]
//   XREF to: Stack[-0x80] (DATA)
// 00428993: FLD float ptr [ESI + 0x4]
// 00428996: FLD float ptr [ESI]
// 00428998: FADD float ptr [ESP + 0x38]
//   XREF to: Stack[-0xe0] (READ)
// 0042899c: FLD float ptr [ESI + 0x8]
// 0042899f: FXCH
// 004289a1: FSTP float ptr [ESI]
// 004289a3: FXCH
// 004289a5: FADD float ptr [ESP + 0x3c]
//   XREF to: Stack[-0xdc] (READ)
// 004289a9: PUSH EAX
// 004289aa: FSTP float ptr [ESI + 0x4]
// 004289ad: FADD float ptr [ESP + 0x44]
//   XREF to: Stack[-0xd8] (READ)
// 004289b1: LEA EAX,[ESP + 0x54]
//   XREF to: Stack[-0xc8] (DATA)
// 004289b5: FSTP float ptr [ESI + 0x8]
// 004289b8: FLD float ptr [ESP + 0x60]
//   XREF to: Stack[-0xbc] (READ)
// 004289bc: FSUB float ptr [ESI]
// 004289be: FLD float ptr [ESP + 0x64]
//   XREF to: Stack[-0xb8] (READ)
// 004289c2: FXCH
// 004289c4: FSTP float ptr [ESP + 0x9c]
//   XREF to: Stack[-0x80] (WRITE)
// 004289cb: FSUB float ptr [ESI + 0x4]
// 004289ce: FLD float ptr [ESP + 0x68]
//   XREF to: Stack[-0xb4] (READ)
// 004289d2: FXCH
// 004289d4: FSTP float ptr [ESP + 0xa0]
//   XREF to: Stack[-0x7c] (WRITE)
// 004289db: FSUB float ptr [ESI + 0x8]
// 004289de: PUSH EAX
// 004289df: FSTP float ptr [ESP + 0xa8]
//   XREF to: Stack[-0x78] (WRITE)
// 004289e6: CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   XREF to: 005e7830 (UNCONDITIONAL_CALL)
// 004289eb: ADD ESP,0x8
// 004289ee: FLD float ptr [EAX + 0x4]
// 004289f1: FSUB float ptr [ESP + 0x10]
//   XREF to: Stack[-0x108] (READ)
// 004289f5: SUB ESP,0x4
// 004289f8: FSTP float ptr [ESP]
//   XREF to: Stack[-0x11c] (DATA)
// 004289fb: CALL core_actor.cpp_FUN_0040cd70
//   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
// 00428a00: MOV dword ptr [ESP + 0x104],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00428a07: FLD float ptr [ESP + 0x104]
//   XREF to: Stack[-0x18] (READ)
// 00428a0e: ADD ESP,0x4
// 00428a11: FLD float ptr [ESP + 0xfc]
//   XREF to: Stack[-0x1c] (READ)
// 00428a18: FXCH
// 00428a1a: FST float ptr [ESP + 0xf0]
//   XREF to: Stack[-0x28] (WRITE)
// 00428a21: FXCH
// 00428a23: FCHS
// 00428a25: FSTP float ptr [ESP + 0xc0]
//   XREF to: Stack[-0x58] (WRITE)
// 00428a2c: FCOMP float ptr [ESP + 0xc0]
//   XREF to: Stack[-0x58] (READ)
// 00428a33: FNSTSW AX
// 00428a35: SAHF
// 00428a36: JNC 0x00428ba4
//   XREF to: 00428ba4 (CONDITIONAL_JUMP)
// 00428a3c: MOV EAX,dword ptr [ESP + 0xc0]
//   XREF to: Stack[-0x58] (READ)
// 00428a43: MOV dword ptr [ESP + 0xe0],EAX
//   Label: LAB_00428a43
//   XREF to: Stack[-0x38] (WRITE)
// 00428a4a: MOV EAX,dword ptr [ESP + 0xe0]
//   XREF to: Stack[-0x38] (READ)
// 00428a51: MOV dword ptr [EBX + 0x2418],EAX
//   Label: LAB_00428a51
// 00428a57: MOV EAX,dword ptr [ESP + 0xcc]
//   Label: LAB_00428a57
//   XREF to: Stack[-0x4c] (READ)
// 00428a5e: TEST EAX,EAX
// 00428a60: JZ 0x0042888b
//   XREF to: 0042888b (CONDITIONAL_JUMP)
// 00428a66: MOV EAX,0x1
// 00428a6b: MOV ESP,EBP
// 00428a6d: POP EBP
// 00428a6e: POP EDI
// 00428a6f: POP ESI
// 00428a70: POP EBX
// 00428a71: RET
// 00428a72: PUSH 0x617005
//   Label: LAB_00428a72
//   XREF to: 00617005 (DATA)
// 00428a77: MOV ECX,dword ptr [0x0066e8e0]
//   XREF to: 0083b1a4 (PARAM)
//   XREF to: 0066e8e0 (READ)
// 00428a7d: PUSH ECX
//   XREF to: 0083b1a4 (DATA)
// 00428a7e: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 00428a83: MOV EAX,0xffffffff
// 00428a88: ADD ESP,0x8
// 00428a8b: MOV ESP,EBP
// 00428a8d: POP EBP
// 00428a8e: POP EDI
// 00428a8f: POP ESI
// 00428a90: POP EBX
// 00428a91: RET
// 00428a92: FLD float ptr [ESP + 0xc]
//   Label: LAB_00428a92
//   XREF to: Stack[-0x10c] (READ)
// 00428a96: FLD float ptr [ESP + 0x8]
//   XREF to: Stack[-0x110] (READ)
// 00428a9a: LEA EDX,[EBX + 0x2424]
// 00428aa0: FCHS
// 00428aa2: FXCH
// 00428aa4: FSUB float ptr [ESP + 0x18]
//   XREF to: Stack[-0x100] (READ)
// 00428aa8: FXCH
// 00428aaa: FSTP float ptr [ESP + 0xc4]
//   XREF to: Stack[-0x54] (WRITE)
// 00428ab1: FST float ptr [ESP + 0xc8]
//   XREF to: Stack[-0x50] (WRITE)
// 00428ab8: FCOMP float ptr [ESP + 0xc4]
//   XREF to: Stack[-0x54] (READ)
// 00428abf: FNSTSW AX
// 00428ac1: SAHF
// 00428ac2: JNC 0x00428b5a
//   XREF to: 00428b5a (CONDITIONAL_JUMP)
// 00428ac8: MOV EAX,dword ptr [ESP + 0xc4]
//   XREF to: Stack[-0x54] (READ)
// 00428acf: MOV dword ptr [ESP + 0xd4],EAX
//   Label: LAB_00428acf
//   XREF to: Stack[-0x44] (WRITE)
// 00428ad6: FLD float ptr [EDX]
// 00428ad8: FADD float ptr [ESP + 0xd4]
//   XREF to: Stack[-0x44] (READ)
// 00428adf: FSTP float ptr [EDX]
// 00428ae1: FLD float ptr [ESP + 0xa8]
//   XREF to: Stack[-0x70] (READ)
// 00428ae8: FSUB float ptr [EBX + 0x34]
// 00428aeb: FSTP float ptr [ESP + 0x100]
//   XREF to: Stack[-0x18] (WRITE)
// 00428af2: PUSH dword ptr [ESP + 0x100]
//   XREF to: Stack[-0x18] (READ)
// 00428af9: CALL core_actor.cpp_FUN_0040cd70
//   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
// 00428afe: MOV dword ptr [ESP + 0x104],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00428b05: FLD float ptr [ESP + 0x104]
//   XREF to: Stack[-0x18] (READ)
// 00428b0c: ADD ESP,0x4
// 00428b0f: ADD EBX,0x2418
// 00428b15: FLD float ptr [ESP + 0xfc]
//   XREF to: Stack[-0x1c] (READ)
// 00428b1c: FXCH
// 00428b1e: FST float ptr [ESP + 0xf4]
//   XREF to: Stack[-0x24] (WRITE)
// 00428b25: FXCH
// 00428b27: FCHS
// 00428b29: FSTP float ptr [ESP + 0xbc]
//   XREF to: Stack[-0x5c] (WRITE)
// 00428b30: FCOMP float ptr [ESP + 0xbc]
//   XREF to: Stack[-0x5c] (READ)
// 00428b37: FNSTSW AX
// 00428b39: SAHF
// 00428b3a: JNC 0x00428b7f
//   XREF to: 00428b7f (CONDITIONAL_JUMP)
// 00428b3c: MOV EAX,dword ptr [ESP + 0xbc]
//   XREF to: Stack[-0x5c] (READ)
// 00428b43: MOV dword ptr [ESP + 0xd8],EAX
//   Label: LAB_00428b43
//   XREF to: Stack[-0x40] (WRITE)
// 00428b4a: FLD float ptr [EBX]
// 00428b4c: FADD float ptr [ESP + 0xd8]
//   XREF to: Stack[-0x40] (READ)
// 00428b53: FSTP float ptr [EBX]
// 00428b55: JMP 0x00428a57
//   XREF to: 00428a57 (UNCONDITIONAL_JUMP)
// 00428b5a: FLD float ptr [ESP + 0xc8]
//   Label: LAB_00428b5a
//   XREF to: Stack[-0x50] (READ)
// 00428b61: FCOMP float ptr [ESP + 0x8]
//   XREF to: Stack[-0x110] (READ)
// 00428b65: FNSTSW AX
// 00428b67: SAHF
// 00428b68: JBE 0x00428b73
//   XREF to: 00428b73 (CONDITIONAL_JUMP)
// 00428b6a: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x110] (READ)
// 00428b6e: JMP 0x00428acf
//   XREF to: 00428acf (UNCONDITIONAL_JUMP)
// 00428b73: MOV EAX,dword ptr [ESP + 0xc8]
//   Label: LAB_00428b73
//   XREF to: Stack[-0x50] (READ)
// 00428b7a: JMP 0x00428acf
//   XREF to: 00428acf (UNCONDITIONAL_JUMP)
// 00428b7f: FLD float ptr [ESP + 0xf4]
//   Label: LAB_00428b7f
//   XREF to: Stack[-0x24] (READ)
// 00428b86: FCOMP float ptr [ESP + 0xfc]
//   XREF to: Stack[-0x1c] (READ)
// 00428b8d: FNSTSW AX
// 00428b8f: SAHF
// 00428b90: JBE 0x00428b9b
//   XREF to: 00428b9b (CONDITIONAL_JUMP)
// 00428b92: MOV EAX,dword ptr [ESP + 0xfc]
//   XREF to: Stack[-0x1c] (READ)
// 00428b99: JMP 0x00428b43
//   XREF to: 00428b43 (UNCONDITIONAL_JUMP)
// 00428b9b: MOV EAX,dword ptr [ESP + 0xf4]
//   Label: LAB_00428b9b
//   XREF to: Stack[-0x24] (READ)
// 00428ba2: JMP 0x00428b43
//   XREF to: 00428b43 (UNCONDITIONAL_JUMP)
// 00428ba4: FLD float ptr [ESP + 0xf0]
//   Label: LAB_00428ba4
//   XREF to: Stack[-0x28] (READ)
// 00428bab: FCOMP float ptr [ESP + 0xfc]
//   XREF to: Stack[-0x1c] (READ)
// 00428bb2: FNSTSW AX
// 00428bb4: SAHF
// 00428bb5: JBE 0x00428bc3
//   XREF to: 00428bc3 (CONDITIONAL_JUMP)
// 00428bb7: MOV EAX,dword ptr [ESP + 0xfc]
//   XREF to: Stack[-0x1c] (READ)
// 00428bbe: JMP 0x00428a43
//   XREF to: 00428a43 (UNCONDITIONAL_JUMP)
// 00428bc3: MOV EAX,dword ptr [ESP + 0xf0]
//   Label: LAB_00428bc3
//   XREF to: Stack[-0x28] (READ)
// 00428bca: JMP 0x00428a43
//   XREF to: 00428a43 (UNCONDITIONAL_JUMP)
// 00428bcf: FLD float ptr [ESP + 0xc]
//   Label: LAB_00428bcf
//   XREF to: Stack[-0x10c] (READ)
// 00428bd3: FLD float ptr [ESP + 0x8]
//   XREF to: Stack[-0x110] (READ)
// 00428bd7: LEA EDX,[EBX + 0x2424]
// 00428bdd: FCHS
// 00428bdf: FXCH
// 00428be1: FSUB float ptr [ESP + 0x18]
//   XREF to: Stack[-0x100] (READ)
// 00428be5: FXCH
// 00428be7: FSTP float ptr [ESP + 0xb4]
//   XREF to: Stack[-0x64] (WRITE)
// 00428bee: FST float ptr [ESP + 0xdc]
//   XREF to: Stack[-0x3c] (WRITE)
// 00428bf5: FCOMP float ptr [ESP + 0xb4]
//   XREF to: Stack[-0x64] (READ)
// 00428bfc: FNSTSW AX
// 00428bfe: SAHF
// 00428bff: JNC 0x00428d11
//   XREF to: 00428d11 (CONDITIONAL_JUMP)
// 00428c05: MOV EAX,dword ptr [ESP + 0xb4]
//   XREF to: Stack[-0x64] (READ)
// 00428c0c: MOV dword ptr [ESP + 0xe8],EAX
//   Label: LAB_00428c0c
//   XREF to: Stack[-0x30] (WRITE)
// 00428c13: LEA EAX,[EBX + 0x241c]
// 00428c19: PUSH EAX
// 00428c1a: LEA EAX,[ESP + 0x90]
//   XREF to: Stack[-0x8c] (DATA)
// 00428c21: FLD float ptr [EDX]
// 00428c23: PUSH EAX
// 00428c24: FADD float ptr [ESP + 0xf0]
//   XREF to: Stack[-0x30] (READ)
// 00428c2b: PUSH EBX
// 00428c2c: FSTP float ptr [EDX]
// 00428c2e: CALL core_actor.cpp_CDemonActor_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 00428c33: ADD ESP,0xc
// 00428c36: PUSH ESI
// 00428c37: LEA EAX,[ESP + 0x24]
//   XREF to: Stack[-0xf8] (DATA)
// 00428c3b: PUSH EAX
// 00428c3c: PUSH EBX
// 00428c3d: CALL core_actor.cpp_CDemonActor_FUN_00408e80
//   XREF to: 00408e80 (UNCONDITIONAL_CALL)
// 00428c42: FLD float ptr [EDI]
// 00428c44: FSUB float ptr [EAX]
// 00428c46: ADD ESP,0xc
// 00428c49: FST float ptr [ESP + 0x74]
//   XREF to: Stack[-0xa4] (WRITE)
// 00428c4d: FLD float ptr [EDI + 0x4]
// 00428c50: FSUB float ptr [EAX + 0x4]
// 00428c53: FXCH
// 00428c55: FSUB float ptr [ESP + 0x8c]
//   XREF to: Stack[-0x8c] (READ)
// 00428c5c: FXCH
// 00428c5e: FST float ptr [ESP + 0x78]
//   XREF to: Stack[-0xa0] (WRITE)
// 00428c62: FLD float ptr [EDI + 0x8]
// 00428c65: FSUB float ptr [EAX + 0x8]
// 00428c68: FXCH
// 00428c6a: FSUB float ptr [ESP + 0x90]
//   XREF to: Stack[-0x88] (READ)
// 00428c71: FXCH
// 00428c73: FSTP float ptr [ESP + 0x7c]
//   XREF to: Stack[-0x9c] (WRITE)
// 00428c77: FXCH
// 00428c79: FSTP float ptr [ESP + 0x80]
//   XREF to: Stack[-0x98] (WRITE)
// 00428c80: FSTP float ptr [ESP + 0x84]
//   XREF to: Stack[-0x94] (WRITE)
// 00428c87: LEA EAX,[ESP + 0x80]
//   XREF to: Stack[-0x98] (DATA)
// 00428c8e: FLD float ptr [ESP + 0x7c]
//   XREF to: Stack[-0x9c] (READ)
// 00428c92: PUSH EAX
// 00428c93: LEA EAX,[ESP + 0x30]
//   XREF to: Stack[-0xec] (DATA)
// 00428c97: FSUB float ptr [ESP + 0x98]
//   XREF to: Stack[-0x84] (READ)
// 00428c9e: PUSH EAX
// 00428c9f: FSTP float ptr [ESP + 0x90]
//   XREF to: Stack[-0x90] (WRITE)
// 00428ca6: CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   XREF to: 005e7830 (UNCONDITIONAL_CALL)
// 00428cab: FLD float ptr [EAX + 0x4]
// 00428cae: ADD ESP,0x8
// 00428cb1: FSUB float ptr [EBX + 0x34]
// 00428cb4: SUB ESP,0x4
// 00428cb7: FSTP float ptr [ESP]
//   XREF to: Stack[-0x11c] (DATA)
// 00428cba: CALL core_actor.cpp_FUN_0040cd70
//   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
// 00428cbf: MOV dword ptr [ESP + 0x104],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00428cc6: FLD float ptr [ESP + 0x104]
//   XREF to: Stack[-0x18] (READ)
// 00428ccd: ADD ESP,0x4
// 00428cd0: FLD float ptr [ESP + 0xfc]
//   XREF to: Stack[-0x1c] (READ)
// 00428cd7: FXCH
// 00428cd9: FST float ptr [ESP + 0xec]
//   XREF to: Stack[-0x2c] (WRITE)
// 00428ce0: FXCH
// 00428ce2: FCHS
// 00428ce4: FSTP float ptr [ESP + 0xb0]
//   XREF to: Stack[-0x68] (WRITE)
// 00428ceb: FCOMP float ptr [ESP + 0xb0]
//   XREF to: Stack[-0x68] (READ)
// 00428cf2: FNSTSW AX
// 00428cf4: SAHF
// 00428cf5: JNC 0x00428d36
//   XREF to: 00428d36 (CONDITIONAL_JUMP)
// 00428cf7: MOV EAX,dword ptr [ESP + 0xb0]
//   XREF to: Stack[-0x68] (READ)
// 00428cfe: MOV dword ptr [ESP + 0xe4],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 00428d05: MOV EAX,dword ptr [ESP + 0xe4]
//   XREF to: Stack[-0x34] (READ)
// 00428d0c: JMP 0x00428a51
//   XREF to: 00428a51 (UNCONDITIONAL_JUMP)
// 00428d11: FLD float ptr [ESP + 0xdc]
//   Label: LAB_00428d11
//   XREF to: Stack[-0x3c] (READ)
// 00428d18: FCOMP float ptr [ESP + 0x8]
//   XREF to: Stack[-0x110] (READ)
// 00428d1c: FNSTSW AX
// 00428d1e: SAHF
// 00428d1f: JBE 0x00428d2a
//   XREF to: 00428d2a (CONDITIONAL_JUMP)
// 00428d21: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x110] (READ)
// 00428d25: JMP 0x00428c0c
//   XREF to: 00428c0c (UNCONDITIONAL_JUMP)
// 00428d2a: MOV EAX,dword ptr [ESP + 0xdc]
//   Label: LAB_00428d2a
//   XREF to: Stack[-0x3c] (READ)
// 00428d31: JMP 0x00428c0c
//   XREF to: 00428c0c (UNCONDITIONAL_JUMP)
// 00428d36: FLD float ptr [ESP + 0xec]
//   Label: LAB_00428d36
//   XREF to: Stack[-0x2c] (READ)
// 00428d3d: FCOMP float ptr [ESP + 0xfc]
//   XREF to: Stack[-0x1c] (READ)
// 00428d44: FNSTSW AX
// 00428d46: SAHF
// 00428d47: JBE 0x00428d63
//   XREF to: 00428d63 (CONDITIONAL_JUMP)
// 00428d49: MOV EAX,dword ptr [ESP + 0xfc]
//   XREF to: Stack[-0x1c] (READ)
// 00428d50: MOV dword ptr [ESP + 0xe4],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 00428d57: MOV EAX,dword ptr [ESP + 0xe4]
//   XREF to: Stack[-0x34] (READ)
// 00428d5e: JMP 0x00428a51
//   XREF to: 00428a51 (UNCONDITIONAL_JUMP)
// 00428d63: MOV EAX,dword ptr [ESP + 0xec]
//   Label: LAB_00428d63
//   XREF to: Stack[-0x2c] (READ)
// 00428d6a: MOV dword ptr [ESP + 0xe4],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 00428d71: MOV EAX,dword ptr [ESP + 0xe4]
//   XREF to: Stack[-0x34] (READ)
// 00428d78: JMP 0x00428a51
//   XREF to: 00428a51 (UNCONDITIONAL_JUMP)
