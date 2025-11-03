// Name: core_charactr.cpp_CCharacter_FUN_0042ca70
// Address: 0042ca70
// Address Range: [[0042ca70, 0042cd45]]
// Convention: __cdecl
// Signature: int core_charactr.cpp_CCharacter_FUN_0042ca70(CCharacter * this_ptr)
// Cross-references:
//   core_armour.cpp_CArmour_process_FUN_00412260 (00412260) at 004122ed [UNCONDITIONAL_CALL]
//   core_baron.cpp_CBaron_process_FUN_00412e80 (00412e80) at 00412fd9 [UNCONDITIONAL_CALL]
//   core_batcreat.cpp_CBatCreature_process_FUN_00415470 (00415470) at 00415518 [UNCONDITIONAL_CALL]
//   core_batman.cpp_CBatman_process_FUN_00416870 (00416870) at 0041691b [UNCONDITIONAL_CALL]
//   core_biggs.cpp_CBiggs_FUN_00418700 (00418700) at 0041878c [UNCONDITIONAL_CALL]
//   core_boneguy.cpp_FUN_0041bf90 (0041bf90) at 0041c3a1 [UNCONDITIONAL_CALL]
//   core_colonel.cpp_FUN_0043fa00 (0043fa00) at 0043faa2 [UNCONDITIONAL_CALL]
//   core_cow.cpp_FUN_00444310 (00444310) at 004443b8 [UNCONDITIONAL_CALL]
//   core_dog.cpp_CZombieDog_process_FUN_0047f140 (0047f140) at 0047f1ff [UNCONDITIONAL_CALL]
//   core_dracbrid.cpp_FUN_00484410 (00484410) at 0048467e [UNCONDITIONAL_CALL]
//   core_drone.cpp_FUN_0048ec70 (0048ec70) at 0048ed29 [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_FUN_004d2ea0 (004d2ea0) at 004d3a60 [UNCONDITIONAL_CALL]
//   core_gargoyle.cpp_CGargoyle_unk6_FUN_004e4a00 (004e4a00) at 004e4ada [UNCONDITIONAL_CALL]
//   core_ghoul.cpp_CGhoul_FUN_004e6600 (004e6600) at 004e6703 [UNCONDITIONAL_CALL]
//   core_haystack.cpp_FUN_004f0e40 (004f0e40) at 004f0ee9 [UNCONDITIONAL_CALL]
//   core_hostage.cpp_RelatedToRescuedTownsfolk_FUN_004f4bd0 (004f4bd0) at 004f5446 [UNCONDITIONAL_CALL]
//   core_hotdemon.cpp_FUN_004f6f20 (004f6f20) at 004f6fc4 [UNCONDITIONAL_CALL]
//   core_icepick.cpp_FUN_004f80b0 (004f80b0) at 004f816b [UNCONDITIONAL_CALL]
//   core_imp.cpp_FUN_004f9c30 (004f9c30) at 004f9f9c [UNCONDITIONAL_CALL]
//   core_larva.cpp_FUN_00503080 (00503080) at 00503131 [UNCONDITIONAL_CALL]
//   core_mobster.cpp_FUN_00525840 (00525840) at 00525b44 [UNCONDITIONAL_CALL]
//   core_moloch.cpp_FUN_00528d20 (00528d20) at 00528e01 [UNCONDITIONAL_CALL]
//   core_npc.cpp_CNPC_process_FUN_005448b0 (005448b0) at 005449ba [UNCONDITIONAL_CALL]
//   core_scat.cpp_FUN_005571f0 (005571f0) at 0055728a [UNCONDITIONAL_CALL]
//   core_sentinel.cpp_FUN_00568030 (00568030) at 005680d5 [UNCONDITIONAL_CALL]
//   core_smiley.cpp_FUN_005a2800 (005a2800) at 005a2a68 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005bb960 (005bb960) at 005bd176 [UNCONDITIONAL_CALL]
//   core_succubus.cpp_CSuccubus_process_FUN_005c6e90 (005c6e90) at 005c6f7d [UNCONDITIONAL_CALL]
//   core_svetlana.cpp_CSvetlana_process_FUN_005d8ba0 (005d8ba0) at 005d8c7e [UNCONDITIONAL_CALL]
//   core_werewolf.cpp_CWerewolf_process_FUN_005efde0 (005efde0) at 005effb4 [UNCONDITIONAL_CALL]
//   core_zombie.cpp_CZombie_process_FUN_005f9470 (005f9470) at 005f9e7e [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_s_can_t_figure_out_next__0061725e
//   double DOUBLE_0061729a = 0.628318530700000
//   CConsole* g_CConsolePtr = 0083b1a4
//   CConsole g_ConsolePtr
//   CVector3f g_ZeroVector
//   undefined4 g_CWayPointClassInfo.name_hash
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790
//   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
//   core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
//   core_charactr.cpp_CCharacter_FUN_0042c5f0
//   core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0
//   core_door.cpp_CDoor_getOpenStandPos_FUN_00480e20
//   core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   core_waypoint.cpp_FUN_005ec320
//   engine_console.cpp_CConsole_printf_FUN_00441890

#include "nocturne.h"

int __cdecl core_charactr_cpp_CCharacter_FUN_0042ca70(CCharacter *this_ptr)

{
  COrientation *pCVar1;
  CDemonActor_vtable *pCVar2;
  int iVar3;
  CVector3f *pCVar4;
  float fVar5;
  float fVar6;
  CDemonActor *pCVar7;
  BADSPACEBASE *in_ESP;
  float in_stack_00000008;
  CVector3f aCStack_30 [2];
  float fStack_18;
  float fStack_14;
  
  if ((*(int *)this_ptr->field11_0x25a0 == 0) && (*(int *)(this_ptr->field11_0x25a0 + 0x14) == 0)) {
    return 0;
  }
  if ((0.0 <= *(float *)(this_ptr->field11_0x25a0 + 0xc)) &&
     (fVar6 = *(float *)(this_ptr->field11_0x25a0 + 0xc) - in_stack_00000008,
     *(float *)(this_ptr->field11_0x25a0 + 0xc) = fVar6, fVar6 <= 0.0)) {
    this_ptr->field11_0x25a0[0xc] = '\0';
    this_ptr->field11_0x25a0[0xd] = '\0';
    this_ptr->field11_0x25a0[0xe] = '\0';
    this_ptr->field11_0x25a0[0xf] = '\0';
    iVar3 = *(int *)this_ptr->field11_0x25a0;
    this_ptr->field11_0x25a0[0x10] = '\0';
    this_ptr->field11_0x25a0[0x11] = '\0';
    this_ptr->field11_0x25a0[0x12] = '\0';
    this_ptr->field11_0x25a0[0x13] = '\0';
    (this_ptr->base_actor).location.position.x = *(float *)(iVar3 + 0x20);
    (this_ptr->base_actor).location.position.y = *(float *)(iVar3 + 0x24);
    (this_ptr->base_actor).location.position.z = *(float *)(iVar3 + 0x28);
    (this_ptr->base_actor).location.area_id = *(int *)(iVar3 + 0x2c);
    iVar3 = *(int *)this_ptr->field11_0x25a0;
    pCVar1 = &(this_ptr->base_actor).orient;
    if (pCVar1 != (COrientation *)(iVar3 + 0x30)) {
      pCVar1->pitch = *(float *)(iVar3 + 0x30);
      (this_ptr->base_actor).orient.bank = *(float *)(iVar3 + 0x34);
      (this_ptr->base_actor).orient.heading = *(float *)(iVar3 + 0x38);
    }
    if (*(int *)(this_ptr->field11_0x25a0 + 0x14) != 0) {
      (*(this_ptr->base_actor).vtable[1].updateCollisionData)(&this_ptr->base_actor);
    }
    return 1;
  }
  if (*(CDoor **)(this_ptr->field11_0x25a0 + 0x14) == (CDoor *)0x0) {
    if (((0.0 <= *(float *)(this_ptr->field11_0x25a0 + 4)) &&
        (pCVar7 = core_actor_cpp_castToClassHash_FUN_0040c790
                            (*(CDemonActor **)this_ptr->field11_0x25a0,
                             g_CWayPointClassInfo.name_hash), pCVar7 != (CDemonActor *)0x0)) &&
       (iVar3 = core_waypoint_cpp_FUN_005ec320(), iVar3 == 0)) {
      engine_console_cpp_CConsole_printf_FUN_00441890
                (g_CConsolePtr,"%s can't figure out next waypoint trying to reach %s\n",this_ptr,
                 *(undefined4 *)this_ptr->field11_0x25a0);
      return 1;
    }
    core_charactr_cpp_CCharacter_FUN_0042c5f0(this_ptr);
    return 1;
  }
  core_door_cpp_CDoor_getOpenStandPos_FUN_00480e20(*(CDoor **)(this_ptr->field11_0x25a0 + 0x14));
  (**(code **)(*(int *)(*(int *)(this_ptr->field11_0x25a0 + 0x14) + 0x154) + 0xbc))();
  iVar3 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0(this_ptr);
  if (iVar3 < 0) {
    this_ptr->field11_0x25a0[0x10] = '\x03';
    this_ptr->field11_0x25a0[0x11] = '\0';
    this_ptr->field11_0x25a0[0x12] = '\0';
    this_ptr->field11_0x25a0[0x13] = '\0';
    return 1;
  }
  if (iVar3 < 1) {
    this_ptr->field11_0x25a0[0x10] = '\x01';
    this_ptr->field11_0x25a0[0x11] = '\0';
    this_ptr->field11_0x25a0[0x12] = '\0';
    this_ptr->field11_0x25a0[0x13] = '\0';
    return 1;
  }
  pCVar4 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                     (&this_ptr->base_actor,aCStack_30,
                      (CVector3f *)(*(int *)(this_ptr->field11_0x25a0 + 0x14) + 0x9bc));
  pCVar4 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                     ((CVector3f *)&stack0xffffffb8,pCVar4);
  fVar6 = pCVar4->y;
  *(float *)(this_ptr->field2_0x240c + 0xc) = fVar6;
  if ((float)DOUBLE_0061729a <= fVar6) {
    this_ptr->field11_0x25a0[0x10] = '\x01';
    this_ptr->field11_0x25a0[0x11] = '\0';
    this_ptr->field11_0x25a0[0x12] = '\0';
    this_ptr->field11_0x25a0[0x13] = '\0';
  }
  else {
    pCVar2 = (this_ptr->base_actor).vtable;
    this_ptr->field11_0x25a0[0x10] = '\0';
    this_ptr->field11_0x25a0[0x11] = '\0';
    this_ptr->field11_0x25a0[0x12] = '\0';
    this_ptr->field11_0x25a0[0x13] = '\0';
    (*pCVar2[1].updateCollisionData)(&this_ptr->base_actor);
  }
  fStack_14 = *(float *)(this_ptr->field2_0x240c + 0xc);
  fStack_18 = *(float *)(this_ptr->field2_0x240c + 0x2c);
  fVar5 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(fStack_14);
  fVar6 = -fStack_18;
  if ((fVar6 <= fVar5) && (fVar6 = fVar5, fStack_18 < fVar5)) {
    fVar6 = fStack_18;
  }
  *(float *)(this_ptr->field2_0x240c + 0xc) = fVar6;
  return 1;
}


// Assembly code:
// 0042ca70: PUSH EBX
//   Label: core_charactr.cpp_CCharacter_FUN_0042ca70
// 0042ca71: PUSH ESI
// 0042ca72: PUSH EDI
// 0042ca73: PUSH EBP
// 0042ca74: SUB ESP,0x38
// 0042ca77: MOV EBX,dword ptr [ESP + 0x4c]
//   XREF to: Stack[0x4] (READ)
// 0042ca7b: CMP dword ptr [EBX + 0x25a0],0x0
// 0042ca82: JNZ 0x0042ca91
//   XREF to: 0042ca91 (CONDITIONAL_JUMP)
// 0042ca84: CMP dword ptr [EBX + 0x25b4],0x0
// 0042ca8b: JZ 0x0042cb3b
//   XREF to: 0042cb3b (CONDITIONAL_JUMP)
// 0042ca91: FLD float ptr [EBX + 0x25ac]
//   Label: LAB_0042ca91
// 0042ca97: FLDZ
// 0042ca99: FCOMPP
// 0042ca9b: FNSTSW AX
// 0042ca9d: SAHF
// 0042ca9e: JA 0x0042cb45
//   XREF to: 0042cb45 (CONDITIONAL_JUMP)
// 0042caa4: FLD float ptr [EBX + 0x25ac]
// 0042caaa: FSUB float ptr [ESP + 0x50]
//   XREF to: Stack[0x8] (READ)
// 0042caae: FST float ptr [EBX + 0x25ac]
// 0042cab4: FLDZ
// 0042cab6: FCOMPP
// 0042cab8: FNSTSW AX
// 0042caba: SAHF
// 0042cabb: JC 0x0042cb45
//   XREF to: 0042cb45 (CONDITIONAL_JUMP)
// 0042cac1: MOV dword ptr [EBX + 0x25ac],0x0
// 0042cacb: MOV EDX,dword ptr [EBX + 0x25a0]
// 0042cad1: MOV dword ptr [EBX + 0x25b0],0x0
// 0042cadb: LEA EAX,[EBX + 0x20]
// 0042cade: MOV ECX,dword ptr [EDX + 0x20]
// 0042cae1: MOV dword ptr [EAX],ECX
// 0042cae3: MOV ECX,dword ptr [EDX + 0x24]
// 0042cae6: MOV dword ptr [EAX + 0x4],ECX
// 0042cae9: MOV ECX,dword ptr [EDX + 0x28]
// 0042caec: MOV dword ptr [EAX + 0x8],ECX
// 0042caef: MOV EDX,dword ptr [EDX + 0x2c]
// 0042caf2: MOV dword ptr [EAX + 0xc],EDX
// 0042caf5: MOV EDX,dword ptr [EBX + 0x25a0]
// 0042cafb: LEA EAX,[EBX + 0x30]
// 0042cafe: ADD EDX,0x30
// 0042cb01: CMP EAX,EDX
// 0042cb03: JZ 0x0042cb15
//   XREF to: 0042cb15 (CONDITIONAL_JUMP)
// 0042cb05: MOV ECX,dword ptr [EDX]
// 0042cb07: MOV dword ptr [EAX],ECX
// 0042cb09: MOV ECX,dword ptr [EDX + 0x4]
// 0042cb0c: MOV dword ptr [EAX + 0x4],ECX
// 0042cb0f: MOV ECX,dword ptr [EDX + 0x8]
// 0042cb12: MOV dword ptr [EAX + 0x8],ECX
// 0042cb15: CMP dword ptr [EBX + 0x25b4],0x0
//   Label: LAB_0042cb15
// 0042cb1c: JZ 0x0042cb2e
//   XREF to: 0042cb2e (CONDITIONAL_JUMP)
// 0042cb1e: PUSH EBX
// 0042cb1f: MOV EAX,dword ptr [EBX + 0x154]
// 0042cb25: CALL dword ptr [EAX + 0x134]
// 0042cb2b: ADD ESP,0x4
// 0042cb2e: MOV EAX,0x1
//   Label: LAB_0042cb2e
// 0042cb33: ADD ESP,0x38
// 0042cb36: POP EBP
// 0042cb37: POP EDI
// 0042cb38: POP ESI
// 0042cb39: POP EBX
// 0042cb3a: RET
// 0042cb3b: XOR EAX,EAX
//   Label: LAB_0042cb3b
// 0042cb3d: ADD ESP,0x38
// 0042cb40: POP EBP
// 0042cb41: POP EDI
// 0042cb42: POP ESI
// 0042cb43: POP EBX
// 0042cb44: RET
// 0042cb45: MOV ESI,dword ptr [EBX + 0x25b4]
//   Label: LAB_0042cb45
// 0042cb4b: LEA EDI,[EBX + 0x20]
// 0042cb4e: TEST ESI,ESI
// 0042cb50: JZ 0x0042ccba
//   XREF to: 0042ccba (CONDITIONAL_JUMP)
// 0042cb56: PUSH EDI
// 0042cb57: LEA EAX,[EBX + 0x25b8]
// 0042cb5d: PUSH EAX
// 0042cb5e: LEA EAX,[ESP + 0x14]
//   XREF to: Stack[-0x3c] (DATA)
// 0042cb62: PUSH EAX
// 0042cb63: PUSH ESI
// 0042cb64: CALL core_door.cpp_CDoor_getOpenStandPos_FUN_00480e20
//   XREF to: 00480e20 (UNCONDITIONAL_CALL)
// 0042cb69: ADD ESP,0x10
// 0042cb6c: PUSH 0x0
// 0042cb6e: MOV EAX,dword ptr [EBX + 0x25b4]
// 0042cb74: PUSH 0x0
// 0042cb76: PUSH 0x3f87558
//   XREF to: 03f87558 (DATA)
// 0042cb7b: MOV EDX,dword ptr [EAX + 0x154]
// 0042cb81: PUSH EAX
// 0042cb82: CALL dword ptr [EDX + 0xbc]
// 0042cb88: ADD ESP,0x4
// 0042cb8b: PUSH EAX
// 0042cb8c: LEA EAX,[ESP + 0x1c]
// 0042cb90: PUSH EAX
// 0042cb91: PUSH EBX
// 0042cb92: CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0
//   XREF to: 004286e0 (UNCONDITIONAL_CALL)
// 0042cb97: ADD ESP,0x18
// 0042cb9a: TEST EAX,EAX
// 0042cb9c: JL 0x0042cc64
//   XREF to: 0042cc64 (CONDITIONAL_JUMP)
// 0042cba2: JLE 0x0042cca3
//   XREF to: 0042cca3 (CONDITIONAL_JUMP)
// 0042cba8: MOV EAX,dword ptr [EBX + 0x25b4]
// 0042cbae: ADD EAX,0x9bc
// 0042cbb3: PUSH EAX
// 0042cbb4: LEA EAX,[ESP + 0x1c]
// 0042cbb8: PUSH EAX
// 0042cbb9: PUSH EBX
// 0042cbba: CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
//   XREF to: 00408f10 (UNCONDITIONAL_CALL)
// 0042cbbf: ADD ESP,0xc
// 0042cbc2: PUSH EAX
// 0042cbc3: LEA EAX,[ESP + 0x4]
// 0042cbc7: PUSH EAX
// 0042cbc8: CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   XREF to: 005e7830 (UNCONDITIONAL_CALL)
// 0042cbcd: FLD float ptr [EAX + 0x4]
// 0042cbd0: ADD ESP,0x8
// 0042cbd3: FST float ptr [EBX + 0x2418]
// 0042cbd9: FCOMP double ptr [0x0061729a]
//   XREF to: 0061729a (READ)
// 0042cbdf: FNSTSW AX
// 0042cbe1: SAHF
// 0042cbe2: JNC 0x0042cc7b
//   XREF to: 0042cc7b (CONDITIONAL_JUMP)
// 0042cbe8: PUSH EBX
// 0042cbe9: MOV EAX,dword ptr [EBX + 0x154]
// 0042cbef: MOV dword ptr [EBX + 0x25b0],0x0
// 0042cbf9: CALL dword ptr [EAX + 0x134]
// 0042cbff: ADD ESP,0x4
// 0042cc02: MOV EAX,dword ptr [EBX + 0x2418]
//   Label: LAB_0042cc02
// 0042cc08: MOV dword ptr [ESP + 0x30],EAX
// 0042cc0c: MOV EAX,dword ptr [EBX + 0x2438]
// 0042cc12: PUSH dword ptr [ESP + 0x30]
// 0042cc16: MOV dword ptr [ESP + 0x30],EAX
// 0042cc1a: CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
//   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
// 0042cc1f: MOV dword ptr [ESP + 0x38],EAX
// 0042cc23: FLD float ptr [ESP + 0x38]
// 0042cc27: ADD ESP,0x4
// 0042cc2a: FLD float ptr [ESP + 0x2c]
// 0042cc2e: FXCH
// 0042cc30: FST float ptr [ESP + 0x30]
// 0042cc34: FXCH
// 0042cc36: FCHS
// 0042cc38: FSTP float ptr [ESP + 0x24]
// 0042cc3c: FCOMP float ptr [ESP + 0x24]
// 0042cc40: FNSTSW AX
// 0042cc42: SAHF
// 0042cc43: JNC 0x0042cc8a
//   XREF to: 0042cc8a (CONDITIONAL_JUMP)
// 0042cc45: MOV EAX,dword ptr [ESP + 0x24]
// 0042cc49: MOV dword ptr [ESP + 0x28],EAX
//   Label: LAB_0042cc49
// 0042cc4d: MOV EAX,dword ptr [ESP + 0x28]
// 0042cc51: MOV dword ptr [EBX + 0x2418],EAX
// 0042cc57: MOV EAX,0x1
// 0042cc5c: ADD ESP,0x38
// 0042cc5f: POP EBP
// 0042cc60: POP EDI
// 0042cc61: POP ESI
// 0042cc62: POP EBX
// 0042cc63: RET
// 0042cc64: MOV dword ptr [EBX + 0x25b0],0x3
//   Label: LAB_0042cc64
// 0042cc6e: MOV EAX,0x1
// 0042cc73: ADD ESP,0x38
// 0042cc76: POP EBP
// 0042cc77: POP EDI
// 0042cc78: POP ESI
// 0042cc79: POP EBX
// 0042cc7a: RET
// 0042cc7b: MOV dword ptr [EBX + 0x25b0],0x1
//   Label: LAB_0042cc7b
// 0042cc85: JMP 0x0042cc02
//   XREF to: 0042cc02 (UNCONDITIONAL_JUMP)
// 0042cc8a: FLD float ptr [ESP + 0x30]
//   Label: LAB_0042cc8a
// 0042cc8e: FCOMP float ptr [ESP + 0x2c]
// 0042cc92: FNSTSW AX
// 0042cc94: SAHF
// 0042cc95: JBE 0x0042cc9d
//   XREF to: 0042cc9d (CONDITIONAL_JUMP)
// 0042cc97: MOV EAX,dword ptr [ESP + 0x2c]
// 0042cc9b: JMP 0x0042cc49
//   XREF to: 0042cc49 (UNCONDITIONAL_JUMP)
// 0042cc9d: MOV EAX,dword ptr [ESP + 0x30]
//   Label: LAB_0042cc9d
// 0042cca1: JMP 0x0042cc49
//   XREF to: 0042cc49 (UNCONDITIONAL_JUMP)
// 0042cca3: MOV dword ptr [EBX + 0x25b0],0x1
//   Label: LAB_0042cca3
// 0042ccad: MOV EAX,0x1
// 0042ccb2: ADD ESP,0x38
// 0042ccb5: POP EBP
// 0042ccb6: POP EDI
// 0042ccb7: POP ESI
// 0042ccb8: POP EBX
// 0042ccb9: RET
// 0042ccba: FLD float ptr [EBX + 0x25a4]
//   Label: LAB_0042ccba
// 0042ccc0: FLDZ
// 0042ccc2: MOV ESI,dword ptr [EBX + 0x25a0]
// 0042ccc8: FCOMPP
// 0042ccca: FNSTSW AX
// 0042cccc: SAHF
// 0042cccd: JA 0x0042ccf3
//   XREF to: 0042ccf3 (CONDITIONAL_JUMP)
// 0042cccf: MOV EBP,dword ptr [0x03f9591c]
//   XREF to: 03f9591c (READ)
// 0042ccd5: PUSH EBP
// 0042ccd6: PUSH ESI
// 0042ccd7: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 0042ccdc: ADD ESP,0x8
// 0042ccdf: TEST EAX,EAX
// 0042cce1: JZ 0x0042ccf3
//   XREF to: 0042ccf3 (CONDITIONAL_JUMP)
// 0042cce3: PUSH EAX
// 0042cce4: PUSH EDI
// 0042cce5: CALL core_waypoint.cpp_FUN_005ec320
//   XREF to: 005ec320 (UNCONDITIONAL_CALL)
// 0042ccea: ADD ESP,0x8
// 0042cced: MOV ESI,EAX
// 0042ccef: TEST EAX,EAX
// 0042ccf1: JZ 0x0042cd1d
//   XREF to: 0042cd1d (CONDITIONAL_JUMP)
// 0042ccf3: LEA EAX,[EBX + 0x25b0]
//   Label: LAB_0042ccf3
// 0042ccf9: PUSH EAX
// 0042ccfa: PUSH dword ptr [EBX + 0x25a8]
// 0042cd00: PUSH dword ptr [EBX + 0x25a4]
// 0042cd06: PUSH ESI
// 0042cd07: PUSH EBX
// 0042cd08: CALL core_charactr.cpp_CCharacter_FUN_0042c5f0
//   XREF to: 0042c5f0 (UNCONDITIONAL_CALL)
// 0042cd0d: ADD ESP,0x14
// 0042cd10: MOV EAX,0x1
// 0042cd15: ADD ESP,0x38
// 0042cd18: POP EBP
// 0042cd19: POP EDI
// 0042cd1a: POP ESI
// 0042cd1b: POP EBX
// 0042cd1c: RET
// 0042cd1d: MOV EAX,dword ptr [EBX + 0x25a0]
//   Label: LAB_0042cd1d
// 0042cd23: PUSH EAX
// 0042cd24: PUSH EBX
// 0042cd25: PUSH 0x61725e
//   XREF to: 0061725e (DATA)
// 0042cd2a: MOV EDX,dword ptr [0x0066e8e0]
//   XREF to: 0083b1a4 (PARAM)
//   XREF to: 0066e8e0 (READ)
// 0042cd30: PUSH EDX
//   XREF to: 0083b1a4 (DATA)
// 0042cd31: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 0042cd36: MOV EAX,0x1
// 0042cd3b: ADD ESP,0x10
// 0042cd3e: ADD ESP,0x38
// 0042cd41: POP EBP
// 0042cd42: POP EDI
// 0042cd43: POP ESI
// 0042cd44: POP EBX
// 0042cd45: RET
