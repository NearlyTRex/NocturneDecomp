// Name: core_skeleton.cpp_CDeformableModelInstance_GetModelPtrAndSomething_FUN_005a0820
// Address: 005a0820
// Address Range: [[005a0820, 005a0836]]
// Convention: unknown
// Signature: undefined core_skeleton.cpp_CDeformableModelInstance_GetModelPtrAndSomething_FUN_005a0820()
// Cross-references:
//   core_baron.cpp_CBaron_FUN_00412cb0 (00412cb0) at 00412cc6 [UNCONDITIONAL_CALL]
//   core_batcreat.cpp_CBatCreature_FUN_00415150 (00415150) at 00415170 [UNCONDITIONAL_CALL]
//   core_batman.cpp_CBatman_FUN_00416510 (00416510) at 00416530 [UNCONDITIONAL_CALL]
//   core_batman.cpp_CBatman_process_FUN_00416870 (00416870) at 00416b57 [UNCONDITIONAL_CALL]
//   core_boneguy.cpp_CBoneGuy_explode_FUN_0041bd90 (0041bd90) at 0041bda7 [UNCONDITIONAL_CALL]
//   core_bride.cpp_FUN_00423810 (00423810) at 0042382a [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042a830 (0042a830) at 0042a846 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042ad00 (0042ad00) at 0042ad4e [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042b110 (0042b110) at 0042b124 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042b5b0 (0042b5b0) at 0042b642 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042ea40 (0042ea40) at 0042eac6 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042ec40 (0042ec40) at 0042ecc9 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042f3e0 (0042f3e0) at 0042f489 [UNCONDITIONAL_CALL]
//   core_cloth.cpp_BoneAndClothEditor_FUN_0043c880 (0043c880) at 0043c920 [UNCONDITIONAL_CALL]
//   core_cloth.cpp_FUN_0043c430 (0043c430) at 0043c448 [UNCONDITIONAL_CALL]
//   core_cloth.cpp_OrientBoneCheck_FUN_0043a110 (0043a110) at 0043a126 [UNCONDITIONAL_CALL]
//   core_colonel.cpp_FUN_0043f850 (0043f850) at 0043f866 [UNCONDITIONAL_CALL]
//   core_cow.cpp_FUN_004441b0 (004441b0) at 004441c7 [UNCONDITIONAL_CALL]
//   core_dog.cpp_CZombieDog_setup_FUN_0047f0c0 (0047f0c0) at 0047f0d6 [UNCONDITIONAL_CALL]
//   core_dracbrid.cpp_DraculaBrideModels_FUN_004840b0 (004840b0) at 00484155 [UNCONDITIONAL_CALL]
//   core_dracbrid.cpp_FUN_00484410 (00484410) at 004849f1 [UNCONDITIONAL_CALL]
//   core_drone.cpp_FUN_0048ebc0 (0048ebc0) at 0048ebd6 [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_FUN_004d2c40 (004d2c40) at 004d2c94 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_processCheatCodes_FUN_004ddaf0 (004ddaf0) at 004dff7f [UNCONDITIONAL_CALL]
//   core_gargoyle.cpp_CGargoyle_FUN_004e45e0 (004e45e0) at 004e4600 [UNCONDITIONAL_CALL]
//   core_ghoul.cpp_FUN_004e6160 (004e6160) at 004e6177 [UNCONDITIONAL_CALL]
//   core_haystack.cpp_FUN_004f0c80 (004f0c80) at 004f0c96 [UNCONDITIONAL_CALL]
//   core_hostage.cpp_NPCSFromZombieTown_FUN_004f4970 (004f4970) at 004f4a44 [UNCONDITIONAL_CALL]
//   core_hostage.cpp_RelatedToRescuedTownsfolk_FUN_004f4bd0 (004f4bd0) at 004f5012 [UNCONDITIONAL_CALL]
//   core_hotdemon.cpp_FUN_004f6d00 (004f6d00) at 004f6d45 [UNCONDITIONAL_CALL]
//   core_icepick.cpp_FUN_004f7e80 (004f7e80) at 004f7e96 [UNCONDITIONAL_CALL]
//   core_imp.cpp_FUN_004f9910 (004f9910) at 004f9933 [UNCONDITIONAL_CALL]
//   core_larva.cpp_FUN_00503020 (00503020) at 00503039 [UNCONDITIONAL_CALL]
//   core_mimic.cpp_CMimic_setup_FUN_0051f3e0 (0051f3e0) at 0051f435 [UNCONDITIONAL_CALL]
//   core_mimic.cpp_FUN_0051f930 (0051f930) at 0051f947 [UNCONDITIONAL_CALL]
//   core_mobster.cpp_FUN_00525340 (00525340) at 00525357 [UNCONDITIONAL_CALL]
//   core_scat.cpp_FUN_00556f90 (00556f90) at 00556fa6 [UNCONDITIONAL_CALL]
//   core_scat.cpp_FUN_005582c0 (005582c0) at 00558416 [UNCONDITIONAL_CALL]
//   core_sentinel.cpp_FUN_00567e20 (00567e20) at 00567e40 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_FUN_0056c990 (0056c990) at 0056c9b8 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModelInstance_FUN_0059e0a0 (0059e0a0) at 0059e0b6 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModelInstance_FUN_0059f750 (0059f750) at 0059f775 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModelInstance_FUN_0059f820 (0059f820) at 0059f841 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModelInstance_FUN_0059fa20 (0059fa20) at 0059fa60 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModelInstance_FUN_0059fb40 (0059fb40) at 0059fb4c [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModelInstance_FUN_0059ff20 (0059ff20) at 0059ff33 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModelInstance_FUN_005a0480 (005a0480) at 005a0496 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModelInstance_FUN_005a1160 (005a1160) at 005a1178 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModelInstance_FUN_005a15e0 (005a15e0) at 005a160b [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModelInstance_GetModelPtrAndDunno_FUN_005a00f0 (005a00f0) at 005a00fd [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModelInstance_GetModelPtrDoSomething20_FUN_005a1510 (005a1510) at 005a1539 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModelInstance_SomethingUnkWriteMe_FUN_0059f260 (0059f260) at 0059f28f [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModelInstance_UnkSomethingWriteMe2_FUN_0059eb50 (0059eb50) at 0059eb9e [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModel_GetModelPtrSomethingMaybe_FUN_0059df80 (0059df80) at 0059df8a [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_FUN_0059f6e0 (0059f6e0) at 0059f6ec [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_FUN_0059fd60 (0059fd60) at 0059fd6d [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_FUN_0059fdd0 (0059fdd0) at 0059fe03 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_FUN_005a08a0 (005a08a0) at 005a08d4 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_FUN_005a0ad0 (005a0ad0) at 005a0ae0 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_FUN_005a0d10 (005a0d10) at 005a0d4f [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_FUN_005a1950 (005a1950) at 005a1960 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_FUN_005a1b70 (005a1b70) at 005a1c3a [UNCONDITIONAL_CALL]
//   core_smiley.cpp_FUN_005a24d0 (005a24d0) at 005a24f2 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005bb4b0 (005bb4b0) at 005bb4ca [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005be520 (005be520) at 005bf6b2 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005bfb60 (005bfb60) at 005bfd89 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c02b0 (005c02b0) at 005c0391 [UNCONDITIONAL_CALL]
//   core_succubus.cpp_CSuccubus_FUN_005c6b60 (005c6b60) at 005c6c1a [UNCONDITIONAL_CALL]
//   core_svetlana.cpp_AttackWithParentBone_FUN_005d9a10 (005d9a10) at 005d9a2e [UNCONDITIONAL_CALL]
//   core_svetlana.cpp_CSvetlana_FUN_005d88e0 (005d88e0) at 005d8920 [UNCONDITIONAL_CALL]
//   core_tbplayer.cpp_CBassPlayer_FUN_005da090 (005da090) at 005da0a6 [UNCONDITIONAL_CALL]
//   core_tbplayer.cpp_CDrummer_FUN_005da2f0 (005da2f0) at 005da306 [UNCONDITIONAL_CALL]
//   core_tentacle.cpp_CTentacle_FUN_005dafc0 (005dafc0) at 005dafe2 [UNCONDITIONAL_CALL]
//   core_vampboss.cpp_CVampireBoss_FUN_005e56c0 (005e56c0) at 005e588a [UNCONDITIONAL_CALL]
//   core_werewolf.cpp_CWerewolf_FUN_005efcc0 (005efcc0) at 005efcd9 [UNCONDITIONAL_CALL]
//   core_zombie.cpp_CZombie_FUN_005f9140 (005f9140) at 005f915c [UNCONDITIONAL_CALL]
// Function calls:
//   core_skeleton.cpp_CDeformableModel_SkeletonPtrNotSet_FUN_0059a810
//   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0

#include "nocturne.h"

/* Signature: CDeformableModel*
   core_skeleton.cpp_CDeformableModelInstance_GetModelPtrAndSomething(CDeformableModelInstance*
   param_1) */

void core_skeleton_cpp_CDeformableModelInstance_GetModelPtrAndSomething_FUN_005a0820(void)

{
  core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0();
  core_skeleton_cpp_CDeformableModel_SkeletonPtrNotSet_FUN_0059a810();
  return;
}


// Assembly code:
// 005a0820: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_skeleton.cpp_CDeformableModelInstance_GetModelPtrAndSomething_FUN_005a0820
//   XREF to: Stack[0x4] (READ)
// 005a0824: PUSH EDX
// 005a0825: CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
//   XREF to: 005a07a0 (UNCONDITIONAL_CALL)
// 005a082a: ADD ESP,0x4
// 005a082d: PUSH EAX
// 005a082e: CALL core_skeleton.cpp_CDeformableModel_SkeletonPtrNotSet_FUN_0059a810
//   XREF to: 0059a810 (UNCONDITIONAL_CALL)
// 005a0833: ADD ESP,0x4
// 005a0836: RET
