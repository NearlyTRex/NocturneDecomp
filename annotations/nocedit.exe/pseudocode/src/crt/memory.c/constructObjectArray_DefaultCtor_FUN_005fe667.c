// Name: crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
// Address: 005fe667
// Address Range: [[005fe667, 005fe6ae]]
// Convention: __cdecl
// Signature: void * crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
// Cross-references:
//   core_actor.cpp_CDemonActor_renderTargetPoints_FUN_00409b90 (00409b90) at 00409bc0 [UNCONDITIONAL_CALL]
//   core_baron.cpp_FUN_004136b0 (004136b0) at 0041382c [UNCONDITIONAL_CALL]
//   core_bodypart.cpp_CBodyPart_ctor_FUN_00419010 (00419010) at 0041902a [UNCONDITIONAL_CALL]
//   core_boneguy.cpp_CBoneGuy_ctor_FUN_0041bbc0 (0041bbc0) at 0041bbe0 [UNCONDITIONAL_CALL]
//   core_box.cpp_CBox_ctor_FUN_0041dc50 (0041dc50) at 0041dc61 [UNCONDITIONAL_CALL]
//   core_boxactor.cpp_staticInit_FUN_00421650 (00421650) at 0042167f [UNCONDITIONAL_CALL]
//   core_bugs.cpp_CBugs_ctor_FUN_00424cb0 (00424cb0) at 00424ce5 [UNCONDITIONAL_CALL]
//   core_chain.cpp_CChain_ctor_FUN_0042fb80 (0042fb80) at 0042fb9c [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_ctor_FUN_00427e20 (00427e20) at 00427e83 [UNCONDITIONAL_CALL]
//   core_cloth.cpp_FUN_00438ba0 (00438ba0) at 00438bd2 [UNCONDITIONAL_CALL]
//   core_cloth.cpp_SClothVertex_ctor_FUN_0043e420 (0043e420) at 0043e431 [UNCONDITIONAL_CALL]
//   core_curtain.cpp_FUN_004496a0 (004496a0) at 004496bf [UNCONDITIONAL_CALL]
//   core_curtain.cpp_staticInit_FUN_00449610 (00449610) at 00449630 [UNCONDITIONAL_CALL]
//   core_dcamera.cpp_staticInit_FUN_0044bb10 (0044bb10) at 0044bb1f [UNCONDITIONAL_CALL]
//   core_dcube.cpp_staticInit_FUN_00454720 (00454720) at 00454740 [UNCONDITIONAL_CALL]
//   core_dfilter.cpp_staticInit_FUN_0046ff50 (0046ff50) at 0046ff5c [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_staticInit_FUN_00476c50 (00476c50) at 00476c5f [UNCONDITIONAL_CALL]
//   core_dracbrid.cpp_ctor_FUN_00486d30 (00486d30) at 00486d3f [UNCONDITIONAL_CALL]
//   core_dracbrid.cpp_staticInit_FUN_00483ef0 (00483ef0) at 00483f66 [UNCONDITIONAL_CALL]
//   core_dtrace.cpp_staticInit_FUN_004941e0 (004941e0) at 004941ef [UNCONDITIONAL_CALL]
//   core_dtri.cpp_staticInit_FUN_0049a430 (0049a430) at 0049a4a0 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CCrater_ctor_FUN_004c9580 (004c9580) at 004c958f [UNCONDITIONAL_CALL]
//   core_fire.cpp_CGlassParticle_ctor_FUN_004c9630 (004c9630) at 004c9648 [UNCONDITIONAL_CALL]
//   core_fire.cpp_staticInit_FUN_004bef20 (004bef20) at 004befe3 [UNCONDITIONAL_CALL]
//   core_flies.cpp_FUN_004cbd60 (004cbd60) at 004cbd80 [UNCONDITIONAL_CALL]
//   core_flies.cpp_FUN_004ccd20 (004ccd20) at 004ccd2f [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_FUN_004d6260 (004d6260) at 004d6293 [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_FUN_004d6540 (004d6540) at 004d67f0 [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_PickupSomething_FUN_004d5870 (004d5870) at 004d5898 [UNCONDITIONAL_CALL]
//   core_glass.cpp_CGlass_createShatterParticles_FUN_004ea1c0 (004ea1c0) at 004ea1f2 [UNCONDITIONAL_CALL]
//   core_glass.cpp_CGlass_ctor_FUN_004e9040 (004e9040) at 004e906a [UNCONDITIONAL_CALL]
//   core_glass.cpp_CGlass_shatter_FUN_004eaef0 (004eaef0) at 004eaf32 [UNCONDITIONAL_CALL]
//   core_gore.cpp_FUN_004ee370 (004ee370) at 004ee37f [UNCONDITIONAL_CALL]
//   core_gore.cpp_staticInit_FUN_004eb8c0 (004eb8c0) at 004eb921 [UNCONDITIONAL_CALL]
//   core_hero.cpp_FUN_004f3960 (004f3960) at 004f3a33 [UNCONDITIONAL_CALL]
//   core_manpuz.cpp_FUN_00508920 (00508920) at 00508967 [UNCONDITIONAL_CALL]
//   core_manpuz.cpp_FUN_0050b940 (0050b940) at 0050b94f [UNCONDITIONAL_CALL]
//   core_menu.cpp_staticInit_FUN_0050fdb0 (0050fdb0) at 0050fdbc [UNCONDITIONAL_CALL]
//   core_mirror.cpp_CMirror_ctor_FUN_005213c0 (005213c0) at 005213d1 [UNCONDITIONAL_CALL]
//   core_mirror.cpp_staticInit_FUN_00520fb0 (00520fb0) at 00520fd0 [UNCONDITIONAL_CALL]
//   core_moon.cpp_staticInit_FUN_005299f0 (005299f0) at 00529a16 [UNCONDITIONAL_CALL]
//   core_morph.cpp_CMorph_getReady_FUN_0052b680 (0052b680) at 0052b6b4 [UNCONDITIONAL_CALL]
//   core_morph.cpp_FUN_0052b310 (0052b310) at 0052b31c [UNCONDITIONAL_CALL]
//   core_morph.cpp_FUN_0052bcb0 (0052bcb0) at 0052bcc3 [UNCONDITIONAL_CALL]
//   core_morph.cpp_SMorphControlPoint_ctor_FUN_0052cc50 (0052cc50) at 0052cc5f [UNCONDITIONAL_CALL]
//   core_netgame.cpp_CNetGame_ctor_FUN_0053f6d0 (0053f6d0) at 0053f6e1 [UNCONDITIONAL_CALL]
//   core_netgame.cpp_CNetGame_sendGameSetting_FUN_00542dd0 (00542dd0) at 00542e64 [UNCONDITIONAL_CALL]
//   core_netgame.cpp_staticInit_FUN_0053f310 (0053f310) at 0053f339 [UNCONDITIONAL_CALL]
//   core_path.cpp_FUN_00548390 (00548390) at 005484a0 [UNCONDITIONAL_CALL]
//   core_scat.cpp_FUN_00558720 (00558720) at 00558a9a [UNCONDITIONAL_CALL]
//   core_scat.cpp_FUN_00558cf0 (00558cf0) at 00558d23 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_ctor_FUN_005690c0 (005690c0) at 00569102 [UNCONDITIONAL_CALL]
//   core_set.cpp_staticInit_FUN_00569040 (00569040) at 005690b7 [UNCONDITIONAL_CALL]
//   core_setcolid.cpp_CDemonSet_processCollisionTypes_FUN_005716b0 (005716b0) at 00571a11 [UNCONDITIONAL_CALL]
//   core_setcolid.cpp_CDemonSet_testOBBCylinderCollision_FUN_00573140 (00573140) at 0057316a [UNCONDITIONAL_CALL]
//   core_setcolid.cpp_staticInit_FUN_005715b0 (005715b0) at 005715bc [UNCONDITIONAL_CALL]
//   core_setdir.cpp_FUN_005763a0 (005763a0) at 00576403 [UNCONDITIONAL_CALL]
//   core_setdir.cpp_staticInit_FUN_00574790 (00574790) at 005747c3 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_0059ddc0 (0059ddc0) at 0059ddd8 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModel_ctor_FUN_0059a160 (0059a160) at 0059a188 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModel_exactRayTrace_FUN_0059cba0 (0059cba0) at 0059ce32 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModel_shatter_FUN_0059cec0 (0059cec0) at 0059d009 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CSkeleton_ctor_FUN_00599880 (00599880) at 005998a4 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_SVert_ctor_FUN_005a1f70 (005a1f70) at 005a1f7f [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_staticInit_FUN_00599670 (00599670) at 0059967c [UNCONDITIONAL_CALL]
//   core_sound.cpp_staticInit_FUN_005b1760 (005b1760) at 005b1793 [UNCONDITIONAL_CALL]
//   core_spike.cpp_FUN_005b8950 (005b8950) at 005b8a11 [UNCONDITIONAL_CALL]
//   core_stairs.cpp_CStairs_ctor_FUN_005b9b70 (005b9b70) at 005b9b8a [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c3960 (005c3960) at 005c3e79 [UNCONDITIONAL_CALL]
//   core_turret.cpp_FUN_005e2d50 (005e2d50) at 005e2f7c [UNCONDITIONAL_CALL]
//   core_vehicle.cpp_CVehicle_ctor_FUN_005e7940 (005e7940) at 005e7980 [UNCONDITIONAL_CALL]
//   core_wateract.cpp_CWaterActor_ctor_FUN_005ea8a0 (005ea8a0) at 005ea8bf [UNCONDITIONAL_CALL]
//   core_wateract.cpp_staticInit_FUN_005ea810 (005ea810) at 005ea830 [UNCONDITIONAL_CALL]
//   core_weather.cpp_staticInit_FUN_005eeaa0 (005eeaa0) at 005eeabc [UNCONDITIONAL_CALL]
//   crt_memory.c_dispatchObjectArrayConstructor_FUN_00601200 (00601200) at 00601221 [COMPUTED_CALL]
//   shape_edittool.cpp_CEditorTools_draw3DWireframeCube_FUN_004a2050 (004a2050) at 004a2074 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_CLodFace_computeNormalAndPlane_FUN_00519870 (00519870) at 005199c9 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_CLodFace_ctor_FUN_0051ef00 (0051ef00) at 0051ef0f [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_CLodMesh_computeEdgeCollapseCost_FUN_00518910 (00518910) at 00518ae2 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_CLodMesh_extractFaceTexCoordGradient_FUN_00517530 (00517530) at 0051755f [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_staticInit_FUN_00514f70 (00514f70) at 00514f7f [UNCONDITIONAL_CALL]
//   shape_superopt.cpp_CPoly_ctor_FUN_005cc620 (005cc620) at 005cc630 [UNCONDITIONAL_CALL]
//   shape_superopt.cpp_CPoly_intersectPoly_FUN_005ce580 (005ce580) at 005ce6f7 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_staticInit_FUN_005a3940 (005a3940) at 005a3986 [UNCONDITIONAL_CALL]
//   support_newmsg.cpp_CMouse_ctor_FUN_00544380 (00544380) at 005443a1 [UNCONDITIONAL_CALL]

#include "nocturne.h"

void * __cdecl
crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
          (void *array_start,int element_count,WatcomTypeInfo *type_info)

{
  WATCOM_DEFAULT_CONSTRUCTOR_FUNC *pWVar1;
  int iVar2;
  void *param0;
  int loop_counter;
  WatcomTypeInfo *temp_type_info;
  void *original_array_ptr;
  
  pWVar1 = type_info->ctor;
  loop_counter = 0;
  iVar2 = type_info->instance_size;
  param0 = array_start;
  for (; (uint)loop_counter < (uint)element_count; loop_counter = loop_counter + 1) {
    (*pWVar1)(param0);
    param0 = (void *)((int)param0 + iVar2);
  }
  return array_start;
}


// Assembly code:
// 005fe667: PUSH EBX
//   Label: crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
// 005fe668: PUSH ESI
// 005fe669: PUSH EDI
// 005fe66a: PUSH EBP
// 005fe66b: SUB ESP,0xc
// 005fe66e: MOV EBX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 005fe672: MOV EBP,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x8] (READ)
// 005fe676: MOV EDI,dword ptr [ESP + 0x28]
//   XREF to: Stack[0xc] (READ)
// 005fe67a: MOV dword ptr [ESP + 0x4],EDI
//   XREF to: Stack[-0x18] (WRITE)
// 005fe67e: MOV dword ptr [ESP + 0x8],EBX
//   XREF to: Stack[-0x14] (WRITE)
// 005fe682: XOR EDX,EDX
// 005fe684: MOV ESI,dword ptr [EDI + 0x4]
// 005fe687: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0x1c] (DATA)
// 005fe68a: MOV EDI,dword ptr [EDI + 0x10]
// 005fe68d: CMP EBP,dword ptr [ESP]
//   Label: LAB_005fe68d
//   XREF to: Stack[-0x1c] (DATA)
// 005fe690: JA 0x005fe69e
//   XREF to: 005fe69e (CONDITIONAL_JUMP)
// 005fe692: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x14] (READ)
// 005fe696: ADD ESP,0xc
// 005fe699: POP EBP
// 005fe69a: POP EDI
// 005fe69b: POP ESI
// 005fe69c: POP EBX
// 005fe69d: RET
// 005fe69e: PUSH EBX
//   Label: LAB_005fe69e
// 005fe69f: CALL ESI
// 005fe6a1: ADD ESP,0x4
// 005fe6a4: MOV EAX,dword ptr [ESP]
// 005fe6a7: INC EAX
// 005fe6a8: ADD EBX,EDI
// 005fe6aa: MOV dword ptr [ESP],EAX
// 005fe6ad: JMP 0x005fe68d
//   XREF to: 005fe68d (UNCONDITIONAL_JUMP)
