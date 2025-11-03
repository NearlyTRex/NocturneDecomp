// Name: core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
// Address: 005e7830
// Address Range: [[005e7830, 005e78c8]]
// Convention: __cdecl
// Signature: CVector3f * core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
// Cross-references:
//   core_baron.cpp_FUN_004136b0 (004136b0) at 00413705 [UNCONDITIONAL_CALL]
//   core_batcreat.cpp_CBatCreature_process_FUN_00415470 (00415470) at 004158a6 [UNCONDITIONAL_CALL]
//   core_batman.cpp_CBatman_process_FUN_00416870 (00416870) at 0041706a [UNCONDITIONAL_CALL]
//   core_bugs.cpp_FUN_00426420 (00426420) at 004265b9 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_00428d80 (00428d80) at 00428da1 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042b9e0 (0042b9e0) at 0042bb25 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042c5f0 (0042c5f0) at 0042c73f [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042ca70 (0042ca70) at 0042cbc8 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042ede0 (0042ede0) at 0042ee91 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_findSomethingToLookAt_FUN_0042d5a0 (0042d5a0) at 0042d7df [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0 (004286e0) at 00428762 [UNCONDITIONAL_CALL]
//   core_cloth.cpp_OrientBoneCheck_FUN_0043a110 (0043a110) at 0043a1eb [UNCONDITIONAL_CALL]
//   core_colonel.cpp_FUN_0043fa00 (0043fa00) at 0043fb0e [UNCONDITIONAL_CALL]
//   core_colonel.cpp_FUN_0043ff20 (0043ff20) at 004401c2 [UNCONDITIONAL_CALL]
//   core_dracbrid.cpp_FUN_00484410 (00484410) at 00485440 [UNCONDITIONAL_CALL]
//   core_dracbrid.cpp_FUN_004858f0 (004858f0) at 00485a1e [UNCONDITIONAL_CALL]
//   core_emitter.cpp_FUN_004a8fe0 (004a8fe0) at 004a9295 [UNCONDITIONAL_CALL]
//   core_event.cpp_CEventList_FUN_004ae140 (004ae140) at 004af8ec [UNCONDITIONAL_CALL]
//   core_fire.cpp_CBulletTrail_render_FUN_004c21f0 (004c21f0) at 004c22f1 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CLaserBeam_render_FUN_004c25c0 (004c25c0) at 004c261c [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_FUN_004d2ea0 (004d2ea0) at 004d3951 [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_FUN_004d4190 (004d4190) at 004d42ef [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_FUN_004d5c60 (004d5c60) at 004d5d87 [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_FUN_004d6260 (004d6260) at 004d6347 [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_FUN_004d6540 (004d6540) at 004d68dd [UNCONDITIONAL_CALL]
//   core_gargoyle.cpp_CGargoyle_FUN_004e48a0 (004e48a0) at 004e4975 [UNCONDITIONAL_CALL]
//   core_gargoyle.cpp_CGargoyle_unk6_FUN_004e4a00 (004e4a00) at 004e4f9f [UNCONDITIONAL_CALL]
//   core_haystack.cpp_FUN_004f0e40 (004f0e40) at 004f0f57 [UNCONDITIONAL_CALL]
//   core_haystack.cpp_FUN_004f13f0 (004f13f0) at 004f15a3 [UNCONDITIONAL_CALL]
//   core_hero.cpp_FUN_004f2c40 (004f2c40) at 004f2d20 [UNCONDITIONAL_CALL]
//   core_hero.cpp_FUN_004f2f50 (004f2f50) at 004f3037 [UNCONDITIONAL_CALL]
//   core_hero.cpp_FUN_004f3120 (004f3120) at 004f330c [UNCONDITIONAL_CALL]
//   core_hero.cpp_FUN_004f33b0 (004f33b0) at 004f3488 [UNCONDITIONAL_CALL]
//   core_hero.cpp_FUN_004f35b0 (004f35b0) at 004f36d5 [UNCONDITIONAL_CALL]
//   core_hostage.cpp_FUN_004f5ff0 (004f5ff0) at 004f6064 [UNCONDITIONAL_CALL]
//   core_hostage.cpp_RelatedToRescuedTownsfolk_FUN_004f4bd0 (004f4bd0) at 004f5287 [UNCONDITIONAL_CALL]
//   core_hotdemon.cpp_FUN_004f6f20 (004f6f20) at 004f7328 [UNCONDITIONAL_CALL]
//   core_icepick.cpp_FUN_004f80b0 (004f80b0) at 004f81e9 [UNCONDITIONAL_CALL]
//   core_icepick.cpp_FUN_004f8c70 (004f8c70) at 004f8fc3 [UNCONDITIONAL_CALL]
//   core_imp.cpp_FUN_004f9c30 (004f9c30) at 004fa43e [UNCONDITIONAL_CALL]
//   core_larva.cpp_FUN_00503080 (00503080) at 0050360b [UNCONDITIONAL_CALL]
//   core_mimic.cpp_FUN_0051fcc0 (0051fcc0) at 0051fef8 [UNCONDITIONAL_CALL]
//   core_mobster.cpp_CMobster_aimTommyGun_FUN_005267a0 (005267a0) at 005268d6 [UNCONDITIONAL_CALL]
//   core_mobster.cpp_FUN_00525840 (00525840) at 005262bb [UNCONDITIONAL_CALL]
//   core_moloch.cpp_FUN_00528d20 (00528d20) at 00528e73 [UNCONDITIONAL_CALL]
//   core_moloch.cpp_FUN_005293b0 (005293b0) at 005295c3 [UNCONDITIONAL_CALL]
//   core_path.cpp_CPathMap_findPathToDestination_FUN_00547320 (00547320) at 005473e0 [UNCONDITIONAL_CALL]
//   core_path.cpp_CPathMap_getDirection_FUN_005465b0 (005465b0) at 00546991 [UNCONDITIONAL_CALL]
//   core_scat.cpp_FUN_005571f0 (005571f0) at 0055730e [UNCONDITIONAL_CALL]
//   core_scat.cpp_FUN_005578e0 (005578e0) at 00557bb1 [UNCONDITIONAL_CALL]
//   core_scat.cpp_FUN_00558720 (00558720) at 00558b87 [UNCONDITIONAL_CALL]
//   core_scat.cpp_FUN_00558cf0 (00558cf0) at 00558dd7 [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_step_FUN_0055a810 (0055a810) at 0055f5a0 [UNCONDITIONAL_CALL]
//   core_sentinel.cpp_FUN_00568030 (00568030) at 005688cc [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModelInstance_FUN_0059fdd0 (0059fdd0) at 0059fe59 [UNCONDITIONAL_CALL]
//   core_smiley.cpp_FUN_005a2800 (005a2800) at 005a2ea8 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005bb960 (005bb960) at 005bc78e [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005be520 (005be520) at 005be6c4 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c1680 (005c1680) at 005c195e [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c1fe0 (005c1fe0) at 005c23b7 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c2400 (005c2400) at 005c2820 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c3960 (005c3960) at 005c3f80 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_aimLeftPistol_FUN_005c4370 (005c4370) at 005c45ec [UNCONDITIONAL_CALL]
//   core_stranger.cpp_FUN_005c37e0 (005c37e0) at 005c37f4 [UNCONDITIONAL_CALL]
//   core_svetlana.cpp_CSvetlana_process_FUN_005d8ba0 (005d8ba0) at 005d8d18 [UNCONDITIONAL_CALL]
//   core_svetlana.cpp_FUN_005d9260 (005d9260) at 005d95b3 [UNCONDITIONAL_CALL]
//   core_tentacle.cpp_CTentacle_process_FUN_005db050 (005db050) at 005db5b0 [UNCONDITIONAL_CALL]
//   core_turret.cpp_FUN_005e2d50 (005e2d50) at 005e30fa [UNCONDITIONAL_CALL]
//   core_turret.cpp_FUN_005e3280 (005e3280) at 005e32b9 [UNCONDITIONAL_CALL]
//   core_vampboss.cpp_CVampireBoss_process_FUN_005e5970 (005e5970) at 005e67ee [UNCONDITIONAL_CALL]
//   core_werewolf.cpp_CWerewolf_process_FUN_005efde0 (005efde0) at 005f0f24 [UNCONDITIONAL_CALL]
//   core_xform.cpp_buildMirrorTransform_FUN_005f7000 (005f7000) at 005f706e [UNCONDITIONAL_CALL]
//   core_zombie.cpp_CZombie_FUN_005fbe70 (005fbe70) at 005fbf7f [UNCONDITIONAL_CALL]
//   core_zombie.cpp_CZombie_process_FUN_005f9470 (005f9470) at 005fab84 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_math.c_atan2_FUN_006013b1

#include "nocturne.h"

CVector3f * __cdecl
core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
          (CVector3f *out_euler_angles,CVector3f *in_direction_vector)

{
  int extraout_ECX;
  CVector3f *extraout_ECX_00;
  float *extraout_EDX;
  float10 fVar1;
  undefined4 uStack_14;
  
  out_euler_angles->z = 0.0;
  if ((ABS(in_direction_vector->x) == 0.0) && (ABS(in_direction_vector->z) == 0.0)) {
    out_euler_angles->y = 0.0;
    if (0.0 < in_direction_vector->y) {
      uStack_14 = 0xbff921fb;
    }
    else {
      uStack_14 = 0x3ff921fb;
    }
    out_euler_angles->x = (float)(double)CONCAT44(uStack_14,0x54411744);
    return out_euler_angles;
  }
  fVar1 = crt_math_c_atan2_FUN_006013b1
                    ((float10)in_direction_vector->x,(float10)in_direction_vector->z);
  *(float *)(extraout_ECX + 4) = (float)fVar1;
  fVar1 = crt_math_c_atan2_FUN_006013b1
                    ((float10)extraout_EDX[1],
                     SQRT((float10)*extraout_EDX * (float10)*extraout_EDX +
                          (float10)extraout_EDX[2] * (float10)extraout_EDX[2]));
  extraout_ECX_00->x = (float)-fVar1;
  return extraout_ECX_00;
}


// Assembly code:
// 005e7830: PUSH EBX
//   Label: core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
// 005e7831: PUSH EDI
// 005e7832: PUSH EBP
// 005e7833: MOV EBP,ESP
// 005e7835: SUB ESP,0x8
// 005e7838: AND ESP,0xfffffff8
// 005e783b: MOV ECX,dword ptr [EBP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 005e783e: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 005e7841: MOV dword ptr [ECX + 0x8],0x0
// 005e7848: TEST dword ptr [EDX],0x7fffffff
// 005e784e: JNZ 0x005e789b
//   XREF to: 005e789b (CONDITIONAL_JUMP)
// 005e7850: TEST dword ptr [EDX + 0x8],0x7fffffff
// 005e7857: JNZ 0x005e789b
//   XREF to: 005e789b (CONDITIONAL_JUMP)
// 005e7859: MOV dword ptr [ECX + 0x4],0x0
// 005e7860: FLDZ
// 005e7862: FCOMP float ptr [EDX + 0x4]
// 005e7865: FNSTSW AX
// 005e7867: SAHF
// 005e7868: JC 0x005e7888
//   XREF to: 005e7888 (CONDITIONAL_JUMP)
// 005e786a: MOV EDI,0x54411744
// 005e786f: MOV EAX,0x3ff921fb
// 005e7874: MOV dword ptr [ESP],EDI
//   XREF to: Stack[-0x18] (DATA)
// 005e7877: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005e787b: FLD double ptr [ESP]
//   Label: LAB_005e787b
//   XREF to: Stack[-0x18] (DATA)
// 005e787e: FSTP float ptr [ECX]
// 005e7880: MOV EAX,ECX
// 005e7882: MOV ESP,EBP
// 005e7884: POP EBP
// 005e7885: POP EDI
// 005e7886: POP EBX
// 005e7887: RET
// 005e7888: MOV EDX,0x54411744
//   Label: LAB_005e7888
// 005e788d: MOV EBX,0xbff921fb
// 005e7892: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0x18] (DATA)
// 005e7895: MOV dword ptr [ESP + 0x4],EBX
//   XREF to: Stack[-0x14] (WRITE)
// 005e7899: JMP 0x005e787b
//   XREF to: 005e787b (UNCONDITIONAL_JUMP)
// 005e789b: FLD float ptr [EDX + 0x8]
//   Label: LAB_005e789b
// 005e789e: FLD float ptr [EDX]
// 005e78a0: CALL crt_math.c_atan2_FUN_006013b1
//   XREF to: 006013b1 (UNCONDITIONAL_CALL)
// 005e78a5: FSTP float ptr [ECX + 0x4]
// 005e78a8: FLD float ptr [EDX + 0x8]
// 005e78ab: FMUL ST0
// 005e78ad: FLD float ptr [EDX]
// 005e78af: FMUL ST0
// 005e78b1: FADDP
// 005e78b3: FSQRT
// 005e78b5: FLD float ptr [EDX + 0x4]
// 005e78b8: CALL crt_math.c_atan2_FUN_006013b1
//   XREF to: 006013b1 (UNCONDITIONAL_CALL)
// 005e78bd: FCHS
// 005e78bf: FSTP float ptr [ECX]
// 005e78c1: MOV EAX,ECX
// 005e78c3: MOV ESP,EBP
// 005e78c5: POP EBP
// 005e78c6: POP EDI
// 005e78c7: POP EBX
// 005e78c8: RET
