// Name: core_skeleton.cpp_defaultBlendWeight_FUN_0059ddb0
// Address: 0059ddb0
// Address Range: [[0059ddb0, 0059ddb4]]
// Convention: __cdecl
// Signature: float core_skeleton.cpp_defaultBlendWeight_FUN_0059ddb0(int current_bone_index, int target_bone_index, float blend_weight, int hierarchy_distance, CDeformableModelInstance * instance)
// Cross-references:
//   core_baron.cpp_CBaron_process_FUN_00412e80 (00412e80) at 004130dc [DATA]
//   core_charactr.cpp_CCharacter_applyGesture_FUN_0042d3d0 (0042d3d0) at 0042d471 [DATA]
//   core_charactr.cpp_FUN_0042e570 (0042e570) at 0042e584 [DATA]
//   core_colonel.cpp_FUN_0043fa00 (0043fa00) at 0043fc47 [DATA]
//   core_gabriela.cpp_FUN_004d4d80 (004d4d80) at 004d53a9 [DATA]
//   core_gabriela.cpp_FUN_004d6d40 (004d6d40) at 004d6f2a [DATA]
//   core_gabriela.cpp_FUN_004d6f80 (004d6f80) at 004d703d [DATA]
//   core_ghoul.cpp_CGhoul_FUN_004e6600 (004e6600) at 004e68e7 [DATA]
//   core_haystack.cpp_FUN_004f0e40 (004f0e40) at 004f1099 [DATA]
//   core_hostage.cpp_RelatedToRescuedTownsfolk_FUN_004f4bd0 (004f4bd0) at 004f5ef0 [DATA]
//   core_icepick.cpp_FUN_004f80b0 (004f80b0) at 004f836d [DATA]
//   core_icepick.cpp_FUN_004f8810 (004f8810) at 004f8900 [DATA]
//   core_mobster.cpp_CMobster_aimTommyGun_FUN_005267a0 (005267a0) at 00526ae0 [DATA]
//   core_scat.cpp_FUN_005571f0 (005571f0) at 0055755b [DATA]
//   core_scat.cpp_FUN_005582c0 (005582c0) at 00558441 [DATA]
//   core_scat.cpp_FUN_005584a0 (005584a0) at 005586e6 [DATA]
//   core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020 (0059e020) at 0059e047 [DATA]
//   core_stranger.cpp_CStranger_FUN_005be520 (005be520) at 005bf422 [DATA]
//   core_stranger.cpp_CStranger_FUN_005bf720 (005bf720) at 005bf78e [DATA]
//   core_stranger.cpp_CStranger_FUN_005bfb60 (005bfb60) at 005bfe53 [DATA]
//   core_stranger.cpp_CStranger_FUN_005c02b0 (005c02b0) at 005c03c9 [DATA]
//   core_svetlana.cpp_CSvetlana_process_FUN_005d8ba0 (005d8ba0) at 005d8e5a [DATA]

#include "nocturne.h"

float __cdecl
core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0
          (int current_bone_index,int target_bone_index,float blend_weight,int hierarchy_distance,
          CDeformableModelInstance *instance)

{
  return blend_weight;
}


// Assembly code:
// 0059ddb0: MOV EAX,dword ptr [ESP + 0xc]
//   Label: core_skeleton.cpp_defaultBlendWeight_FUN_0059ddb0
//   XREF to: Stack[0xc] (READ)
// 0059ddb4: RET
