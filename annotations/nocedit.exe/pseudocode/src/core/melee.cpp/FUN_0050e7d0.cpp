// Name: core_melee.cpp_FUN_0050e7d0
// Address: 0050e7d0
// Address Range: [[0050e7d0, 0050e91e]]
// Convention: __cdecl
// Signature: CMelee * core_melee.cpp_FUN_0050e7d0(CMelee * this_ptr)
// Cross-references:
//   core_melee.cpp_FUN_0050e790 (0050e790) at 0050e7aa [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_melee_kfm_00635bd6
//   TerminatedCString s_shovel_wav_00635be0
//   undefined4 s_hovel?.wav_00635be1
//   undefined4 s_ovel?.wav_00635be2
//   undefined4 s_vel?.wav_00635be3
//   TerminatedCString s_shvl_f_wav_00635bec
//   undefined4 s_hvl-f?.wav_00635bed
//   undefined4 s_vl-f?.wav_00635bee
//   undefined4 s_l-f?.wav_00635bef
//   TerminatedCString s_shvl_s_wav_00635bf8
//   undefined4 s_hvl-s?.wav_00635bf9
//   undefined4 s_vl-s?.wav_00635bfa
//   undefined4 s_l-s?.wav_00635bfb
//   CDemonActor_vtable PTR_core_weapon.cpp_ActorModelSomething_FUN_00661174
// Function calls:
//   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
//   core_weapon.cpp_CWeapon_ctor_FUN_005ede70

#include "nocturne.h"

CMelee * __cdecl core_melee_cpp_FUN_0050e7d0(CMelee *this_ptr)

{
  char cVar1;
  CMelee *pCVar2;
  char *pcVar3;
  char **ppcVar4;
  
  pCVar2 = (CMelee *)core_weapon_cpp_CWeapon_ctor_FUN_005ede70(&this_ptr->base_weapon);
  (pCVar2->base_weapon).base_actor.metadata.vtable =
       &PTR_core_weapon_cpp_ActorModelSomething_FUN_00661174;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            ((CKeyFramedModelInstance *)&(pCVar2->base_weapon).model_instance,"melee.kfm");
  (pCVar2->base_weapon).field4_0x2d8[8] = '\a';
  (pCVar2->base_weapon).field4_0x2d8[9] = '\0';
  (pCVar2->base_weapon).field4_0x2d8[10] = '\0';
  (pCVar2->base_weapon).field4_0x2d8[0xb] = '\0';
  pCVar2->ammo_type = -1;
  (pCVar2->base_weapon).ammo_count = 0;
  (pCVar2->base_weapon).field4_0x2d8[0] = '\0';
  (pCVar2->base_weapon).field4_0x2d8[1] = '\0';
  (pCVar2->base_weapon).field4_0x2d8[2] = '\0';
  (pCVar2->base_weapon).field4_0x2d8[3] = '\0';
  (pCVar2->base_weapon).field4_0x2d8[4] = '\0';
  (pCVar2->base_weapon).field4_0x2d8[5] = '\0';
  (pCVar2->base_weapon).field4_0x2d8[6] = '\0';
  (pCVar2->base_weapon).field4_0x2d8[7] = '\0';
  (pCVar2->base_weapon).field4_0x2d8[0xc] = '\0';
  (pCVar2->base_weapon).field4_0x2d8[0xd] = '\0';
  (pCVar2->base_weapon).field4_0x2d8[0xe] = '\0';
  (pCVar2->base_weapon).field4_0x2d8[0xf] = '\0';
  (pCVar2->base_weapon).field4_0x2d8[0x10] = '\0';
  (pCVar2->base_weapon).field4_0x2d8[0x11] = '\0';
  (pCVar2->base_weapon).field4_0x2d8[0x12] = -0x60;
  (pCVar2->base_weapon).field4_0x2d8[0x13] = '@';
  (pCVar2->base_weapon).field4_0x2d8[0x14] = '\0';
  (pCVar2->base_weapon).field4_0x2d8[0x15] = '\0';
  (pCVar2->base_weapon).field4_0x2d8[0x16] = '\0';
  (pCVar2->base_weapon).field4_0x2d8[0x17] = '\0';
  (pCVar2->base_weapon).can_attach_light = 0;
  pCVar2->allowed_attack_types = 1;
  pCVar2->strength_lo = 10.0;
  pCVar2->strength_hi = 15.0;
  pCVar2->dismember_prob = 0.5;
  pCVar2->can_go_in_inventory = 0;
  pcVar3 = "shovel?.wav";
  pCVar2->field6_0x58c[4] = '\0';
  pCVar2->field6_0x58c[5] = '\0';
  pCVar2->field6_0x58c[6] = '\0';
  pCVar2->field6_0x58c[7] = '\0';
  pCVar2->field6_0x58c[8] = '\0';
  pCVar2->field6_0x58c[9] = '\0';
  pCVar2->field6_0x58c[10] = '\0';
  pCVar2->field6_0x58c[0xb] = '\0';
  ppcVar4 = &pCVar2->thrust_hit_character_sound;
  pCVar2->ammo_type = 0;
  do {
    cVar1 = *pcVar3;
    *(char *)ppcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    *(char *)((int)ppcVar4 + 1) = cVar1;
    ppcVar4 = (char **)((int)ppcVar4 + 2);
  } while (cVar1 != '\0');
  pcVar3 = "shvl-f?.wav";
  ppcVar4 = &pCVar2->swing_hit_character_sound;
  do {
    cVar1 = *pcVar3;
    *(char *)ppcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    *(char *)((int)ppcVar4 + 1) = cVar1;
    ppcVar4 = (char **)((int)ppcVar4 + 2);
  } while (cVar1 != '\0');
  pcVar3 = "shvl-s?.wav";
  ppcVar4 = &pCVar2->hit_other_sound;
  do {
    cVar1 = *pcVar3;
    *(char *)ppcVar4 = cVar1;
    if (cVar1 == '\0') {
      return pCVar2;
    }
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    *(char *)((int)ppcVar4 + 1) = cVar1;
    ppcVar4 = (char **)((int)ppcVar4 + 2);
  } while (cVar1 != '\0');
  return pCVar2;
}


// Assembly code:
// 0050e7d0: PUSH EBX
//   Label: core_melee.cpp_FUN_0050e7d0
// 0050e7d1: PUSH ESI
// 0050e7d2: PUSH EDI
// 0050e7d3: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 0050e7d7: PUSH EDX
// 0050e7d8: CALL core_weapon.cpp_CWeapon_ctor_FUN_005ede70
//   XREF to: 005ede70 (UNCONDITIONAL_CALL)
// 0050e7dd: ADD ESP,0x4
// 0050e7e0: PUSH 0x635bd6
//   XREF to: 00635bd6 (DATA)
// 0050e7e5: MOV EBX,EAX
// 0050e7e7: LEA EDI,[EAX + 0x158]
// 0050e7ed: PUSH EDI
// 0050e7ee: MOV dword ptr [EAX + 0x154],0x661174
//   XREF to: 00661174 (DATA)
// 0050e7f8: CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
//   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
// 0050e7fd: MOV dword ptr [EBX + 0x2e0],0x7
// 0050e807: MOV dword ptr [EBX + 0x59c],0xffffffff
// 0050e811: MOV dword ptr [EBX + 0x568],0x0
// 0050e81b: MOV dword ptr [EBX + 0x2d8],0x0
// 0050e825: MOV dword ptr [EBX + 0x2dc],0x0
// 0050e82f: MOV dword ptr [EBX + 0x2e4],0x0
// 0050e839: MOV dword ptr [EBX + 0x2e8],0x40a00000
// 0050e843: MOV dword ptr [EBX + 0x2ec],0x0
// 0050e84d: MOV dword ptr [EBX + 0x2f0],0x0
// 0050e857: MOV dword ptr [EBX + 0x578],0x1
// 0050e861: MOV dword ptr [EBX + 0x57c],0x41200000
// 0050e86b: MOV dword ptr [EBX + 0x580],0x41700000
// 0050e875: MOV dword ptr [EBX + 0x584],0x3f000000
// 0050e87f: MOV dword ptr [EBX + 0x588],0x0
// 0050e889: MOV ESI,0x635be0
//   XREF to: 00635be0 (DATA)
// 0050e88e: MOV dword ptr [EBX + 0x590],0x0
// 0050e898: ADD ESP,0x8
// 0050e89b: MOV dword ptr [EBX + 0x594],0x0
// 0050e8a5: LEA EDI,[EBX + 0x5a0]
// 0050e8ab: MOV dword ptr [EBX + 0x59c],0x0
// 0050e8b5: PUSH EDI
// 0050e8b6: MOV AL,byte ptr [ESI]
//   Label: LAB_0050e8b6
//   XREF to: 00635be0 (READ)
//   XREF to: 00635be2 (READ)
// 0050e8b8: MOV byte ptr [EDI],AL
// 0050e8ba: CMP AL,0x0
// 0050e8bc: JZ 0x0050e8ce
//   XREF to: 0050e8ce (CONDITIONAL_JUMP)
// 0050e8be: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 00635be1 (READ)
//   XREF to: 00635be3 (READ)
// 0050e8c1: ADD ESI,0x2
// 0050e8c4: MOV byte ptr [EDI + 0x1],AL
// 0050e8c7: ADD EDI,0x2
// 0050e8ca: CMP AL,0x0
// 0050e8cc: JNZ 0x0050e8b6
//   XREF to: 0050e8b6 (CONDITIONAL_JUMP)
// 0050e8ce: POP EDI
//   Label: LAB_0050e8ce
// 0050e8cf: MOV ESI,0x635bec
//   XREF to: 00635bec (DATA)
// 0050e8d4: LEA EDI,[EBX + 0x604]
// 0050e8da: PUSH EDI
// 0050e8db: MOV AL,byte ptr [ESI]
//   Label: LAB_0050e8db
//   XREF to: 00635bec (READ)
//   XREF to: 00635bee (READ)
// 0050e8dd: MOV byte ptr [EDI],AL
// 0050e8df: CMP AL,0x0
// 0050e8e1: JZ 0x0050e8f3
//   XREF to: 0050e8f3 (CONDITIONAL_JUMP)
// 0050e8e3: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 00635bed (READ)
//   XREF to: 00635bef (READ)
// 0050e8e6: ADD ESI,0x2
// 0050e8e9: MOV byte ptr [EDI + 0x1],AL
// 0050e8ec: ADD EDI,0x2
// 0050e8ef: CMP AL,0x0
// 0050e8f1: JNZ 0x0050e8db
//   XREF to: 0050e8db (CONDITIONAL_JUMP)
// 0050e8f3: POP EDI
//   Label: LAB_0050e8f3
// 0050e8f4: MOV ESI,0x635bf8
//   XREF to: 00635bf8 (DATA)
// 0050e8f9: LEA EDI,[EBX + 0x668]
// 0050e8ff: PUSH EDI
// 0050e900: MOV AL,byte ptr [ESI]
//   Label: LAB_0050e900
//   XREF to: 00635bf8 (READ)
//   XREF to: 00635bfa (READ)
// 0050e902: MOV byte ptr [EDI],AL
// 0050e904: CMP AL,0x0
// 0050e906: JZ 0x0050e918
//   XREF to: 0050e918 (CONDITIONAL_JUMP)
// 0050e908: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 00635bf9 (READ)
//   XREF to: 00635bfb (READ)
// 0050e90b: ADD ESI,0x2
// 0050e90e: MOV byte ptr [EDI + 0x1],AL
// 0050e911: ADD EDI,0x2
// 0050e914: CMP AL,0x0
// 0050e916: JNZ 0x0050e900
//   XREF to: 0050e900 (CONDITIONAL_JUMP)
// 0050e918: POP EDI
//   Label: LAB_0050e918
// 0050e919: MOV EAX,EBX
// 0050e91b: POP EDI
// 0050e91c: POP ESI
// 0050e91d: POP EBX
// 0050e91e: RET
