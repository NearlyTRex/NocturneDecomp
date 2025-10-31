// Name: core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
// Address: 005f54c0
// Address Range: [[005f54c0, 005f55b1]]
// Convention: __cdecl
// Signature: void core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
// Cross-references:
//   core_bodypart.cpp_FUN_0041a630 (0041a630) at 0041a9ba [UNCONDITIONAL_CALL]
//   core_boneguy.cpp_FUN_0041ca40 (0041ca40) at 0041ca9b [UNCONDITIONAL_CALL]
//   core_boxactor.cpp_FUN_00422a50 (00422a50) at 00422be1 [UNCONDITIONAL_CALL]
//   core_bugs.cpp_FUN_00425fe0 (00425fe0) at 004260cb [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042d090 (0042d090) at 0042d181 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_computePickup_FUN_0042ce80 (0042ce80) at 0042cede [UNCONDITIONAL_CALL]
//   core_fire.cpp_FUN_004bf7f0 (004bf7f0) at 004bf917 [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_CarryLights_FUN_004d7120 (004d7120) at 004d722f [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_FUN_004d5550 (004d5550) at 004d5724 [UNCONDITIONAL_CALL]
//   core_hostage.cpp_CHostage_FUN_004f6550 (004f6550) at 004f6728 [UNCONDITIONAL_CALL]
//   core_icepick.cpp_FUN_004f8b20 (004f8b20) at 004f8be4 [UNCONDITIONAL_CALL]
//   core_imp.cpp_FUN_004fa920 (004fa920) at 004faa07 [UNCONDITIONAL_CALL]
//   core_ladder.cpp_FUN_00502a70 (00502a70) at 00502aa4 [UNCONDITIONAL_CALL]
//   core_ladder.cpp_FUN_00502b80 (00502b80) at 00502bb0 [UNCONDITIONAL_CALL]
//   core_mimic.cpp_FUN_0051f930 (0051f930) at 0051faef [UNCONDITIONAL_CALL]
//   core_mimic.cpp_FUN_005205f0 (005205f0) at 00520766 [UNCONDITIONAL_CALL]
//   core_mobster.cpp_FUN_00526b20 (00526b20) at 00526bf3 [UNCONDITIONAL_CALL]
//   core_platfrm.cpp_CPlatform_attachActor_FUN_0054e1e0 (0054e1e0) at 0054e253 [UNCONDITIONAL_CALL]
//   core_platfrm.cpp_FUN_0054cc30 (0054cc30) at 0054d513 [UNCONDITIONAL_CALL]
//   core_platfrm.cpp_FUN_0054e320 (0054e320) at 0054e33e [UNCONDITIONAL_CALL]
//   core_platfrm.cpp_FUN_0054ea00 (0054ea00) at 0054ee44 [UNCONDITIONAL_CALL]
//   core_scat.cpp_FUN_00558fd0 (00558fd0) at 0055908a [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_DefinitelyRelatedToEditorMode_FUN_005968b0 (005968b0) at 00597883 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_00592690 (00592690) at 0059534e [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c06b0 (005c06b0) at 005c072d [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c07b0 (005c07b0) at 005c0a00 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c3150 (005c3150) at 005c3468 [UNCONDITIONAL_CALL]
//   core_tbplayer.cpp_FUN_005da120 (005da120) at 005da1eb [UNCONDITIONAL_CALL]
//   core_tbplayer.cpp_FUN_005da370 (005da370) at 005da441 [UNCONDITIONAL_CALL]
//   core_tentacle.cpp_CTentacle_process_FUN_005db050 (005db050) at 005db2f9 [UNCONDITIONAL_CALL]
//   core_tentacle.cpp_FUN_005db9d0 (005db9d0) at 005dba38 [UNCONDITIONAL_CALL]
//   core_turret.cpp_CTurret_FUN_005e2910 (005e2910) at 005e29e7 [UNCONDITIONAL_CALL]
//   core_vampboss.cpp_FUN_005e6b80 (005e6b80) at 005e6c32 [UNCONDITIONAL_CALL]
//   core_xform.cpp_eulerToQuaternion_FUN_005f7b20 (005f7b20) at 005f7b41 [UNCONDITIONAL_CALL]
//   core_zombie.cpp_CZombie_FUN_005fb1f0 (005fb1f0) at 005fb287 [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl
core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
          (CMatrix3x4f *output_matrix,CVector3f *position,CVector3f *euler_angles)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  
  fVar6 = (float10)fsin((float10)euler_angles->x);
  fVar7 = (float10)fcos((float10)euler_angles->x);
  fVar8 = (float10)fsin((float10)euler_angles->z);
  fVar9 = (float10)fcos((float10)euler_angles->z);
  fVar10 = (float10)fsin((float10)euler_angles->y);
  fVar11 = (float10)fcos((float10)euler_angles->y);
  dVar1 = (double)fVar10;
  dVar2 = (double)fVar7;
  dVar3 = (double)fVar8;
  dVar4 = (double)fVar9;
  dVar5 = (double)fVar11;
  output_matrix->m[1].y = (float)-fVar6;
  output_matrix->m[0].y = (float)((float10)dVar1 * (float10)dVar2);
  output_matrix->m[1].w = (float)(fVar8 * (float10)dVar2);
  output_matrix->m[1].x = (float)(fVar9 * (float10)dVar2);
  output_matrix->m[2].y = (float)((float10)dVar5 * (float10)dVar2);
  output_matrix->m[0].w = (float)((float10)dVar5 * (float10)dVar4 + fVar10 * fVar6 * (float10)dVar3)
  ;
  output_matrix->m[2].x = (float)((float10)dVar3 * (float10)dVar1 + fVar11 * fVar6 * (float10)dVar4)
  ;
  output_matrix->m[0].x =
       (float)(-(float10)dVar5 * (float10)dVar3 + fVar10 * fVar6 * (float10)dVar4);
  output_matrix->m[2].w =
       (float)(-(float10)dVar1 * (float10)dVar4 + fVar11 * fVar6 * (float10)dVar3);
  output_matrix->m[0].z = position->x;
  output_matrix->m[1].z = position->y;
  output_matrix->m[2].z = position->z;
  return;
}


// Assembly code:
// 005f54c0: PUSH EBX
//   Label: core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
// 005f54c1: SUB ESP,0x38
// 005f54c4: MOV EDX,dword ptr [ESP + 0x40]
//   XREF to: Stack[0x4] (READ)
// 005f54c8: MOV ECX,dword ptr [ESP + 0x44]
//   XREF to: Stack[0x8] (READ)
// 005f54cc: MOV EBX,dword ptr [ESP + 0x48]
//   XREF to: Stack[0xc] (READ)
// 005f54d0: FLD float ptr [EBX]
// 005f54d2: FLD ST0
// 005f54d4: FSIN
// 005f54d6: FXCH
// 005f54d8: FCOS
// 005f54da: FLD float ptr [EBX + 0x8]
// 005f54dd: FLD ST0
// 005f54df: FSIN
// 005f54e1: FXCH
// 005f54e3: FCOS
// 005f54e5: FLD float ptr [EBX + 0x4]
// 005f54e8: FLD ST0
// 005f54ea: FSIN
// 005f54ec: FXCH
// 005f54ee: FCOS
// 005f54f0: FXCH
// 005f54f2: FST double ptr [ESP + 0x20]
//   XREF to: Stack[-0x1c] (WRITE)
// 005f54f6: FMUL ST5
// 005f54f8: FLD double ptr [ESP + 0x20]
//   XREF to: Stack[-0x1c] (READ)
// 005f54fc: FXCH ST5
// 005f54fe: FSTP double ptr [ESP + 0x8]
//   XREF to: Stack[-0x34] (WRITE)
// 005f5502: FXCH ST4
// 005f5504: FMUL double ptr [ESP + 0x8]
//   XREF to: Stack[-0x34] (READ)
// 005f5508: FXCH ST3
// 005f550a: FST double ptr [ESP + 0x10]
//   XREF to: Stack[-0x2c] (WRITE)
// 005f550e: FMUL double ptr [ESP + 0x8]
//   XREF to: Stack[-0x34] (READ)
// 005f5512: FXCH ST2
// 005f5514: FST double ptr [ESP + 0x18]
//   XREF to: Stack[-0x24] (WRITE)
// 005f5518: FMUL double ptr [ESP + 0x8]
//   XREF to: Stack[-0x34] (READ)
// 005f551c: FXCH
// 005f551e: FST double ptr [ESP + 0x28]
//   XREF to: Stack[-0x14] (WRITE)
// 005f5522: FMUL ST5
// 005f5524: FLD ST4
// 005f5526: FMUL double ptr [ESP + 0x10]
//   XREF to: Stack[-0x2c] (READ)
// 005f552a: FXCH ST5
// 005f552c: FMUL double ptr [ESP + 0x18]
//   XREF to: Stack[-0x24] (READ)
// 005f5530: FXCH ST6
// 005f5532: FCHS
// 005f5534: FSTP float ptr [EDX + 0x18]
// 005f5537: FLD ST0
// 005f5539: FMUL double ptr [ESP + 0x10]
//   XREF to: Stack[-0x2c] (READ)
// 005f553d: FXCH ST4
// 005f553f: FSTP float ptr [EDX + 0x8]
// 005f5542: FMUL double ptr [ESP + 0x18]
//   XREF to: Stack[-0x24] (READ)
// 005f5546: FXCH ST2
// 005f5548: FSTP float ptr [EDX + 0x10]
// 005f554b: FLD double ptr [ESP + 0x28]
//   XREF to: Stack[-0x14] (READ)
// 005f554f: FMUL double ptr [ESP + 0x18]
//   XREF to: Stack[-0x24] (READ)
// 005f5553: FXCH
// 005f5555: FSTP float ptr [EDX + 0x14]
// 005f5558: FLD double ptr [ESP + 0x10]
//   XREF to: Stack[-0x2c] (READ)
// 005f555c: FMUL double ptr [ESP + 0x20]
//   XREF to: Stack[-0x1c] (READ)
// 005f5560: FXCH
// 005f5562: FADDP ST4,ST0
// 005f5564: FLD double ptr [ESP + 0x28]
//   XREF to: Stack[-0x14] (READ)
// 005f5568: FCHS
// 005f556a: FMUL double ptr [ESP + 0x10]
//   XREF to: Stack[-0x2c] (READ)
// 005f556e: FLD double ptr [ESP + 0x20]
//   XREF to: Stack[-0x1c] (READ)
// 005f5572: FCHS
// 005f5574: FMUL double ptr [ESP + 0x18]
//   XREF to: Stack[-0x24] (READ)
// 005f5578: FXCH ST2
// 005f557a: FADDP ST3,ST0
// 005f557c: FLD double ptr [ESP + 0x28]
//   XREF to: Stack[-0x14] (READ)
// 005f5580: FMUL double ptr [ESP + 0x8]
//   XREF to: Stack[-0x34] (READ)
// 005f5584: FSTP float ptr [EDX + 0x28]
// 005f5587: FADDP ST5,ST0
// 005f5589: FADDP ST2,ST0
// 005f558b: FXCH ST2
// 005f558d: FSTP float ptr [EDX]
// 005f558f: FXCH
// 005f5591: FSTP float ptr [EDX + 0x24]
// 005f5594: FXCH
// 005f5596: FSTP float ptr [EDX + 0x4]
// 005f5599: FSTP float ptr [EDX + 0x20]
// 005f559c: MOV EAX,dword ptr [ECX]
// 005f559e: MOV dword ptr [EDX + 0xc],EAX
// 005f55a1: MOV EAX,dword ptr [ECX + 0x4]
// 005f55a4: MOV dword ptr [EDX + 0x1c],EAX
// 005f55a7: MOV EAX,dword ptr [ECX + 0x8]
// 005f55aa: MOV dword ptr [EDX + 0x2c],EAX
// 005f55ad: ADD ESP,0x38
// 005f55b0: POP EBX
// 005f55b1: RET
