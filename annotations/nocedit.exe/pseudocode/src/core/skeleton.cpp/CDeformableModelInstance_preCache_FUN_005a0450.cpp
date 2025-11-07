// Name: core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450
// Address: 005a0450
// Address Range: [[005a0450, 005a0470]]
// Convention: __cdecl
// Signature: void core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450(CDeformableModelInstance * this_ptr)
// Cross-references:
//   core_armour.cpp_CArmour_FUN_00412240 (00412240) at 00412257 [UNCONDITIONAL_CALL]
//   core_batcreat.cpp_CBatCreature_FUN_00415150 (00415150) at 00415167 [UNCONDITIONAL_CALL]
//   core_batman.cpp_CBatman_FUN_00416510 (00416510) at 00416527 [UNCONDITIONAL_CALL]
//   core_beast.cpp_FUN_00418280 (00418280) at 0041828a [UNCONDITIONAL_CALL]
//   core_biggs.cpp_FUN_00418680 (00418680) at 00418697 [UNCONDITIONAL_CALL]
//   core_bodypart.cpp_CBodyPart_initializeInEditor_FUN_0041b280 (0041b280) at 0041b2e8 [UNCONDITIONAL_CALL]
//   core_boneguy.cpp_CBoneGuy_explode_FUN_0041bd90 (0041bd90) at 0041bd9e [UNCONDITIONAL_CALL]
//   core_bride.cpp_FUN_00423810 (00423810) at 00423821 [UNCONDITIONAL_CALL]
//   core_cloth.cpp_FUN_0043ddf0 (0043ddf0) at 0043dfaa [UNCONDITIONAL_CALL]
//   core_cow.cpp_FUN_004441b0 (004441b0) at 004441be [UNCONDITIONAL_CALL]
//   core_dog.cpp_CZombieDog_setup_FUN_0047f0c0 (0047f0c0) at 0047f0cd [UNCONDITIONAL_CALL]
//   core_drone.cpp_FUN_0048ebc0 (0048ebc0) at 0048ebcd [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_FUN_004d2c40 (004d2c40) at 004d2c65 [UNCONDITIONAL_CALL]
//   core_gargoyle.cpp_CGargoyle_FUN_004e45e0 (004e45e0) at 004e45f7 [UNCONDITIONAL_CALL]
//   core_ghoul.cpp_FUN_004e6160 (004e6160) at 004e616e [UNCONDITIONAL_CALL]
//   core_hero.cpp_CHero_FUN_004f2540 (004f2540) at 004f254c [UNCONDITIONAL_CALL]
//   core_hostage.cpp_NPCSFromZombieTown_FUN_004f4970 (004f4970) at 004f497f [UNCONDITIONAL_CALL]
//   core_hotdemon.cpp_FUN_004f6d00 (004f6d00) at 004f6d3c [UNCONDITIONAL_CALL]
//   core_imp.cpp_FUN_004f9910 (004f9910) at 004f992a [UNCONDITIONAL_CALL]
//   core_larva.cpp_FUN_00503020 (00503020) at 00503030 [UNCONDITIONAL_CALL]
//   core_mimic.cpp_CMimic_setup_FUN_0051f3e0 (0051f3e0) at 0051f42c [UNCONDITIONAL_CALL]
//   core_mobster.cpp_FUN_00525340 (00525340) at 0052534e [UNCONDITIONAL_CALL]
//   core_moloch.cpp_CMoloch_process_FUN_00528d20 (00528d20) at 005292ec [UNCONDITIONAL_CALL]
//   core_moloch.cpp_CMoloch_setup_FUN_00528c70 (00528c70) at 00528cb0 [UNCONDITIONAL_CALL]
//   core_morph.cpp_FUN_0052bcb0 (0052bcb0) at 0052bd84 [UNCONDITIONAL_CALL]
//   core_passngr.cpp_FUN_00545d30 (00545d30) at 00545d8f [UNCONDITIONAL_CALL]
//   core_sentinel.cpp_FUN_00567e20 (00567e20) at 00567e37 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_CDeformableModelInstance_viewModel_FUN_005968b0 (005968b0) at 005968da [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_00598f10 (00598f10) at 00598f71 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_viewModel_FUN_00598fc0 (00598fc0) at 00599218 [UNCONDITIONAL_CALL]
//   core_smiley.cpp_FUN_005a24d0 (005a24d0) at 005a24e9 [UNCONDITIONAL_CALL]
//   core_succubus.cpp_CSuccubus_FUN_005c6b60 (005c6b60) at 005c6bc3 [UNCONDITIONAL_CALL]
//   core_tentacle.cpp_CTentacle_FUN_005dafc0 (005dafc0) at 005dafcc [UNCONDITIONAL_CALL]
//   core_vampboss.cpp_CVampireBoss_FUN_005e56c0 (005e56c0) at 005e56ea [UNCONDITIONAL_CALL]
//   core_werewolf.cpp_CWerewolf_FUN_005efcc0 (005efcc0) at 005efcd0 [UNCONDITIONAL_CALL]
//   core_zombie.cpp_CZombie_FUN_005f9140 (005f9140) at 005f9153 [UNCONDITIONAL_CALL]
// Function calls:
//   core_skeleton.cpp_CDeformableModelInstance_initializeFromModel_FUN_005a0480
//   core_skeleton.cpp_getDeformableModel_FUN_005a1cf0

#include "nocturne.h"

void __cdecl
core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_005a0450(CDeformableModelInstance *this_ptr)

{
  CDeformableModel *model_ptr;
  CDeformableModelInstance *in_stack_00000008;
  
  model_ptr = core_skeleton_cpp_getDeformableModel_FUN_005a1cf0(this_ptr->model_name);
  core_skeleton_cpp_CDeformableModelInstance_initializeFromModel_FUN_005a0480
            (in_stack_00000008,model_ptr);
  return;
}


// Assembly code:
// 005a0450: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450
//   XREF to: Stack[0x4] (READ)
// 005a0454: ADD EAX,0x2260
// 005a0459: PUSH EAX
// 005a045a: CALL core_skeleton.cpp_getDeformableModel_FUN_005a1cf0
//   XREF to: 005a1cf0 (UNCONDITIONAL_CALL)
// 005a045f: ADD ESP,0x4
// 005a0462: PUSH EAX
// 005a0463: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005a0467: PUSH EDX
// 005a0468: CALL core_skeleton.cpp_CDeformableModelInstance_initializeFromModel_FUN_005a0480
//   XREF to: 005a0480 (UNCONDITIONAL_CALL)
// 005a046d: ADD ESP,0x8
// 005a0470: RET
