// Name: engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
// Address: 0048c4f0
// Address Range: [[0048c4f0, 0048c621]]
// Convention: __cdecl
// Signature: void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
// Cross-references:
//   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00 (00408b00) at 00408b28 [UNCONDITIONAL_CALL]
//   core_anvil.cpp_CAnvil_FUN_00411ec0 (00411ec0) at 00411efa [UNCONDITIONAL_CALL]
//   core_baron.cpp_CBaron_FUN_00413ae0 (00413ae0) at 00413baf [UNCONDITIONAL_CALL]
//   core_battery.cpp_FUN_00417f80 (00417f80) at 00417fa9 [UNCONDITIONAL_CALL]
//   core_bodypart.cpp_FUN_004194b0 (004194b0) at 00419576 [UNCONDITIONAL_CALL]
//   core_boxactor.cpp_FUN_00421e00 (00421e00) at 00421e70 [UNCONDITIONAL_CALL]
//   core_boxactor.cpp_FUN_00421ef0 (00421ef0) at 00421f3d [UNCONDITIONAL_CALL]
//   core_bugs.cpp_FUN_004251b0 (004251b0) at 0042525c [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042a420 (0042a420) at 0042a4e7 [UNCONDITIONAL_CALL]
//   core_cloth.cpp_BoneAndClothEditor_FUN_0043c880 (0043c880) at 0043cac5 [UNCONDITIONAL_CALL]
//   core_cloth.cpp_FUN_0043b7e0 (0043b7e0) at 0043b828 [UNCONDITIONAL_CALL]
//   core_course.cpp_FUN_00443bc0 (00443bc0) at 00443f05 [UNCONDITIONAL_CALL]
//   core_crate.cpp_FUN_00448880 (00448880) at 004488a9 [UNCONDITIONAL_CALL]
//   core_dcamera.cpp_CDemonCamera_isBoundingBoxVisible_FUN_00452180 (00452180) at 0045227a [UNCONDITIONAL_CALL]
//   core_dlight.cpp_CDemonLight_renderCoronaGeometry_FUN_004736c0 (004736c0) at 00473707 [UNCONDITIONAL_CALL]
//   core_dlight.cpp_CDemonLight_renderExternalVolumetricShafts_FUN_004758d0 (004758d0) at 00475b20 [UNCONDITIONAL_CALL]
//   core_dlight.cpp_CDemonLight_renderLightBloomQuad_FUN_00473a20 (00473a20) at 00473a7d [UNCONDITIONAL_CALL]
//   core_dlight.cpp_CDemonLight_renderLightGlowSprites_FUN_00473f90 (00473f90) at 004743eb [UNCONDITIONAL_CALL]
//   core_dlight.cpp_CDemonLight_renderRadialVolumetricScattering_FUN_00475210 (00475210) at 00475264 [UNCONDITIONAL_CALL]
//   core_dlight.cpp_CDemonLight_renderVolumetricLightShaft_FUN_00474ad0 (00474ad0) at 00474ed6 [UNCONDITIONAL_CALL]
//   core_dlight.cpp_renderConeLightGeometry_FUN_004760d0 (004760d0) at 00476120 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0 (0047cbc0) at 0047cdba [UNCONDITIONAL_CALL]
//   core_filmreel.cpp_FUN_004be810 (004be810) at 004be839 [UNCONDITIONAL_CALL]
//   core_filmreel.cpp_FUN_004bed00 (004bed00) at 004bed7b [UNCONDITIONAL_CALL]
//   core_fire.cpp_CBulletHole_render_FUN_004bfac0 (004bfac0) at 004bfaee [UNCONDITIONAL_CALL]
//   core_fire.cpp_CBulletTrail_render_FUN_004c21f0 (004c21f0) at 004c23cc [UNCONDITIONAL_CALL]
//   core_fire.cpp_CExplosion_render_FUN_004c3b10 (004c3b10) at 004c3ba0 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CGlassParticle_render_FUN_004c1ef0 (004c1ef0) at 004c1f1c [UNCONDITIONAL_CALL]
//   core_fire.cpp_CGunFlame_render_FUN_004c50b0 (004c50b0) at 004c513f [UNCONDITIONAL_CALL]
//   core_fire.cpp_CLaserBeam_render_FUN_004c25c0 (004c25c0) at 004c2a20 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CLightningBolt_render_FUN_004c5720 (004c5720) at 004c58b1 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CMuzzleFlash_render_FUN_004c1a30 (004c1a30) at 004c1a66 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CShell_render_FUN_004c6200 (004c6200) at 004c62cb [UNCONDITIONAL_CALL]
//   core_fire.cpp_CStake_render_FUN_004c0140 (004c0140) at 004c016a [UNCONDITIONAL_CALL]
//   core_fire.cpp_CToss_render_FUN_004c4160 (004c4160) at 004c419c [UNCONDITIONAL_CALL]
//   core_fire.cpp_CTrail_render_FUN_004c5e90 (004c5e90) at 004c5f4f [UNCONDITIONAL_CALL]
//   core_flame.cpp_FUN_004ca110 (004ca110) at 004ca6f5 [UNCONDITIONAL_CALL]
//   core_flamecan.cpp_FUN_004cb4c0 (004cb4c0) at 004cb4e9 [UNCONDITIONAL_CALL]
//   core_gasmask.cpp_CGasMask_FUN_004e5da0 (004e5da0) at 004e5dc9 [UNCONDITIONAL_CALL]
//   core_gore.cpp_FUN_004ec500 (004ec500) at 004ec5d4 [UNCONDITIONAL_CALL]
//   core_inv.cpp_CInventory_renderItemModel_FUN_004fee00 (004fee00) at 004ff109 [UNCONDITIONAL_CALL]
//   core_manpuz.cpp_FUN_00509bf0 (00509bf0) at 00509c26 [UNCONDITIONAL_CALL]
//   core_manpuz.cpp_FUN_00509c60 (00509c60) at 00509ca9 [UNCONDITIONAL_CALL]
//   core_manpuz.cpp_FUN_00509d50 (00509d50) at 00509d90 [UNCONDITIONAL_CALL]
//   core_manpuz.cpp_FUN_0050a1f0 (0050a1f0) at 0050a23e [UNCONDITIONAL_CALL]
//   core_mimic.cpp_FUN_005205f0 (005205f0) at 005207d6 [UNCONDITIONAL_CALL]
//   core_moon.cpp_CMoon_FUN_00529ed0 (00529ed0) at 0052a094 [UNCONDITIONAL_CALL]
//   core_setdir.cpp_CZThumb_calculateActorVisibility_FUN_00574ba0 (00574ba0) at 00574c08 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_FUN_00581aa0 (00581aa0) at 00581d17 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_FUN_00583170 (00583170) at 005834a9 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_Something2MemoryConstructorMaybe_FUN_0057fd00 (0057fd00) at 0057fee1 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_CDeformableModelInstance_FUN_005968b0 (005968b0) at 005973e2 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModel_renderSkeleton_FUN_0059b640 (0059b640) at 0059b7a9 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c3150 (005c3150) at 005c34d3 [UNCONDITIONAL_CALL]
//   core_trap.cpp_CTrap_FUN_005de920 (005de920) at 005de94b [UNCONDITIONAL_CALL]
//   core_trash.cpp_CTrash_FUN_005df550 (005df550) at 005df5cd [UNCONDITIONAL_CALL]
//   core_turret.cpp_CTurret_FUN_005e2320 (005e2320) at 005e23d0 [UNCONDITIONAL_CALL]
//   core_vehicle.cpp_CVehicle_FUN_005e88c0 (005e88c0) at 005e89dc [UNCONDITIONAL_CALL]
//   core_vessel.cpp_CCryptVessel_FUN_005e9750 (005e9750) at 005e977f [UNCONDITIONAL_CALL]
//   core_vessel.cpp_FUN_005e98b0 (005e98b0) at 005e98f6 [UNCONDITIONAL_CALL]
//   core_weather.cpp_CWeather_FUN_005ef190 (005ef190) at 005ef369 [UNCONDITIONAL_CALL]
//   core_werewolf.cpp_CWerewolf_FUN_005f1820 (005f1820) at 005f18f2 [UNCONDITIONAL_CALL]
// Globals:
//   double DOUBLE_0062201d = 256
//   double DOUBLE_00622025 = 0.318309886192889
//   double DOUBLE_0062202d = 32768
// Function calls:
//   crt_math.c_round_FUN_005fe6b0
//   engine_matrix.c_matrixPushAndTransform_FUN_0050cee0

#include "nocturne.h"

void __cdecl
engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
          (CDemonRenderer *this_ptr,CVector3i *position,CVector3i *rotation)

{
  ushort rotY;
  int extraout_ECX;
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  double dVar6;
  ushort uVar7;
  int in_stack_ffffffec;
  int in_stack_fffffff0;
  int translateX;
  int iVar8;
  int translateY;
  
  if (rotation == (CVector3i *)0x0) {
    fVar1 = (float10)DOUBLE_00622025;
    fVar2 = (float10)DOUBLE_0062202d;
    fVar3 = (float10)(float)position->y * fVar1 * fVar2;
    fVar4 = (float10)(float)position->z * fVar1 * fVar2;
    fVar2 = (float10)(float)position->x * fVar1 * fVar2;
    dVar6 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(rotation,position));
    uVar7 = (ushort)rotation;
    dVar6 = crt_math_c_round_FUN_005fe6b0(dVar6);
    iVar8 = (int)ROUND(fVar4);
    crt_math_c_round_FUN_005fe6b0((double)CONCAT44((int)ROUND(fVar3),SUB84(dVar6,0)));
    engine_matrix_c_matrixPushAndTransform_FUN_0050cee0
              ((ushort)(int)ROUND(fVar2),rotY,uVar7,in_stack_ffffffec,in_stack_fffffff0,iVar8);
    return;
  }
  fVar4 = (float10)DOUBLE_0062201d;
  fVar1 = (float10)(float)rotation->z * fVar4;
  fVar3 = (float10)(float)rotation->y * fVar4;
  fVar4 = (float10)(float)rotation->x * fVar4;
  fVar2 = (float10)(float)position->z * (float10)DOUBLE_00622025 * (float10)DOUBLE_0062202d;
  fVar5 = (float10)(float)position->x * (float10)DOUBLE_00622025 * (float10)DOUBLE_0062202d;
  dVar6 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(rotation,position));
  dVar6 = crt_math_c_round_FUN_005fe6b0(dVar6);
  dVar6 = crt_math_c_round_FUN_005fe6b0(dVar6);
  iVar8 = (int)ROUND(fVar1);
  translateX = (int)ROUND(fVar3);
  uVar7 = (ushort)(int)ROUND(fVar4);
  dVar6 = crt_math_c_round_FUN_005fe6b0(dVar6);
  dVar6 = crt_math_c_round_FUN_005fe6b0(dVar6);
  translateY = extraout_ECX;
  crt_math_c_round_FUN_005fe6b0(dVar6);
  engine_matrix_c_matrixPushAndTransform_FUN_0050cee0
            ((ushort)(int)ROUND(fVar5),(ushort)(int)ROUND(fVar2),uVar7,translateX,translateY,iVar8);
  return;
}


// Assembly code:
// 0048c4f0: PUSH EBX
//   Label: engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
// 0048c4f1: PUSH EBP
// 0048c4f2: SUB ESP,0xc
// 0048c4f5: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 0048c4f9: MOV EDX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0xc] (READ)
// 0048c4fd: TEST EDX,EDX
// 0048c4ff: JNZ 0x0048c56c
//   XREF to: 0048c56c (CONDITIONAL_JUMP)
// 0048c501: FLD double ptr [0x00622025]
//   XREF to: 00622025 (READ)
// 0048c507: FLD float ptr [EAX + 0x4]
// 0048c50a: FMUL ST1
// 0048c50c: FLD float ptr [EAX + 0x8]
// 0048c50f: FMUL ST2
// 0048c511: FLD float ptr [EAX]
// 0048c513: FMULP ST3
// 0048c515: FXCH
// 0048c517: FLD double ptr [0x0062202d]
//   XREF to: 0062202d (READ)
// 0048c51d: FXCH
// 0048c51f: FMUL ST1
// 0048c521: PUSH EDX
// 0048c522: FXCH ST2
// 0048c524: FMUL ST1
// 0048c526: PUSH EDX
// 0048c527: FXCH ST3
// 0048c529: FMULP
// 0048c52b: PUSH EDX
// 0048c52c: FXCH
// 0048c52e: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0048c533: FXCH ST2
// 0048c535: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0048c53a: FXCH ST2
// 0048c53c: FISTP dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x10] (WRITE)
// 0048c540: FXCH
// 0048c542: FISTP dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x14] (WRITE)
// 0048c546: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x10] (READ)
// 0048c54a: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x14] (READ)
// 0048c54e: PUSH EDX
// 0048c54f: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0048c554: PUSH ECX
// 0048c555: FISTP dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x14] (WRITE)
// 0048c559: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x14] (READ)
// 0048c55d: PUSH EBX
// 0048c55e: CALL engine_matrix.c_matrixPushAndTransform_FUN_0050cee0
//   XREF to: 0050cee0 (UNCONDITIONAL_CALL)
// 0048c563: ADD ESP,0x18
// 0048c566: ADD ESP,0xc
// 0048c569: POP EBP
// 0048c56a: POP EBX
// 0048c56b: RET
// 0048c56c: PUSH EDI
//   Label: LAB_0048c56c
// 0048c56d: PUSH ESI
// 0048c56e: FLD double ptr [0x0062201d]
//   XREF to: 0062201d (READ)
// 0048c574: FLD float ptr [EDX + 0x8]
// 0048c577: FMUL ST1
// 0048c579: FLD float ptr [EDX + 0x4]
// 0048c57c: FMUL ST2
// 0048c57e: FLD float ptr [EDX]
// 0048c580: FMULP ST3
// 0048c582: FLD double ptr [0x00622025]
//   XREF to: 00622025 (READ)
// 0048c588: FLD float ptr [EAX + 0x4]
// 0048c58b: FMUL ST1
// 0048c58d: FLD float ptr [EAX + 0x8]
// 0048c590: FMUL ST2
// 0048c592: FLD float ptr [EAX]
// 0048c594: FMULP ST3
// 0048c596: FXCH
// 0048c598: FLD double ptr [0x0062202d]
//   XREF to: 0062202d (READ)
// 0048c59e: FXCH
// 0048c5a0: FMUL ST1
// 0048c5a2: FXCH ST2
// 0048c5a4: FMUL ST1
// 0048c5a6: FXCH ST3
// 0048c5a8: FMULP
// 0048c5aa: FXCH ST4
// 0048c5ac: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0048c5b1: FXCH ST3
// 0048c5b3: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0048c5b8: FXCH ST5
// 0048c5ba: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0048c5bf: FXCH ST3
// 0048c5c1: FISTP dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x14] (WRITE)
// 0048c5c5: FXCH ST4
// 0048c5c7: FISTP dword ptr [ESP + 0x10]
//   XREF to: Stack[-0xc] (WRITE)
// 0048c5cb: FXCH
// 0048c5cd: FISTP dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x10] (WRITE)
// 0048c5d1: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x14] (READ)
// 0048c5d5: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0xc] (READ)
// 0048c5d9: MOV ESI,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x10] (READ)
// 0048c5dd: FXCH ST2
// 0048c5df: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0048c5e4: FXCH ST2
// 0048c5e6: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0048c5eb: PUSH ECX
// 0048c5ec: FXCH ST2
// 0048c5ee: FISTP dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x10] (WRITE)
// 0048c5f2: PUSH EBX
// 0048c5f3: FXCH
// 0048c5f5: FISTP dword ptr [ESP + 0x18]
//   XREF to: Stack[-0xc] (WRITE)
// 0048c5f9: PUSH ESI
// 0048c5fa: MOV EDI,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x10] (READ)
// 0048c5fe: MOV EBP,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0xc] (READ)
// 0048c602: PUSH EDI
// 0048c603: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0048c608: PUSH EBP
// 0048c609: FISTP dword ptr [ESP + 0x24]
//   XREF to: Stack[-0xc] (WRITE)
// 0048c60d: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0xc] (READ)
// 0048c611: PUSH EAX
// 0048c612: CALL engine_matrix.c_matrixPushAndTransform_FUN_0050cee0
//   XREF to: 0050cee0 (UNCONDITIONAL_CALL)
// 0048c617: ADD ESP,0x18
// 0048c61a: POP ESI
// 0048c61b: POP EDI
// 0048c61c: ADD ESP,0xc
// 0048c61f: POP EBP
// 0048c620: POP EBX
// 0048c621: RET
