// Name: core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
// Address: 0040cd70
// Address Range: [[0040cd70, 0040ce24]]
// Convention: __cdecl
// Signature: float core_actor.cpp_normalizeAngleToPi_FUN_0040cd70(float angle_radians)
// Cross-references:
//   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10 (00408c10) at 00408c47 [UNCONDITIONAL_CALL]
//   core_baron.cpp_FUN_004136b0 (004136b0) at 0041373e [UNCONDITIONAL_CALL]
//   core_batcreat.cpp_CBatCreature_process_FUN_00415470 (00415470) at 004158ba [UNCONDITIONAL_CALL]
//   core_batman.cpp_CBatman_process_FUN_00416870 (00416870) at 0041707e [UNCONDITIONAL_CALL]
//   core_boxactor.cpp_CBoxActor_process_FUN_004219e0 (004219e0) at 00421b49 [UNCONDITIONAL_CALL]
//   core_bugs.cpp_FUN_00426420 (00426420) at 004266cf [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_00428d80 (00428d80) at 00428dbe [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042c5f0 (0042c5f0) at 0042c78f [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042ca70 (0042ca70) at 0042cc1a [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_findSomethingToLookAt_FUN_0042d5a0 (0042d5a0) at 0042dc5c [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0 (004286e0) at 004288a3 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_FUN_00428670 (00428670) at 00428677 [UNCONDITIONAL_CALL]
//   core_cloth.cpp_FUN_0043abb0 (0043abb0) at 0043b192 [UNCONDITIONAL_CALL]
//   core_colonel.cpp_FUN_0043fa00 (0043fa00) at 0043fb19 [UNCONDITIONAL_CALL]
//   core_colonel.cpp_FUN_0043ff20 (0043ff20) at 004400cd [UNCONDITIONAL_CALL]
//   core_dracbrid.cpp_FUN_00484410 (00484410) at 00485454 [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_FUN_004d2ea0 (004d2ea0) at 004d3765 [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_FUN_004d4190 (004d4190) at 004d4303 [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_FUN_004d5c60 (004d5c60) at 004d5e65 [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_FUN_004d6540 (004d6540) at 004d6a2c [UNCONDITIONAL_CALL]
//   core_gargoyle.cpp_CGargoyle_FUN_004e48a0 (004e48a0) at 004e49ae [UNCONDITIONAL_CALL]
//   core_gargoyle.cpp_CGargoyle_unk6_FUN_004e4a00 (004e4a00) at 004e4fb3 [UNCONDITIONAL_CALL]
//   core_haystack.cpp_FUN_004f0e40 (004f0e40) at 004f0f62 [UNCONDITIONAL_CALL]
//   core_haystack.cpp_FUN_004f13f0 (004f13f0) at 004f1896 [UNCONDITIONAL_CALL]
//   core_hero.cpp_FUN_004f3120 (004f3120) at 004f3317 [UNCONDITIONAL_CALL]
//   core_hero.cpp_FUN_004f33b0 (004f33b0) at 004f349c [UNCONDITIONAL_CALL]
//   core_hostage.cpp_FUN_004f5ff0 (004f5ff0) at 004f6078 [UNCONDITIONAL_CALL]
//   core_hostage.cpp_RelatedToRescuedTownsfolk_FUN_004f4bd0 (004f4bd0) at 004f5292 [UNCONDITIONAL_CALL]
//   core_hotdemon.cpp_FUN_004f6f20 (004f6f20) at 004f733c [UNCONDITIONAL_CALL]
//   core_icepick.cpp_FUN_004f80b0 (004f80b0) at 004f81f4 [UNCONDITIONAL_CALL]
//   core_icepick.cpp_FUN_004f8c70 (004f8c70) at 004f9248 [UNCONDITIONAL_CALL]
//   core_imp.cpp_FUN_004f9c30 (004f9c30) at 004fa452 [UNCONDITIONAL_CALL]
//   core_larva.cpp_FUN_00503080 (00503080) at 0050361f [UNCONDITIONAL_CALL]
//   core_mimic.cpp_FUN_0051fcc0 (0051fcc0) at 0051ff03 [UNCONDITIONAL_CALL]
//   core_mobster.cpp_CMobster_aimTommyGun_FUN_005267a0 (005267a0) at 005268eb [UNCONDITIONAL_CALL]
//   core_mobster.cpp_FUN_00525840 (00525840) at 005262cf [UNCONDITIONAL_CALL]
//   core_moloch.cpp_FUN_00528d20 (00528d20) at 00528e7e [UNCONDITIONAL_CALL]
//   core_moloch.cpp_FUN_005293b0 (005293b0) at 005295f6 [UNCONDITIONAL_CALL]
//   core_platfrm.cpp_FUN_0054cc30 (0054cc30) at 0054d654 [UNCONDITIONAL_CALL]
//   core_platfrm.cpp_FUN_0054df80 (0054df80) at 0054dfe2 [UNCONDITIONAL_CALL]
//   core_scat.cpp_FUN_005571f0 (005571f0) at 00557319 [UNCONDITIONAL_CALL]
//   core_scat.cpp_FUN_005578e0 (005578e0) at 00557be4 [UNCONDITIONAL_CALL]
//   core_scat.cpp_FUN_00558720 (00558720) at 005587d0 [UNCONDITIONAL_CALL]
//   core_sentinel.cpp_FUN_00568030 (00568030) at 005688e0 [UNCONDITIONAL_CALL]
//   core_smiley.cpp_FUN_005a2800 (005a2800) at 005a2ebc [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005bb960 (005bb960) at 005bccc7 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c3960 (005c3960) at 005c42e0 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_aimLeftPistol_FUN_005c4370 (005c4370) at 005c47c7 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_FUN_005c3750 (005c3750) at 005c37bc [UNCONDITIONAL_CALL]
//   core_stranger.cpp_FUN_005c37e0 (005c37e0) at 005c38bc [UNCONDITIONAL_CALL]
//   core_svetlana.cpp_CSvetlana_process_FUN_005d8ba0 (005d8ba0) at 005d8d23 [UNCONDITIONAL_CALL]
//   core_svetlana.cpp_FUN_005d9260 (005d9260) at 005d95e6 [UNCONDITIONAL_CALL]
//   core_tentacle.cpp_CTentacle_process_FUN_005db050 (005db050) at 005db5c4 [UNCONDITIONAL_CALL]
//   core_turret.cpp_FUN_005e3280 (005e3280) at 005e32f9 [UNCONDITIONAL_CALL]
//   core_tvbat.cpp_CTVBat_process_FUN_005e4210 (005e4210) at 005e4723 [UNCONDITIONAL_CALL]
//   core_vampboss.cpp_CVampireBoss_process_FUN_005e5970 (005e5970) at 005e5de4 [UNCONDITIONAL_CALL]
//   core_vampboss.cpp_FUN_005e58d0 (005e58d0) at 005e58d7 [UNCONDITIONAL_CALL]
//   core_werewolf.cpp_CWerewolf_process_FUN_005efde0 (005efde0) at 005f0f3b [UNCONDITIONAL_CALL]
// Globals:
//   double DOUBLE_00614310 = -3.14159265350000
//   double DOUBLE_00614318 = 3.14159265350000
//   double DOUBLE_00614320 = 0.159154943096444
//   double DOUBLE_00614328 = -6.28318530700000
//   double DOUBLE_00614330 = -0.159154943096444
//   double DOUBLE_00614338 = 6.28318530700000
// Function calls:
//   crt_math.c_floor_FUN_005feb90

#include "nocturne.h"

float __cdecl core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(float angle_radians)

{
  double dVar1;
  undefined4 extraout_EAX;
  undefined4 extraout_EAX_00;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  float10 in_ST0;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_c;
  
  dVar1 = (double)angle_radians;
  local_18 = SUB84(dVar1,0);
  if (angle_radians < (float)DOUBLE_00614310) {
    uStack_1c = (undefined4)((ulonglong)((dVar1 + DOUBLE_00614318) * DOUBLE_00614330) >> 0x20);
    crt_math_c_floor_FUN_005feb90((double)in_ST0);
    uStack_c = ((float)(double)CONCAT44(extraout_EDX,extraout_EAX) + 1.0) * (float)DOUBLE_00614338 +
               (float)(double)CONCAT44(local_18,uStack_1c);
  }
  else if (DOUBLE_00614318 < dVar1) {
    uStack_1c = (undefined4)((ulonglong)((dVar1 + DOUBLE_00614310) * DOUBLE_00614320) >> 0x20);
    crt_math_c_floor_FUN_005feb90((double)in_ST0);
    return ((float)(double)CONCAT44(extraout_EDX_00,extraout_EAX_00) + 1.0) * (float)DOUBLE_00614328
           + (float)(double)CONCAT44(local_18,uStack_1c);
  }
  return uStack_c;
}


// Assembly code:
// 0040cd70: PUSH EBP
//   Label: core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
// 0040cd71: MOV EBP,ESP
// 0040cd73: SUB ESP,0x14
// 0040cd76: AND ESP,0xfffffff8
// 0040cd79: FLD float ptr [EBP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0040cd7c: FST double ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 0040cd7f: FCOMP double ptr [0x00614310]
//   XREF to: 00614310 (READ)
// 0040cd85: FNSTSW AX
// 0040cd87: SAHF
// 0040cd88: JC 0x0040cda7
//   XREF to: 0040cda7 (CONDITIONAL_JUMP)
// 0040cd8a: FLD double ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 0040cd8d: FCOMP double ptr [0x00614318]
//   XREF to: 00614318 (READ)
// 0040cd93: FNSTSW AX
// 0040cd95: SAHF
// 0040cd96: JA 0x0040cde3
//   XREF to: 0040cde3 (CONDITIONAL_JUMP)
// 0040cd98: MOV EAX,dword ptr [EBP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0040cd9b: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x8] (WRITE)
// 0040cd9f: MOV EAX,dword ptr [ESP + 0x10]
//   Label: LAB_0040cd9f
//   XREF to: Stack[-0x8] (READ)
// 0040cda3: MOV ESP,EBP
// 0040cda5: POP EBP
// 0040cda6: RET
// 0040cda7: FLD double ptr [ESP]
//   Label: LAB_0040cda7
//   XREF to: Stack[-0x18] (DATA)
// 0040cdaa: FADD double ptr [0x00614318]
//   XREF to: 00614318 (READ)
// 0040cdb0: FMUL double ptr [0x00614330]
//   XREF to: 00614330 (READ)
// 0040cdb6: SUB ESP,0x8
// 0040cdb9: FSTP double ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 0040cdbc: CALL crt_math.c_floor_FUN_005feb90
//   XREF to: 005feb90 (UNCONDITIONAL_CALL)
// 0040cdc1: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 0040cdc5: MOV dword ptr [ESP + 0x14],EDX
//   XREF to: Stack[-0xc] (WRITE)
// 0040cdc9: FLD double ptr [ESP + 0x10]
//   XREF to: Stack[-0x10] (READ)
// 0040cdcd: FLD1
// 0040cdcf: FADDP
// 0040cdd1: FMUL double ptr [0x00614338]
//   XREF to: 00614338 (READ)
// 0040cdd7: ADD ESP,0x8
// 0040cdda: FADD double ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 0040cddd: FSTP float ptr [ESP + 0x10]
//   XREF to: Stack[-0x8] (WRITE)
// 0040cde1: JMP 0x0040cd9f
//   XREF to: 0040cd9f (UNCONDITIONAL_JUMP)
// 0040cde3: FLD double ptr [ESP]
//   Label: LAB_0040cde3
//   XREF to: Stack[-0x18] (DATA)
// 0040cde6: FADD double ptr [0x00614310]
//   XREF to: 00614310 (READ)
// 0040cdec: FMUL double ptr [0x00614320]
//   XREF to: 00614320 (READ)
// 0040cdf2: SUB ESP,0x8
// 0040cdf5: FSTP double ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 0040cdf8: CALL crt_math.c_floor_FUN_005feb90
//   XREF to: 005feb90 (UNCONDITIONAL_CALL)
// 0040cdfd: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 0040ce01: MOV dword ptr [ESP + 0x14],EDX
//   XREF to: Stack[-0xc] (WRITE)
// 0040ce05: FLD double ptr [ESP + 0x10]
//   XREF to: Stack[-0x10] (READ)
// 0040ce09: FLD1
// 0040ce0b: FADDP
// 0040ce0d: FMUL double ptr [0x00614328]
//   XREF to: 00614328 (READ)
// 0040ce13: ADD ESP,0x8
// 0040ce16: FADD double ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 0040ce19: FSTP float ptr [ESP + 0x10]
//   XREF to: Stack[-0x8] (WRITE)
// 0040ce1d: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x8] (READ)
// 0040ce21: MOV ESP,EBP
// 0040ce23: POP EBP
// 0040ce24: RET
