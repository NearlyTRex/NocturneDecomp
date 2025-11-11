// Name: crt_stdlib.c_atexit_FUN_005ff060
// Address: 005ff060
// Address Range: [[005ff060, 005ff06d]]
// Convention: __cdecl
// Signature: void crt_stdlib.c_atexit_FUN_005ff060(WatcomStaticDestructorNode * exit_node)
// Cross-references:
//   core_boxactor.cpp_staticInit_FUN_00421650 (00421650) at 0042168c [UNCONDITIONAL_CALL]
//   core_cloth.cpp_staticInit_FUN_00438b80 (00438b80) at 00438b92 [UNCONDITIONAL_CALL]
//   core_dcamera.cpp_staticInit_FUN_0044bb10 (0044bb10) at 0044bb40 [UNCONDITIONAL_CALL]
//   core_dfilter.cpp_staticInit_FUN_0046ff50 (0046ff50) at 0046ffa4 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_staticInit_FUN_00476c50 (00476c50) at 00476c6c [UNCONDITIONAL_CALL]
//   core_dracbrid.cpp_staticInit_FUN_00483ef0 (00483ef0) at 00483f73 [UNCONDITIONAL_CALL]
//   core_fire.cpp_staticInit_FUN_004bef20 (004bef20) at 004bf0c7 [UNCONDITIONAL_CALL]
//   core_game.cpp_staticInit_FUN_004d76d0 (004d76d0) at 004d7720 [UNCONDITIONAL_CALL]
//   core_gore.cpp_staticInit_FUN_004eb8c0 (004eb8c0) at 004eb945 [UNCONDITIONAL_CALL]
//   core_ground.cpp_staticInit_FUN_004eeb90 (004eeb90) at 004eebac [UNCONDITIONAL_CALL]
//   core_inv.cpp_staticInit_FUN_004fcc30 (004fcc30) at 004fcd60 [UNCONDITIONAL_CALL]
//   core_level.cpp_staticInit_FUN_00503d80 (00503d80) at 00503d9f [UNCONDITIONAL_CALL]
//   core_main.c_staticInit_FUN_00506e80 (00506e80) at 00506f05 [UNCONDITIONAL_CALL]
//   core_menu.cpp_staticInit_FUN_0050ee40 (0050ee40) at 0050ee52 [UNCONDITIONAL_CALL]
//   core_menu.cpp_staticInit_FUN_0050fdb0 (0050fdb0) at 0050fde3 [UNCONDITIONAL_CALL]
//   core_moon.cpp_staticInit_FUN_005299f0 (005299f0) at 00529a02 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_0053c4f0 (0053c4f0) at 0053c6d4 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_staticInit_FUN_00535c30 (00535c30) at 00535c4f [UNCONDITIONAL_CALL]
//   core_netgame.cpp_staticInit_FUN_0053f310 (0053f310) at 0053f322 [UNCONDITIONAL_CALL]
//   core_path.cpp_FUN_00548390 (00548390) at 005484ad [UNCONDITIONAL_CALL]
//   core_podmain.cpp_staticInit_FUN_00551990 (00551990) at 005519ad [UNCONDITIONAL_CALL]
//   core_script.cpp_staticInit_FUN_005591b0 (005591b0) at 005591c2 [UNCONDITIONAL_CALL]
//   core_set.cpp_staticInit_FUN_00569040 (00569040) at 005690a0 [UNCONDITIONAL_CALL]
//   core_setdir.cpp_staticInit_FUN_00574790 (00574790) at 005747ac [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_FUN_00577af0 (00577af0) at 00577d1f [UNCONDITIONAL_CALL]
//   core_setedit.cpp_staticInit_FUN_00576930 (00576930) at 00576942 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_CDeformableModelInstance_viewModel_FUN_005968b0 (005968b0) at 00596ce0 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_staticInit_FUN_00599670 (00599670) at 00599689 [UNCONDITIONAL_CALL]
//   core_sound.cpp_FUN_005b1fd0 (005b1fd0) at 005b246e [UNCONDITIONAL_CALL]
//   core_sound.cpp_staticInit_FUN_005b1760 (005b1760) at 005b177f [UNCONDITIONAL_CALL]
//   core_texlist.cpp_staticInit_FUN_005dbdb0 (005dbdb0) at 005dbdc2 [UNCONDITIONAL_CALL]
//   core_water.cpp_staticInit_FUN_005e9da0 (005e9da0) at 005e9db2 [UNCONDITIONAL_CALL]
//   engine_console.cpp_staticInit_FUN_004417e0 (004417e0) at 004417fa [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_staticInit_FUN_0049d170 (0049d170) at 0049d182 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_CLodMesh_FUN_00518910 (00518910) at 00518aef [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_ReadingOrDecodingSoundFile_FUN_005a4c80 (005a4c80) at 005a4d29 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_getSampleInfo_FUN_005aa3f0 (005aa3f0) at 005aa5a5 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_staticInit_FUN_005a3940 (005a3940) at 005a3993 [UNCONDITIONAL_CALL]
//   support_newmsg.cpp_staticInit_FUN_00544360 (00544360) at 00544372 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_stdlib.c_atexitRegisterNode_FUN_00605b89

#include "nocturne.h"

void __cdecl crt_stdlib_c_atexit_FUN_005ff060(WatcomStaticDestructorNode *exit_node)

{
  crt_stdlib_c_atexitRegisterNode_FUN_00605b89(exit_node);
  return;
}


// Assembly code:
// 005ff060: MOV EDX,dword ptr [ESP + 0x4]
//   Label: crt_stdlib.c_atexit_FUN_005ff060
//   XREF to: Stack[0x4] (READ)
// 005ff064: PUSH EDX
// 005ff065: CALL crt_stdlib.c_atexitRegisterNode_FUN_00605b89
//   XREF to: 00605b89 (UNCONDITIONAL_CALL)
// 005ff06a: ADD ESP,0x4
// 005ff06d: RET
