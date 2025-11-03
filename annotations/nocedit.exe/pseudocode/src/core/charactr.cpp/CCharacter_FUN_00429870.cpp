// Name: core_charactr.cpp_CCharacter_FUN_00429870
// Address: 00429870
// Address Range: [[00429870, 00429a94]]
// Convention: __cdecl
// Signature: int core_charactr.cpp_CCharacter_FUN_00429870(CCharacter * this_ptr)
// Cross-references:
//   core_armour.cpp_CArmour_process_FUN_00412260 (00412260) at 00412273 [UNCONDITIONAL_CALL]
//   core_baron.cpp_CBaron_process_FUN_00412e80 (00412e80) at 00412f28 [UNCONDITIONAL_CALL]
//   core_batcreat.cpp_CBatCreature_process_FUN_00415470 (00415470) at 0041548c [UNCONDITIONAL_CALL]
//   core_batman.cpp_CBatman_process_FUN_00416870 (00416870) at 0041688c [UNCONDITIONAL_CALL]
//   core_beast.cpp_FUN_004182a0 (004182a0) at 004182b2 [UNCONDITIONAL_CALL]
//   core_biggs.cpp_CBiggs_FUN_00418700 (00418700) at 00418712 [UNCONDITIONAL_CALL]
//   core_boneguy.cpp_FUN_0041bf90 (0041bf90) at 0041c00a [UNCONDITIONAL_CALL]
//   core_bride.cpp_FUN_00423a30 (00423a30) at 00423a4c [UNCONDITIONAL_CALL]
//   core_bugs.cpp_FUN_004250f0 (004250f0) at 004250fb [UNCONDITIONAL_CALL]
//   core_colonel.cpp_FUN_0043fa00 (0043fa00) at 0043fa16 [UNCONDITIONAL_CALL]
//   core_cow.cpp_FUN_00444310 (00444310) at 0044432c [UNCONDITIONAL_CALL]
//   core_dog.cpp_CZombieDog_process_FUN_0047f140 (0047f140) at 0047f15c [UNCONDITIONAL_CALL]
//   core_dracbrid.cpp_FUN_00484410 (00484410) at 004844b6 [UNCONDITIONAL_CALL]
//   core_drone.cpp_FUN_0048ec70 (0048ec70) at 0048ec8c [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_FUN_004d2ea0 (004d2ea0) at 004d2ebc [UNCONDITIONAL_CALL]
//   core_gargoyle.cpp_CGargoyle_unk6_FUN_004e4a00 (004e4a00) at 004e4a1c [UNCONDITIONAL_CALL]
//   core_ghoul.cpp_CGhoul_FUN_004e6600 (004e6600) at 004e661c [UNCONDITIONAL_CALL]
//   core_haystack.cpp_FUN_004f0e40 (004f0e40) at 004f0e53 [UNCONDITIONAL_CALL]
//   core_hiram.cpp_FUN_004f4550 (004f4550) at 004f4563 [UNCONDITIONAL_CALL]
//   core_hostage.cpp_RelatedToRescuedTownsfolk_FUN_004f4bd0 (004f4bd0) at 004f4c2f [UNCONDITIONAL_CALL]
//   core_hotdemon.cpp_FUN_004f6f20 (004f6f20) at 004f6f3c [UNCONDITIONAL_CALL]
//   core_icepick.cpp_FUN_004f80b0 (004f80b0) at 004f80c6 [UNCONDITIONAL_CALL]
//   core_imp.cpp_FUN_004f9c30 (004f9c30) at 004f9c4c [UNCONDITIONAL_CALL]
//   core_larva.cpp_FUN_00503080 (00503080) at 0050309c [UNCONDITIONAL_CALL]
//   core_mimic.cpp_CMimic_setup2_FUN_0051f780 (0051f780) at 0051f7e6 [UNCONDITIONAL_CALL]
//   core_mobster.cpp_FUN_00525840 (00525840) at 0052585c [UNCONDITIONAL_CALL]
//   core_moloch.cpp_FUN_00528d20 (00528d20) at 00528d46 [UNCONDITIONAL_CALL]
//   core_npc.cpp_CNPC_process_FUN_005448b0 (005448b0) at 005448c3 [UNCONDITIONAL_CALL]
//   core_scat.cpp_FUN_005571f0 (005571f0) at 00557203 [UNCONDITIONAL_CALL]
//   core_sentinel.cpp_FUN_00568030 (00568030) at 0056804c [UNCONDITIONAL_CALL]
//   core_smiley.cpp_FUN_005a2800 (005a2800) at 005a28a4 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_process_FUN_005bb830 (005bb830) at 005bb83d [UNCONDITIONAL_CALL]
//   core_succubus.cpp_CSuccubus_process_FUN_005c6e90 (005c6e90) at 005c6ea0 [UNCONDITIONAL_CALL]
//   core_svetlana.cpp_CSvetlana_process_FUN_005d8ba0 (005d8ba0) at 005d8beb [UNCONDITIONAL_CALL]
//   core_tentacle.cpp_CTentacle_process_FUN_005db050 (005db050) at 005db066 [UNCONDITIONAL_CALL]
//   core_vampboss.cpp_CVampireBoss_process_FUN_005e5970 (005e5970) at 005e599f [UNCONDITIONAL_CALL]
//   core_werewolf.cpp_CWerewolf_process_FUN_005efde0 (005efde0) at 005efdfc [UNCONDITIONAL_CALL]
//   core_zombie.cpp_CZombie_process_FUN_005f9470 (005f9470) at 005f948c [UNCONDITIONAL_CALL]
// Globals:
//   double DOUBLE_00617092 = 0.0100000000000000
//   undefined4 DAT_0065b834
//   CGame* g_CGamePtr = 02d81a9c
//   CScript* g_CScriptPtr = 0310f858
//   CGame g_CGameInstance
//   CScript g_CScriptInstance
// Function calls:
//   core_charactr.cpp_CCharacter_computePickup_FUN_0042ce80
//   core_charactr.cpp_CCharacter_FUN_0042a830
//   core_charactr.cpp_CCharacter_FUN_0042d4d0
//   core_game.cpp_CGame_FUN_004e0bf0
//   core_hero.cpp_FUN_004f22a0
//   core_script.cpp_FUN_00560140
//   sound_sndmain.cpp_RelatedToSoundSlotKill_FUN_005a9c40

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_charactr_cpp_CCharacter_FUN_00429870(CCharacter *this_ptr)

{
  float fVar1;
  float fVar2;
  int iVar3;
  CCharacter *pCVar4;
  float in_stack_00000008;
  float in_stack_00000010;
  
  fVar2 = *(float *)(this_ptr->cloth_data + 0x340) - in_stack_00000008;
  *(float *)(this_ptr->cloth_data + 0x340) = fVar2;
  if (fVar2 < 0.0) {
    this_ptr->cloth_data[0x340] = '\0';
    this_ptr->cloth_data[0x341] = '\0';
    this_ptr->cloth_data[0x342] = '\0';
    this_ptr->cloth_data[0x343] = '\0';
  }
  core_charactr_cpp_CCharacter_FUN_0042a830(this_ptr);
  core_charactr_cpp_CCharacter_FUN_0042d4d0(this_ptr);
  fVar2 = *(float *)(this_ptr->cloth_data + 0x8d48) - in_stack_00000010;
  *(float *)(this_ptr->cloth_data + 0x8d48) = fVar2;
  if (fVar2 < 0.0) {
    this_ptr->cloth_data[0x8d48] = '\0';
    this_ptr->cloth_data[0x8d49] = '\0';
    this_ptr->cloth_data[0x8d4a] = '\0';
    this_ptr->cloth_data[0x8d4b] = '\0';
  }
  if ((0.0 < *(float *)(this_ptr->field11_0x25a0 + 0x78)) &&
     (fVar2 = *(float *)(this_ptr->field11_0x25a0 + 0x78) - in_stack_00000010,
     *(float *)(this_ptr->field11_0x25a0 + 0x78) = fVar2, fVar2 < 0.0)) {
    this_ptr->field11_0x25a0[0x78] = '\0';
    this_ptr->field11_0x25a0[0x79] = '\0';
    this_ptr->field11_0x25a0[0x7a] = '\0';
    this_ptr->field11_0x25a0[0x7b] = '\0';
    core_script_cpp_FUN_00560140();
  }
  if (this_ptr->health_bar_mode == 2) {
    core_game_cpp_CGame_FUN_004e0bf0(g_CGamePtr);
  }
  if (*(int *)this_ptr->field2_0x240c == 0) {
    if (*(float *)(this_ptr->field2_0x240c + 8) == _DAT_0065b834) {
      iVar3 = 0;
      pCVar4 = this_ptr;
      do {
        if (pCVar4->carry_hands[0].carry_actor != (CDemonActor *)0x0) {
          core_charactr_cpp_CCharacter_computePickup_FUN_0042ce80(this_ptr);
        }
        iVar3 = iVar3 + 1;
        pCVar4 = (CCharacter *)&(pCVar4->base_actor).orient_matrix.m[0].z;
      } while (iVar3 < 2);
    }
    fVar2 = (this_ptr->base_actor).field12_0xe0.y;
    (this_ptr->base_actor).field12_0xe0.y = 0.0;
    fVar1 = *(float *)(this_ptr->field2_0x240c + 8);
    (this_ptr->base_actor).location.position.y = fVar2 + (this_ptr->base_actor).location.position.y;
    if ((fVar1 == _DAT_0065b834) || ((this_ptr->base_actor).field11_0xdc != 0)) {
      fVar2 = (*((this_ptr->base_actor).vtable)->cylinderGroundCheck)
                        (&this_ptr->base_actor,*(float *)(this_ptr->cloth_data + 0x344),
                         (CVector3f *)0x0);
      *(float *)(this_ptr->field2_0x240c + 8) = fVar2;
    }
    *(uint *)(this_ptr->field2_0x240c + 4) =
         (uint)((this_ptr->base_actor).location.position.y <
               *(float *)(this_ptr->field2_0x240c + 8) + (float)DOUBLE_00617092);
    this_ptr->field2_0x240c[0x18] = '\0';
    this_ptr->field2_0x240c[0x19] = '\0';
    this_ptr->field2_0x240c[0x1a] = '\0';
    this_ptr->field2_0x240c[0x1b] = '\0';
    *(undefined4 *)(this_ptr->field2_0x240c + 0x14) =
         *(undefined4 *)(this_ptr->field2_0x240c + 0x18);
    *(undefined4 *)(this_ptr->field2_0x240c + 0x10) =
         *(undefined4 *)(this_ptr->field2_0x240c + 0x14);
    iVar3 = (this_ptr->base_actor).field11_0xdc;
    this_ptr->field2_0x240c[0xc] = '\0';
    this_ptr->field2_0x240c[0xd] = '\0';
    this_ptr->field2_0x240c[0xe] = '\0';
    this_ptr->field2_0x240c[0xf] = '\0';
    if (((iVar3 == 0) && (*(int *)this_ptr->field11_0x25a0 == 0)) &&
       (iVar3 = core_hero_cpp_FUN_004f22a0(), iVar3 == 0)) {
      sound_sndmain_cpp_RelatedToSoundSlotKill_FUN_005a9c40();
      return 0;
    }
    iVar3 = 1;
  }
  else {
    iVar3 = 0;
  }
  return iVar3;
}


// Assembly code:
// 00429870: PUSH EBX
//   Label: core_charactr.cpp_CCharacter_FUN_00429870
// 00429871: PUSH ESI
// 00429872: PUSH EDI
// 00429873: SUB ESP,0x4
// 00429876: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0042987a: FLD float ptr [ESI + 0x2dd8]
// 00429880: FSUB float ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00429884: FST float ptr [ESI + 0x2dd8]
// 0042988a: FLDZ
// 0042988c: FCOMPP
// 0042988e: FNSTSW AX
// 00429890: SAHF
// 00429891: JBE 0x0042989d
//   XREF to: 0042989d (CONDITIONAL_JUMP)
// 00429893: MOV dword ptr [ESI + 0x2dd8],0x0
// 0042989d: PUSH dword ptr [ESP + 0x18]
//   Label: LAB_0042989d
//   XREF to: Stack[0x8] (READ)
// 004298a1: PUSH ESI
// 004298a2: CALL core_charactr.cpp_CCharacter_FUN_0042a830
//   XREF to: 0042a830 (UNCONDITIONAL_CALL)
// 004298a7: ADD ESP,0x8
// 004298aa: PUSH dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004298ae: PUSH ESI
// 004298af: CALL core_charactr.cpp_CCharacter_FUN_0042d4d0
//   XREF to: 0042d4d0 (UNCONDITIONAL_CALL)
// 004298b4: ADD ESP,0x8
// 004298b7: FLD float ptr [ESI + 0xb7e0]
// 004298bd: FSUB float ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004298c1: FST float ptr [ESI + 0xb7e0]
// 004298c7: FLDZ
// 004298c9: FCOMPP
// 004298cb: FNSTSW AX
// 004298cd: SAHF
// 004298ce: JBE 0x004298da
//   XREF to: 004298da (CONDITIONAL_JUMP)
// 004298d0: MOV dword ptr [ESI + 0xb7e0],0x0
// 004298da: FLD float ptr [ESI + 0x2618]
//   Label: LAB_004298da
// 004298e0: FLDZ
// 004298e2: FCOMPP
// 004298e4: FNSTSW AX
// 004298e6: SAHF
// 004298e7: JNC 0x0042991c
//   XREF to: 0042991c (CONDITIONAL_JUMP)
// 004298e9: FLD float ptr [ESI + 0x2618]
// 004298ef: FSUB float ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004298f3: FST float ptr [ESI + 0x2618]
// 004298f9: FLDZ
// 004298fb: FCOMPP
// 004298fd: FNSTSW AX
// 004298ff: SAHF
// 00429900: JBE 0x0042991c
//   XREF to: 0042991c (CONDITIONAL_JUMP)
// 00429902: PUSH ESI
// 00429903: MOV EDX,dword ptr [0x00680d50]
//   XREF to: 0310f858 (PARAM)
//   XREF to: 00680d50 (READ)
// 00429909: PUSH EDX
//   XREF to: 0310f858 (DATA)
// 0042990a: MOV dword ptr [ESI + 0x2618],0x0
// 00429914: CALL core_script.cpp_FUN_00560140
//   XREF to: 00560140 (UNCONDITIONAL_CALL)
// 00429919: ADD ESP,0x8
// 0042991c: CMP dword ptr [ESI + 0x2444],0x2
//   Label: LAB_0042991c
// 00429923: JNZ 0x00429952
//   XREF to: 00429952 (CONDITIONAL_JUMP)
// 00429925: FLD float ptr [ESI + 0x243c]
// 0042992b: FDIV float ptr [ESI + 0x2440]
// 00429931: PUSH 0x40000000
// 00429936: SUB ESP,0x4
// 00429939: LEA EAX,[ESI + 0x2448]
// 0042993f: FSTP float ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 00429942: PUSH EAX
// 00429943: MOV EBX,dword ptr [0x0067b654]
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 00429949: PUSH EBX
//   XREF to: 02d81a9c (DATA)
// 0042994a: CALL core_game.cpp_CGame_FUN_004e0bf0
//   XREF to: 004e0bf0 (UNCONDITIONAL_CALL)
// 0042994f: ADD ESP,0x10
// 00429952: CMP dword ptr [ESI + 0x240c],0x0
//   Label: LAB_00429952
// 00429959: JNZ 0x00429a2f
//   XREF to: 00429a2f (CONDITIONAL_JUMP)
// 0042995f: FLD float ptr [ESI + 0x2414]
// 00429965: FCOMP float ptr [0x0065b834]
//   XREF to: 0065b834 (READ)
// 0042996b: FNSTSW AX
// 0042996d: SAHF
// 0042996e: JZ 0x00429a33
//   XREF to: 00429a33 (CONDITIONAL_JUMP)
// 00429974: FLD float ptr [ESI + 0xe4]
//   Label: LAB_00429974
// 0042997a: MOV dword ptr [ESI + 0xe4],0x0
// 00429984: FADD float ptr [ESI + 0x24]
// 00429987: FLD float ptr [ESI + 0x2414]
// 0042998d: FXCH
// 0042998f: FSTP float ptr [ESI + 0x24]
// 00429992: FCOMP float ptr [0x0065b834]
//   XREF to: 0065b834 (READ)
// 00429998: FNSTSW AX
// 0042999a: SAHF
// 0042999b: JZ 0x004299a6
//   XREF to: 004299a6 (CONDITIONAL_JUMP)
// 0042999d: CMP dword ptr [ESI + 0xdc],0x0
// 004299a4: JZ 0x004299c9
//   XREF to: 004299c9 (CONDITIONAL_JUMP)
// 004299a6: PUSH 0x0
//   Label: LAB_004299a6
// 004299a8: MOV EAX,dword ptr [ESI + 0x154]
// 004299ae: PUSH dword ptr [ESI + 0x2ddc]
// 004299b4: PUSH ESI
// 004299b5: CALL dword ptr [EAX + 0x38]
// 004299b8: MOV dword ptr [ESP + 0xc],EAX
// 004299bc: MOV EAX,dword ptr [ESP + 0xc]
// 004299c0: MOV dword ptr [ESI + 0x2414],EAX
// 004299c6: ADD ESP,0xc
// 004299c9: FLD float ptr [ESI + 0x2414]
//   Label: LAB_004299c9
// 004299cf: FADD double ptr [0x00617092]
//   XREF to: 00617092 (READ)
// 004299d5: FLD float ptr [ESI + 0x24]
// 004299d8: FCOMPP
// 004299da: FNSTSW AX
// 004299dc: SAHF
// 004299dd: JNC 0x00429a5d
//   XREF to: 00429a5d (CONDITIONAL_JUMP)
// 004299e3: MOV EAX,0x1
// 004299e8: LEA EBX,[ESI + 0x241c]
//   Label: LAB_004299e8
// 004299ee: MOV dword ptr [ESI + 0x2410],EAX
// 004299f4: MOV dword ptr [EBX + 0x8],0x0
// 004299fb: MOV EAX,dword ptr [EBX + 0x8]
// 004299fe: MOV dword ptr [EBX + 0x4],EAX
// 00429a01: MOV EAX,dword ptr [EBX + 0x4]
// 00429a04: MOV dword ptr [EBX],EAX
// 00429a06: MOV EDX,dword ptr [ESI + 0xdc]
// 00429a0c: MOV dword ptr [ESI + 0x2418],0x0
// 00429a16: TEST EDX,EDX
// 00429a18: JNZ 0x00429a23
//   XREF to: 00429a23 (CONDITIONAL_JUMP)
// 00429a1a: CMP dword ptr [ESI + 0x25a0],0x0
// 00429a21: JZ 0x00429a61
//   XREF to: 00429a61 (CONDITIONAL_JUMP)
// 00429a23: MOV EAX,0x1
//   Label: LAB_00429a23
// 00429a28: ADD ESP,0x4
//   Label: LAB_00429a28
// 00429a2b: POP EDI
// 00429a2c: POP ESI
// 00429a2d: POP EBX
// 00429a2e: RET
// 00429a2f: XOR EAX,EAX
//   Label: LAB_00429a2f
// 00429a31: JMP 0x00429a28
//   XREF to: 00429a28 (UNCONDITIONAL_JUMP)
// 00429a33: MOV EDI,ESI
//   Label: LAB_00429a33
// 00429a35: XOR EBX,EBX
// 00429a37: CMP dword ptr [EDI + 0x24b4],0x0
//   Label: LAB_00429a37
// 00429a3e: JNZ 0x00429a4f
//   XREF to: 00429a4f (CONDITIONAL_JUMP)
// 00429a40: INC EBX
//   Label: LAB_00429a40
// 00429a41: ADD EDI,0x44
// 00429a44: CMP EBX,0x2
// 00429a47: JGE 0x00429974
//   XREF to: 00429974 (CONDITIONAL_JUMP)
// 00429a4d: JMP 0x00429a37
//   XREF to: 00429a37 (UNCONDITIONAL_JUMP)
// 00429a4f: PUSH 0x0
//   Label: LAB_00429a4f
// 00429a51: PUSH EBX
// 00429a52: PUSH ESI
// 00429a53: CALL core_charactr.cpp_CCharacter_computePickup_FUN_0042ce80
//   XREF to: 0042ce80 (UNCONDITIONAL_CALL)
// 00429a58: ADD ESP,0xc
// 00429a5b: JMP 0x00429a40
//   XREF to: 00429a40 (UNCONDITIONAL_JUMP)
// 00429a5d: XOR EAX,EAX
//   Label: LAB_00429a5d
// 00429a5f: JMP 0x004299e8
//   XREF to: 004299e8 (UNCONDITIONAL_JUMP)
// 00429a61: PUSH dword ptr [ESI + 0x2de4]
//   Label: LAB_00429a61
// 00429a67: LEA EAX,[ESI + 0x20]
// 00429a6a: PUSH dword ptr [ESI + 0x2de8]
// 00429a70: PUSH EAX
// 00429a71: CALL core_hero.cpp_FUN_004f22a0
//   XREF to: 004f22a0 (UNCONDITIONAL_CALL)
// 00429a76: ADD ESP,0xc
// 00429a79: TEST EAX,EAX
// 00429a7b: JNZ 0x00429a23
//   XREF to: 00429a23 (CONDITIONAL_JUMP)
// 00429a7d: MOV EBX,dword ptr [ESI + 0xb7d4]
// 00429a83: PUSH EBX
// 00429a84: CALL sound_sndmain.cpp_RelatedToSoundSlotKill_FUN_005a9c40
//   XREF to: 005a9c40 (UNCONDITIONAL_CALL)
// 00429a89: ADD ESP,0x4
// 00429a8c: XOR EAX,EAX
// 00429a8e: ADD ESP,0x4
// 00429a91: POP EDI
// 00429a92: POP ESI
// 00429a93: POP EBX
// 00429a94: RET
