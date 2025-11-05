// Name: core_stranger.cpp_FUN_005baee0
// Address: 005baee0
// Address Range: [[005baee0, 005baf1d]]
// Convention: __cdecl
// Signature: float core_stranger.cpp_FUN_005baee0(int current_bone_index, int target_bone_index, float blend_weight, int hierarchy_distance, CDeformableModelInstance * instance)
// Cross-references:
//   core_stranger.cpp_CStranger_FUN_005bfb60 (005bfb60) at 005bffec [DATA]
// Globals:
//   double DAT_0065319c = 0.700000000000000
//   double DAT_006531a4 = 0.400000000000000

#include "nocturne.h"

float __cdecl
core_stranger_cpp_FUN_005baee0
          (int current_bone_index,int target_bone_index,float blend_weight,int hierarchy_distance,
          CDeformableModelInstance *instance)

{
  float fVar1;
  
  if (hierarchy_distance < 1) {
    fVar1 = (float)DAT_006531a4;
  }
  else {
    if (hierarchy_distance != 1) {
      return blend_weight;
    }
    fVar1 = (float)DAT_0065319c;
  }
  return blend_weight * fVar1;
}


// Assembly code:
// 005baee0: SUB ESP,0x4
//   Label: core_stranger.cpp_FUN_005baee0
// 005baee3: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x10] (READ)
// 005baee7: TEST EAX,EAX
// 005baee9: JLE 0x005baf04
//   XREF to: 005baf04 (CONDITIONAL_JUMP)
// 005baeeb: CMP EAX,0x1
// 005baeee: JNZ 0x005baf10
//   XREF to: 005baf10 (CONDITIONAL_JUMP)
// 005baef0: FLD float ptr [ESP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 005baef4: FMUL double ptr [0x0065319c]
//   XREF to: 0065319c (READ)
// 005baefa: FSTP float ptr [ESP]
//   Label: LAB_005baefa
//   XREF to: Stack[-0x4] (DATA)
// 005baefd: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x4] (DATA)
// 005baf00: ADD ESP,0x4
// 005baf03: RET
// 005baf04: FLD float ptr [ESP + 0x10]
//   Label: LAB_005baf04
//   XREF to: Stack[0xc] (READ)
// 005baf08: FMUL double ptr [0x006531a4]
//   XREF to: 006531a4 (READ)
// 005baf0e: JMP 0x005baefa
//   XREF to: 005baefa (UNCONDITIONAL_JUMP)
// 005baf10: MOV EAX,dword ptr [ESP + 0x10]
//   Label: LAB_005baf10
//   XREF to: Stack[0xc] (READ)
// 005baf14: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x4] (DATA)
// 005baf17: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x4] (DATA)
// 005baf1a: ADD ESP,0x4
// 005baf1d: RET
