// Name: core_actor.cpp_CDemonActor_ctor_FUN_004088b0
// Address: 004088b0
// Address Range: [[004088b0, 00408a23]]
// Convention: __cdecl
// Signature: CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_004088b0(CDemonActor * this_ptr)
// Cross-references:
//   core_ammo.cpp_CAmmo_ctor_FUN_00410dc0 (00410dc0) at 00410dc8 [UNCONDITIONAL_CALL]
//   core_ammobox.cpp_CAmmoBox_ctor_FUN_004115a0 (004115a0) at 004115a8 [UNCONDITIONAL_CALL]
//   core_anvil.cpp_CAnvil_ctor_FUN_00411ce0 (00411ce0) at 00411ce8 [UNCONDITIONAL_CALL]
//   core_backgnd.cpp_CBackgroundActor_ctor_FUN_004127b0 (004127b0) at 004127b6 [UNCONDITIONAL_CALL]
//   core_barrier.cpp_CBarrier_ctor_FUN_004141c0 (004141c0) at 004141c5 [UNCONDITIONAL_CALL]
//   core_bat.cpp_CBat_ctor_FUN_004147d0 (004147d0) at 004147d8 [UNCONDITIONAL_CALL]
//   core_battery.cpp_CBattery_ctor_FUN_00417e90 (00417e90) at 00417e96 [UNCONDITIONAL_CALL]
//   core_bodypart.cpp_CBodyPart_ctor_FUN_00419010 (00419010) at 00419015 [UNCONDITIONAL_CALL]
//   core_boxactor.cpp_CBoxActor_ctor_FUN_00421700 (00421700) at 00421706 [UNCONDITIONAL_CALL]
//   core_chain.cpp_CChain_ctor_FUN_0042fb80 (0042fb80) at 0042fb87 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_ctor_FUN_00427e20 (00427e20) at 00427e28 [UNCONDITIONAL_CALL]
//   core_crate.cpp_FUN_004484d0 (004484d0) at 004484d6 [UNCONDITIONAL_CALL]
//   core_curtain.cpp_FUN_004496a0 (004496a0) at 004496a7 [UNCONDITIONAL_CALL]
//   core_dest.cpp_FUN_0046f900 (0046f900) at 0046f90c [UNCONDITIONAL_CALL]
//   core_door.cpp_CDoor_ctor_FUN_0047fad0 (0047fad0) at 0047fad8 [UNCONDITIONAL_CALL]
//   core_drip.cpp_ctor_FUN_0048e000 (0048e000) at 0048e008 [UNCONDITIONAL_CALL]
//   core_emitter.cpp_ctor_FUN_004a7ca0 (004a7ca0) at 004a7ca8 [UNCONDITIONAL_CALL]
//   core_filmreel.cpp_ctor_FUN_004be6b0 (004be6b0) at 004be6b8 [UNCONDITIONAL_CALL]
//   core_flame.cpp_CFlame_ctor_FUN_004c9aa0 (004c9aa0) at 004c9aa9 [UNCONDITIONAL_CALL]
//   core_flamecan.cpp_FUN_004cb160 (004cb160) at 004cb168 [UNCONDITIONAL_CALL]
//   core_flies.cpp_FUN_004cbd60 (004cbd60) at 004cbd68 [UNCONDITIONAL_CALL]
//   core_frankgen.cpp_FUN_004d1720 (004d1720) at 004d1725 [UNCONDITIONAL_CALL]
//   core_gasmask.cpp_CGasMask_ctor_FUN_004e5d00 (004e5d00) at 004e5d06 [UNCONDITIONAL_CALL]
//   core_glass.cpp_CGlass_ctor_FUN_004e9040 (004e9040) at 004e9047 [UNCONDITIONAL_CALL]
//   core_grave.cpp_FUN_004ee510 (004ee510) at 004ee516 [UNCONDITIONAL_CALL]
//   core_health.cpp_FUN_004f1dd0 (004f1dd0) at 004f1dd6 [UNCONDITIONAL_CALL]
//   core_hero.cpp_FUN_004f3c00 (004f3c00) at 004f3c05 [UNCONDITIONAL_CALL]
//   core_keyactor.cpp_FUN_00501690 (00501690) at 00501696 [UNCONDITIONAL_CALL]
//   core_ladder.cpp_FUN_00502540 (00502540) at 00502546 [UNCONDITIONAL_CALL]
//   core_lever.cpp_FUN_005047d0 (005047d0) at 005047d6 [UNCONDITIONAL_CALL]
//   core_litecone.cpp_FUN_00506b10 (00506b10) at 00506b17 [UNCONDITIONAL_CALL]
//   core_manpuz.cpp_FUN_00508920 (00508920) at 00508928 [UNCONDITIONAL_CALL]
//   core_manpuz.cpp_FUN_0050b110 (0050b110) at 0050b116 [UNCONDITIONAL_CALL]
//   core_marquee.cpp_FUN_0050bb60 (0050bb60) at 0050bb67 [UNCONDITIONAL_CALL]
//   core_pendulum.cpp_CPendulum_ctor_FUN_00549390 (00549390) at 00549398 [UNCONDITIONAL_CALL]
//   core_platfrm.cpp_FUN_0054c850 (0054c850) at 0054c85b [UNCONDITIONAL_CALL]
//   core_simbox.cpp_CSimBox_ctor_FUN_00588d40 (00588d40) at 00588d48 [UNCONDITIONAL_CALL]
//   core_spike.cpp_CSpike_ctor_FUN_005b8220 (005b8220) at 005b8228 [UNCONDITIONAL_CALL]
//   core_stairs.cpp_CStairs_ctor_FUN_005b9b70 (005b9b70) at 005b9b75 [UNCONDITIONAL_CALL]
//   core_teleport.cpp_CTeleportDest_ctor_FUN_005da770 (005da770) at 005da775 [UNCONDITIONAL_CALL]
//   core_teleport.cpp_CTeleport_ctor_FUN_005da9e0 (005da9e0) at 005da9e5 [UNCONDITIONAL_CALL]
//   core_trap.cpp_CTrap_ctor_FUN_005de690 (005de690) at 005de696 [UNCONDITIONAL_CALL]
//   core_trash.cpp_CTrash_ctor_FUN_005deb70 (005deb70) at 005deb76 [UNCONDITIONAL_CALL]
//   core_trigger.cpp_CTrigger_ctor_FUN_005df840 (005df840) at 005df847 [UNCONDITIONAL_CALL]
//   core_vehicle.cpp_CVehicle_ctor_FUN_005e7940 (005e7940) at 005e7948 [UNCONDITIONAL_CALL]
//   core_vessel.cpp_CCryptVessel_ctor_FUN_005e8e60 (005e8e60) at 005e8e68 [UNCONDITIONAL_CALL]
//   core_wateract.cpp_CWaterActor_ctor_FUN_005ea8a0 (005ea8a0) at 005ea8a7 [UNCONDITIONAL_CALL]
//   core_weapon.cpp_CWeapon_ctor_FUN_005ede70 (005ede70) at 005ede76 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_none_00613578
//   undefined4 DAT_00613579
//   undefined4 DAT_0061357a
//   undefined4 s_e_0061357b
//   TerminatedCString s_str_0061357d
//   undefined4 DAT_0061357e
//   undefined4 DAT_0061357f
//   undefined4 s__00613580
//   CDemonActor_vtable g_CDemonActorVTable
//   undefined4 DAT_0078a123
// Function calls:
//   core_actor.cpp_CDemonActor_FUN_00408c10
//   core_actor.cpp_CDemonActor_initMetadata_FUN_00408870

#include "nocturne.h"

CDemonActor * __cdecl core_actor_cpp_CDemonActor_ctor_FUN_004088b0(CDemonActor *this_ptr)

{
  char *this_ptr_00;
  char cVar1;
  CDemonActorClassMetadata *pCVar2;
  char *pcVar3;
  float *pfVar4;
  CDemonActor **ppCVar5;
  
  pCVar2 = core_actor_cpp_CDemonActor_initMetadata_FUN_00408870(&this_ptr->metadata);
  this_ptr_00 = pCVar2[-7].field5_0x28;
  pCVar2->vtable = &g_CDemonActorVTable;
  *this_ptr_00 = '\0';
  pCVar2->next_actor = (CDemonActor *)0x0;
  pCVar2->field5_0x28[0] = '\0';
  pCVar2->field5_0x28[1] = '\0';
  pCVar2->field5_0x28[2] = '\0';
  pCVar2->field5_0x28[3] = '\0';
  pCVar2[-0xffffffff00000006].field3_0x1c[4] = '\0';
  pCVar2[-0xffffffff00000006].field3_0x1c[5] = '\0';
  pCVar2[-0xffffffff00000006].field3_0x1c[6] = '\0';
  pCVar2[-0xffffffff00000006].field3_0x1c[7] = '\0';
  *(undefined4 *)pCVar2[-6].field3_0x1c = *(undefined4 *)(pCVar2[-6].field3_0x1c + 4);
  pCVar2[-6].runtime_flags = *(int *)pCVar2[-6].field3_0x1c;
  pCVar2[-6].next_actor = (CDemonActor *)0x0;
  pcVar3 = "none";
  pCVar2[-5].runtime_vector1.x = 0.0;
  pCVar2[-6].vtable = (CDemonActor_vtable *)pCVar2[-5].runtime_vector1.x;
  *(CDemonActor_vtable **)pCVar2[-6].field5_0x28 = pCVar2[-6].vtable;
  core_actor_cpp_CDemonActor_FUN_00408c10((CDemonActor *)this_ptr_00);
  pfVar4 = &pCVar2[-4].runtime_vector2.y;
  pCVar2[-4].runtime_vector2.x = 1.0;
  do {
    cVar1 = *pcVar3;
    *(char *)pfVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    *(char *)((int)pfVar4 + 1) = cVar1;
    pfVar4 = (float *)((int)pfVar4 + 2);
  } while (cVar1 != '\0');
  pCVar2[-4].runtime_vector1.z = 0.0;
  pCVar2[-2].runtime_vector2.z = 0.0;
  pCVar2[-0xffffffff00000002].field3_0x1c[4] = '\0';
  pCVar2[-0xffffffff00000002].field3_0x1c[5] = '\0';
  pCVar2[-0xffffffff00000002].field3_0x1c[6] = '\0';
  pCVar2[-0xffffffff00000002].field3_0x1c[7] = '\0';
  *(undefined4 *)pCVar2[-2].field3_0x1c = *(undefined4 *)(pCVar2[-2].field3_0x1c + 4);
  pCVar2[-2].runtime_flags = *(int *)pCVar2[-2].field3_0x1c;
  pCVar2[-2].vtable = (CDemonActor_vtable *)0x0;
  *(CDemonActor_vtable **)pCVar2[-2].field5_0x28 = pCVar2[-2].vtable;
  pCVar2[-2].next_actor = *(CDemonActor **)pCVar2[-2].field5_0x28;
  pCVar2[-1].runtime_vector2.y = 9.18355e-41;
  pCVar2[-1].runtime_vector2.z = 9.18355e-41;
  pCVar2[-1].runtime_flags = 0x10000;
  pCVar2[-1].runtime_vector1.x = 1.4013e-45;
  pCVar2[-1].runtime_vector1.y = 0.0;
  pCVar2[-0xffffffff00000001].field3_0x1c[0] = '\0';
  pCVar2[-0xffffffff00000001].field3_0x1c[1] = '\0';
  pCVar2[-0xffffffff00000001].field3_0x1c[2] = '\0';
  pCVar2[-0xffffffff00000001].field3_0x1c[3] = '\0';
  pCVar2[-1].runtime_vector1.z = 0.0;
  pCVar2[-1].runtime_vector2.x = 0.0;
  pCVar2[-5].vtable = (CDemonActor_vtable *)0x64;
  pcVar3 = "str";
  pCVar2->field3_0x1c[4] = '\0';
  pCVar2->field3_0x1c[5] = '\0';
  pCVar2->field3_0x1c[6] = '\0';
  pCVar2->field3_0x1c[7] = '\0';
  ppCVar5 = &pCVar2[-1].next_actor;
  pCVar2[-4].runtime_vector1.x = (float)&DAT_0078a123;
  do {
    cVar1 = *pcVar3;
    *(char *)ppCVar5 = cVar1;
    if (cVar1 == '\0') {
      return (CDemonActor *)this_ptr_00;
    }
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    *(char *)((int)ppCVar5 + 1) = cVar1;
    ppCVar5 = (CDemonActor **)((int)ppCVar5 + 2);
  } while (cVar1 != '\0');
  return (CDemonActor *)this_ptr_00;
}


// Assembly code:
// 004088b0: PUSH EBX
//   Label: core_actor.cpp_CDemonActor_ctor_FUN_004088b0
// 004088b1: PUSH ESI
// 004088b2: PUSH EDI
// 004088b3: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 004088b7: ADD EBX,0x128
// 004088bd: PUSH EBX
// 004088be: CALL core_actor.cpp_CDemonActor_initMetadata_FUN_00408870
//   XREF to: 00408870 (UNCONDITIONAL_CALL)
// 004088c3: LEA EBX,[EAX + 0xfffffed8]
// 004088c9: MOV dword ptr [EBX + 0x154],0x6597d4
//   XREF to: 006597d4 (DATA)
// 004088d3: MOV byte ptr [EBX],0x0
// 004088d6: MOV dword ptr [EBX + 0x14c],0x0
// 004088e0: LEA EAX,[EBX + 0x20]
// 004088e3: MOV dword ptr [EBX + 0x150],0x0
// 004088ed: MOV dword ptr [EAX + 0x8],0x0
//   Label: LAB_004088ed
// 004088f4: ADD ESP,0x4
// 004088f7: MOV EDX,dword ptr [EAX + 0x8]
// 004088fa: MOV dword ptr [EAX + 0x4],EDX
// 004088fd: MOV EDX,dword ptr [EAX + 0x4]
// 00408900: MOV dword ptr [EAX],EDX
// 00408902: LEA EAX,[EBX + 0x30]
// 00408905: MOV dword ptr [EBX + 0x2c],0x0
// 0040890c: MOV ESI,0x613578
//   XREF to: 00613578 (DATA)
// 00408911: MOV dword ptr [EAX + 0x8],0x0
// 00408918: PUSH EBX
// 00408919: MOV EDX,dword ptr [EAX + 0x8]
// 0040891c: MOV dword ptr [EAX + 0x4],EDX
// 0040891f: MOV EDX,dword ptr [EAX + 0x4]
// 00408922: MOV dword ptr [EAX],EDX
// 00408924: CALL core_actor.cpp_CDemonActor_FUN_00408c10
//   XREF to: 00408c10 (UNCONDITIONAL_CALL)
// 00408929: ADD ESP,0x4
// 0040892c: LEA EDI,[EBX + 0x78]
// 0040892f: MOV dword ptr [EBX + 0x74],0x3f800000
// 00408936: PUSH EDI
// 00408937: MOV AL,byte ptr [ESI]
//   Label: LAB_00408937
//   XREF to: 00613578 (READ)
//   XREF to: 0061357a (READ)
// 00408939: MOV byte ptr [EDI],AL
// 0040893b: CMP AL,0x0
// 0040893d: JZ 0x0040894f
//   XREF to: 0040894f (CONDITIONAL_JUMP)
// 0040893f: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 00613579 (READ)
//   XREF to: 0061357b (READ)
// 00408942: ADD ESI,0x2
// 00408945: MOV byte ptr [EDI + 0x1],AL
// 00408948: ADD EDI,0x2
// 0040894b: CMP AL,0x0
// 0040894d: JNZ 0x00408937
//   XREF to: 00408937 (CONDITIONAL_JUMP)
// 0040894f: POP EDI
//   Label: LAB_0040894f
// 00408950: MOV dword ptr [EBX + 0x70],0x0
// 00408957: LEA EAX,[EBX + 0xe0]
// 0040895d: MOV dword ptr [EBX + 0xdc],0x0
// 00408967: MOV dword ptr [EAX + 0x8],0x0
// 0040896e: MOV EDX,dword ptr [EAX + 0x8]
// 00408971: MOV dword ptr [EAX + 0x4],EDX
// 00408974: MOV EDX,dword ptr [EAX + 0x4]
// 00408977: MOV dword ptr [EAX],EDX
// 00408979: LEA EAX,[EBX + 0xec]
// 0040897f: MOV dword ptr [EAX + 0x8],0x0
// 00408986: MOV EDX,dword ptr [EAX + 0x8]
// 00408989: MOV dword ptr [EAX + 0x4],EDX
// 0040898c: MOV EDX,dword ptr [EAX + 0x4]
// 0040898f: MOV dword ptr [EAX],EDX
// 00408991: MOV dword ptr [EBX + 0x108],0x10000
// 0040899b: MOV dword ptr [EBX + 0x10c],0x10000
// 004089a5: MOV dword ptr [EBX + 0x110],0x10000
// 004089af: MOV dword ptr [EBX + 0xf8],0x1
// 004089b9: MOV dword ptr [EBX + 0xfc],0x0
// 004089c3: MOV dword ptr [EBX + 0x114],0x0
// 004089cd: MOV dword ptr [EBX + 0x100],0x0
// 004089d7: MOV dword ptr [EBX + 0x104],0x0
// 004089e1: MOV dword ptr [EBX + 0x64],0x64
// 004089e8: MOV ESI,0x61357d
//   XREF to: 0061357d (DATA)
// 004089ed: MOV dword ptr [EBX + 0x148],0x0
// 004089f7: LEA EDI,[EBX + 0x11c]
// 004089fd: MOV dword ptr [EBX + 0x68],0x78a123
//   XREF to: 0078a123 (DATA)
// 00408a04: PUSH EDI
// 00408a05: MOV AL,byte ptr [ESI]
//   Label: LAB_00408a05
//   XREF to: 0061357d (READ)
//   XREF to: 0061357f (READ)
// 00408a07: MOV byte ptr [EDI],AL
// 00408a09: CMP AL,0x0
// 00408a0b: JZ 0x00408a1d
//   XREF to: 00408a1d (CONDITIONAL_JUMP)
// 00408a0d: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 0061357e (READ)
//   XREF to: 00613580 (READ)
// 00408a10: ADD ESI,0x2
// 00408a13: MOV byte ptr [EDI + 0x1],AL
// 00408a16: ADD EDI,0x2
// 00408a19: CMP AL,0x0
// 00408a1b: JNZ 0x00408a05
//   XREF to: 00408a05 (CONDITIONAL_JUMP)
// 00408a1d: POP EDI
//   Label: LAB_00408a1d
// 00408a1e: MOV EAX,EBX
// 00408a20: POP EDI
// 00408a21: POP ESI
// 00408a22: POP EBX
// 00408a23: RET
