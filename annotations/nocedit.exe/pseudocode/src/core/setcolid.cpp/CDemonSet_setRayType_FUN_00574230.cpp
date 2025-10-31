// Name: core_setcolid.cpp_CDemonSet_setRayType_FUN_00574230
// Address: 00574230
// Address Range: [[00574230, 00574269]]
// Convention: __cdecl
// Signature: void core_setcolid.cpp_CDemonSet_setRayType_FUN_00574230(CDemonSet * this_ptr, int ray_type)
// Cross-references:
//   core_actor.cpp_CDemonActor_processMeleeHit_FUN_0040a210 (0040a210) at 0040a6ed [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_findSomethingToLookAt_FUN_0042d5a0 (0042d5a0) at 0042d91d [UNCONDITIONAL_CALL]
//   core_crossbow.cpp_FUN_00448f20 (00448f20) at 00449087 [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_FUN_004d4190 (004d4190) at 004d4619 [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_FUN_004d6260 (004d6260) at 004d6495 [UNCONDITIONAL_CALL]
//   core_gun.cpp_FUN_004f0350 (004f0350) at 004f04cb [UNCONDITIONAL_CALL]
//   core_lightgun.cpp_FUN_00505c70 (00505c70) at 00505e1c [UNCONDITIONAL_CALL]
//   core_scat.cpp_FUN_00558cf0 (00558cf0) at 00558f25 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c3150 (005c3150) at 005c31e5 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c3960 (005c3960) at 005c40a0 [UNCONDITIONAL_CALL]
//   core_tommygun.cpp_FUN_005ddb30 (005ddb30) at 005ddce2 [UNCONDITIONAL_CALL]
//   core_turret.cpp_FUN_005e3750 (005e3750) at 005e381d [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_setcolid_cpp_006463b9
//   TerminatedCString s_CDemonSet_setRayType_use_006463ce
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

void __cdecl core_setcolid_cpp_CDemonSet_setRayType_FUN_00574230(CDemonSet *this_ptr,int ray_type)

{
  this_ptr->ray_type = ray_type;
  if (ray_type != 3) {
    return;
  }
  g_CurrentFilename = "..\\core\\setcolid.cpp";
  g_CurrentLineNumber = 0x49a;
  core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonSet::setRayType - use setRayTypeLaser");
  return;
}


// Assembly code:
// 00574230: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_setcolid.cpp_CDemonSet_setRayType_FUN_00574230
//   XREF to: Stack[0x4] (READ)
// 00574234: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 00574238: MOV dword ptr [EAX + 0x15f680],EDX
// 0057423e: CMP EDX,0x3
// 00574241: JZ 0x00574244
//   XREF to: 00574244 (CONDITIONAL_JUMP)
// 00574243: RET
// 00574244: PUSH EBX
//   Label: LAB_00574244
// 00574245: MOV ECX,0x6463b9
//   XREF to: 006463b9 (PARAM)
// 0057424a: MOV EBX,0x49a
// 0057424f: PUSH 0x6463ce
//   XREF to: 006463ce (DATA)
// 00574254: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 0057425a: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 00574260: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00574265: ADD ESP,0x4
// 00574268: POP EBX
// 00574269: RET
