// Name: crt_stdlib.c_rand_FUN_005feb5c
// Address: 005feb5c
// Address Range: [[005feb5c, 005feb7e]]
// Convention: __watcallRegister
// Signature: int crt_stdlib.c_rand_FUN_005feb5c(void)
// Cross-references:
//   core_actor.cpp_getRandomFloat_FUN_0040cbc0 (0040cbc0) at 0040cbee [UNCONDITIONAL_CALL]
//   core_actor.cpp_getRandomFloat_FUN_0040cc10 (0040cc10) at 0040cc5b [UNCONDITIONAL_CALL]
//   core_actor.cpp_getRandomInt_FUN_0040cc70 (0040cc70) at 0040cca5 [UNCONDITIONAL_CALL]
//   core_actor.cpp_randomChance_FUN_0040cd10 (0040cd10) at 0040cd4d [UNCONDITIONAL_CALL]
//   core_baron.cpp_FUN_004136b0 (004136b0) at 004138a9 [UNCONDITIONAL_CALL]
//   core_batcreat.cpp_FUN_00415dd0 (00415dd0) at 00415df0 [UNCONDITIONAL_CALL]
//   core_batman.cpp_FUN_00417660 (00417660) at 00417680 [UNCONDITIONAL_CALL]
//   core_boxactor.cpp_FUN_00422a50 (00422a50) at 00422b2a [UNCONDITIONAL_CALL]
//   core_bride.cpp_FUN_00424600 (00424600) at 00424623 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042af60 (0042af60) at 0042afca [UNCONDITIONAL_CALL]
//   core_cow.cpp_FUN_004448c0 (004448c0) at 004448e0 [UNCONDITIONAL_CALL]
//   core_dcamera.cpp_CDemonCamera_renderLightCoronas_FUN_00450ac0 (00450ac0) at 00450aea [UNCONDITIONAL_CALL]
//   core_dcamera.cpp_generateFogGrid_FUN_0044bba0 (0044bba0) at 0044bbf8 [UNCONDITIONAL_CALL]
//   core_dlight.cpp_CDemonLight_drawShadowDepthBuffer_FUN_00476670 (00476670) at 00476685 [UNCONDITIONAL_CALL]
//   core_dtrace.cpp_CDemonRaytrace_renderGridCube_FUN_00496e70 (00496e70) at 00497219 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CLightningBolt_render_FUN_004c5720 (004c5720) at 004c5745 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_process_FUN_004e3190 (004e3190) at 004e31c0 [UNCONDITIONAL_CALL]
//   core_gargoyle.cpp_CGargoyle_unk4_FUN_004e5530 (004e5530) at 004e5550 [UNCONDITIONAL_CALL]
//   core_ghoul.cpp_FUN_004e8520 (004e8520) at 004e8540 [UNCONDITIONAL_CALL]
//   core_icepick.cpp_FUN_004f93a0 (004f93a0) at 004f9427 [UNCONDITIONAL_CALL]
//   core_imp.cpp_FUN_004fab60 (004fab60) at 004fab80 [UNCONDITIONAL_CALL]
//   core_inv.cpp_CInventory_initialize_FUN_004fd190 (004fd190) at 004fd1ab [UNCONDITIONAL_CALL]
//   core_level.cpp_CLevelLoader_show_FUN_00503dc0 (00503dc0) at 00503e74 [UNCONDITIONAL_CALL]
//   core_main.c_finalizeGameSystems_FUN_00508570 (00508570) at 005085ca [UNCONDITIONAL_CALL]
//   core_main.c_showPromoScreen_FUN_00508340 (00508340) at 00508369 [UNCONDITIONAL_CALL]
//   core_menu.cpp_GetGameMainMenuChoice_FUN_00510000 (00510000) at 005100ac [UNCONDITIONAL_CALL]
//   core_mobster.cpp_FUN_00527380 (00527380) at 005273a3 [UNCONDITIONAL_CALL]
//   core_moon.cpp_CMoon_init_FUN_00529ae0 (00529ae0) at 00529b02 [UNCONDITIONAL_CALL]
//   core_netgame.cpp_CNetGame_processServerFrame_FUN_00543150 (00543150) at 005433a1 [UNCONDITIONAL_CALL]
//   core_netgame.cpp_FUN_00541390 (00541390) at 005416a7 [UNCONDITIONAL_CALL]
//   core_path.cpp_CPathMap_reset_FUN_00548510 (00548510) at 0054856f [UNCONDITIONAL_CALL]
//   core_path.cpp_CPathMap_updateIfNeeded_FUN_00546a60 (00546a60) at 00546b48 [UNCONDITIONAL_CALL]
//   core_procedur.cpp_CreateProceduralWaterFrame_FUN_005542b0 (005542b0) at 005542c7 [UNCONDITIONAL_CALL]
//   core_simbox.cpp_CSimBox_process_FUN_00588f20 (00588f20) at 00589061 [UNCONDITIONAL_CALL]
//   core_smiley.cpp_FUN_005a32a0 (005a32a0) at 005a3313 [UNCONDITIONAL_CALL]
//   core_sound.cpp_CSound_FUN_005b1ed0 (005b1ed0) at 005b1f81 [UNCONDITIONAL_CALL]
//   core_sound.cpp_CSound_FUN_005b2fd0 (005b2fd0) at 005b3803 [UNCONDITIONAL_CALL]
//   core_sound.cpp_FUN_005b2770 (005b2770) at 005b2c73 [UNCONDITIONAL_CALL]
//   core_zombie.cpp_CZombie_FUN_005fc220 (005fc220) at 005fc240 [UNCONDITIONAL_CALL]
//   shape_cramtex.cpp_generateTextureAtlasLayout_FUN_00444d90 (00444d90) at 00444e51 [UNCONDITIONAL_CALL]
//   shape_cramtex.cpp_generateTextureAtlas_FUN_00445820 (00445820) at 00445834 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_stdlib.c_GetRandomSeedPointer_FUN_005feb50

#include "nocturne.h"

int crt_stdlib_c_rand_FUN_005feb5c(void)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = crt_stdlib_c_GetRandomSeedPointer_FUN_005feb50();
  if (puVar1 == (uint *)0x0) {
    return 0;
  }
  uVar2 = *puVar1 * 0x41c64e6d + 0x3039;
  *puVar1 = uVar2;
  return uVar2 >> 0x10 & 0x7fff;
}


// Assembly code:
// 005feb5c: CALL crt_stdlib.c_GetRandomSeedPointer_FUN_005feb50
//   Label: crt_stdlib.c_rand_FUN_005feb5c
//   XREF to: 005feb50 (UNCONDITIONAL_CALL)
// 005feb61: TEST EAX,EAX
// 005feb63: JNZ 0x005feb66
//   XREF to: 005feb66 (CONDITIONAL_JUMP)
// 005feb65: RET
// 005feb66: IMUL EDX,dword ptr [EAX],0x41c64e6d
//   Label: LAB_005feb66
// 005feb6c: ADD EDX,0x3039
// 005feb72: MOV dword ptr [EAX],EDX
// 005feb74: MOV EAX,EDX
// 005feb76: SHR EAX,0x10
// 005feb79: AND EAX,0x7fff
// 005feb7e: RET
