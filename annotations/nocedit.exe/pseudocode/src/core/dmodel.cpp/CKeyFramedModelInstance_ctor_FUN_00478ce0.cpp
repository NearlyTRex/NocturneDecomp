// Name: core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
// Address: 00478ce0
// Address Range: [[00478ce0, 00478cff]]
// Convention: __cdecl
// Signature: CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(CKeyFramedModelInstance * this_ptr)
// Cross-references:
//   core_ammo.cpp_CAmmo_ctor_FUN_00410dc0 (00410dc0) at 00410dd6 [UNCONDITIONAL_CALL]
//   core_ammobox.cpp_CAmmoBox_ctor_FUN_004115a0 (004115a0) at 004115b6 [UNCONDITIONAL_CALL]
//   core_anvil.cpp_CAnvil_ctor_FUN_00411ce0 (00411ce0) at 00411cf6 [UNCONDITIONAL_CALL]
//   core_backgnd.cpp_CBackgroundActor_ctor_FUN_004127b0 (004127b0) at 004127c4 [UNCONDITIONAL_CALL]
//   core_baron.cpp_FUN_00412b41 (00412b41) at 00412b48 [UNCONDITIONAL_CALL]
//   core_bat.cpp_CBat_ctor_FUN_004147d0 (004147d0) at 004147f2 [UNCONDITIONAL_CALL]
//   core_battery.cpp_CBattery_ctor_FUN_00417e90 (00417e90) at 00417ea4 [UNCONDITIONAL_CALL]
//   core_biggs.cpp_CBiggs_ctor_FUN_004185c0 (004185c0) at 004185d6 [UNCONDITIONAL_CALL]
//   core_bodypart.cpp_SBodyPartModel_ctor_FUN_0041b660 (0041b660) at 0041b668 [UNCONDITIONAL_CALL]
//   core_boxactor.cpp_CBoxActor_ctor_FUN_00421700 (00421700) at 00421714 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_staticInit_FUN_00427d80 (00427d80) at 00427d85 [UNCONDITIONAL_CALL]
//   core_crate.cpp_FUN_004484d0 (004484d0) at 004484e4 [UNCONDITIONAL_CALL]
//   core_door.cpp_CDoor_ctor_FUN_0047fad0 (0047fad0) at 0047fae6 [UNCONDITIONAL_CALL]
//   core_drip.cpp_ctor_FUN_0048e000 (0048e000) at 0048e016 [UNCONDITIONAL_CALL]
//   core_drip.cpp_staticInit_FUN_0048df80 (0048df80) at 0048dfa8 [UNCONDITIONAL_CALL]
//   core_emitter.cpp_ctor_FUN_004a7ca0 (004a7ca0) at 004a7cb6 [UNCONDITIONAL_CALL]
//   core_filmreel.cpp_ctor_FUN_004be6b0 (004be6b0) at 004be6c6 [UNCONDITIONAL_CALL]
//   core_filmreel.cpp_ctor_FUN_004bea40 (004bea40) at 004bea56 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CToss_ctor_FUN_004c3ea0 (004c3ea0) at 004c3ea8 [UNCONDITIONAL_CALL]
//   core_fire.cpp_staticInit_FUN_004bef20 (004bef20) at 004bef66 [UNCONDITIONAL_CALL]
//   core_flamecan.cpp_FUN_004cb160 (004cb160) at 004cb176 [UNCONDITIONAL_CALL]
//   core_frankgen.cpp_FUN_004d1720 (004d1720) at 004d174d [UNCONDITIONAL_CALL]
//   core_gasmask.cpp_CGasMask_ctor_FUN_004e5d00 (004e5d00) at 004e5d14 [UNCONDITIONAL_CALL]
//   core_grave.cpp_FUN_004ee510 (004ee510) at 004ee524 [UNCONDITIONAL_CALL]
//   core_health.cpp_FUN_004f1dd0 (004f1dd0) at 004f1de4 [UNCONDITIONAL_CALL]
//   core_keyactor.cpp_FUN_00501690 (00501690) at 005016a4 [UNCONDITIONAL_CALL]
//   core_ladder.cpp_FUN_00502540 (00502540) at 00502554 [UNCONDITIONAL_CALL]
//   core_lever.cpp_FUN_005047d0 (005047d0) at 005047e4 [UNCONDITIONAL_CALL]
//   core_manpuz.cpp_FUN_00508920 (00508920) at 00508944 [UNCONDITIONAL_CALL]
//   core_manpuz.cpp_FUN_0050b110 (0050b110) at 0050b124 [UNCONDITIONAL_CALL]
//   core_pendulum.cpp_CPendulum_ctor_FUN_00549390 (00549390) at 005493a6 [UNCONDITIONAL_CALL]
//   core_platfrm.cpp_FUN_0054c850 (0054c850) at 0054c869 [UNCONDITIONAL_CALL]
//   core_simbox.cpp_CSimBox_ctor_FUN_00588d40 (00588d40) at 00588d56 [UNCONDITIONAL_CALL]
//   core_spike.cpp_CSpike_ctor_FUN_005b8220 (005b8220) at 005b8236 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_ctor_FUN_005bb120 (005bb120) at 005bb136 [UNCONDITIONAL_CALL]
//   core_trap.cpp_CTrap_ctor_FUN_005de690 (005de690) at 005de6a4 [UNCONDITIONAL_CALL]
//   core_trash.cpp_CTrash_ctor_FUN_005deb70 (005deb70) at 005deb84 [UNCONDITIONAL_CALL]
//   core_turret.cpp_CTurret_ctor_FUN_005e20f0 (005e20f0) at 005e2109 [UNCONDITIONAL_CALL]
//   core_tvbat.cpp_CTVBat_ctor_FUN_005e3ef0 (005e3ef0) at 005e3f07 [UNCONDITIONAL_CALL]
//   core_vehicle.cpp_CTire_ctor_FUN_005e8da0 (005e8da0) at 005e8da8 [UNCONDITIONAL_CALL]
//   core_vehicle.cpp_CVehicle_ctor_FUN_005e7940 (005e7940) at 005e7956 [UNCONDITIONAL_CALL]
//   core_vessel.cpp_CCryptVessel_ctor_FUN_005e8e60 (005e8e60) at 005e8e92 [UNCONDITIONAL_CALL]
//   core_weapon.cpp_CWeapon_ctor_FUN_005ede70 (005ede70) at 005ede84 [UNCONDITIONAL_CALL]
// Function calls:
//   core_dmodel.cpp_CKeyFramedModelInstance_init_FUN_00478d00

#include "nocturne.h"

CKeyFramedModelInstance * __cdecl
core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(CKeyFramedModelInstance *this_ptr)

{
  this_ptr->model_name[0] = '\0';
  this_ptr->model_ptr = (CKeyFramedModel *)0x0;
  core_dmodel_cpp_CKeyFramedModelInstance_init_FUN_00478d00(this_ptr);
  return this_ptr;
}


// Assembly code:
// 00478ce0: PUSH EBX
//   Label: core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
// 00478ce1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00478ce5: MOV byte ptr [EBX + 0x78],0x0
// 00478ce9: PUSH EBX
// 00478cea: MOV dword ptr [EBX + 0x178],0x0
// 00478cf4: CALL core_dmodel.cpp_CKeyFramedModelInstance_init_FUN_00478d00
//   XREF to: 00478d00 (UNCONDITIONAL_CALL)
// 00478cf9: ADD ESP,0x4
// 00478cfc: MOV EAX,EBX
// 00478cfe: POP EBX
// 00478cff: RET
