// Name: core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840
// Address: 005a0840
// Address Range: [[005a0840, 005a0894]]
// Convention: __cdecl
// Signature: void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840(CDeformableModelInstance * this_ptr, char * model_name)
// Cross-references:
//   core_actor.cpp_CActorProperty_editInteractive_FUN_0040eed0 (0040eed0) at 0040f544 [UNCONDITIONAL_CALL]
//   core_actor.cpp_serializedDeformableModelInstance_FUN_0040b970 (0040b970) at 0040b9a1 [UNCONDITIONAL_CALL]
//   core_armour.cpp_CArmour_ctor_FUN_004121a0 (004121a0) at 004121cd [UNCONDITIONAL_CALL]
//   core_baron.cpp_CBaron_ctor_FUN_00412bc0 (00412bc0) at 00412be4 [UNCONDITIONAL_CALL]
//   core_batcreat.cpp_CBatCreature_ctor_FUN_004150f0 (004150f0) at 00415112 [UNCONDITIONAL_CALL]
//   core_batman.cpp_CBatman_ctor_FUN_00416450 (00416450) at 0041647f [UNCONDITIONAL_CALL]
//   core_beast.cpp_CBeast_ctor_FUN_00418220 (00418220) at 00418242 [UNCONDITIONAL_CALL]
//   core_biggs.cpp_CBiggs_ctor_FUN_004185c0 (004185c0) at 00418608 [UNCONDITIONAL_CALL]
//   core_bodypart.cpp_FUN_0041b280 (0041b280) at 0041b2dd [UNCONDITIONAL_CALL]
//   core_boneguy.cpp_CBoneGuy_ctor_FUN_0041bbc0 (0041bbc0) at 0041bc04 [UNCONDITIONAL_CALL]
//   core_bride.cpp_CBride_ctor_FUN_004237a0 (004237a0) at 004237c2 [UNCONDITIONAL_CALL]
//   core_bugs.cpp_CBugs_ctor_FUN_00424cb0 (00424cb0) at 00424d79 [UNCONDITIONAL_CALL]
//   core_cloth.cpp_FUN_0043ddf0 (0043ddf0) at 0043df9d [UNCONDITIONAL_CALL]
//   core_colonel.cpp_CColonel_ctor_FUN_0043f7e0 (0043f7e0) at 0043f816 [UNCONDITIONAL_CALL]
//   core_cow.cpp_FUN_00444140 (00444140) at 00444162 [UNCONDITIONAL_CALL]
//   core_dog.cpp_CZombieDog_ctor_FUN_0047f050 (0047f050) at 0047f072 [UNCONDITIONAL_CALL]
//   core_dracbrid.cpp_DraculaBrideModels_FUN_004840b0 (004840b0) at 004840f1 [UNCONDITIONAL_CALL]
//   core_dracbrid.cpp_ctor_FUN_00483fc0 (00483fc0) at 00483fe5 [UNCONDITIONAL_CALL]
//   core_drone.cpp_ctor_FUN_0048eb50 (0048eb50) at 0048eb72 [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_FUN_004d2c40 (004d2c40) at 004d2c5c [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_constructorMaybe_FUN_004d2b20 (004d2b20) at 004d2c0c [UNCONDITIONAL_CALL]
//   core_gargoyle.cpp_FUN_004e44e0 (004e44e0) at 004e4502 [UNCONDITIONAL_CALL]
//   core_ghoul.cpp_FUN_004e6030 (004e6030) at 004e6055 [UNCONDITIONAL_CALL]
//   core_ghoul.cpp_FUN_004e8e40 (004e8e40) at 004e8e88 [UNCONDITIONAL_CALL]
//   core_haystack.cpp_FUN_004f0c10 (004f0c10) at 004f0c46 [UNCONDITIONAL_CALL]
//   core_hiram.cpp_FUN_004f43f0 (004f43f0) at 004f4418 [UNCONDITIONAL_CALL]
//   core_hostage.cpp_FUN_004f4840 (004f4840) at 004f4868 [UNCONDITIONAL_CALL]
//   core_hotdemon.cpp_CHotDemon_ctor_FUN_004f6ca0 (004f6ca0) at 004f6cc2 [UNCONDITIONAL_CALL]
//   core_hotdemon.cpp_FUN_004f6d00 (004f6d00) at 004f6d24 [UNCONDITIONAL_CALL]
//   core_hpriest.cpp_FUN_004f7b70 (004f7b70) at 004f7b98 [UNCONDITIONAL_CALL]
//   core_icepick.cpp_FUN_004f7df0 (004f7df0) at 004f7e26 [UNCONDITIONAL_CALL]
//   core_imp.cpp_FUN_004f98a0 (004f98a0) at 004f98c2 [UNCONDITIONAL_CALL]
//   core_larva.cpp_FUN_00502f90 (00502f90) at 00502fb2 [UNCONDITIONAL_CALL]
//   core_mimic.cpp_CMimic_setup_FUN_0051f3e0 (0051f3e0) at 0051f41d [UNCONDITIONAL_CALL]
//   core_mobster.cpp_CMobster_ctor_FUN_00525200 (00525200) at 00525224 [UNCONDITIONAL_CALL]
//   core_moloch.cpp_CMoloch_ctor_FUN_00528b30 (00528b30) at 00528b78 [UNCONDITIONAL_CALL]
//   core_moloch.cpp_CMoloch_process_FUN_00528d20 (00528d20) at 005292e3 [UNCONDITIONAL_CALL]
//   core_moloch.cpp_CMoloch_setup_FUN_00528c70 (00528c70) at 00528ca1 [UNCONDITIONAL_CALL]
//   core_morph.cpp_FUN_0052bcb0 (0052bcb0) at 0052bd08 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_0053d8b0 (0053d8b0) at 0053dcdc [UNCONDITIONAL_CALL]
//   core_npc.cpp_FUN_005447e0 (005447e0) at 00544840 [UNCONDITIONAL_CALL]
//   core_passngr.cpp_CPassenger_ctor_FUN_00545b30 (00545b30) at 00545bc3 [UNCONDITIONAL_CALL]
//   core_passngr.cpp_FUN_00545d30 (00545d30) at 00545e7c [UNCONDITIONAL_CALL]
//   core_scat.cpp_CScat_ctor_FUN_00556ed0 (00556ed0) at 00556efc [UNCONDITIONAL_CALL]
//   core_sentinel.cpp_CSentinel_ctor_FUN_00567db0 (00567db0) at 00567dd2 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_00598f10 (00598f10) at 00598f68 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_viewModel_FUN_00598fc0 (00598fc0) at 0059920f [UNCONDITIONAL_CALL]
//   core_smiley.cpp_CSmiley_ctor_FUN_005a2430 (005a2430) at 005a2452 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_ctor_FUN_005bb120 (005bb120) at 005bb28a [UNCONDITIONAL_CALL]
//   core_succubus.cpp_CSuccubus_FUN_005c6b60 (005c6b60) at 005c6b8e [UNCONDITIONAL_CALL]
//   core_succubus.cpp_CSuccubus_ctor_FUN_005c6a80 (005c6a80) at 005c6af5 [UNCONDITIONAL_CALL]
//   core_svetlana.cpp_CSvetlana_FUN_005d88e0 (005d88e0) at 005d8908 [UNCONDITIONAL_CALL]
//   core_svetlana.cpp_CSvetlana_ctor_FUN_005d8850 (005d8850) at 005d88aa [UNCONDITIONAL_CALL]
//   core_tbplayer.cpp_CBassPlayer_ctor_FUN_005da060 (005da060) at 005da082 [UNCONDITIONAL_CALL]
//   core_tbplayer.cpp_CDrummer_ctor_FUN_005da2c0 (005da2c0) at 005da2e2 [UNCONDITIONAL_CALL]
//   core_tentacle.cpp_CTentacle_ctor_FUN_005daf60 (005daf60) at 005daf82 [UNCONDITIONAL_CALL]
//   core_vampboss.cpp_CVampireBoss_ctor_FUN_005e5590 (005e5590) at 005e5600 [UNCONDITIONAL_CALL]
//   core_vehicle.cpp_CVehicle_process_FUN_005e7e80 (005e7e80) at 005e84aa [UNCONDITIONAL_CALL]
//   core_werewolf.cpp_CWerewolf_ctor_FUN_005efc10 (005efc10) at 005efc32 [UNCONDITIONAL_CALL]
//   core_zombie.cpp_CZombie_FUN_005fcb70 (005fcb70) at 005fcba9 [UNCONDITIONAL_CALL]
//   core_zombie.cpp_CZombie_ctor_FUN_005f8fe0 (005f8fe0) at 005f900d [UNCONDITIONAL_CALL]
// Function calls:
//   core_skeleton.cpp_CDeformableModelInstance_clearAllTextureSetIndices_FUN_005a0430
//   core_skeleton.cpp_CDeformableModelInstance_showAllParts_FUN_005a0410

#include "nocturne.h"

void __cdecl
core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
          (CDeformableModelInstance *this_ptr,char *model_name)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = this_ptr->model_name;
  do {
    cVar1 = *model_name;
    *pcVar2 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = model_name[1];
    model_name = model_name + 2;
    pcVar2[1] = cVar1;
    pcVar2 = pcVar2 + 2;
  } while (cVar1 != '\0');
  this_ptr->model_ptr = (CDeformableModel *)0x0;
  core_skeleton_cpp_CDeformableModelInstance_showAllParts_FUN_005a0410(this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_clearAllTextureSetIndices_FUN_005a0430(this_ptr);
  this_ptr->cached_skinned_lod_index = -1;
  return;
}


// Assembly code:
// 005a0840: PUSH EBX
//   Label: core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840
// 005a0841: PUSH ESI
// 005a0842: PUSH EDI
// 005a0843: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 005a0847: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 005a084b: LEA EDI,[EBX + 0x2260]
// 005a0851: PUSH EDI
// 005a0852: MOV AL,byte ptr [ESI]
//   Label: LAB_005a0852
// 005a0854: MOV byte ptr [EDI],AL
// 005a0856: CMP AL,0x0
// 005a0858: JZ 0x005a086a
//   XREF to: 005a086a (CONDITIONAL_JUMP)
// 005a085a: MOV AL,byte ptr [ESI + 0x1]
// 005a085d: ADD ESI,0x2
// 005a0860: MOV byte ptr [EDI + 0x1],AL
// 005a0863: ADD EDI,0x2
// 005a0866: CMP AL,0x0
// 005a0868: JNZ 0x005a0852
//   XREF to: 005a0852 (CONDITIONAL_JUMP)
// 005a086a: POP EDI
//   Label: LAB_005a086a
// 005a086b: PUSH EBX
// 005a086c: MOV dword ptr [EBX + 0x22b0],0x0
// 005a0876: CALL core_skeleton.cpp_CDeformableModelInstance_showAllParts_FUN_005a0410
//   XREF to: 005a0410 (UNCONDITIONAL_CALL)
// 005a087b: ADD ESP,0x4
// 005a087e: PUSH EBX
// 005a087f: CALL core_skeleton.cpp_CDeformableModelInstance_clearAllTextureSetIndices_FUN_005a0430
//   XREF to: 005a0430 (UNCONDITIONAL_CALL)
// 005a0884: ADD ESP,0x4
// 005a0887: MOV dword ptr [EBX + 0x2230],0xffffffff
// 005a0891: POP EDI
// 005a0892: POP ESI
// 005a0893: POP EBX
// 005a0894: RET
