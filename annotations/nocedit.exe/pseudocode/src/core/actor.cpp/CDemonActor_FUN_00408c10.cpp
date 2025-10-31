// Name: core_actor.cpp_CDemonActor_FUN_00408c10
// Address: 00408c10
// Address Range: [[00408c10, 00408c6e]]
// Convention: __cdecl
// Signature: void core_actor.cpp_CDemonActor_FUN_00408c10(CDemonActor * this_ptr)
// Cross-references:
//   core_actor.cpp_CDemonActor_ctor_FUN_004088b0 (004088b0) at 00408924 [UNCONDITIONAL_CALL]
//   core_actor.cpp_CDemonActor_setPositionAndOrientation_FUN_00409fb0 (00409fb0) at 00409ffd [UNCONDITIONAL_CALL]
//   core_actor.cpp_CDemonActor_setup_FUN_00408bb0 (00408bb0) at 00408bd3 [UNCONDITIONAL_CALL]
//   core_bodypart.cpp_CBodyPart_process_FUN_00419be0 (00419be0) at 00419d51 [UNCONDITIONAL_CALL]
//   core_bodypart.cpp_CreateBodyPart_FUN_00418e10 (00418e10) at 00418e98 [UNCONDITIONAL_CALL]
//   core_bodypart.cpp_FUN_0041a630 (0041a630) at 0041a8e1 [UNCONDITIONAL_CALL]
//   core_boxactor.cpp_CBoxActor_process_FUN_004219e0 (004219e0) at 00421c95 [UNCONDITIONAL_CALL]
//   core_boxactor.cpp_FUN_00422640 (00422640) at 0042267a [UNCONDITIONAL_CALL]
//   core_bride.cpp_FUN_00423a30 (00423a30) at 004243b1 [UNCONDITIONAL_CALL]
//   core_bugs.cpp_FUN_004278d0 (004278d0) at 00427916 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_00428f40 (00428f40) at 00429441 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042d090 (0042d090) at 0042d228 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042ded0 (0042ded0) at 0042df1f [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042f3e0 (0042f3e0) at 0042f6bb [UNCONDITIONAL_CALL]
//   core_colonel.cpp_FUN_0043fa00 (0043fa00) at 0043fba8 [UNCONDITIONAL_CALL]
//   core_crate.cpp_FUN_00448660 (00448660) at 0044886f [UNCONDITIONAL_CALL]
//   core_door.cpp_CDoor_reposition_FUN_0047fd20 (0047fd20) at 0047fda4 [UNCONDITIONAL_CALL]
//   core_emitter.cpp_FUN_004a8fe0 (004a8fe0) at 004a91f5 [UNCONDITIONAL_CALL]
//   core_frankgen.cpp_LoadModel_FUN_004d2190 (004d2190) at 004d21c3 [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_FUN_004d2ea0 (004d2ea0) at 004d37ec [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_FUN_004d5550 (004d5550) at 004d57c2 [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_FUN_004d5c60 (004d5c60) at 004d5f50 [UNCONDITIONAL_CALL]
//   core_haystack.cpp_FUN_004f0e40 (004f0e40) at 004f0feb [UNCONDITIONAL_CALL]
//   core_hero.cpp_CHeroPlaceholder_createHero_FUN_004f3d80 (004f3d80) at 004f3e2c [UNCONDITIONAL_CALL]
//   core_hiram.cpp_FUN_004f4550 (004f4550) at 004f466a [UNCONDITIONAL_CALL]
//   core_hostage.cpp_RelatedToRescuedTownsfolk_FUN_004f4bd0 (004f4bd0) at 004f533e [UNCONDITIONAL_CALL]
//   core_icepick.cpp_FUN_004f80b0 (004f80b0) at 004f828c [UNCONDITIONAL_CALL]
//   core_ladder.cpp_FUN_00502a70 (00502a70) at 00502b63 [UNCONDITIONAL_CALL]
//   core_manpuz.cpp_FUN_0050b1d0 (0050b1d0) at 0050b248 [UNCONDITIONAL_CALL]
//   core_manpuz.cpp_FUN_0050b360 (0050b360) at 0050b392 [UNCONDITIONAL_CALL]
//   core_manpuz.cpp_FUN_0050b440 (0050b440) at 0050b5af [UNCONDITIONAL_CALL]
//   core_moloch.cpp_FUN_00528d20 (00528d20) at 00528f1f [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_PrepareMissionAndEditGore_FUN_0053e220 (0053e220) at 0053e479 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0 (005390f0) at 0053a476 [UNCONDITIONAL_CALL]
//   core_pendulum.cpp_FUN_00549b90 (00549b90) at 00549c8c [UNCONDITIONAL_CALL]
//   core_scat.cpp_FUN_005571f0 (005571f0) at 005573a2 [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_step_FUN_0055a810 (0055a810) at 0055f5af [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_FUN_0056b810 (0056b810) at 0056ba66 [UNCONDITIONAL_CALL]
//   core_stairs.cpp_FUN_005ba900 (005ba900) at 005baa54 [UNCONDITIONAL_CALL]
//   core_svetlana.cpp_CSvetlana_process_FUN_005d8ba0 (005d8ba0) at 005d8dbb [UNCONDITIONAL_CALL]
//   core_turret.cpp_CTurret_FUN_005e34d0 (005e34d0) at 005e34fd [UNCONDITIONAL_CALL]
//   core_turret.cpp_CTurret_process_FUN_005e2430 (005e2430) at 005e2843 [UNCONDITIONAL_CALL]
//   core_turret.cpp_FUN_005e3280 (005e3280) at 005e33c3 [UNCONDITIONAL_CALL]
//   core_vampboss.cpp_CVampireBoss_process_FUN_005e5970 (005e5970) at 005e5f08 [UNCONDITIONAL_CALL]
//   core_weapon.cpp_CWeapon_process_FUN_005ee110 (005ee110) at 005ee1b2 [UNCONDITIONAL_CALL]
// Function calls:
//   core_actor.cpp_FUN_0040cd70
//   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30

#include "nocturne.h"

void __cdecl core_actor_cpp_CDemonActor_FUN_00408c10(CDemonActor *this_ptr)

{
  float fVar1;
  
  fVar1 = core_actor_cpp_FUN_0040cd70((this_ptr->orient).pitch);
  (this_ptr->orient).pitch = fVar1;
  fVar1 = core_actor_cpp_FUN_0040cd70((this_ptr->orient).heading);
  (this_ptr->orient).heading = fVar1;
  fVar1 = core_actor_cpp_FUN_0040cd70((this_ptr->orient).bank);
  (this_ptr->orient).bank = fVar1;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
            (&this_ptr->orient_matrix,(CVector3f *)&this_ptr->orient);
  return;
}


// Assembly code:
// 00408c10: PUSH EBX
//   Label: core_actor.cpp_CDemonActor_FUN_00408c10
// 00408c11: SUB ESP,0x4
// 00408c14: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00408c18: PUSH dword ptr [EBX + 0x30]
// 00408c1b: CALL core_actor.cpp_FUN_0040cd70
//   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
// 00408c20: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x8] (WRITE)
// 00408c24: FLD float ptr [ESP + 0x4]
//   XREF to: Stack[-0x8] (READ)
// 00408c28: ADD ESP,0x4
// 00408c2b: PUSH dword ptr [EBX + 0x38]
// 00408c2e: FSTP float ptr [EBX + 0x30]
// 00408c31: CALL core_actor.cpp_FUN_0040cd70
//   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
// 00408c36: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x8] (WRITE)
// 00408c3a: FLD float ptr [ESP + 0x4]
//   XREF to: Stack[-0x8] (READ)
// 00408c3e: ADD ESP,0x4
// 00408c41: PUSH dword ptr [EBX + 0x34]
// 00408c44: FSTP float ptr [EBX + 0x38]
// 00408c47: CALL core_actor.cpp_FUN_0040cd70
//   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
// 00408c4c: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x8] (WRITE)
// 00408c50: FLD float ptr [ESP + 0x4]
//   XREF to: Stack[-0x8] (READ)
// 00408c54: ADD ESP,0x4
// 00408c57: LEA EAX,[EBX + 0x30]
// 00408c5a: PUSH EAX
// 00408c5b: ADD EBX,0x3c
// 00408c5e: PUSH EBX
// 00408c5f: FSTP float ptr [EBX + -0x8]
// 00408c62: CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
//   XREF to: 00471d30 (UNCONDITIONAL_CALL)
// 00408c67: ADD ESP,0x8
// 00408c6a: ADD ESP,0x4
// 00408c6d: POP EBX
// 00408c6e: RET
