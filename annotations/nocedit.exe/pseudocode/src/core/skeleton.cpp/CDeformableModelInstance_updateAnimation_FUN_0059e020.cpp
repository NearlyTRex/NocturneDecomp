// Name: core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
// Address: 0059e020
// Address Range: [[0059e020, 0059e062]]
// Convention: __cdecl
// Signature: void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(CDeformableModelInstance * this_ptr)
// Cross-references:
//   core_armour.cpp_CArmour_process_FUN_00412260 (00412260) at 00412318 [UNCONDITIONAL_CALL]
//   core_baron.cpp_CBaron_process_FUN_00412e80 (00412e80) at 004130d4 [UNCONDITIONAL_CALL]
//   core_batcreat.cpp_CBatCreature_process_FUN_00415470 (00415470) at 00415665 [UNCONDITIONAL_CALL]
//   core_batman.cpp_CBatman_process_FUN_00416870 (00416870) at 00416a93 [UNCONDITIONAL_CALL]
//   core_beast.cpp_FUN_004182a0 (004182a0) at 0041830c [UNCONDITIONAL_CALL]
//   core_biggs.cpp_CBiggs_FUN_00418700 (00418700) at 004188df [UNCONDITIONAL_CALL]
//   core_boneguy.cpp_FUN_0041bf90 (0041bf90) at 0041c522 [UNCONDITIONAL_CALL]
//   core_bride.cpp_FUN_00423a30 (00423a30) at 00424478 [UNCONDITIONAL_CALL]
//   core_cloth.cpp_BoneAndClothEditor_FUN_0043c880 (0043c880) at 0043d492 [UNCONDITIONAL_CALL]
//   core_colonel.cpp_FUN_0043fa00 (0043fa00) at 0043fc2b [UNCONDITIONAL_CALL]
//   core_cow.cpp_FUN_00444310 (00444310) at 00444536 [UNCONDITIONAL_CALL]
//   core_dog.cpp_CZombieDog_process_FUN_0047f140 (0047f140) at 0047f37d [UNCONDITIONAL_CALL]
//   core_dracbrid.cpp_FUN_00484410 (00484410) at 0048487b [UNCONDITIONAL_CALL]
//   core_drone.cpp_FUN_0048ec70 (0048ec70) at 0048eefa [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_FUN_004d4d80 (004d4d80) at 004d4d9c [UNCONDITIONAL_CALL]
//   core_gargoyle.cpp_CGargoyle_unk6_FUN_004e4a00 (004e4a00) at 004e4c27 [UNCONDITIONAL_CALL]
//   core_ghoul.cpp_CGhoul_FUN_004e6600 (004e6600) at 004e688e [UNCONDITIONAL_CALL]
//   core_haystack.cpp_FUN_004f0e40 (004f0e40) at 004f1068 [UNCONDITIONAL_CALL]
//   core_hiram.cpp_FUN_004f4550 (004f4550) at 004f4661 [UNCONDITIONAL_CALL]
//   core_hostage.cpp_RelatedToRescuedTownsfolk_FUN_004f4bd0 (004f4bd0) at 004f50f8 [UNCONDITIONAL_CALL]
//   core_hotdemon.cpp_FUN_004f6f20 (004f6f20) at 004f710e [UNCONDITIONAL_CALL]
//   core_icepick.cpp_FUN_004f80b0 (004f80b0) at 004f8351 [UNCONDITIONAL_CALL]
//   core_imp.cpp_FUN_004f9c30 (004f9c30) at 004fa10e [UNCONDITIONAL_CALL]
//   core_larva.cpp_FUN_00503080 (00503080) at 005032d0 [UNCONDITIONAL_CALL]
//   core_mimic.cpp_FUN_0051fcc0 (0051fcc0) at 00520489 [UNCONDITIONAL_CALL]
//   core_mobster.cpp_FUN_00525840 (00525840) at 00525d3b [UNCONDITIONAL_CALL]
//   core_moloch.cpp_CMoloch_process_FUN_00528d20 (00528d20) at 00528f9e [UNCONDITIONAL_CALL]
//   core_npc.cpp_CNPC_process_FUN_005448b0 (005448b0) at 00544ae4 [UNCONDITIONAL_CALL]
//   core_passngr.cpp_FUN_00545ef0 (00545ef0) at 0054609c [UNCONDITIONAL_CALL]
//   core_scat.cpp_FUN_005571f0 (005571f0) at 00557529 [UNCONDITIONAL_CALL]
//   core_sentinel.cpp_FUN_00568030 (00568030) at 00568222 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000 (0059e000) at 0059e005 [UNCONDITIONAL_CALL]
//   core_smiley.cpp_FUN_005a2800 (005a2800) at 005a2b39 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005be520 (005be520) at 005be5a7 [UNCONDITIONAL_CALL]
//   core_succubus.cpp_CSuccubus_process_FUN_005c6e90 (005c6e90) at 005c70c4 [UNCONDITIONAL_CALL]
//   core_svetlana.cpp_CSvetlana_process_FUN_005d8ba0 (005d8ba0) at 005d8e3e [UNCONDITIONAL_CALL]
//   core_tentacle.cpp_CTentacle_process_FUN_005db050 (005db050) at 005db1a7 [UNCONDITIONAL_CALL]
//   core_vampboss.cpp_CVampireBoss_process_FUN_005e5970 (005e5970) at 005e6623 [UNCONDITIONAL_CALL]
//   core_werewolf.cpp_CWerewolf_process_FUN_005efde0 (005efde0) at 005f01d0 [UNCONDITIONAL_CALL]
//   core_zombie.cpp_CZombie_process_FUN_005f9470 (005f9470) at 005f9f37 [UNCONDITIONAL_CALL]
// Globals:
//   double g_DeformableModelTweenThreshold = 0.00100000000000000
// Function calls:
//   core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50
//   core_skeleton.cpp_CDeformableModelInstance_updateMotion_FUN_0059e0a0

#include "nocturne.h"

void __cdecl
core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
          (CDeformableModelInstance *this_ptr)

{
  core_skeleton_cpp_CDeformableModelInstance_updateMotion_FUN_0059e0a0
            (this_ptr,(this_ptr->motion_controller).current_motion_index,
             (this_ptr->motion_controller).current_frame_number,-1);
  if ((this_ptr->motion_controller).tween_progress <= (float)g_DeformableModelTweenThreshold) {
    return;
  }
  core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50
            (this_ptr,(this_ptr->motion_controller).tween_target_motion,
             (this_ptr->motion_controller).tween_target_frame,
             (this_ptr->motion_controller).tween_progress,-1,
             core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
  return;
}


// Assembly code:
// 0059e020: PUSH EBX
//   Label: core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
// 0059e021: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0059e025: PUSH -0x1
// 0059e027: MOV EDX,dword ptr [EBX + 0x4]
// 0059e02a: PUSH dword ptr [EBX + 0x8]
// 0059e02d: PUSH EDX
// 0059e02e: PUSH EBX
// 0059e02f: CALL core_skeleton.cpp_CDeformableModelInstance_updateMotion_FUN_0059e0a0
//   XREF to: 0059e0a0 (UNCONDITIONAL_CALL)
// 0059e034: FLD float ptr [EBX + 0x14]
// 0059e037: ADD ESP,0x10
// 0059e03a: FCOMP double ptr [0x0064edc8]
//   XREF to: 0064edc8 (READ)
// 0059e040: FNSTSW AX
// 0059e042: SAHF
// 0059e043: JA 0x0059e047
//   XREF to: 0059e047 (CONDITIONAL_JUMP)
// 0059e045: POP EBX
// 0059e046: RET
// 0059e047: PUSH 0x59ddb0
//   Label: LAB_0059e047
//   XREF to: 0059ddb0 (DATA)
// 0059e04c: PUSH -0x1
// 0059e04e: PUSH dword ptr [EBX + 0x14]
// 0059e051: MOV ECX,dword ptr [EBX + 0x18]
// 0059e054: PUSH dword ptr [EBX + 0x1c]
// 0059e057: PUSH ECX
// 0059e058: PUSH EBX
// 0059e059: CALL core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50
//   XREF to: 0059eb50 (UNCONDITIONAL_CALL)
// 0059e05e: ADD ESP,0x18
// 0059e061: POP EBX
// 0059e062: RET
