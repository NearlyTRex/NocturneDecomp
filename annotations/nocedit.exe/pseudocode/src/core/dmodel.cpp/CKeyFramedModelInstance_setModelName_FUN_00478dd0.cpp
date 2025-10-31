// Name: core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
// Address: 00478dd0
// Address Range: [[00478dd0, 00478e0c]]
// Convention: __cdecl
// Signature: void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(CKeyFramedModelInstance * this_ptr, char * filename)
// Cross-references:
//   core_actor.cpp_AnotherActorParser_FUN_0040eed0 (0040eed0) at 0040f373 [UNCONDITIONAL_CALL]
//   core_actor.cpp_serializeKeyframedModelInstance_FUN_0040b8f0 (0040b8f0) at 0040b921 [UNCONDITIONAL_CALL]
//   core_ammo.cpp_CAmmo_FUN_00410fd0 (00410fd0) at 00411044 [UNCONDITIONAL_CALL]
//   core_ammo.cpp_CAmmo_ctor_FUN_00410dc0 (00410dc0) at 00410dfa [UNCONDITIONAL_CALL]
//   core_ammobox.cpp_CAmmoBox_ctor_FUN_004115a0 (004115a0) at 004115da [UNCONDITIONAL_CALL]
//   core_anvil.cpp_CAnvil_ctor_FUN_00411ce0 (00411ce0) at 00411d1f [UNCONDITIONAL_CALL]
//   core_backgnd.cpp_CBackgroundActor_ctor_FUN_004127b0 (004127b0) at 004127e8 [UNCONDITIONAL_CALL]
//   core_baron.cpp_CBaron_ctor_FUN_00412bc0 (00412bc0) at 00412c8a [UNCONDITIONAL_CALL]
//   core_bat.cpp_CBat_ctor_FUN_004147d0 (004147d0) at 0041486d [UNCONDITIONAL_CALL]
//   core_battery.cpp_CBattery_ctor_FUN_00417e90 (00417e90) at 00417ec8 [UNCONDITIONAL_CALL]
//   core_biggs.cpp_CBiggs_ctor_FUN_004185c0 (004185c0) at 00418627 [UNCONDITIONAL_CALL]
//   core_bodypart.cpp_FUN_0041add0 (0041add0) at 0041ae25 [UNCONDITIONAL_CALL]
//   core_boxactor.cpp_CBoxActor_ctor_FUN_00421700 (00421700) at 004217d7 [UNCONDITIONAL_CALL]
//   core_boxactor.cpp_FUN_00422d60 (00422d60) at 00422dae [UNCONDITIONAL_CALL]
//   core_bugs.cpp_CBugs_ctor_FUN_00424cb0 (00424cb0) at 00424d65 [UNCONDITIONAL_CALL]
//   core_bugs.cpp_CBugs_load_FUN_004254f0 (004254f0) at 00425548 [UNCONDITIONAL_CALL]
//   core_bugs.cpp_FUN_00424e50 (00424e50) at 00424ef2 [UNCONDITIONAL_CALL]
//   core_crate.cpp_FUN_004484d0 (004484d0) at 00448508 [UNCONDITIONAL_CALL]
//   core_crossbow.cpp_FUN_00448c70 (00448c70) at 00448ca8 [UNCONDITIONAL_CALL]
//   core_door.cpp_CDoor_ctor_FUN_0047fad0 (0047fad0) at 0047fb19 [UNCONDITIONAL_CALL]
//   core_drip.cpp_ctor_FUN_0048e000 (0048e000) at 0048e03a [UNCONDITIONAL_CALL]
//   core_dynamite.cpp_ctor_FUN_0049cdc0 (0049cdc0) at 0049cde2 [UNCONDITIONAL_CALL]
//   core_elephant.cpp_ctor_FUN_004a6fe0 (004a6fe0) at 004a7002 [UNCONDITIONAL_CALL]
//   core_emitter.cpp_ctor_FUN_004a7ca0 (004a7ca0) at 004a7da6 [UNCONDITIONAL_CALL]
//   core_filmreel.cpp_ctor_FUN_004be6b0 (004be6b0) at 004be6ea [UNCONDITIONAL_CALL]
//   core_filmreel.cpp_ctor_FUN_004bea40 (004bea40) at 004bea7f [UNCONDITIONAL_CALL]
//   core_fire.cpp_CToss_create_FUN_004c3ee0 (004c3ee0) at 004c3fef [UNCONDITIONAL_CALL]
//   core_fire.cpp_Debris_FUN_004c38d0 (004c38d0) at 004c3922 [UNCONDITIONAL_CALL]
//   core_fire.cpp_FireBalls_FUN_004c0ad0 (004c0ad0) at 004c0b18 [UNCONDITIONAL_CALL]
//   core_fire.cpp_GunFlashModel_FUN_004c1be0 (004c1be0) at 004c1bea [UNCONDITIONAL_CALL]
//   core_fire.cpp_flamingstake_FUN_004bfe00 (004bfe00) at 004bfe0a [UNCONDITIONAL_CALL]
//   core_flamecan.cpp_FUN_004cb160 (004cb160) at 004cb1ad [UNCONDITIONAL_CALL]
//   core_flamegun.cpp_FUN_004cb880 (004cb880) at 004cb8a2 [UNCONDITIONAL_CALL]
//   core_flamegun.cpp_FUN_004cbbc0 (004cbbc0) at 004cbbe2 [UNCONDITIONAL_CALL]
//   core_frankgen.cpp_FUN_004d17b0 (004d17b0) at 004d17ef [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_constructorMaybe_FUN_004d2b20 (004d2b20) at 004d2c2b [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_processCheatCodes_FUN_004ddaf0 (004ddaf0) at 004e01cf [UNCONDITIONAL_CALL]
//   core_gasmask.cpp_CGasMask_ctor_FUN_004e5d00 (004e5d00) at 004e5d38 [UNCONDITIONAL_CALL]
//   core_grave.cpp_FUN_004ee510 (004ee510) at 004ee548 [UNCONDITIONAL_CALL]
//   core_gun.cpp_FUN_004f02f0 (004f02f0) at 004f0312 [UNCONDITIONAL_CALL]
//   core_health.cpp_FUN_004f1dd0 (004f1dd0) at 004f1e08 [UNCONDITIONAL_CALL]
//   core_keyactor.cpp_FUN_00501690 (00501690) at 005016c8 [UNCONDITIONAL_CALL]
//   core_ladder.cpp_FUN_00502540 (00502540) at 00502578 [UNCONDITIONAL_CALL]
//   core_lever.cpp_CLever_load_FUN_00504e80 (00504e80) at 00505033 [UNCONDITIONAL_CALL]
//   core_lever.cpp_FUN_005047d0 (005047d0) at 00504817 [UNCONDITIONAL_CALL]
//   core_lightgun.cpp_FUN_00505900 (00505900) at 00505922 [UNCONDITIONAL_CALL]
//   core_manpuz.cpp_FUN_00508920 (00508920) at 005089c9 [UNCONDITIONAL_CALL]
//   core_manpuz.cpp_FUN_0050b110 (0050b110) at 0050b148 [UNCONDITIONAL_CALL]
//   core_melee.cpp_FUN_0050e7d0 (0050e7d0) at 0050e7f8 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_0053d8b0 (0053d8b0) at 0053dcc2 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_PrepareMissionAndEditGore_FUN_0053e220 (0053e220) at 0053e398 [UNCONDITIONAL_CALL]
//   core_pendulum.cpp_CPendulum_ctor_FUN_00549390 (00549390) at 005493ca [UNCONDITIONAL_CALL]
//   core_platfrm.cpp_FUN_0054c850 (0054c850) at 0054c89b [UNCONDITIONAL_CALL]
//   core_shotgun.cpp_CShotgun_ctor_FUN_00587ee0 (00587ee0) at 00587f02 [UNCONDITIONAL_CALL]
//   core_shovel.cpp_CShovel_ctor_FUN_00588ba0 (00588ba0) at 00588bc2 [UNCONDITIONAL_CALL]
//   core_simbox.cpp_CSimBox_ctor_FUN_00588d40 (00588d40) at 00588d88 [UNCONDITIONAL_CALL]
//   core_spike.cpp_CSpike_ctor_FUN_005b8220 (005b8220) at 005b825f [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005bb4b0 (005bb4b0) at 005bb77f [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_ctor_FUN_005bb120 (005bb120) at 005bb32f [UNCONDITIONAL_CALL]
//   core_tommygun.cpp_CTommyGun_ctor_FUN_005dda90 (005dda90) at 005ddab2 [UNCONDITIONAL_CALL]
//   core_trap.cpp_CTrap_ctor_FUN_005de690 (005de690) at 005de6c8 [UNCONDITIONAL_CALL]
//   core_trash.cpp_CTrash_ctor_FUN_005deb70 (005deb70) at 005deba8 [UNCONDITIONAL_CALL]
//   core_turret.cpp_CTurret_ctor_FUN_005e20f0 (005e20f0) at 005e2141 [UNCONDITIONAL_CALL]
//   core_vehicle.cpp_CVehicle_ctor_FUN_005e7940 (005e7940) at 005e79e4 [UNCONDITIONAL_CALL]
//   core_vessel.cpp_CCryptVessel_ctor_FUN_005e8e60 (005e8e60) at 005e8f82 [UNCONDITIONAL_CALL]
//   core_weapon.cpp_CWeapon_ctor_FUN_005ede70 (005ede70) at 005edf60 [UNCONDITIONAL_CALL]
// Function calls:
//   core_dmodel.cpp_CKeyFramedModelInstance_init_FUN_00478d00

#include "nocturne.h"

void __cdecl
core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
          (CKeyFramedModelInstance *this_ptr,char *filename)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = this_ptr->model_name;
  do {
    cVar1 = *filename;
    *pcVar2 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = filename[1];
    filename = filename + 2;
    pcVar2[1] = cVar1;
    pcVar2 = pcVar2 + 2;
  } while (cVar1 != '\0');
  this_ptr->model_ptr = (CKeyFramedModel *)0x0;
  core_dmodel_cpp_CKeyFramedModelInstance_init_FUN_00478d00(this_ptr);
  return;
}


// Assembly code:
// 00478dd0: PUSH ESI
//   Label: core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
// 00478dd1: PUSH EDI
// 00478dd2: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00478dd6: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 00478dda: LEA EDI,[EDX + 0x78]
// 00478ddd: PUSH EDI
// 00478dde: MOV AL,byte ptr [ESI]
//   Label: LAB_00478dde
// 00478de0: MOV byte ptr [EDI],AL
// 00478de2: CMP AL,0x0
// 00478de4: JZ 0x00478df6
//   XREF to: 00478df6 (CONDITIONAL_JUMP)
// 00478de6: MOV AL,byte ptr [ESI + 0x1]
// 00478de9: ADD ESI,0x2
// 00478dec: MOV byte ptr [EDI + 0x1],AL
// 00478def: ADD EDI,0x2
// 00478df2: CMP AL,0x0
// 00478df4: JNZ 0x00478dde
//   XREF to: 00478dde (CONDITIONAL_JUMP)
// 00478df6: POP EDI
//   Label: LAB_00478df6
// 00478df7: PUSH EDX
// 00478df8: MOV dword ptr [EDX + 0x178],0x0
// 00478e02: CALL core_dmodel.cpp_CKeyFramedModelInstance_init_FUN_00478d00
//   XREF to: 00478d00 (UNCONDITIONAL_CALL)
// 00478e07: ADD ESP,0x4
// 00478e0a: POP EDI
// 00478e0b: POP ESI
// 00478e0c: RET
