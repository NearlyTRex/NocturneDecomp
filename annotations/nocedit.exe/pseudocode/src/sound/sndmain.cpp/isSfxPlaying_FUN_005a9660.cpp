// Name: sound_sndmain.cpp_isSfxPlaying_FUN_005a9660
// Address: 005a9660
// Address Range: [[005a9660, 005a96a0]]
// Convention: __cdecl
// Signature: int sound_sndmain.cpp_isSfxPlaying_FUN_005a9660(uint sfx_handle)
// Cross-references:
//   core_bat.cpp_CBat_process_FUN_00414a00 (00414a00) at 00414b6b [UNCONDITIONAL_CALL]
//   core_batcreat.cpp_CBatCreature_process_FUN_00415470 (00415470) at 004159cb [UNCONDITIONAL_CALL]
//   core_batcreat.cpp_FUN_00416030 (00416030) at 00416135 [UNCONDITIONAL_CALL]
//   core_batman.cpp_CBatman_process_FUN_00416870 (00416870) at 00416e8d [UNCONDITIONAL_CALL]
//   core_batman.cpp_FUN_004179a0 (004179a0) at 00417aa5 [UNCONDITIONAL_CALL]
//   core_boneguy.cpp_FUN_0041bf90 (0041bf90) at 0041c57e [UNCONDITIONAL_CALL]
//   core_bride.cpp_FUN_00423a30 (00423a30) at 00423ca1 [UNCONDITIONAL_CALL]
//   core_bride.cpp_FUN_00424830 (00424830) at 004249f1 [UNCONDITIONAL_CALL]
//   core_chain.cpp_FUN_004300d0 (004300d0) at 004307e9 [UNCONDITIONAL_CALL]
//   core_door.cpp_CDoor_FUN_00481210 (00481210) at 0048121c [UNCONDITIONAL_CALL]
//   core_dracbrid.cpp_FUN_004869a0 (004869a0) at 00486a48 [UNCONDITIONAL_CALL]
//   core_drone.cpp_FUN_0048ec70 (0048ec70) at 0048ede0 [UNCONDITIONAL_CALL]
//   core_drone.cpp_FUN_0048f360 (0048f360) at 0048f438 [UNCONDITIONAL_CALL]
//   core_emitter.cpp_FUN_004a8070 (004a8070) at 004a8211 [UNCONDITIONAL_CALL]
//   core_filmreel.cpp_CFilmProjector_load_FUN_004beb40 (004beb40) at 004bebc2 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_rollCredits_FUN_004e4010 (004e4010) at 004e4249 [UNCONDITIONAL_CALL]
//   core_gargoyle.cpp_CGargoyle_unk3_FUN_004e57d0 (004e57d0) at 004e58ee [UNCONDITIONAL_CALL]
//   core_gargoyle.cpp_CGargoyle_unk6_FUN_004e4a00 (004e4a00) at 004e4e43 [UNCONDITIONAL_CALL]
//   core_ghoul.cpp_CGhoul_FUN_004e6600 (004e6600) at 004e75cc [UNCONDITIONAL_CALL]
//   core_ghoul.cpp_FUN_004e87e0 (004e87e0) at 004e893b [UNCONDITIONAL_CALL]
//   core_hostage.cpp_CHostage_FUN_004f6450 (004f6450) at 004f64c5 [UNCONDITIONAL_CALL]
//   core_hotdemon.cpp_FUN_004f6f20 (004f6f20) at 004f736f [UNCONDITIONAL_CALL]
//   core_hotdemon.cpp_FUN_004f7720 (004f7720) at 004f77a1 [UNCONDITIONAL_CALL]
//   core_icepick.cpp_CIcePick_FUN_004f95b0 (004f95b0) at 004f965b [UNCONDITIONAL_CALL]
//   core_icepick.cpp_FUN_004f80b0 (004f80b0) at 004f8549 [UNCONDITIONAL_CALL]
//   core_imp.cpp_FUN_004f9c30 (004f9c30) at 004fa6cd [UNCONDITIONAL_CALL]
//   core_imp.cpp_FUN_004fae00 (004fae00) at 004faf22 [UNCONDITIONAL_CALL]
//   core_larva.cpp_FUN_00503080 (00503080) at 005031b6 [UNCONDITIONAL_CALL]
//   core_larva.cpp_FUN_00503a20 (00503a20) at 00503b6e [UNCONDITIONAL_CALL]
//   core_lightgun.cpp_ChargedRadianceEmitterGunMaybe_FUN_00506450 (00506450) at 00506526 [UNCONDITIONAL_CALL]
//   core_manpuz.cpp_FUN_0050a4f0 (0050a4f0) at 0050a552 [UNCONDITIONAL_CALL]
//   core_mobster.cpp_FUN_00525840 (00525840) at 00525915 [UNCONDITIONAL_CALL]
//   core_mobster.cpp_FUN_00527740 (00527740) at 005277f5 [UNCONDITIONAL_CALL]
//   core_mobster.cpp_FUN_005279f0 (005279f0) at 00527b32 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_0053eb40 (0053eb40) at 0053eb8f [UNCONDITIONAL_CALL]
//   core_sentinel.cpp_SentinelBehavior_FUN_00568cd0 (00568cd0) at 00568db4 [UNCONDITIONAL_CALL]
//   core_sound.cpp_CSound_FUN_005b2fd0 (005b2fd0) at 005b33d8 [UNCONDITIONAL_CALL]
//   core_sound.cpp_CSound_FUN_005b3b80 (005b3b80) at 005b3b85 [UNCONDITIONAL_CALL]
//   core_sound.cpp_FUN_005b2770 (005b2770) at 005b28e0 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005bb960 (005bb960) at 005bc546 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c48b0 (005c48b0) at 005c4be9 [UNCONDITIONAL_CALL]
//   core_succubus.cpp_CSuccubus_process_FUN_005c6e90 (005c6e90) at 005c72bc [UNCONDITIONAL_CALL]
//   core_svetlana.cpp_FUN_005d9d30 (005d9d30) at 005d9dc9 [UNCONDITIONAL_CALL]
//   core_tvbat.cpp_CTVBat_process_FUN_005e4210 (005e4210) at 005e4ce3 [UNCONDITIONAL_CALL]
//   core_vampboss.cpp_FUN_005e7030 (005e7030) at 005e70c1 [UNCONDITIONAL_CALL]
//   core_vehicle.cpp_CVehicle_process_FUN_005e7e80 (005e7e80) at 005e86a2 [UNCONDITIONAL_CALL]
//   core_weather.cpp_CWeather_SomethingWithLightingThunder_FUN_005eeaf0 (005eeaf0) at 005eecd0 [UNCONDITIONAL_CALL]
//   core_werewolf.cpp_CWerewolf_process_FUN_005efde0 (005efde0) at 005f002e [UNCONDITIONAL_CALL]
//   core_werewolf.cpp_FUN_005f11e0 (005f11e0) at 005f11f6 [UNCONDITIONAL_CALL]
//   core_werewolf.cpp_FUN_005f1ac0 (005f1ac0) at 005f1cf3 [UNCONDITIONAL_CALL]
//   core_zombie.cpp_CZombie_FUN_005fc4f0 (005fc4f0) at 005fc6a2 [UNCONDITIONAL_CALL]
//   core_zombie.cpp_CZombie_process_FUN_005f9470 (005f9470) at 005fa6f3 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_testSoundFile_FUN_005ad3b0 (005ad3b0) at 005ad4d3 [UNCONDITIONAL_CALL]
// Function calls:
//   sound_sndmain.cpp_getSfxSlotFromHandle_FUN_005a5d00
//   sound_sndmain.cpp_hasHardware3DSound_FUN_005ab5a0
//   sound_sndmain.cpp_unlockSound_FUN_005abdc0

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(uint sfx_handle)

{
  uint uVar1;
  CSfxSlot *pCVar2;
  uint in_stack_00000008;
  
  uVar1 = sound_sndmain_cpp_hasHardware3DSound_FUN_005ab5a0();
  if (uVar1 == 0) {
    pCVar2 = sound_sndmain_cpp_getSfxSlotFromHandle_FUN_005a5d00(in_stack_00000008,0);
    return (uint)(pCVar2 != (CSfxSlot *)0x0);
  }
  pCVar2 = sound_sndmain_cpp_getSfxSlotFromHandle_FUN_005a5d00(in_stack_00000008,1);
  if (pCVar2 == (CSfxSlot *)0x0) {
    return 0;
  }
  sound_sndmain_cpp_unlockSound_FUN_005abdc0();
  return 1;
}


// Assembly code:
// 005a9660: CALL sound_sndmain.cpp_hasHardware3DSound_FUN_005ab5a0
//   Label: sound_sndmain.cpp_isSfxPlaying_FUN_005a9660
//   XREF to: 005ab5a0 (UNCONDITIONAL_CALL)
// 005a9665: TEST EAX,EAX
// 005a9667: JZ 0x005a9688
//   XREF to: 005a9688 (CONDITIONAL_JUMP)
// 005a9669: PUSH 0x1
// 005a966b: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005a966f: PUSH ECX
// 005a9670: CALL sound_sndmain.cpp_getSfxSlotFromHandle_FUN_005a5d00
//   XREF to: 005a5d00 (UNCONDITIONAL_CALL)
// 005a9675: ADD ESP,0x8
// 005a9678: TEST EAX,EAX
// 005a967a: JNZ 0x005a967d
//   XREF to: 005a967d (CONDITIONAL_JUMP)
// 005a967c: RET
// 005a967d: CALL sound_sndmain.cpp_unlockSound_FUN_005abdc0
//   Label: LAB_005a967d
//   XREF to: 005abdc0 (UNCONDITIONAL_CALL)
// 005a9682: MOV EAX,0x1
// 005a9687: RET
// 005a9688: PUSH EAX
//   Label: LAB_005a9688
// 005a9689: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005a968d: PUSH EDX
// 005a968e: CALL sound_sndmain.cpp_getSfxSlotFromHandle_FUN_005a5d00
//   XREF to: 005a5d00 (UNCONDITIONAL_CALL)
// 005a9693: ADD ESP,0x8
// 005a9696: TEST EAX,EAX
// 005a9698: SETNZ AL
// 005a969b: AND EAX,0xff
// 005a96a0: RET
