// Name: crt_math.c_floor_FUN_005feb90
// Address: 005feb90
// Address Range: [[005feb90, 005febd4]]
// Convention: __fpustack
// Signature: double crt_math.c_floor_FUN_005feb90(double input_value)
// Cross-references:
//   core_actor.cpp_normalizeAngleToPi_FUN_0040cd70 (0040cd70) at 0040cdf8 [UNCONDITIONAL_CALL]
//   core_bat.cpp_FUN_004146f0 (004146f0) at 00414719 [UNCONDITIONAL_CALL]
//   core_bat.cpp_FUN_00414ce0 (00414ce0) at 00414d2c [UNCONDITIONAL_CALL]
//   core_boneguy.cpp_FUN_0041ba10 (0041ba10) at 0041bb27 [UNCONDITIONAL_CALL]
//   core_boxactor.cpp_CBoxActor_process_FUN_004219e0 (004219e0) at 00421a1f [UNCONDITIONAL_CALL]
//   core_bugs.cpp_FUN_004257f0 (004257f0) at 004258c4 [UNCONDITIONAL_CALL]
//   core_conveyor.cpp_FUN_00442400 (00442400) at 00442429 [UNCONDITIONAL_CALL]
//   core_course.cpp_CCourse_FUN_004427a0 (004427a0) at 004429b3 [UNCONDITIONAL_CALL]
//   core_course.cpp_FUN_00443bc0 (00443bc0) at 00443c51 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_applyBias_FUN_0047c370 (0047c370) at 0047c3c4 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_applyVertexBias_FUN_0047c2d0 (0047c2d0) at 0047c30c [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_scale_FUN_0047c4d0 (0047c4d0) at 0047c520 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_snapRotationToAxis_FUN_0047c5f0 (0047c5f0) at 0047c8ee [UNCONDITIONAL_CALL]
//   core_dtrace.cpp_CDemonRaytrace_rayVoxelGridTest_FUN_00496220 (00496220) at 004962cb [UNCONDITIONAL_CALL]
//   core_dtrace.cpp_CDemonRaytrace_rayVoxelIntersection_FUN_00495b70 (00495b70) at 00495bc9 [UNCONDITIONAL_CALL]
//   core_dtrace.cpp_CDemonRaytrace_worldPositionToGridCoords_FUN_004997d0 (004997d0) at 00499846 [UNCONDITIONAL_CALL]
//   core_dtrace.cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_00499880 (00499880) at 004998c8 [UNCONDITIONAL_CALL]
//   core_flies.cpp_FUN_004cbf00 (004cbf00) at 004cc184 [UNCONDITIONAL_CALL]
//   core_frankgen.cpp_FUN_004d1ec0 (004d1ec0) at 004d1ee2 [UNCONDITIONAL_CALL]
//   core_frankgen.cpp_FUN_004d1f70 (004d1f70) at 004d209d [UNCONDITIONAL_CALL]
//   core_ladder.cpp_FUN_00502d00 (00502d00) at 00502e15 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_00536e20 (00536e20) at 00537142 [UNCONDITIONAL_CALL]
//   core_pendulum.cpp_FUN_00549b90 (00549b90) at 00549c21 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_RelatedToDemonLightEditor_FUN_0057bbe0 (0057bbe0) at 0057c44a [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058b9b0 (0058b9b0) at 0058baa3 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModelInstance_FUN_005a0d10 (005a0d10) at 005a0d63 [UNCONDITIONAL_CALL]
//   core_tommygun.cpp_CTommyGun_process_FUN_005de360 (005de360) at 005de497 [UNCONDITIONAL_CALL]
//   crt_math.c_ceil_FUN_006001b2 (006001b2) at 006001c3 [UNCONDITIONAL_CALL]
//   shape_design.c_normalizeUVCoordinates_FUN_0046e340 (0046e340) at 0046e447 [UNCONDITIONAL_CALL]
//   shape_design.c_sampleAndFilterPixel_FUN_0046ae20 (0046ae20) at 0046ae7b [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_FUN_0051bac0 (0051bac0) at 0051bbc3 [UNCONDITIONAL_CALL]
//   sound_snddx.cpp_DirectSoundDevice_HardwareSfx3DBuffer_FUN_005af750 (005af750) at 005afaf4 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_FUN_005a5e10 (005a5e10) at 005a5e1e [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_FUN_005a5e70 (005a5e70) at 005a5ea0 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_FUN_005a5fb0 (005a5fb0) at 005a5fe0 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_FUN_005a86f0 (005a86f0) at 005a879d [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_FUN_005ac400 (005ac400) at 005ac7e5 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_SfxSlot_updatePlaybackPos_FUN_005a8170 (005a8170) at 005a8360 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_UnknownPlayOrUseSample_FUN_005a75e0 (005a75e0) at 005a7884 [UNCONDITIONAL_CALL]
// Globals:
//   double g_MathDomainAdjustment = -1
// Function calls:
//   crt_math.c_modf_FUN_00602102

#include "nocturne.h"

double __fpustack crt_math_c_floor_FUN_005feb90(double input_value)

{
  BADSPACEBASE *in_ESP;
  double dVar1;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  double local_18 [2];
  
  dVar1 = crt_math_c_modf_FUN_00602102
                    ((double)CONCAT44(in_stack_00000008,in_stack_00000004),local_18);
  return dVar1;
}


// Assembly code:
// 005feb90: PUSH EBP
//   Label: crt_math.c_floor_FUN_005feb90
// 005feb91: MOV EBP,ESP
// 005feb93: PUSH EBX
// 005feb94: SUB ESP,0x10
// 005feb97: LEA EAX,[EBP + -0x14]
//   XREF to: Stack[-0x18] (DATA)
// 005feb9a: PUSH EAX
// 005feb9b: MOV EDX,dword ptr [EBP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 005feb9e: PUSH EDX
// 005feb9f: MOV EBX,dword ptr [EBP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005feba2: PUSH EBX
// 005feba3: CALL crt_math.c_modf_FUN_00602102
//   XREF to: 00602102 (UNCONDITIONAL_CALL)
// 005feba8: MOV dword ptr [EBP + -0xc],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 005febab: MOV dword ptr [EBP + -0x8],EDX
//   XREF to: Stack[-0xc] (WRITE)
// 005febae: ADD ESP,0xc
// 005febb1: FLD double ptr [EBP + -0xc]
//   XREF to: Stack[-0x10] (READ)
// 005febb4: FLDZ
// 005febb6: FCOMPP
// 005febb8: FNSTSW AX
// 005febba: SAHF
// 005febbb: JBE 0x005febc9
//   XREF to: 005febc9 (CONDITIONAL_JUMP)
// 005febbd: FLD double ptr [EBP + -0x14]
//   XREF to: Stack[-0x18] (READ)
// 005febc0: FADD double ptr [0x00658aec]
//   XREF to: 00658aec (READ)
// 005febc6: FSTP double ptr [EBP + -0x14]
//   XREF to: Stack[-0x18] (WRITE)
// 005febc9: MOV EAX,dword ptr [EBP + -0x14]
//   Label: LAB_005febc9
//   XREF to: Stack[-0x18] (READ)
// 005febcc: MOV EDX,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x14] (READ)
// 005febcf: LEA ESP,[EBP + -0x4]
//   XREF to: Stack[-0x8] (DATA)
// 005febd2: POP EBX
// 005febd3: POP EBP
// 005febd4: RET
